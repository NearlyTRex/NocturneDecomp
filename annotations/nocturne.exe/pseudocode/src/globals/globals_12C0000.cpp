#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x12C0000
// =============================================================================

// CLZWDecompress
CLZWDecompress g_CLZWDecompressInstance = {};

// SFogImagePlane
SFogImagePlane g_SFogImagePlane_012ceb78 = {};

// char[4096]
char g_CameraLookupTable[4096] = {};

// int
int g_CameraShakeSustainTimer = {};
int g_CameraShakeAttackTime = {};
int g_CameraShakeAttackAccum = {};
int g_CameraShakeDecayDuration = {};
int g_CameraShakeDecayTimer = {};
int g_CameraShakeAccumulator = {};
int g_INT_012ceb70 = {};
int g_INT_012ceb74 = {};

