
// SeetaFaceMFC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CSeetaFaceMFCApp: 
// �йش����ʵ�֣������ SeetaFaceMFC.cpp
//

class CSeetaFaceMFCApp : public CWinApp
{
public:
	CSeetaFaceMFCApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CSeetaFaceMFCApp theApp;