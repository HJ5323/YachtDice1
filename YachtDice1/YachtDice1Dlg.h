﻿
// YachtDice1Dlg.h : header file
//

#pragma once


// CYachtDice1Dlg dialog
class CYachtDice1Dlg : public CDialogEx
{
// Construction
public:
	CYachtDice1Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_YACHTDICE1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnDrawItem(int nIDCtl, LPDRAWITEMSTRUCT lpDrawItemStruct);
	afx_msg void OnBnClickedRoll();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CButton m_btnPlayers[12]; // 모든 버튼을 담을 배열
	CBitmapButton* m_btnRoll;

	CStatic m_dicePics[5]; // Picture Control 배열
	CBitmap m_diceBitmaps[6]; // Bitmap 이미지 배열

	void LoadDiceBitmaps();
	void ShowDiceImage(int diceIndex, int imageIndex);
	void ArrangeDicePics(); // Picture Control 정렬 함수

};
