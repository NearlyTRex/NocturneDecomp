#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CLZWDecompress.h"
#include "types/structs/SFogImagePlane.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x13D0000
// =============================================================================

// CLZWDecompress
extern CLZWDecompress g_CLZWDecompressInstance;

// SFogImagePlane
extern SFogImagePlane g_CameraPlaneWorkBuffer;

// char[4096]
extern char g_CameraLookupTable[4096];

