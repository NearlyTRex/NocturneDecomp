#pragma once

// Structure: HBITMAP__
typedef struct HBITMAP__ {
    int unused;
} HBITMAP__;

// Structure: HBRUSH__
typedef struct HBRUSH__ {
    int unused;
} HBRUSH__;

// Structure: HDC__
typedef struct HDC__ {
    int unused;
} HDC__;

// Structure: HFONT__
typedef struct HFONT__ {
    int unused;
} HFONT__;

// Structure: tagBITMAPINFO
typedef struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
} tagBITMAPINFO;

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

// Structure: tagLOGBRUSH
typedef struct tagLOGBRUSH {
    UINT lbStyle;
    COLORREF lbColor;
    ULONG_PTR lbHatch;
} tagLOGBRUSH;

// Structure: tagPOINT
typedef struct tagPOINT {
    LONG x;
    LONG y;
} tagPOINT;

// Structure: tagRECT
typedef struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} tagRECT;

// Structure: tagRGBQUAD
typedef struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
} tagRGBQUAD;

// Structure: tagSIZE
typedef struct tagSIZE {
    LONG cx;
    LONG cy;
} tagSIZE;

