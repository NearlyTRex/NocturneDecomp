#pragma once

// Type dependencies
#include "system/basetypes.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x6A0000
// =============================================================================

// float[256]
extern float g_PaletteLuminanceCache[256];

// int
extern int g_RenderingMode;

// int[256]
extern int g_FontCharWidths[256];

// uchar*
extern uchar* g_FontBitmapData;

// uchar*[256]
extern uchar* g_FontGlyphPtrs[256];

// undefined4
extern undefined4 DAT_006af554;
extern undefined4 DAT_006af558;
extern undefined4 DAT_006af55c;
extern undefined4 DAT_006af560;
extern undefined4 DAT_006af56c;
extern undefined4 DAT_006af570;
extern undefined4 DAT_006af584;
extern undefined4 DAT_006af588;
extern undefined4 DAT_006af59c;
extern undefined4 DAT_006af5a0;
extern undefined4 DAT_006af5b4;
extern undefined4 DAT_006af5b8;
extern undefined4 DAT_006af5c4;
extern undefined4 DAT_006af5c8;
extern undefined4 DAT_006af5cc;
extern undefined4 DAT_006af5d0;
extern undefined4 DAT_006af5e4;
extern undefined4 DAT_006af5e8;
extern undefined4 DAT_006af5f4;
extern undefined4 DAT_006af5f8;
extern undefined4 DAT_006af5fc;
extern undefined4 DAT_006af600;

// void*
extern void* g_SoftwareZBuffer;

