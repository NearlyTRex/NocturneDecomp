#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x32C0000
// =============================================================================

// CDemonLight*[32]
CDemonLight* g_SecondaryDirectionalLights[32] = {};

// CVector3f[4000]
CVector3f g_FaceNormalArray[4000] = {};

// CVector3i[20000]
CVector3i g_TransformedVertexArray[20000] = {};

