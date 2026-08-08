#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2DC0000
// =============================================================================

// APIDLL_add3dLine*
APIDLL_add3dLine* g_APIDLL_add3dLine = {};

// APIDLL_addParticle*
APIDLL_addParticle* g_APIDLL_addParticle = {};

// APIDLL_beginScene*
APIDLL_beginScene* g_APIDLL_beginScene = {};

// APIDLL_buildCardList*
APIDLL_buildCardList* g_APIDLL_buildCardList = {};

// APIDLL_clear*
APIDLL_clear* g_APIDLL_clear = {};

// APIDLL_clearZBox*
APIDLL_clearZBox* g_APIDLL_clearZBox = {};

// APIDLL_clearZBuffer*
APIDLL_clearZBuffer* g_APIDLL_clearZBuffer = {};

// APIDLL_drawPolyList*
APIDLL_drawPolyList* g_APIDLL_drawPolyList = {};

// APIDLL_drawPolyList2*
APIDLL_drawPolyList2* g_APIDLL_drawPolyList2 = {};

// APIDLL_drawPolygon*
APIDLL_drawPolygon* g_APIDLL_drawPolygon = {};

// APIDLL_drawPolygon2*
APIDLL_drawPolygon2* g_APIDLL_drawPolygon2 = {};

// APIDLL_endScene*
APIDLL_endScene* g_APIDLL_endScene = {};

// APIDLL_flushLineList*
APIDLL_flushLineList* g_APIDLL_flushLineList = {};

// APIDLL_flushParticleList*
APIDLL_flushParticleList* g_APIDLL_flushParticleList = {};

// APIDLL_getDisplayContext*
APIDLL_getDisplayContext* g_APIDLL_getDisplayContext = {};

// APIDLL_getVideoMemory*
APIDLL_getVideoMemory* g_APIDLL_getVideoMemory = {};

// APIDLL_init*
APIDLL_init* g_APIDLL_init = {};

// APIDLL_kill*
APIDLL_kill* g_APIDLL_kill = {};

// APIDLL_lockFrame*
APIDLL_lockFrame* g_APIDLL_lockFrame = {};

// APIDLL_lockHoldBuffer*
APIDLL_lockHoldBuffer* g_APIDLL_lockHoldBuffer = {};

// APIDLL_masterZBuffer*
APIDLL_masterZBuffer* g_APIDLL_masterZBuffer = {};

// APIDLL_releaseDisplayContext*
APIDLL_releaseDisplayContext* g_APIDLL_releaseDisplayContext = {};

// APIDLL_restoreVideoMode*
APIDLL_restoreVideoMode* g_APIDLL_restoreVideoMode = {};

// APIDLL_restoreZBuffer*
APIDLL_restoreZBuffer* g_APIDLL_restoreZBuffer = {};

// APIDLL_selectCard*
APIDLL_selectCard* g_APIDLL_selectCard = {};

// APIDLL_selectTexture*
APIDLL_selectTexture* g_APIDLL_selectTexture = {};

// APIDLL_setColorTable16*
APIDLL_setColorTable16* g_APIDLL_setColorTable16 = {};

// APIDLL_setFogColor*
APIDLL_setFogColor* g_APIDLL_setFogColor = {};

// APIDLL_setMipMapLevel*
APIDLL_setMipMapLevel* g_APIDLL_setMipMapLevel = {};

// APIDLL_setVideoMode*
APIDLL_setVideoMode* g_APIDLL_setVideoMode = {};

// APIDLL_setVideoMode2*
APIDLL_setVideoMode2* g_APIDLL_setVideoMode2 = {};

// APIDLL_sync*
APIDLL_sync* g_APIDLL_sync = {};

// APIDLL_toggle*
APIDLL_toggle* g_APIDLL_toggle = {};

// APIDLL_unlockFrame*
APIDLL_unlockFrame* g_APIDLL_unlockFrame = {};

// APIDLL_unlockHoldBuffer*
APIDLL_unlockHoldBuffer* g_APIDLL_unlockHoldBuffer = {};

// APIDLL_updateTexture*
APIDLL_updateTexture* g_APIDLL_updateTexture = {};

// CDemonActorType
CDemonActorType g_CSpikeActorType_02dc9e28 = {};
CDemonActorType g_CStairsActorType_02dc9ea8 = {};
CDemonActorType g_CTempleStoneActorType_02dc9ee4 = {};
CDemonActorType g_CStrangerActorType_02dc9fac = {};
CDemonActorType g_CSuccubusActorType_02dca01c = {};
CDemonActorType g_CSvetlanaActorType_02dca0a4 = {};
CDemonActorType g_CBassPlayerActorType_02dca0e0 = {};
CDemonActorType g_CDrummerActorType_02dca11c = {};
CDemonActorType g_CTeleportDestActorType_02dca158 = {};
CDemonActorType g_CTeleportActorType_02dca194 = {};
CDemonActorType g_CTentacleActorType_02dca1e0 = {};

// CSfxOptions[8]
CSfxOptions g_CSfxOptions_ARRAY_02dc1b78[8] = {};

// CSfxSample[64]
CSfxSample g_CSfxSample_ARRAY_02dc1edc[64] = {};

// CSound
CSound g_CSound_02dc9450 = {};

// CStrList
CStrList g_CStrList_02dc9610 = {};

// CTextureList
CTextureList g_CTextureList_02dca21c = {};

// CVector3f
CVector3f CVector3f_02dc9f34 = {};
CVector3f CVector3f_02dc9f40 = {};

// HMODULE
HMODULE g_RendererDLLHandle = {};

// HWND
HWND g_StoredWindowHandle = {};

// STrainNoise[10]
STrainNoise g_STrainNoise_ARRAY_02dc9ca4[10] = {};

// int
int g_UseDirect3D = {};
int g_RendererHandle = {};
int g_AGPTextureMode = {};
int g_FrameBufferTestResult = {};
int g_LoadedExternalDLLRenderer = {};
int g_FogColorRed = {};
int g_FogColorGreen = {};
int g_FogColorBlue = {};
int g_ExternalBitsPerPixel = {};
int g_SavedBitsPerPixel = {};
int g_ExternalFrameLocked = {};

// void*
void* g_FrameBufferPtr = {};

