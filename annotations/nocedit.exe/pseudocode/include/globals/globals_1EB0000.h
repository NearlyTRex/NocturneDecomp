#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDSEModel.h"
#include "types/classes/CMultiCram.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1EB0000
// =============================================================================

// CDSEModel
extern CDSEModel g_CDSEModelInstance;

// CMultiCram
extern CMultiCram g_CMultiCramInstance;

// char[80]
extern char g_CurrentModelFilename[80];

// char[9][80]
extern char g_TextureNameArray[9][80];

