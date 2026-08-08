#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/windef.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CSfxOptions.h"
#include "types/classes/CSfxSample.h"
#include "types/classes/CSound.h"
#include "types/classes/CStrList.h"
#include "types/classes/CTextureList.h"
#include "types/classes/CVector3f.h"
#include "types/funcdefs/APIDLL_add3dLine.h"
#include "types/funcdefs/APIDLL_addParticle.h"
#include "types/funcdefs/APIDLL_beginScene.h"
#include "types/funcdefs/APIDLL_buildCardList.h"
#include "types/funcdefs/APIDLL_clear.h"
#include "types/funcdefs/APIDLL_clearZBox.h"
#include "types/funcdefs/APIDLL_clearZBuffer.h"
#include "types/funcdefs/APIDLL_drawPolyList.h"
#include "types/funcdefs/APIDLL_drawPolyList2.h"
#include "types/funcdefs/APIDLL_drawPolygon.h"
#include "types/funcdefs/APIDLL_drawPolygon2.h"
#include "types/funcdefs/APIDLL_endScene.h"
#include "types/funcdefs/APIDLL_flushLineList.h"
#include "types/funcdefs/APIDLL_flushParticleList.h"
#include "types/funcdefs/APIDLL_getDisplayContext.h"
#include "types/funcdefs/APIDLL_getVideoMemory.h"
#include "types/funcdefs/APIDLL_init.h"
#include "types/funcdefs/APIDLL_kill.h"
#include "types/funcdefs/APIDLL_lockFrame.h"
#include "types/funcdefs/APIDLL_lockHoldBuffer.h"
#include "types/funcdefs/APIDLL_masterZBuffer.h"
#include "types/funcdefs/APIDLL_releaseDisplayContext.h"
#include "types/funcdefs/APIDLL_restoreVideoMode.h"
#include "types/funcdefs/APIDLL_restoreZBuffer.h"
#include "types/funcdefs/APIDLL_selectCard.h"
#include "types/funcdefs/APIDLL_selectTexture.h"
#include "types/funcdefs/APIDLL_setColorTable16.h"
#include "types/funcdefs/APIDLL_setFogColor.h"
#include "types/funcdefs/APIDLL_setMipMapLevel.h"
#include "types/funcdefs/APIDLL_setVideoMode.h"
#include "types/funcdefs/APIDLL_setVideoMode2.h"
#include "types/funcdefs/APIDLL_sync.h"
#include "types/funcdefs/APIDLL_toggle.h"
#include "types/funcdefs/APIDLL_unlockFrame.h"
#include "types/funcdefs/APIDLL_unlockHoldBuffer.h"
#include "types/funcdefs/APIDLL_updateTexture.h"
#include "types/structs/STrainNoise.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2DC0000
// =============================================================================

// APIDLL_add3dLine*
extern APIDLL_add3dLine* g_APIDLL_add3dLine;

// APIDLL_addParticle*
extern APIDLL_addParticle* g_APIDLL_addParticle;

// APIDLL_beginScene*
extern APIDLL_beginScene* g_APIDLL_beginScene;

// APIDLL_buildCardList*
extern APIDLL_buildCardList* g_APIDLL_buildCardList;

// APIDLL_clear*
extern APIDLL_clear* g_APIDLL_clear;

// APIDLL_clearZBox*
extern APIDLL_clearZBox* g_APIDLL_clearZBox;

// APIDLL_clearZBuffer*
extern APIDLL_clearZBuffer* g_APIDLL_clearZBuffer;

// APIDLL_drawPolyList*
extern APIDLL_drawPolyList* g_APIDLL_drawPolyList;

// APIDLL_drawPolyList2*
extern APIDLL_drawPolyList2* g_APIDLL_drawPolyList2;

// APIDLL_drawPolygon*
extern APIDLL_drawPolygon* g_APIDLL_drawPolygon;

// APIDLL_drawPolygon2*
extern APIDLL_drawPolygon2* g_APIDLL_drawPolygon2;

// APIDLL_endScene*
extern APIDLL_endScene* g_APIDLL_endScene;

// APIDLL_flushLineList*
extern APIDLL_flushLineList* g_APIDLL_flushLineList;

// APIDLL_flushParticleList*
extern APIDLL_flushParticleList* g_APIDLL_flushParticleList;

