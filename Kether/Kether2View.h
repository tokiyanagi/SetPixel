// Kether2View.h : interface of the CKether2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_KETHER2VIEW_H__6B6585B0_7ABF_457F_842F_78CD0EE5E618__INCLUDED_)
#define AFX_KETHER2VIEW_H__6B6585B0_7ABF_457F_842F_78CD0EE5E618__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CKether2View : public CView
{
protected: // create from serialization only
	CKether2View();
	DECLARE_DYNCREATE(CKether2View)

// Attributes
public:
	CKether2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CKether2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CKether2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CKether2View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Kether2View.cpp
inline CKether2Doc* CKether2View::GetDocument()
   { return (CKether2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_KETHER2VIEW_H__6B6585B0_7ABF_457F_842F_78CD0EE5E618__INCLUDED_)
