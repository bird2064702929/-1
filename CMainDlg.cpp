// CMainDlg.cpp: 实现文件
//

#include "pch.h"
#include "项目测试.h"
#include "afxdialogex.h"
#include "CMainDlg.h"
#include "项目测试Dlg.h"



// CMainDlg 对话框

IMPLEMENT_DYNAMIC(CMainDlg, CDialogEx)

CMainDlg::CMainDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOGMain, pParent)
{

}

CMainDlg::~CMainDlg()
{
}

void CMainDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMainDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CMainDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CMainDlg 消息处理程序


void CMainDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE); // 更新控件对应变量的值
	// 进入主对话框界面
	CDialogEx::OnOK(); // 关闭登陆界面
	C项目测试Dlg MAINDlg;
	MAINDlg.DoModal(); // 弹出主对话框（模态对话框）
	
}