// APIDLL_getDisplayContext*
extern APIDLL_getDisplayContext* g_APIDLL_getDisplayContext;

// APIDLL_getVideoMemory*
extern APIDLL_getVideoMemory* g_APIDLL_getVideoMemory;

// APIDLL_init*
extern APIDLL_init* g_APIDLL_init;

// APIDLL_kill*
extern APIDLL_kill* g_APIDLL_kill;

// APIDLL_lockFrame*
extern APIDLL_lockFrame* g_APIDLL_lockFrame;

// APIDLL_lockHoldBuffer*
extern APIDLL_lockHoldBuffer* g_APIDLL_lockHoldBuffer;

// APIDLL_masterZBuffer*
extern APIDLL_masterZBuffer* g_APIDLL_masterZBuffer;

// APIDLL_releaseDisplayContext*
extern APIDLL_releaseDisplayContext* g_APIDLL_releaseDisplayContext;

// APIDLL_restoreVideoMode*
extern APIDLL_restoreVideoMode* g_APIDLL_restoreVideoMode;

// APIDLL_restoreZBuffer*
extern APIDLL_restoreZBuffer* g_APIDLL_restoreZBuffer;

// APIDLL_selectCard*
extern APIDLL_selectCard* g_APIDLL_selectCard;

// APIDLL_selectTexture*
extern APIDLL_selectTexture* g_APIDLL_selectTexture;

// APIDLL_setColorTable16*
extern APIDLL_setColorTable16* g_APIDLL_setColorTable16;

// APIDLL_setFogColor*
extern APIDLL_setFogColor* g_APIDLL_setFogColor;

// APIDLL_setMipMapLevel*
extern APIDLL_setMipMapLevel* g_APIDLL_setMipMapLevel;

// APIDLL_setVideoMode*
extern APIDLL_setVideoMode* g_APIDLL_setVideoMode;

// APIDLL_setVideoMode2*
extern APIDLL_setVideoMode2* g_APIDLL_setVideoMode2;

// APIDLL_sync*
extern APIDLL_sync* g_APIDLL_sync;

// APIDLL_toggle*
extern APIDLL_toggle* g_APIDLL_toggle;

// APIDLL_unlockFrame*
extern APIDLL_unlockFrame* g_APIDLL_unlockFrame;

// APIDLL_unlockHoldBuffer*
extern APIDLL_unlockHoldBuffer* g_APIDLL_unlockHoldBuffer;

// APIDLL_updateTexture*
extern APIDLL_updateTexture* g_APIDLL_updateTexture;

// CDemonActorType
extern CDemonActorType g_CSpikeActorType_02dc9e28;
extern CDemonActorType g_CStairsActorType_02dc9ea8;
extern CDemonActorType g_CTempleStoneActorType_02dc9ee4;
extern CDemonActorType g_CStrangerActorType_02dc9fac;
extern CDemonActorType g_CSuccubusActorType_02dca01c;
extern CDemonActorType g_CSvetlanaActorType_02dca0a4;
extern CDemonActorType g_CBassPlayerActorType_02dca0e0;
extern CDemonActorType g_CDrummerActorType_02dca11c;
extern CDemonActorType g_CTeleportDestActorType_02dca158;
extern CDemonActorType g_CTeleportActorType_02dca194;
extern CDemonActorType g_CTentacleActorType_02dca1e0;

// CSfxOptions[8]
extern CSfxOptions g_CSfxOptions_ARRAY_02dc1b78[8];

// CSfxSample[64]
extern CSfxSample g_CSfxSample_ARRAY_02dc1edc[64];

// CSound
extern CSound g_CSound_02dc9450;

// CStrList
extern CStrList g_CStrList_02dc9610;

// CTextureList
extern CTextureList g_CTextureList_02dca21c;

// CVector3f
extern CVector3f CVector3f_02dc9f34;
extern CVector3f CVector3f_02dc9f40;

// HMODULE
extern HMODULE g_RendererDLLHandle;

// STrainNoise[10]
extern STrainNoise g_STrainNoise_ARRAY_02dc9ca4[10];

// int
extern int g_UseDirect3D;
extern int g_LoadedExternalDLLRenderer;
extern int INT_02dc9e24;

