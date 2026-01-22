#pragma once

// Type dependencies
#include "system/basetypes.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3360000
// =============================================================================

// int
extern int g_SavedWindowWidth;
extern int g_SavedWindowHeight;
extern int g_VDIsActorAreaInvalid;

// int[250]
extern int g_VDCameraSortIndices[250];

// uint*[1200]
extern uint* g_ZBufferScanlineArrayBackup[1200];

// undefined1
extern undefined1 DAT_03364d14;

// undefined4
extern undefined4 DAT_03364d18;
extern undefined4 DAT_03365cb8;
extern undefined4 DAT_03365cbc;

