// QREncode.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
// 

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CQREncodeApp:
// �йش����ʵ�֣������ QREncode.cpp
//

class CQREncodeApp : public CWinApp
{
public:
	CQREncodeApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CQREncodeApp theApp;