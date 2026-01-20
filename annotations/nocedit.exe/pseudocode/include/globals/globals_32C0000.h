#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x32C0000
// =============================================================================

// CDemonGlobe*
extern CDemonGlobe* g_GlobeLights;

// CDemonLight*
extern CDemonLight* g_PrimaryDirectionalLights;

// CDemonLight*[32]
extern CDemonLight* g_SecondaryDirectionalLights[32];

// CVector3f[4000]
extern CVector3f g_FaceNormalArray[4000];

// CVector3i[20000]
extern CVector3i g_TransformedVertexArray[20000];

// int
extern int g_SecondaryDirectionalLightCount;
extern int g_PrimaryDirectionalLightCount;
extern int g_GlobeLightCount;
extern int g_ColorCorrectionEnabled;
extern int g_LightingSystemDirty;
extern int g_ColorCorrectionLightMultiplier;
extern int g_ColorCorrectionColorMultiplier;
extern int g_ColorCorrectionFogMultiplier;

// undefined4
extern undefined4 DAT_032c1944;
extern undefined4 DAT_032c1948;
extern undefined4 DAT_032c1c68;
extern undefined4 DAT_032c1c6c;
extern undefined4 DAT_032c1c70;
extern undefined4 DAT_032c1c98;
extern undefined4 DAT_032c1c9c;

