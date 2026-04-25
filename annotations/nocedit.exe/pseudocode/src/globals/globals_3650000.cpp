#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3650000
// =============================================================================

// CDemonActorType
CDemonActorType g_CShotgunClassInfo = {};
CDemonActorType g_CShovelClassInfo = {};
CDemonActorType g_CSimBoxClassInfo = {};

// CPickList
CPickList g_MissingBackdropFiles = {};

// SCameraDepthEntry*
SCameraDepthEntry* g_CameraDepthData = {};

// char[100][30]
char g_BoneNameBuffer[100][30] = {};

// char[120][260]
char g_MotionFilenames[120][260] = {};

// char[200][50]
char g_SkeletonBoneNames[200][50] = {};

// char[500]
char g_GroundTextureTypes[500] = {};

// char[500][40]
char g_GroundTextureNames[500][40] = {};

// char[768]
char g_ThumbnailPalette[768] = {};

// int
int g_GroundTextureCount = {};

// int[250]
int g_CameraFogEnabledFlags[250] = {};

