#pragma once

// Function Definition: CreateBrushIndirect
typedef HBRUSH (*CreateBrushIndirect)(LOGBRUSH* plbrush);

// Function Definition: CreateCompatibleDC
typedef HDC (*CreateCompatibleDC)(HDC hdc);

// Function Definition: CreateDIBSection
typedef HBITMAP (*CreateDIBSection)(HDC hdc, BITMAPINFO* pbmi, UINT usage, void** ppvBits, HANDLE hSection, DWORD offset);

// Function Definition: CreateFontA
typedef HFONT (*CreateFontA)(int cHeight, int cWidth, int cEscapement, int cOrientation, int cWeight, DWORD bItalic, DWORD bUnderline, DWORD bStrikeOut, DWORD iCharSet, DWORD iOutPrecision, DWORD iClipPrecision, DWORD iQuality, DWORD iPitchAndFamily, LPCSTR pszFaceName);

// Function Definition: DeleteDC
typedef BOOL (*DeleteDC)(HDC hdc);

// Function Definition: DeleteObject
typedef BOOL (*DeleteObject)(HGDIOBJ ho);

// Function Definition: GetStockObject
typedef HGDIOBJ (*GetStockObject)(int i);

// Function Definition: GetTextExtentPoint32A
typedef BOOL (*GetTextExtentPoint32A)(HDC hdc, LPCSTR lpString, int c, LPSIZE psizl);

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

