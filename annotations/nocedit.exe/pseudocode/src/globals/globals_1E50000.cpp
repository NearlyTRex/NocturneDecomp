#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1E50000
// =============================================================================

// SModelPartName[500]
SModelPartName g_ModelPartNames[500] = {};

// int
int g_PartsCount = {};
int g_VertexOptimizationPasses = {};
int g_PolygonOptimizationPasses = {};
int g_SelectionBlinkTimer = {};
int g_PointEditorMode = {};
int g_SelectedPointIndex = {};
int g_SelectedPolygonIndex = {};
int g_SecondaryPolygonIndex = {};
int g_GouraudShadingEnabled = {};
int g_AntiAliasingEnabled = {};
int g_EditorTextureMode = {};

// int[20000]
int g_VertexDepthSortedIndices[20000] = {};

