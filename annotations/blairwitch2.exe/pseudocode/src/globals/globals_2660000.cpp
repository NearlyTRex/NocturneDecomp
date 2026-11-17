#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2660000
// =============================================================================

// CAlphaBitmap[4]
CAlphaBitmap CAlphaBitmap_ARRAY_026677ec[4] = {};

// CAudioRecPuzzle
CAudioRecPuzzle g_CAudioRecPuzzleInstance = {};

// CDemonActorType
CDemonActorType g_CWayPointClassInfo = {};
CDemonActorType g_CWeaponClassInfo = {};
CDemonActorType g_CWerewolfClassInfo = {};
CDemonActorType g_CZombieClassInfo = {};
CDemonActorType g_CGogglesClassInfo = {};
CDemonActorType g_CPatrolPointClassInfo = {};
CDemonActorType g_CLanternClassInfo = {};
CDemonActorType g_CMeleeAxeClassInfo = {};
CDemonActorType g_CBasicEnemyClassInfo = {};
CDemonActorType g_CConfederateClassInfo = {};
CDemonActorType g_CConfederateZombieClassInfo = {};
CDemonActorType g_CTwigZombieClassInfo = {};
CDemonActorType g_CSchnellGeistClassInfo = {};
CDemonActorType g_CUnionZombieClassInfo = {};
CDemonActorType g_CBasicNPCClassInfo = {};
CDemonActorType g_CUnionClassInfo = {};
CDemonActorType g_CSteubenClassInfo = {};
CDemonActorType g_CRobinClassInfo = {};
CDemonActorType g_CCrossClassInfo = {};
CDemonActorType g_CDemonActorType_02668738 = {};
CDemonActorType g_CGrandmaClassInfo = {};
CDemonActorType g_CSearchPartyClassInfo = {};
CDemonActorType g_CBellingClassInfo = {};
CDemonActorType g_CGhostChildClassInfo = {};
CDemonActorType g_CHandClassInfo = {};
CDemonActorType g_CHagClassInfo = {};
CDemonActorType g_CDogClassInfo = {};
CDemonActorType g_CParticleBoxClassInfo = {};
CDemonActorType g_CSpiritMineClassInfo = {};
CDemonActorType g_CNecklaceClassInfo = {};

// CDemonGlobe
CDemonGlobe g_CDemonGlobe_02661f3c = {};
CDemonGlobe g_CDemonGlobe_026686b8 = {};

// CExamplePuzzle
CExamplePuzzle g_CExamplePuzzleInstance = {};

// CGameHook
CGameHook g_CGameHookInstance = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_CKeyFramedModelInstance_026681e0 = {};

// CSimpleParticleSystem
CSimpleParticleSystem g_CSimpleParticleSystemInstance = {};

// CVector3f
CVector3f g_CVector3f_02662d04 = {};
CVector3f g_CVector3f_02662d10 = {};

// CVector3f[200]
CVector3f g_CVector3f_ARRAY_02661fb8[200] = {};

// CWeather
CWeather g_CWeather_02661f80 = {};

// HWND
HWND g_HWND_02664628 = {};

// IDirectDraw*
IDirectDraw* g_IDirectDraw_PTR_02661ae0 = {};

// IDirectDrawSurface*
IDirectDrawSurface* g_IDirectDrawSurface_PTR_02661ae4 = {};
IDirectDrawSurface* g_IDirectDrawSurface_PTR_02661ae8 = {};

// IUnknown*
IUnknown* g_IUnknown_PTR_02661aec = {};

// PALETTEENTRY[256]
PALETTEENTRY g_PALETTEENTRY_ARRAY_02661b00[256] = {};

// SMRGLPrimitiveQuad[1000]
SMRGLPrimitiveQuad g_SMRGLPrimitiveQuad_ARRAY_02668a10[1000] = {};

// SRenderVertex[32]
SRenderVertex g_SRenderVertex_ARRAY_02665a6c[32] = {};
SRenderVertex g_SRenderVertex_ARRAY_0266606c[32] = {};
SRenderVertex g_SRenderVertex_ARRAY_0266666c[32] = {};
SRenderVertex g_SRenderVertex_ARRAY_02666c6c[32] = {};

// _struct_19
_struct_19 g_struct_19_02662d68 = {};
_struct_19 g_struct_19_02662d70 = {};

// byte
byte g_BYTE_02662de4 = {};
byte g_BYTE_026686f8 = {};

// char*[128]
char* g_CHAR_PTR_ARRAY_026652bc[128] = {};

// char[200]
char g_CHAR_ARRAY_02662c38[200] = {};
char g_CHAR_ARRAY_02664560[200] = {};

// char[256]
char g_CHAR_ARRAY_02664fb8[256] = {};
char g_CHAR_ARRAY_026650b8[256] = {};
char g_CHAR_ARRAY_026651b8[256] = {};
char g_CHAR_ARRAY_02668360[256] = {};

// char[6000]
char g_CHAR_ARRAY_02662df0[6000] = {};

// double
double g_DOUBLE_02662d78 = {};

// float
float g_FLOAT_02664fa0 = {};
float g_FLOAT_02664fa4 = {};

// float[200]
float g_FLOAT_ARRAY_02662918[200] = {};

// int
int g_INT_02661af4 = {};
int g_INT_02661af8 = {};
int g_INT_02661afc = {};
int g_INT_02662d64 = {};
int g_INT_02662d80 = {};
int g_INT_02662dd8 = {};
int g_INT_02662ddc = {};
int g_INT_02662de0 = {};
int g_INT_02662de8 = {};
int g_INT_02664630 = {};
int g_INT_02664634 = {};
int g_INT_02664638 = {};
int g_INT_0266463c = {};
int g_INT_02664fa8 = {};
int g_INT_026652b8 = {};
int g_INT_02665a44 = {};
int g_INT_02665a48 = {};
int g_INT_02665a4c = {};
int g_INT_02665a50 = {};
int g_INT_02665a58 = {};
int g_INT_02665a5c = {};
int g_INT_02665a60 = {};
int g_INT_02665a64 = {};
int g_INT_02665a68 = {};
int g_INT_026672a8 = {};
int g_INT_026677ac = {};
int g_INT_026677b0 = {};
int g_INT_026677e0 = {};
int g_INT_026677e4 = {};
int g_INT_026677e8 = {};
int g_INT_02668128 = {};

// int[1]
int g_INT_ARRAY_02662d84[1] = {};
int g_INT_ARRAY_02665974[1] = {};
int g_INT_ARRAY_026677b4[1] = {};

// int[20]
int g_INT_ARRAY_02662d88[20] = {};

// int[600]
int g_INT_ARRAY_02664640[600] = {};

// uint
uint g_UINT_02662d00 = {};

// void*
void* g_PTR_02661af0 = {};
void* g_PTR_026656bc = {};

