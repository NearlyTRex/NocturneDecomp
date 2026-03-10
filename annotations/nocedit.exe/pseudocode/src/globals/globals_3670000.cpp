#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3670000
// =============================================================================

// CVector3f[5000]
CVector3f g_FloatVertexArray[5000] = {};

// SSkeleditBiasEntry[120]
SSkeleditBiasEntry g_SkeleditBiasEntries[120] = {};

// char[20]
char g_SkeletonViewModelScreenshotFilename[20] = {};

// char[260]
char g_SkeleditLastTestSkeletonDir[260] = {};

// char[264]
char g_SkeleditLastPOSImported[264] = {};
char g_SkeleditLastMOTImported[264] = {};

// char[504]
char g_SkeleditStatusMessage[504] = {};

// int
int g_SkeleditBiasEntryCount = {};
int g_SkeletonViewModelScreenshotCounter = {};

// int[4000]
int g_VertexRemapTable[4000] = {};

