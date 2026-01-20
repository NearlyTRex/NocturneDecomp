#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1EB0000
// =============================================================================

// CDSEModel
CDSEModel g_CDSEModelInstance = {};

// CMultiCram
CMultiCram g_CMultiCramInstance = {};

// char[80]
char g_CurrentModelFilename[80] = {};

// char[9][80]
char g_TextureNameArray[9][80] = {};

// int
int g_TextureManagerMode = {};
int g_TextureQualityLevel = {};
int g_TextureAtlasDimension = {};
int g_LastTextureProcessIndex = {};

