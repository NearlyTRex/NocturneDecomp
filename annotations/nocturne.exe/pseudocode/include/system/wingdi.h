#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINGDI - System Header
// =============================================================================

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

