/*=============================================================================
模   块   名: touch
文   件   名: Language.h
相 关  文 件: 无
文件实现功能: 双语
作        者: chenshangquan
版        本: V1.0  Copyright(C) 2003-2006 KDC, All rights reserved.
-------------------------------------------------------------------------------
修改记录:
日      期  版本    修改人              修改内容
2018/09/28  1.0     chenshangquan       创建
=============================================================================*/

#ifndef __LANGUAGE_HEADER_
#define __LANGUAGE_HEADER_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

extern EMLangID g_emLanType; //语言类型

#define TRANSLATE(text)     \
     CString( g_emLanType == enumLangIdCHN ? text##CHN : text##ENG )

    #define NET_STATUS_CONNECTING_CHN               "正在连接设备"
    #define NET_STATUS_CONNECTING_ENG               "Connecting"
#define STRING_NET_STATUS_CONNECTING                TRANSLATE(NET_STATUS_CONNECTING_)

    #define NET_STATUS_CONNECTED_CHN                "已连接 "
    #define NET_STATUS_CONNECTED_ENG                "Connected "
#define STRING_NET_STATUS_CONNECTED                 TRANSLATE(NET_STATUS_CONNECTED_)
    #define DES_NET_STATUS_CONNECTED_CHN            "按压无线投屏发射器开始投屏，再次按压结束投屏"
    #define DES_NET_STATUS_CONNECTED_ENG            "Press NT30 for Projecting, Press Again to Stop"
#define STRING_DES_NET_STATUS_CONNECTED             TRANSLATE(DES_NET_STATUS_CONNECTED_)

    #define NET_STATUS_DISCONNECTED_CHN             "连接已断开"
    #define NET_STATUS_DISCONNECTED_ENG             "Disconnected"
#define STRING_NET_STATUS_DISCONNECTED              TRANSLATE(NET_STATUS_DISCONNECTED_)
    #define DES_NET_STATUS_DISCONNECTED_CHN         "请将无线投屏发射器插入设备USB接口，重新配对"
    #define DES_NET_STATUS_DISCONNECTED_ENG         "Please Plug NT30 to USB on the equipment for Pairing"
#define STRING_DES_NET_STATUS_DISCONNECTED          TRANSLATE(DES_NET_STATUS_DISCONNECTED_)

    #define NET_STATUS_FIND_TER_FAIL_CHN            "搜索不到设备 "
    #define NET_STATUS_FIND_TER_FAIL_ENG            "Cannot Find the equipment "
#define STRING_NET_STATUS_FIND_TER_FAIL             TRANSLATE(NET_STATUS_FIND_TER_FAIL_)
    #define DES_NET_STATUS_FIND_TER_FAIL_CHN        "设备异常，请等待或重启设备"
    #define DES_NET_STATUS_FIND_TER_FAIL_ENG        "Equipment abnormal, Please waiting or reboot"
#define STRING_DES_NET_STATUS_FIND_TER_FAIL         TRANSLATE(DES_NET_STATUS_FIND_TER_FAIL_)

    #define NET_STATUS_NO_MATCH_CHN                 "未与视频会议设备配对"
    #define NET_STATUS_NO_MATCH_ENG                 "Not paired"
#define STRING_NET_STATUS_NO_MATCH                  TRANSLATE(NET_STATUS_NO_MATCH_)
    #define DES_NET_STATUS_NO_MATCH_CHN             "请将无线投屏发射器，插入视频会议设备的USB接口，完成配对"
    #define DES_NET_STATUS_NO_MATCH_ENG             "Please Plug NT30 to USB on the equipment for Pairing"
#define STRING_DES_NET_STATUS_NO_MATCH              TRANSLATE(DES_NET_STATUS_NO_MATCH_)

    #define NET_STATUS_FIND_SSID_FAIL_CHN           "连接超时"
    #define NET_STATUS_FIND_SSID_FAIL_ENG           "Connection Timeout"
#define STRING_NET_STATUS_FIND_SSID_FAIL            TRANSLATE(NET_STATUS_FIND_SSID_FAIL_)
    #define DES_NET_STATUS_FIND_SSID_FAIL_CHN       "请将无线投屏发射器插入设备USB接口，重新配对"
    #define DES_NET_STATUS_FIND_SSID_FAIL_ENG       "Please Plug NT30 to USB on the equipment for Pairing"
#define STRING_DES_NET_STATUS_FIND_SSID_FAIL        TRANSLATE(DES_NET_STATUS_FIND_SSID_FAIL_)

    #define NET_STATUS_ENOUGHNUM_CHN                "连接数量受限"
    #define NET_STATUS_ENOUGHNUM_ENG                "Connection Quantity Limited"
#define STRING_NET_STATUS_ENOUGHNUM                 TRANSLATE(NET_STATUS_ENOUGHNUM_)
    #define DES_NET_STATUS_ENOUGHNUM_CHN            "显示端最大支持连接8个无线投屏发射器"
    #define DES_NET_STATUS_ENOUGHNUM_ENG            "Maxmium Quantity is 8"
#define STRING_DES_NET_STATUS_ENOUGHNUM             TRANSLATE(DES_NET_STATUS_ENOUGHNUM_)

    #define NET_STATUS_RESETQUICKSHARE_CHN          "无法连接设备 "
    #define NET_STATUS_RESETQUICKSHARE_ENG          "Can not connect "
#define STRING_NET_STATUS_RESETQUICKSHARE           TRANSLATE(NET_STATUS_RESETQUICKSHARE_)
    #define DES_NET_STATUS_RESETQUICKSHARE_CHN      "请拔掉无线投屏发射器，重新接入电脑"
    #define DES_NET_STATUS_RESETQUICKSHARE_ENG      "Please Remove NT30 and Replug it to your PC"
#define STRING_DES_NET_STATUS_RESETQUICKSHARE       TRANSLATE(DES_NET_STATUS_RESETQUICKSHARE_)

    #define NET_STATUS_TER_DISCONNECTED_CHN         "连接已断开"
    #define NET_STATUS_TER_DISCONNECTED_ENG         "Disconnected"
#define STRING_NET_STATUS_TER_DISCONNECTED          TRANSLATE(NET_STATUS_TER_DISCONNECTED_)
    #define DES_NET_STATUS_TER_DISCONNECTED_CHN     "网络重连中，请稍候……"
    #define DES_NET_STATUS_TER_DISCONNECTED_ENG     "Reconnecting to the Network..."
#define STRING_DES_NET_STATUS_TER_DISCONNECTED      TRANSLATE(DES_NET_STATUS_TER_DISCONNECTED_)
    #define NET_STATUS_RECONNECTTER_FAIL_CHN        "连接已断开"
    #define NET_STATUS_RECONNECTTER_FAIL_ENG        "Disconnected"
#define STRING_NET_STATUS_RECONNECTTER_FAIL         TRANSLATE(NET_STATUS_RECONNECTTER_FAIL_)
    #define DES_NET_STATUS_RECONNECTTER_FAIL_CHN    "网络干扰较大，请优化网络环境"
    #define DES_NET_STATUS_RECONNECTTER_FAIL_ENG    "Network interference, Please optimize your network environment"
#define STRING_DES_NET_STATUS_RECONNECTTER_FAIL     TRANSLATE(DES_NET_STATUS_RECONNECTTER_FAIL_)

    #define SHOW_UPGRADE_CHN                        "发现新版本"
    #define SHOW_UPGRADE_ENG                        "New Version Released"
#define STRING_SHOW_UPGRADE                         TRANSLATE(SHOW_UPGRADE_)

    #define SHOW_UPGRADE_TIP_CHN                   "请将无线投屏发射器连接至显示端的USB接口进行升级"
    #define SHOW_UPGRADE_TIP_ENG                   "Please Plug NT30 to USB on the equipment for Upgrading"
#define STRING_SHOW_UPGRADE_TIP                    TRANSLATE(SHOW_UPGRADE_TIP_)

    #define SHOW_UPGRADE_TIP1_CHN                   "请将无线投屏发射器连接至显示端的"
    #define SHOW_UPGRADE_TIP1_ENG                   "Please Plug NT30 to USB on"
#define STRING_SHOW_UPGRADE_TIP1                    TRANSLATE(SHOW_UPGRADE_TIP1_)

    #define SHOW_UPGRADE_TIP2_CHN                   "USB接口进行升级"
    #define SHOW_UPGRADE_TIP2_ENG                   "the equipment for Upgrading"
#define STRING_SHOW_UPGRADE_TIP2                    TRANSLATE(SHOW_UPGRADE_TIP2_)

    #define SHOW_IGNORE_UPGRADE_CHN                 "继续投屏"
    #define SHOW_IGNORE_UPGRADE_ENG                 "Decide later"
#define STRING_SHOW_IGNORE_UPGRADE                  TRANSLATE(SHOW_IGNORE_UPGRADE_)

    #define SHOW_LINK_IGNORE_CHN                    "<a href=\"暂不升级,继续投屏\">暂不升级,继续投屏</a>"
    #define SHOW_LINK_IGNORE_ENG                    "<a href=\"Optional: Decide later\">Optional: Decide later</a>"
#define STRING_SHOW_LINK_IGNORE                     TRANSLATE(SHOW_LINK_IGNORE_)

    #define CONNECT_BUSINESS_FAIL_CHN               "发射器业务进程异常"
    #define CONNECT_BUSINESS_FAIL_ENG               "Business Process Exception"
#define STRING_CONNECT_BUSINESS_FAIL                TRANSLATE(CONNECT_BUSINESS_FAIL_)
    #define DES_CONNECT_BUSINESS_FAIL_CHN           "请拔掉无线投屏发射器，重新接入电脑"
    #define DES_CONNECT_BUSINESS_FAIL_ENG           "Please Remove NT30 and Replug it to your PC"
#define STRING_DES_CONNECT_BUSINESS_FAIL            TRANSLATE(DES_CONNECT_BUSINESS_FAIL_)

    #define CONNECT_RESOLUTION_LIMITED_CHN          "投屏失败"
    #define CONNECT_RESOLUTION_LIMITED_ENG          "Projecting Failed"
#define STRING_CONNECT_RESOLUTION_LIMITED           TRANSLATE(CONNECT_RESOLUTION_LIMITED_)
    #define DES_CONNECT_RESOLUTION_LIMITED_CHN      "不支持当前桌面分辨率投屏"
    #define DES_CONNECT_RESOLUTION_LIMITED_ENG      "Desktop Resolution Disabled"
#define STRING_DES_CONNECT_RESOLUTION_LIMITED       TRANSLATE(DES_CONNECT_RESOLUTION_LIMITED_)

    #define CONNECT_NT30_MT_NONSUPPORT_CHN         "投屏失败"
    #define CONNECT_NT30_MT_NONSUPPORT_ENG         "Projecting Failed"
#define STRING_CONNECT_NT30_MT_NONSUPPORT          TRANSLATE(CONNECT_NT30_MT_NONSUPPORT_)
    #define DES_CONNECT_NT30_MT_NONSUPPORT_CHN     "商密终端不支持投屏"
    #define DES_CONNECT_NT30_MT_NONSUPPORT_ENG     "The special encryption is enabled"
#define STRING_DES_CONNECT_NT30_MT_NONSUPPORT      TRANSLATE(DES_CONNECT_NT30_MT_NONSUPPORT_)

    #define PROJECTING_CHN                          " 正在投屏"
    #define PROJECTING_ENG                          " Projecting"
#define STRING_PROJECTING                           TRANSLATE(PROJECTING_)

    #define STOP_PROJECTING_CHN                     "停止投屏"
    #define STOP_PROJECTING_ENG                     "Stop"
#define STRING_STOP_PROJECTING                      TRANSLATE(STOP_PROJECTING_)

#endif//__LANGUAGE_HEADER_
