#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x13D0000
// =============================================================================

// CLZWDecompress
CLZWDecompress g_CLZWDecompressInstance = {};

// SFogImagePlane
SFogImagePlane g_CameraPlaneWorkBuffer = {};

// char[4096]
char g_CameraLookupTable[4096] = {};

