// QREncodeDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CQREncodeDlg �Ի���
class CQREncodeDlg : public CDialog
{
// ����
public:
	CQREncodeDlg(CWnd* pParent = NULL);	// ��׼���캯��
    ~CQREncodeDlg();

// �Ի�������
	enum { IDD = IDD_QRENCODE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
    void ShowImage();
    void GetFormData(CString &szData);
    void DrawImage();
    void SaveImage();
private:
    BOOL m_bDataEncoded;

    CComboBox m_comboVersion;
    CComboBox m_comboLevel;
    CString m_szMovieName;
    CString m_szPhoneNum;
    CString m_szIDNum;
    CTime m_date;
    CTime m_time;
    CString m_szRow;
    CString m_szColumn;
    CString m_szMovieNumber;

    CString m_strSavePath;
    CDC* m_pSymbleDC;
    CBitmap* m_pSymbleBitmap;
    CBitmap* m_pOldBitmap;
    int m_nSymbleSize;
    int m_iModuleSize;
    afx_msg void OnEnChangeEdit1();
    afx_msg void OnEnChangeEdit2();
    afx_msg void OnEnChangeEdit3();
    afx_msg void OnDtnDatetimechangeDatetimepicker1(NMHDR *pNMHDR, LRESULT *pResult);
    afx_msg void OnDtnDatetimechangeDatetimepicker2(NMHDR *pNMHDR, LRESULT *pResult);
    afx_msg void OnCbnSelchangeCombo1();
    afx_msg void OnCbnSelchangeCombo2();
    afx_msg void OnEnChangeEdit4();
    afx_msg void OnCbnSelchangeCombo3();
    afx_msg void OnCbnSelchangeCombo4();
    afx_msg void OnBnClickedOk();
public:
	afx_msg void OnStnClickedStaticImage();
	afx_msg void OnCbnSelchangeCombo5();
};
