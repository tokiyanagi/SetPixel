// Kether2Doc.cpp : implementation of the CKether2Doc class
//

#include "stdafx.h"
#include "Kether2.h"

#include "Kether2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CKether2Doc

IMPLEMENT_DYNCREATE(CKether2Doc, CDocument)

BEGIN_MESSAGE_MAP(CKether2Doc, CDocument)
	//{{AFX_MSG_MAP(CKether2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CKether2Doc construction/destruction

CKether2Doc::CKether2Doc()
{
	// TODO: add one-time construction code here

}

CKether2Doc::~CKether2Doc()
{
}

BOOL CKether2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CKether2Doc serialization

void CKether2Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CKether2Doc diagnostics

#ifdef _DEBUG
void CKether2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CKether2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CKether2Doc commands
