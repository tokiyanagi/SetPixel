// Kether2View.cpp : implementation of the CKether2View class
//

#include "stdafx.h"
#include "Kether2.h"

#include "Kether2Doc.h"
#include "Kether2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CKether2View

IMPLEMENT_DYNCREATE(CKether2View, CView)

BEGIN_MESSAGE_MAP(CKether2View, CView)
	//{{AFX_MSG_MAP(CKether2View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CKether2View construction/destruction

CKether2View::CKether2View()
{
	// TODO: add construction code here

}

CKether2View::~CKether2View()
{
}

BOOL CKether2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CKether2View drawing

void CKether2View::OnDraw(CDC* pDC)
{
	CKether2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
CWnd  *pDeskTop  =   GetDesktopWindow(  );
  CDC     *p    =  pDeskTop->GetWindowDC(  );
  for   (  int  x = 0;  x < 900;  x++ )
for  (  int  y = 0; y < 700;  y++ )
			pDC->SetPixel( x+0, y+0, x*y );
  pDeskTop->ReleaseDC(  pDC );}

/////////////////////////////////////////////////////////////////////////////
// CKether2View printing

BOOL CKether2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CKether2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CKether2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CKether2View diagnostics

#ifdef _DEBUG
void CKether2View::AssertValid() const
{
	CView::AssertValid();
}

void CKether2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CKether2Doc* CKether2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CKether2Doc)));
	return (CKether2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CKether2View message handlers
