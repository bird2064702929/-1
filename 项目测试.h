
// 项目测试.h: PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含 'pch.h' 以生成 PCH"
#endif

#include "resource.h"		// 主符号


// C项目测试App:
// 有关此类的实现，请参阅 项目测试.cpp
//

class C项目测试App : public CWinApp
{
public:
	C项目测试App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern C项目测试App theApp;
