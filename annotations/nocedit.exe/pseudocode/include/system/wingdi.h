#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winuser.h"

// =============================================================================
// WINGDI - System Header
// =============================================================================

// Function Definition: CreateFontA
typedef HFONT (*CreateFontA)(int cHeight, int cWidth, int cEscapement, int cOrientation, int cWeight, DWORD bItalic, DWORD bUnderline, DWORD bStrikeOut, DWORD iCharSet, DWORD iOutPrecision, DWORD iClipPrecision, DWORD iQuality, DWORD iPitchAndFamily, LPCSTR pszFaceName);

// Typedef: HDC
// pointer to HDC__
typedef struct HDC__* HDC;

// Structure: HDC__
typedef struct HDC__ {
    int unused;
} HDC__;

// Function Definition: CreateCompatibleDC
typedef HDC (*CreateCompatibleDC)(HDC hdc);

// Function Definition: DeleteDC
typedef BOOL (*DeleteDC)(HDC hdc);

// Typedef: HGDIOBJ
// pointer to void
typedef void* HGDIOBJ;

// Function Definition: DeleteObject
typedef BOOL (*DeleteObject)(HGDIOBJ ho);

// Function Definition: GetStockObject
typedef HGDIOBJ (*GetStockObject)(int i);

// Typedef: HGLOBAL
// pointer to void
typedef HANDLE HGLOBAL;

// Typedef: LPRECT
// pointer to tagRECT
typedef struct tagRECT* LPRECT;

// Typedef: LPSIZE
// pointer to tagSIZE
typedef struct tagSIZE* LPSIZE;

// Function Definition: Rectangle
typedef BOOL (*Rectangle)(HDC hdc, int left, int top, int right, int bottom);

// Function Definition: SelectObject
typedef HGDIOBJ (*SelectObject)(HDC hdc, HGDIOBJ h);

// Function Definition: SetBkColor
typedef COLORREF (*SetBkColor)(HDC hdc, COLORREF color);

// Function Definition: SetBkMode
typedef int (*SetBkMode)(HDC hdc, int mode);

// Function Definition: SetTextColor
typedef COLORREF (*SetTextColor)(HDC hdc, COLORREF color);

// Function Definition: TextOutA
typedef BOOL (*TextOutA)(HDC hdc, int x, int y, LPCSTR lpString, int c);

// Structure: tagBITMAPINFOHEADER
typedef struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
} tagBITMAPINFOHEADER;

// Typedef: BITMAPINFOHEADER
typedef tagBITMAPINFOHEADER BITMAPINFOHEADER;

// Structure: tagLOGBRUSH
typedef struct tagLOGBRUSH {
    UINT lbStyle;
    COLORREF lbColor;
    ULONG_PTR lbHatch;
} tagLOGBRUSH;

// Typedef: LOGBRUSH
typedef tagLOGBRUSH LOGBRUSH;

// Function Definition: CreateBrushIndirect
typedef HBRUSH (*CreateBrushIndirect)(LOGBRUSH* plbrush);

// Structure: tagRECT
typedef struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} tagRECT;

// Typedef: RECT
typedef tagRECT RECT;

// Structure: tagRGBQUAD
typedef struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
} tagRGBQUAD;

// Typedef: RGBQUAD
typedef tagRGBQUAD RGBQUAD;

// Structure: tagBITMAPINFO
typedef struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
} tagBITMAPINFO;

// Typedef: BITMAPINFO
typedef tagBITMAPINFO BITMAPINFO;

// Function Definition: CreateDIBSection
typedef HBITMAP (*CreateDIBSection)(HDC hdc, BITMAPINFO* pbmi, UINT usage, void** ppvBits, HANDLE hSection, DWORD offset);

// Structure: tagSIZE
typedef struct tagSIZE {
    LONG cx;
    LONG cy;
} tagSIZE;

// Function Definition: GetTextExtentPoint32A
typedef BOOL (*GetTextExtentPoint32A)(HDC hdc, LPCSTR lpString, int c, LPSIZE psizl);

