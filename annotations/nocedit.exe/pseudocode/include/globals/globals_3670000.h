#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SSkeleditBiasEntry.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3670000
// =============================================================================

// CVector3f[5000]
extern CVector3f g_FloatVertexArray[5000];

// SSkeleditBiasEntry[120]
extern SSkeleditBiasEntry g_SkeleditBiasEntries[120];

// char[20]
extern char g_SkeletonViewModelScreenshotFilename[20];

// char[260]
extern char g_SkeleditLastTestSkeletonDir[260];

// char[264]
extern char g_SkeleditLastPOSImported[264];
extern char g_SkeleditLastMOTImported[264];

// char[504]
extern char g_SkeleditStatusMessage[504];

// int
extern int g_SkeleditBiasEntryCount;
extern int g_SkeletonViewModelScreenshotCounter;

// int[4000]
extern int g_VertexRemapTable[4000];

