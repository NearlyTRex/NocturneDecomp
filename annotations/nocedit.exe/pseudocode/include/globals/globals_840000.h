#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/structs/SCramRectangle.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x840000
// =============================================================================

// SCramRectangle[50]
extern SCramRectangle g_CramRectangles[50];

// int
extern int g_CramTextureCount;
extern int g_CramTotalMaps;
extern int g_CramPlacedTextureCount;
extern int g_CramRectangleCount;
extern int g_CramTotalPixelArea;
extern int g_CramMinPlacementX;
extern int g_CramMinPlacementY;
extern int g_CramOptimalPlacement;
extern int g_CramAcceptableSize;
extern int g_CramAtlasWidth;
extern int g_CramAtlasHeight;
extern int g_CramPaddingCalculation;
extern int g_CramCurrentAcceptableSize;
extern int g_CramBestSolutionMetric1;
extern int g_CramBestSolutionMetric2;
extern int g_CramMapNumber;
extern int g_CramVisualizationFlag;
extern int g_CramFillGaps;
extern int g_CramDebugStepMode;
extern int g_CramVisualizationMode;
extern int g_CramMaxIterationsLimit;
extern int g_CramStartTime;
extern int g_CramIterationCount;

