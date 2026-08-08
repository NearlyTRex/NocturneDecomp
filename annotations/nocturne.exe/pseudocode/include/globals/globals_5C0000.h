#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/stdlib.h"
#include "system/watcom.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x5C0000
// =============================================================================

// RuntimeHandlerEntry
extern RuntimeHandlerEntry g_FirstInitHandler;
extern RuntimeHandlerEntry RuntimeHandlerEntry_005c26ce;
extern RuntimeHandlerEntry RuntimeHandlerEntry_005c26f8;

// RuntimeHandlerEntry[160]
extern RuntimeHandlerEntry g_InitHandlers[160];

// RuntimeHandlerEntry[6]
extern RuntimeHandlerEntry RuntimeHandlerEntry_ARRAY_005c26d4[6];

// TerminatedCString
extern TerminatedCString s_trid3d_dll_005c0e80;

// WatcomStaticDestructorNode
extern WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005c10c8;
extern WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005c11dc;

// int
extern int g_SystemInitialized;
extern int g_VideoMemorySize;
extern int g_MaxTextureSize;
extern int g_FullScreenQuadDepth;
extern int g_INT_005c0f90;
extern int INT_005c0ff0;
extern int INT_005c10b0;
extern int INT_005c1130;
extern int INT_005c1160;
extern int INT_005c1174;
extern int INT_005c1188;
extern int INT_005c11a0;
extern int g_INT_005c11c4;
extern int g_INT_005c154c;
extern int INT_005c1578;
extern int INT_005c1590;
extern int INT_005c1614;
extern int INT_005c1654;
extern int INT_005c1668;
extern int INT_005c166c;

// undefined1
extern undefined1 DAT_005c1a9c;
extern undefined1 DAT_005c1b23;
extern undefined1 DAT_005c1b24;
extern undefined1 DAT_005c1b25;
extern undefined1 DAT_005c1b26;
extern undefined1 DAT_005c1b27;
extern undefined1 DAT_005c1d0f;
extern undefined1 DAT_005c1e89;
extern undefined1 DAT_005c2050;
extern undefined1 DAT_005c2140;

// undefined2
extern undefined2 DAT_005c1d11;
extern undefined2 DAT_005c1f4c;

// undefined4
extern undefined4 DAT_005c1660;
extern undefined4 DAT_005c1664;
extern undefined4 DAT_005c1680;
extern undefined4 DAT_005c1684;
extern undefined4 DAT_005c1688;
extern undefined4 DAT_005c1ab8;
extern undefined4 DAT_005c1b04;
extern undefined4 DAT_005c1c28;
extern undefined4 DAT_005c1cc8;
extern undefined4 DAT_005c1ccc;
extern undefined4 DAT_005c1cf0;
extern undefined4 DAT_005c1cf8;
extern undefined4 DAT_005c1d17;
extern undefined4 DAT_005c1d1b;
extern undefined4 DAT_005c1d50;
extern undefined4 DAT_005c1d54;
extern undefined4 DAT_005c1d58;
extern undefined4 DAT_005c1d5c;
extern undefined4 DAT_005c1d60;
extern undefined4 DAT_005c1d7c;
extern undefined4 DAT_005c1d80;
extern undefined4 DAT_005c1d88;
extern undefined4 DAT_005c1d90;
extern undefined4 DAT_005c1d94;
extern undefined4 DAT_005c1dd8;
extern undefined4 DAT_005c1ddc;
extern undefined4 DAT_005c1de0;
extern undefined4 DAT_005c1de4;
extern undefined4 DAT_005c1de8;
extern undefined4 DAT_005c1dec;
extern undefined4 DAT_005c1dfc;
extern undefined4 DAT_005c1e00;
extern undefined4 DAT_005c1e04;
extern undefined4 DAT_005c1f14;
extern undefined4 DAT_005c1f1c;
extern undefined4 DAT_005c1f20;
extern undefined4 DAT_005c1f50;
extern undefined4 DAT_005c1f54;
extern undefined4 DAT_005c1f58;
extern undefined4 DAT_005c1f5c;
extern undefined4 DAT_005c1f6c;
extern undefined4 DAT_005c1f70;
extern undefined4 DAT_005c204c;
extern undefined4 DAT_005c206c;
extern undefined4 DAT_005c20d0;
extern undefined4 DAT_005c20d4;
extern undefined4 DAT_005c2144;
extern undefined4 DAT_005c5014;
extern undefined4 DAT_005c5018;
extern undefined4 DAT_005c501c;
extern undefined4 DAT_005c5024;
extern undefined4 DAT_005c502c;
extern undefined4 DAT_005c5034;
extern undefined4 DAT_005c5038;
extern undefined4 DAT_005c503c;
extern undefined4 DAT_005c5040;
extern undefined4 DAT_005c5044;
extern undefined4 DAT_005c5048;
extern undefined4 DAT_005c504c;
extern undefined4 DAT_005c5054;
extern undefined4 DAT_005c5064;
extern undefined4 DAT_005c5068;
extern undefined4 DAT_005c506c;
extern undefined4 DAT_005c5070;
extern undefined4 DAT_005c5074;
extern undefined4 DAT_005c5078;
extern undefined4 DAT_005c5084;
extern undefined4 DAT_005c5088;
extern undefined4 DAT_005c5094;
extern undefined4 DAT_005c5098;
extern undefined4 DAT_005c509c;
extern undefined4 DAT_005c50a4;
extern undefined4 DAT_005c50a8;
extern undefined4 DAT_005c50b4;
extern undefined4 DAT_005c50c4;
extern undefined4 DAT_005c50c8;
extern undefined4 DAT_005c50cc;
extern undefined4 DAT_005c50e4;
extern undefined4 DAT_005c5114;
extern undefined4 DAT_005c5144;
extern undefined4 DAT_005c5174;

// void*
extern void* g_BackBuffer;

