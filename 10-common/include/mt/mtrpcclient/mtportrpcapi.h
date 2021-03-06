/**===========================================================================
 * 
 * @brief   端口组件rpc接口头文件
 * @author  qudaifeng
 * @date    
 * @version  
 * (c)1998-2014 Suzhou Keda Technology Co.,Ltd. All rights reserved
 * @note
============================================================================*/
#ifndef _MTPORT_RPC_API_H_
#define _MTPORT_RPC_API_H_
#include "kdvtype.h"
#include "struct.pb.h"
#include "mtmacro.h"
#include "port.pb.h"

/*=============================================================================================
函数名   : RPC_GetPort
功能     : 根据strKey获取相关的端口
参数     : strKey [IN] 端口的key，定义在portkey.h中
参数     : tPort  [OUT] key对应的端口
返回值   : BOOL32 TRUE成功 FALSE失败
=============================================================================================*/
MTCBB_API BOOL32 RPC_GetPort(std::string strKey, mt::port::TPort &tPort);

#endif  //_MTPORT_RPC_API_H_