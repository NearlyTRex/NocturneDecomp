#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CEdScrollBar.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3360000
// =============================================================================

// CEdScrollBar
extern CEdScrollBar g_ThumbnailScrollBar;

// int
extern int g_SavedWindowWidth;
extern int g_SavedWindowHeight;
extern int g_VDIsActorAreaInvalid;

// int[250]
extern int g_VDCameraSortIndices[250];

// uchar
extern uchar g_ThumbnailScrollBarInitFlag;

// uint*[1200]
extern uint* g_ZBufferScanlineArrayBackup[1200];

// uint[250][3072]
extern uint g_ThumbnailImageBuffer[250][3072];

// undefined4
extern undefined4 DAT_03364d18;
extern undefined4 DAT_03365cb8;
extern undefined4 DAT_03365cbc;

