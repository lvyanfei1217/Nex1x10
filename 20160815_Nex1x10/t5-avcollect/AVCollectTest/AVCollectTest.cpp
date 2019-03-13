// AVCollectTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "windows.h"
#include "AVCollect.h"

int dwNum = 0;
//音频返回nwidth为声道，nheight为采样率，视频是宽度与高度
void VCALLBACK(unsigned char *pBuf, int nSize, int nParam1, int nParam2, void* dwContext,int nTimeTap)
{
	dwNum++;
	if ( dwNum%100 == 0 )
	{
		printf("Vid size:%d, w:%d, h:%d, tt:%d\n", nSize, nParam1, nParam2, nTimeTap);
	}
}

int dwANum = 0;
void ACALLBACK(unsigned char *pBuf, int nSize, int nParam1, int nParam2, void* dwContext,int nTimeTap)
{
	dwANum++;
	if ( dwANum%100 == 0 )
	{
		printf("Aud size:%d, Col:%d, Rate:%d, tt:%d\n", nSize, nParam1, nParam2, nTimeTap);
	}
}

#define Av_CheckAuth_MAX_LEN  32
CAPTURE_API bool AvCheckAuth(char* pcBuf, int dwLen );
CAPTURE_API void AvMd5Encode(char* szOut, char* szIn);

bool IsAvAuthPassed()
{
	bool bRst = false;

	char szIn[Av_CheckAuth_MAX_LEN] = {0x01, 0x04, 0x08, 0x03, 0x01, 0x04, 0x08, 0x03, 0xff, 0x01, 0x04, 0x48, 0x04, 0x48, 0x04, 0x48, 
		0x04, 0x48, 0xff, 0x01, 0x04, 0x48, 0x01, 0x04, 0x08, 0x03, 0xff, 0x01, 0x04, 0x48, 0x04, 0x00};

	char szOut[Av_CheckAuth_MAX_LEN+1] = {0};

	AvMd5Encode(szOut, szIn);

	bRst = AvCheckAuth(szOut, Av_CheckAuth_MAX_LEN);

	return bRst;
}


int _tmain(int argc, _TCHAR* argv[])
{
	IsAvAuthPassed();

	char szIn[32] = {0x01, 0x04, 0x08, 0x03, 0x01, 0x04, 0x08, 0x03, 0xff, 0x01, 0x04, 0x48, 0x04, 0x48, 0x04, 0x48, 
		0x04, 0x48, 0xff, 0x01, 0x04, 0x48, 0x01, 0x04, 0x08, 0x03, 0xff, 0x01, 0x04, 0x48, 0x04, 0x00};

	char szOut[Av_CheckAuth_MAX_LEN+1] = {0};

	AvMd5Encode(szOut, szIn);

	bool bFlag = AvCheckAuth(szOut, Av_CheckAuth_MAX_LEN);
	if (!bFlag)
	{
		//return -1;
		//CString strError;
		//strError.Format( _T("编码器创建错误"));
		printf("AvCheckAuth Error!\n");
	}


	CVideoCollect* ptVid = new CVideoCollect;
	ptVid->SetVideoCallBack(VCALLBACK, ptVid);

	CAudioCollect* ptAud = new CAudioCollect;
	ptAud->SetAudioCallBack(ACALLBACK, ptAud);

	while(1)
	{

	char vidver[256] = {0};
	char audver[256] = {0};

	ptVid->GetCurrentVer(vidver);
	ptAud->GetCurrentVer(audver);

	printf("Vid ver:%s\n", vidver);
	printf("Aud ver:%s\n", audver);

	ptVid->InitVideoCap();
	ptAud->InitAudCap();

	ptVid->StartVidCapture(true);
	ptAud->StartAudCapture(true);
	printf("开始抓屏！！\n");

	Sleep(20000);

	printf("停止抓屏！！\n");
	ptAud->StopAudCapture();
	ptVid->StopVidCapture();
	ptVid->Destroy();
	ptAud->Destroy();

	Sleep(10000);

	printf("开始抓屏222222222222！！\n");

	ptVid->InitVideoCap();
	ptAud->InitAudCap();

	ptAud->StartAudCapture(true);
	ptVid->StartVidCapture(true);

	Sleep(20000);

	ptAud->StopAudCapture();
	ptVid->StopVidCapture();
	ptVid->Destroy();
	ptAud->Destroy();

	printf("停止抓屏222222222222！！\n");

	Sleep(200);
	}

	delete ptVid;
	delete ptAud;

	return 0;
}

