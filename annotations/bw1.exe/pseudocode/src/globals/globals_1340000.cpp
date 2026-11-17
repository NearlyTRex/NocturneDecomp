#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1340000
// =============================================================================

// CLZWDecompress
CLZWDecompress g_CLZWDecompressInstance = {};

// SFogImagePlane
SFogImagePlane g_SFogImagePlane_01342220 = {};

// char[4096]
char g_CameraLookupTable[4096] = {};

// int
int g_CameraShakeSustainTimer = {};
int g_CameraShakeAttackTime = {};
int g_CameraShakeAttackAccum = {};
int g_CameraShakeDecayDuration = {};
int g_CameraShakeDecayTimer = {};
int g_CameraShakeAccumulator = {};
int g_CameraShakeOffsetX = {};
int g_CameraShakeOffsetY = {};

