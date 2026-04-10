#include "system/wingdi.h"

// ---------------------------------------------------------------------------
// Globals (function pointers wired by shims_init_wingdi)
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// Stubs -- GDI is only used for debug/editor overlay, not critical path
// ---------------------------------------------------------------------------

static HBRUSH shim_CreateBrushIndirect(const LOGBRUSH* plb) {
    return (HBRUSH)1;
}

static HDC shim_CreateCompatibleDC(HDC hdc) {
    return (HDC)1;
}

static HBITMAP shim_CreateDIBSection(HDC hdc, const BITMAPINFO* pbmi,
                                      unsigned int usage, void** ppvBits,
                                      HANDLE hSection, DWORD offset) {
    if (ppvBits) *ppvBits = nullptr;
    return (HBITMAP)nullptr;
}

static HFONT shim_CreateFontA(int cHeight, int cWidth, int cEscapement,
                                int cOrientation, int cWeight, DWORD bItalic,
                                DWORD bUnderline, DWORD bStrikeOut,
                                DWORD iCharSet, DWORD iOutPrecision,
                                DWORD iClipPrecision, DWORD iQuality,
                                DWORD iPitchAndFamily, LPCSTR pszFaceName) {
    return (HFONT)1;
}

static BOOL shim_DeleteDC(HDC hdc) {
    return 1;
}

static BOOL shim_DeleteObject(void* ho) {
    return 1;
}

static void* shim_GetStockObject(int i) {
    return (void*)1;
}

static BOOL shim_GetTextExtentPoint32A(HDC hdc, LPCSTR lpString, int c,
                                        void* psizl) {
    if (psizl) {
        // SIZE struct: { long cx; long cy; }
        ((long*)psizl)[0] = c * 8;  // rough monospace estimate
        ((long*)psizl)[1] = 16;
    }
    return 1;
}

static BOOL shim_Rectangle(HDC hdc, int left, int top, int right, int bottom) {
    return 1;
}

static void* shim_SelectObject(HDC hdc, void* h) {
    return (void*)1;
}

static DWORD shim_SetBkColor(HDC hdc, DWORD color) {
    return 0;
}

static int shim_SetBkMode(HDC hdc, int mode) {
    return 0;
}

static DWORD shim_SetTextColor(HDC hdc, DWORD color) {
    return 0;
}

static BOOL shim_TextOutA(HDC hdc, int x, int y, LPCSTR lpString, int c) {
    return 1;
}

// ---------------------------------------------------------------------------
// Init
// ---------------------------------------------------------------------------
#include "globals/globals_610000.h"

void shims_init_wingdi(void) {
    g_CreateBrushIndirectFunc = (decltype(g_CreateBrushIndirectFunc))shim_CreateBrushIndirect;
    g_CreateCompatibleDCFunc = (decltype(g_CreateCompatibleDCFunc))shim_CreateCompatibleDC;
    g_CreateDIBSectionFunc = (decltype(g_CreateDIBSectionFunc))shim_CreateDIBSection;
    g_CreateFontAFunc = (decltype(g_CreateFontAFunc))shim_CreateFontA;
    g_DeleteDCFunc = (decltype(g_DeleteDCFunc))shim_DeleteDC;
    g_DeleteObjectFunc = (decltype(g_DeleteObjectFunc))shim_DeleteObject;
    g_GetStockObjectFunc = (decltype(g_GetStockObjectFunc))shim_GetStockObject;
    g_GetTextExtentPoint32A = (decltype(g_GetTextExtentPoint32A))shim_GetTextExtentPoint32A;
    g_RectangleFunc = (decltype(g_RectangleFunc))shim_Rectangle;
    g_SelectObjectFunc = (decltype(g_SelectObjectFunc))shim_SelectObject;
    g_SetBkColorFunc = (decltype(g_SetBkColorFunc))shim_SetBkColor;
    g_SetBkModeFunc = (decltype(g_SetBkModeFunc))shim_SetBkMode;
    g_SetTextColorFunc = (decltype(g_SetTextColorFunc))shim_SetTextColor;
    g_TextOutAFunc = (decltype(g_TextOutAFunc))shim_TextOutA;
}
