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
int INT_03365cb8 = {};
int INT_03365cbc = {};

// int[250]
int g_VDCameraSortIndices[250] = {};

// uchar
uchar g_ThumbnailScrollBarInitFlag = {};

// uint*[GAME_SCREEN_MAX_HEIGHT]
uint* g_ZBufferScanlineArrayBackup[GAME_SCREEN_MAX_HEIGHT] = {};

// uint[1000]
uint g_S3DTextureGroundTypes[1000] = {};

// uint[250][3072]
uint g_ThumbnailImageBuffer[250][3072] = {};

