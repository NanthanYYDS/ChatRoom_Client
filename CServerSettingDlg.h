﻿#pragma once
#include "afxdialogex.h"


// CServerSettingDlg 对话框

class CServerSettingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CServerSettingDlg)

public:
	CServerSettingDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CServerSettingDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SERVER_SETTING_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	// 服务器密码
	CEdit m_password;
	afx_msg void OnBnClickedConnectApply();
	// 服务器端口
	CString m_port;
	// 服务器IP地址
	CString m_ip;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedConnectTest();
};
