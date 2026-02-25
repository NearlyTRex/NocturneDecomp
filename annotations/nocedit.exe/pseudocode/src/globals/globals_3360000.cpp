#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3360000
// =============================================================================

// CEdScrollBar
CEdScrollBar g_ThumbnailScrollBar = {};

// int
int g_SavedWindowWidth = {};
int g_SavedWindowHeight = {};
int g_VDIsActorAreaInvalid = {};

// int[250]
int g_VDCameraSortIndices[250] = {};

// uchar
uchar g_ThumbnailScrollBarInitFlag = {};

// uint*[1200]
uint* g_ZBufferScanlineArrayBackup[1200] = {};

// uint[250][3072]
uint g_ThumbnailImageBuffer[250][3072] = {};

// undefined4
undefined4 DAT_03364d18 = {};
undefined4 DAT_03365cb8 = {};
undefined4 DAT_03365cbc = {};

