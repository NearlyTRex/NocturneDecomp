#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x20B0000
// =============================================================================

// CDemonActorType
CDemonActorType g_CShadowClassInfo = {};
CDemonActorType g_CShotgunClassInfo = {};
CDemonActorType g_CShovelClassInfo = {};
CDemonActorType g_CSimBoxClassInfo = {};

// CDemonGlobe
CDemonGlobe g_CDemonGlobe_020b1924 = {};

// CVector3f[5000]
CVector3f g_FloatVertexArray[5000] = {};

// int
int g_SavedWindowWidth = {};
int g_SavedWindowHeight = {};
int g_VDIsActorAreaInvalid = {};

// int[250]
int g_VDCameraSortIndices[250] = {};

// int[4000]
int g_VertexRemapTable[4000] = {};

// uint*[GAME_SCREEN_MAX_HEIGHT]
uint* g_ZBufferScanlineArrayBackup[GAME_SCREEN_MAX_HEIGHT] = {};

