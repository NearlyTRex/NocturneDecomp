#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CLZWDecompress.h"
#include "types/structs/SFogImagePlane.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x13D0000
// =============================================================================

extern CLZWDecompress g_CLZWDecompressInstance;
extern SFogImagePlane g_CameraPlaneWorkBuffer;

