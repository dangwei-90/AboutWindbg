
// 1.lsaDlg.h: 头文件
//

#pragma once


// CMy1lsaDlg 对话框
class CMy1lsaDlg : public CDialogEx
{
// 构造
public:
	CMy1lsaDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY1LSA_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnBnClickedButtonStart();


public:
	// 变量定义区
	// 启动标识
	bool m_bStart;
	afx_msg void OnBnClickedButtonStop();
};
