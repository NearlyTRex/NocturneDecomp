#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winuser.h"

// =============================================================================
// WINGDI - System Header
// =============================================================================

// Function Definition: CREATE_FONT_A_FUNC
typedef HFONT CREATE_FONT_A_FUNC(int cHeight, int cWidth, int cEscapement, int cOrientation, int cWeight, DWORD bItalic, DWORD bUnderline, DWORD bStrikeOut, DWORD iCharSet, DWORD iOutPrecision, DWORD iClipPrecision, DWORD iQuality, DWORD iPitchAndFamily, LPCSTR pszFaceName);

// Function Definition: GET_STOCK_OBJECT_FUNC
typedef LPVOID GET_STOCK_OBJECT_FUNC(int i);

// Typedef: HDC
// pointer to HDC__
typedef struct HDC__* HDC;

// Structure: HDC__
typedef struct HDC__ {
    int unused;
} HDC__;

// Function Definition: CREATE_COMPATIBLE_DC_FUNC
typedef HDC CREATE_COMPATIBLE_DC_FUNC(HDC hdc);

// Function Definition: DELETE_DC_FUNC
typedef BOOL DELETE_DC_FUNC(HDC hdc);

// Typedef: HGDIOBJ
// pointer to void
typedef void* HGDIOBJ;

// Function Definition: DELETE_OBJECT_FUNC
typedef BOOL DELETE_OBJECT_FUNC(HGDIOBJ ho);

// Typedef: HGLOBAL
// pointer to void
typedef HANDLE HGLOBAL;

// Typedef: LPRECT
// pointer to tagRECT
typedef struct tagRECT* LPRECT;

// Typedef: LPSIZE
// pointer to tagSIZE
typedef struct tagSIZE* LPSIZE;

// Function Definition: RECTANGLE_FUNC
typedef BOOL RECTANGLE_FUNC(HDC hdc, int left, int top, int right, int bottom);

// Function Definition: SELECT_OBJECT_FUNC
typedef HGDIOBJ SELECT_OBJECT_FUNC(HDC hdc, HGDIOBJ h);

// Function Definition: SET_BK_COLOR_FUNC
typedef COLORREF SET_BK_COLOR_FUNC(HDC hdc, COLORREF color);

// Function Definition: SET_BK_MODE_FUNC
typedef int SET_BK_MODE_FUNC(HDC hdc, int mode);

// Function Definition: SET_TEXT_COLOR_FUNC
typedef COLORREF SET_TEXT_COLOR_FUNC(HDC hdc, COLORREF color);

// Function Definition: TEXT_OUT_A_FUNC
typedef BOOL TEXT_OUT_A_FUNC(HDC hdc, int x, int y, LPCSTR lpString, int c);

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

// Function Definition: CREATE_BRUSH_INDIRECT_FUNC
typedef HBRUSH CREATE_BRUSH_INDIRECT_FUNC(LOGBRUSH* plbrush);

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
#pragma pack(push, 1)
typedef struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
} tagRGBQUAD;
#pragma pack(pop)

// Typedef: RGBQUAD
typedef tagRGBQUAD RGBQUAD;

// Structure: tagBITMAPINFO
typedef struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
} tagBITMAPINFO;

// Typedef: BITMAPINFO
typedef tagBITMAPINFO BITMAPINFO;

// Function Definition: CREATE_DIB_SECTION_FUNC
typedef HBITMAP CREATE_DIB_SECTION_FUNC(HDC hdc, BITMAPINFO* pbmi, UINT usage, void** ppvBits, HANDLE hSection, DWORD offset);

// Structure: tagSIZE
typedef struct tagSIZE {
    LONG cx;
    LONG cy;
} tagSIZE;

// Function Definition: GET_TEXT_EXTENT_POINT32_A_FUNC
typedef BOOL GET_TEXT_EXTENT_POINT32_A_FUNC(HDC hdc, LPCSTR lpString, int c, LPSIZE psizl);

