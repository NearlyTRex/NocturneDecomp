#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2080000
// =============================================================================

// CVector3f[4000]
CVector3f g_FaceNormalArray[4000] = {};

// CVector3i[20000]
CVector3i g_TransformedVertexArray[20000] = {};

// int
int g_ColorCorrectionLightMultiplier = {};
int g_ColorCorrectionColorMultiplier = {};
int g_ColorCorrectionFogMultiplier = {};

