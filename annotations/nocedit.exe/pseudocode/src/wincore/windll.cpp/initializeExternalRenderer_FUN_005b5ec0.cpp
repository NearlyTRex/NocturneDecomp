// Name: wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0
// Address: 005b5ec0
// Address Range: [[005b5ec0, 005b6740]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0(void)
// Globals:
//   TerminatedCString s_APIDLLInformation_0065293f
//   TerminatedCString s_APIDLLinit_00652951
//   TerminatedCString s_APIDLLkill_0065295c
//   TerminatedCString s_APIDLLtoggle_00652967
//   TerminatedCString s_APIDLLsetVideoMode_00652974
//   TerminatedCString s_APIDLLsetVideoMode2_00652987
//   TerminatedCString s_APIDLLrestoreVideoMode_0065299b
//   TerminatedCString s_APIDLLbeginScene_006529b2
//   TerminatedCString s_APIDLLendScene_006529c3
//   TerminatedCString s_APIDLLlockFrame_006529d2
//   TerminatedCString s_APIDLLunlockFrame_006529e2
//   TerminatedCString s_APIDLLselectTexture_006529f4
//   TerminatedCString s_APIDLLupdateTexture_00652a08
//   TerminatedCString s_APIDLLselectTextureBGRA_00652a1c
//   TerminatedCString s_APIDLLupdateTextureBGRA_00652a34
//   TerminatedCString s_APIDLLsetMipMapLevel_00652a4c
//   TerminatedCString s_APIDLLdrawPolygon_00652a61
//   TerminatedCString s_APIDLLdrawPolygon2_00652a73
//   TerminatedCString s_APIDLLdrawPolyList_00652a86
//   TerminatedCString s_APIDLLdrawPolyList2_00652a99
//   TerminatedCString s_APIDLLdrawPolyList3_00652aad
//   TerminatedCString s_APIDLLaddParticle_00652ac1
//   TerminatedCString s_APIDLLflushParticleList_00652ad3
//   TerminatedCString s_APIDLLadd3dLine_00652aeb
//   TerminatedCString s_APIDLLflushLineList_00652afb
//   TerminatedCString s_APIDLLclear_00652b0f
//   TerminatedCString s_APIDLLsetFogColor_00652b1b
//   TerminatedCString s_APIDLLsync_00652b2d
//   TerminatedCString s_APIDLLclearZBuffer_00652b38
//   TerminatedCString s_APIDLLclearZBox_00652b4b
//   TerminatedCString s_APIDLLsetColorTable16_00652b5b
//   TerminatedCString s_APIDLLGetDisplayContext_00652b71
//   TerminatedCString s_APIDLLReleaseDisplayCont_00652b89
//   TerminatedCString s_APIDLLmasterZBuffer_00652ba5
//   TerminatedCString s_APIDLLrestoreZBuffer_00652bb9
//   TerminatedCString s_APIDLLgetVideoMemory_00652bce
//   TerminatedCString s_APIDLLselectCard_00652be3
//   TerminatedCString s_APIDLLbuildCardList_00652bf4
//   TerminatedCString s_APIDLLlockHoldBuffer_00652c08
//   TerminatedCString s_APIDLLunlockHoldBuffer_00652c1d
//   TerminatedCString s_APIDLLlockTexture_00652c34
//   TerminatedCString s_APIDLLunlockTexture_00652c46
//   TerminatedCString s_APIDLLgetTextureInfo_00652c5a
//   TerminatedCString s_APIDLLsetVideoModeX_00652c6f
//   TerminatedCString s_APIDLLrestoreVideoModeX_00652c83
//   TerminatedCString s_APIDLLlockFrameX_00652c9b
//   TerminatedCString s_APIDLLunlockFrameX_00652cac
//   TerminatedCString s_APIDLLtoggleX_00652cbf
//   TerminatedCString s_APIDLLsetViewport_00652ccd
//   TerminatedCString s_APIDLLsetLightConstants_00652cdf
//   TerminatedCString s_APIDLLsetLightVector_00652cf7
//   TerminatedCString s_APIDLLsetAmbientLight_00652d0c
//   TerminatedCString s_APIDLLsetTransform_00652d22
//   TerminatedCString s_APIDLLpolyList_00652d35
//   TerminatedCString s_APIDLLgetTextureHandle_00652d44
//   TerminatedCString s_APIDLLselectTextureByHan_00652d5b
//   TerminatedCString s_APIDLLenableCulling_00652d77
//   TerminatedCString s_APIDLLenableClipping_00652d8b
//   TerminatedCString s_APIDLLsetTextureClamp_00652da0
//   TerminatedCString s_APIDLLsetFog_00652db6
//   TerminatedCString g_RendererDllName
//   int g_FullscreenMode
//   APIDLL_init* g_APIDLL_init
//   APIDLL_kill* g_APIDLL_kill
//   APIDLL_toggle* g_APIDLL_toggle
//   void* g_APIDLL_setVideoMode
//   APIDLL_setVideoMode2* g_APIDLL_setVideoMode2
//   APIDLL_restoreVideoMode* g_APIDLL_restoreVideoMode
//   APIDLL_beginScene* g_APIDLL_beginScene
//   APIDLL_endScene* g_APIDLL_endScene
//   APIDLL_lockFrame* g_APIDLL_lockFrame
//   APIDLL_unlockFrame* g_APIDLL_unlockFrame
//   APIDLL_selectTexture* g_APIDLL_selectTexture
//   APIDLL_updateTexture* g_APIDLL_updateTexture
//   APIDLL_selectTextureBGRA* g_APIDLL_selectTextureBGRA
//   APIDLL_updateTextureBGRA* g_APIDLL_updateTextureBGRA
//   APIDLL_setMipMapLevel* g_APIDLL_setMipMapLevel
//   APIDLL_drawPolygon* g_APIDLL_drawPolygon
//   APIDLL_drawPolygon2* g_APIDLL_drawPolygon2
//   APIDLL_drawPolyList* g_APIDLL_drawPolyList
//   APIDLL_drawPolyList2* g_APIDLL_drawPolyList2
//   APIDLL_drawPolyList3* g_APIDLL_drawPolyList3
//   APIDLL_addParticle* g_APIDLL_addParticle
//   APIDLL_flushParticleList* g_APIDLL_flushParticleList
//   APIDLL_add3dLine* g_APIDLL_add3dLine
//   APIDLL_flushLineList* g_APIDLL_flushLineList
//   APIDLL_clear* g_APIDLL_clear
//   APIDLL_setFogColor* g_APIDLL_setFogColor
//   APIDLL_sync* g_APIDLL_sync
//   APIDLL_clearZBuffer* g_APIDLL_clearZBuffer
//   APIDLL_clearZBox* g_APIDLL_clearZBox
//   APIDLL_setColorTable16* g_APIDLL_setColorTable16
//   void* g_APIDLL_GetDisplayContext
//   void* g_APIDLL_ReleaseDisplayContext
//   APIDLL_masterZBuffer* g_APIDLL_masterZBuffer
//   APIDLL_restoreZBuffer* g_APIDLL_restoreZBuffer
//   APIDLL_getVideoMemory* g_APIDLL_getVideoMemory
//   APIDLL_selectCard* g_APIDLL_selectCard
//   APIDLL_buildCardList* g_APIDLL_buildCardList
//   APIDLL_lockHoldBuffer* g_APIDLL_lockHoldBuffer
//   APIDLL_unlockHoldBuffer* g_APIDLL_unlockHoldBuffer
//   APIDLL_lockTexture* g_APIDLL_lockTexture
//   APIDLL_unlockTexture* g_APIDLL_unlockTexture
//   APIDLL_getTextureInfo* g_APIDLL_getTextureInfo
//   APIDLL_setVideoModeX* g_APIDLL_setVideoModeX
//   APIDLL_restoreVideoModeX* g_APIDLL_restoreVideoModeX
//   APIDLL_lockFrameX* g_APIDLL_lockFrameX
//   APIDLL_unlockFrameX* g_APIDLL_unlockFrameX
//   APIDLL_toggleX* g_APIDLL_toggleX
//   void* g_APIDLL_setViewport
//   void* g_APIDLL_setLightConstants
//   void* g_APIDLL_setLightVector
//   void* g_APIDLL_setAmbientLight
//   void* g_APIDLL_setTransform
//   void* g_APIDLL_polyList
//   void* g_APIDLL_getTextureHandle
//   void* g_APIDLL_selectTextureByHandle
//   void* g_APIDLL_enableCulling
//   void* g_APIDLL_enableClipping
//   void* g_APIDLL_setTextureClamp
//   void* g_APIDLL_setFog
//   int g_ExternalRendererActive
//   HMODULE g_RendererDLLHandle
//   int g_DLLFunctionsMissing
// Function calls:
//   wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   wincore_wddvmem.cpp_loadLibrary_FUN_005ede10
//   wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90
//   wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
//   wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20

#include "nocturne.h"

int __cdecl wincore_windll_cpp_initializeExternalRenderer_FUN_005b5ec0(void)

{
  bool bVar1;
  FARPROC pFVar2;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  CExternalRenderer CStack_3ba0;
  
  g_RendererDLLHandle = wincore_wddvmem_cpp_loadLibrary_FUN_005ede10(g_RendererDllName);
  if (g_RendererDLLHandle == (HMODULE)0x0) {
    g_FullscreenMode = (int)g_RendererDLLHandle;
    return 0;
  }
  pFVar2 = wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                     (g_RendererDLLHandle,"APIDLLInformation");
  if (pFVar2 == (FARPROC)0x0) {
    wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20();
    g_FullscreenMode = 0;
    return 0;
  }
  (*pFVar2)(g_RendererDLLHandle,&CStack_3ba0);
  wincore_windll_cpp_CExternalRenderer_ctor_FUN_005b7f90
            ((CExternalRenderer *)CStack_3ba0.renderer_dll_name);
  bVar1 = wincore_windll_cpp_CExternalRenderer_validate_FUN_005b7fe0
                    (&CStack_3ba0,(CExternalRenderer *)CStack_3ba0.renderer_dll_name);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20();
    g_FullscreenMode = 0;
    return 0;
  }
  g_DLLFunctionsMissing = 0;
  g_APIDLL_init =
       (APIDLL_init *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(g_RendererDLLHandle,"APIDLLinit");
  if (g_APIDLL_init == (APIDLL_init *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_kill =
       (APIDLL_kill *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(g_RendererDLLHandle,"APIDLLkill");
  if (g_APIDLL_kill == (APIDLL_kill *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_toggle =
       (APIDLL_toggle *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(g_RendererDLLHandle,"APIDLLtoggle");
  if (g_APIDLL_toggle == (APIDLL_toggle *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_setVideoMode =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetVideoMode");
  if ((FARPROC)g_APIDLL_setVideoMode == (FARPROC)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_setVideoMode2 =
       (APIDLL_setVideoMode2 *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetVideoMode2");
  if (g_APIDLL_setVideoMode2 == (APIDLL_setVideoMode2 *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_restoreVideoMode =
       (APIDLL_restoreVideoMode *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLrestoreVideoMode");
  if (g_APIDLL_restoreVideoMode == (APIDLL_restoreVideoMode *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_beginScene =
       (APIDLL_beginScene *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLbeginScene");
  if (g_APIDLL_beginScene == (APIDLL_beginScene *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_endScene =
       (APIDLL_endScene *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLendScene");
  if (g_APIDLL_endScene == (APIDLL_endScene *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_lockFrame =
       (APIDLL_lockFrame *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLlockFrame");
  if (g_APIDLL_lockFrame == (APIDLL_lockFrame *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_unlockFrame =
       (APIDLL_unlockFrame *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLunlockFrame");
  if (g_APIDLL_unlockFrame == (APIDLL_unlockFrame *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_selectTexture =
       (APIDLL_selectTexture *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLselectTexture");
  if (g_APIDLL_selectTexture == (APIDLL_selectTexture *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_updateTexture =
       (APIDLL_updateTexture *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLupdateTexture");
  if (g_APIDLL_updateTexture == (APIDLL_updateTexture *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_selectTextureBGRA =
       (APIDLL_selectTextureBGRA *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLselectTextureBGRA");
  g_APIDLL_updateTextureBGRA =
       (APIDLL_updateTextureBGRA *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLupdateTextureBGRA");
  g_APIDLL_setMipMapLevel =
       (APIDLL_setMipMapLevel *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetMipMapLevel");
  if (g_APIDLL_setMipMapLevel == (APIDLL_setMipMapLevel *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_drawPolygon =
       (APIDLL_drawPolygon *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLdrawPolygon");
  if (g_APIDLL_drawPolygon == (APIDLL_drawPolygon *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_drawPolygon2 =
       (APIDLL_drawPolygon2 *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLdrawPolygon2");
  if (g_APIDLL_drawPolygon2 == (APIDLL_drawPolygon2 *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_drawPolyList =
       (APIDLL_drawPolyList *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLdrawPolyList");
  g_APIDLL_drawPolyList2 =
       (APIDLL_drawPolyList2 *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLdrawPolyList2");
  g_APIDLL_drawPolyList3 =
       (APIDLL_drawPolyList3 *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLdrawPolyList3");
  g_APIDLL_addParticle =
       (APIDLL_addParticle *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLaddParticle");
  if (g_APIDLL_addParticle == (APIDLL_addParticle *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_flushParticleList =
       (APIDLL_flushParticleList *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLflushParticleList");
  if (g_APIDLL_flushParticleList == (APIDLL_flushParticleList *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_add3dLine =
       (APIDLL_add3dLine *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLadd3dLine");
  if (g_APIDLL_add3dLine == (APIDLL_add3dLine *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_flushLineList =
       (APIDLL_flushLineList *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLflushLineList");
  if (g_APIDLL_flushLineList == (APIDLL_flushLineList *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_clear =
       (APIDLL_clear *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(g_RendererDLLHandle,"APIDLLclear");
  if (g_APIDLL_clear == (APIDLL_clear *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_setFogColor =
       (APIDLL_setFogColor *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetFogColor");
  if (g_APIDLL_setFogColor == (APIDLL_setFogColor *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_sync =
       (APIDLL_sync *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(g_RendererDLLHandle,"APIDLLsync");
  if (g_APIDLL_sync == (APIDLL_sync *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_clearZBuffer =
       (APIDLL_clearZBuffer *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLclearZBuffer");
  if (g_APIDLL_clearZBuffer == (APIDLL_clearZBuffer *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_clearZBox =
       (APIDLL_clearZBox *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLclearZBox");
  if (g_APIDLL_clearZBox == (APIDLL_clearZBox *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_setColorTable16 =
       (APIDLL_setColorTable16 *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetColorTable16");
  if (g_APIDLL_setColorTable16 == (APIDLL_setColorTable16 *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_GetDisplayContext =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLGetDisplayContext");
  if ((FARPROC)g_APIDLL_GetDisplayContext == (FARPROC)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_ReleaseDisplayContext =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLReleaseDisplayContext");
  if ((FARPROC)g_APIDLL_ReleaseDisplayContext == (FARPROC)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_masterZBuffer =
       (APIDLL_masterZBuffer *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLmasterZBuffer");
  if (g_APIDLL_masterZBuffer == (APIDLL_masterZBuffer *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_restoreZBuffer =
       (APIDLL_restoreZBuffer *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLrestoreZBuffer");
  if (g_APIDLL_restoreZBuffer == (APIDLL_restoreZBuffer *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_getVideoMemory =
       (APIDLL_getVideoMemory *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLgetVideoMemory");
  if (g_APIDLL_getVideoMemory == (APIDLL_getVideoMemory *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_selectCard =
       (APIDLL_selectCard *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLselectCard");
  if (g_APIDLL_selectCard == (APIDLL_selectCard *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_buildCardList =
       (APIDLL_buildCardList *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLbuildCardList");
  if (g_APIDLL_buildCardList == (APIDLL_buildCardList *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_lockHoldBuffer =
       (APIDLL_lockHoldBuffer *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLlockHoldBuffer");
  g_APIDLL_unlockHoldBuffer =
       (APIDLL_unlockHoldBuffer *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLunlockHoldBuffer");
  g_APIDLL_lockTexture =
       (APIDLL_lockTexture *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLlockTexture");
  g_APIDLL_unlockTexture =
       (APIDLL_unlockTexture *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLunlockTexture");
  g_APIDLL_getTextureInfo =
       (APIDLL_getTextureInfo *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLgetTextureInfo");
  if (g_APIDLL_getTextureInfo == (APIDLL_getTextureInfo *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_setVideoModeX =
       (APIDLL_setVideoModeX *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetVideoModeX");
  g_APIDLL_restoreVideoModeX =
       (APIDLL_restoreVideoModeX *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLrestoreVideoModeX");
  g_APIDLL_lockFrameX =
       (APIDLL_lockFrameX *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLlockFrameX");
  g_APIDLL_unlockFrameX =
       (APIDLL_unlockFrameX *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLunlockFrameX");
  g_APIDLL_toggleX =
       (APIDLL_toggleX *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(g_RendererDLLHandle,"APIDLLtoggleX")
  ;
  g_APIDLL_setViewport =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetViewport");
  g_APIDLL_setLightConstants =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetLightConstants");
  g_APIDLL_setLightVector =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetLightVector");
  g_APIDLL_setAmbientLight =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetAmbientLight");
  g_APIDLL_setTransform =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetTransform");
  g_APIDLL_polyList =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLpolyList");
  g_APIDLL_getTextureHandle =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLgetTextureHandle");
  g_APIDLL_selectTextureByHandle =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLselectTextureByHandle");
  g_APIDLL_enableCulling =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLenableCulling");
  g_APIDLL_enableClipping =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLenableClipping");
  g_APIDLL_setTextureClamp =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetTextureClamp");
  g_APIDLL_setFog =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(g_RendererDLLHandle,"APIDLLsetFog");
  if (g_DLLFunctionsMissing == 0) {
    g_ExternalRendererActive = 1;
    return 1;
  }
  wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20();
  g_FullscreenMode = 0;
  return 0;
}


// Assembly code:
// 005b5ec0: PUSH EBX
//   Label: wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0
// 005b5ec1: PUSH ESI
// 005b5ec2: PUSH EDI
// 005b5ec3: PUSH EBP
// 005b5ec4: SUB ESP,0x3b90
// 005b5eca: PUSH 0x684010
//   XREF to: 00684010 (DATA)
// 005b5ecf: CALL wincore_wddvmem.cpp_loadLibrary_FUN_005ede10
//   XREF to: 005ede10 (UNCONDITIONAL_CALL)
// 005b5ed4: ADD ESP,0x4
// 005b5ed7: MOV [0x03f6b97c],EAX
//   XREF to: 03f6b97c (WRITE)
// 005b5edc: TEST EAX,EAX
// 005b5ede: JNZ 0x005b5ef0
//   XREF to: 005b5ef0 (CONDITIONAL_JUMP)
// 005b5ee0: MOV [0x03f6b878],EAX
//   XREF to: 03f6b878 (WRITE)
// 005b5ee5: ADD ESP,0x3b90
// 005b5eeb: POP EBP
// 005b5eec: POP EDI
// 005b5eed: POP ESI
// 005b5eee: POP EBX
// 005b5eef: RET
// 005b5ef0: PUSH 0x65293f
//   Label: LAB_005b5ef0
//   XREF to: 0065293f (DATA)
// 005b5ef5: PUSH EAX
// 005b5ef6: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b5efb: ADD ESP,0x8
// 005b5efe: MOV EDX,EAX
// 005b5f00: TEST EAX,EAX
// 005b5f02: JZ 0x005b66f3
//   XREF to: 005b66f3 (CONDITIONAL_JUMP)
// 005b5f08: MOV EAX,ESP
// 005b5f0a: PUSH EAX
// 005b5f0b: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b5f11: PUSH ECX
// 005b5f12: CALL EDX
// 005b5f14: ADD ESP,0x8
// 005b5f17: LEA EAX,[ESP + 0x1dc8]
// 005b5f1e: PUSH EAX
// 005b5f1f: CALL wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90
//   XREF to: 005b7f90 (UNCONDITIONAL_CALL)
// 005b5f24: ADD ESP,0x4
// 005b5f27: LEA EAX,[ESP + 0x1dc8]
// 005b5f2e: PUSH EAX
// 005b5f2f: LEA EAX,[ESP + 0x4]
// 005b5f33: PUSH EAX
// 005b5f34: CALL wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
//   XREF to: 005b7fe0 (UNCONDITIONAL_CALL)
// 005b5f39: ADD ESP,0x8
// 005b5f3c: TEST EAX,EAX
// 005b5f3e: JZ 0x005b670d
//   XREF to: 005b670d (CONDITIONAL_JUMP)
// 005b5f44: PUSH 0x652951
//   XREF to: 00652951 (DATA)
// 005b5f49: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b5f4f: XOR ESI,ESI
// 005b5f51: PUSH EDI
// 005b5f52: MOV dword ptr [0x03f6b994],ESI
//   XREF to: 03f6b994 (WRITE)
// 005b5f58: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b5f5d: ADD ESP,0x8
// 005b5f60: MOV [0x03f6b88c],EAX
//   XREF to: 03f6b88c (WRITE)
// 005b5f65: TEST EAX,EAX
// 005b5f67: JNZ 0x005b5f73
//   XREF to: 005b5f73 (CONDITIONAL_JUMP)
// 005b5f69: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b5f73: PUSH 0x65295c
//   Label: LAB_005b5f73
//   XREF to: 0065295c (DATA)
// 005b5f78: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b5f7d: PUSH EAX
// 005b5f7e: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b5f83: ADD ESP,0x8
// 005b5f86: MOV [0x03f6b890],EAX
//   XREF to: 03f6b890 (WRITE)
// 005b5f8b: TEST EAX,EAX
// 005b5f8d: JNZ 0x005b5f99
//   XREF to: 005b5f99 (CONDITIONAL_JUMP)
// 005b5f8f: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b5f99: PUSH 0x652967
//   Label: LAB_005b5f99
//   XREF to: 00652967 (DATA)
// 005b5f9e: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b5fa4: PUSH ECX
// 005b5fa5: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b5faa: ADD ESP,0x8
// 005b5fad: MOV [0x03f6b894],EAX
//   XREF to: 03f6b894 (WRITE)
// 005b5fb2: TEST EAX,EAX
// 005b5fb4: JNZ 0x005b5fc0
//   XREF to: 005b5fc0 (CONDITIONAL_JUMP)
// 005b5fb6: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b5fc0: PUSH 0x652974
//   Label: LAB_005b5fc0
//   XREF to: 00652974 (DATA)
// 005b5fc5: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b5fcb: PUSH ESI
// 005b5fcc: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b5fd1: ADD ESP,0x8
// 005b5fd4: MOV [0x03f6b898],EAX
//   XREF to: 03f6b898 (WRITE)
// 005b5fd9: TEST EAX,EAX
// 005b5fdb: JNZ 0x005b5fe7
//   XREF to: 005b5fe7 (CONDITIONAL_JUMP)
// 005b5fdd: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b5fe7: PUSH 0x652987
//   Label: LAB_005b5fe7
//   XREF to: 00652987 (DATA)
// 005b5fec: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b5ff2: PUSH EBP
// 005b5ff3: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b5ff8: ADD ESP,0x8
// 005b5ffb: MOV [0x03f6b89c],EAX
//   XREF to: 03f6b89c (WRITE)
// 005b6000: TEST EAX,EAX
// 005b6002: JNZ 0x005b600e
//   XREF to: 005b600e (CONDITIONAL_JUMP)
// 005b6004: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b600e: PUSH 0x65299b
//   Label: LAB_005b600e
//   XREF to: 0065299b (DATA)
// 005b6013: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6019: PUSH EDX
// 005b601a: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b601f: ADD ESP,0x8
// 005b6022: MOV [0x03f6b8a0],EAX
//   XREF to: 03f6b8a0 (WRITE)
// 005b6027: TEST EAX,EAX
// 005b6029: JNZ 0x005b6035
//   XREF to: 005b6035 (CONDITIONAL_JUMP)
// 005b602b: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6035: PUSH 0x6529b2
//   Label: LAB_005b6035
//   XREF to: 006529b2 (DATA)
// 005b603a: MOV EBX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6040: PUSH EBX
// 005b6041: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6046: ADD ESP,0x8
// 005b6049: MOV [0x03f6b8a4],EAX
//   XREF to: 03f6b8a4 (WRITE)
// 005b604e: TEST EAX,EAX
// 005b6050: JNZ 0x005b605c
//   XREF to: 005b605c (CONDITIONAL_JUMP)
// 005b6052: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b605c: PUSH 0x6529c3
//   Label: LAB_005b605c
//   XREF to: 006529c3 (DATA)
// 005b6061: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6067: PUSH EDI
// 005b6068: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b606d: ADD ESP,0x8
// 005b6070: MOV [0x03f6b8a8],EAX
//   XREF to: 03f6b8a8 (WRITE)
// 005b6075: TEST EAX,EAX
// 005b6077: JNZ 0x005b6083
//   XREF to: 005b6083 (CONDITIONAL_JUMP)
// 005b6079: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6083: PUSH 0x6529d2
//   Label: LAB_005b6083
//   XREF to: 006529d2 (DATA)
// 005b6088: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b608d: PUSH EAX
// 005b608e: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6093: ADD ESP,0x8
// 005b6096: MOV [0x03f6b8ac],EAX
//   XREF to: 03f6b8ac (WRITE)
// 005b609b: TEST EAX,EAX
// 005b609d: JNZ 0x005b60a9
//   XREF to: 005b60a9 (CONDITIONAL_JUMP)
// 005b609f: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b60a9: PUSH 0x6529e2
//   Label: LAB_005b60a9
//   XREF to: 006529e2 (DATA)
// 005b60ae: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b60b4: PUSH ECX
// 005b60b5: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b60ba: ADD ESP,0x8
// 005b60bd: MOV [0x03f6b8b0],EAX
//   XREF to: 03f6b8b0 (WRITE)
// 005b60c2: TEST EAX,EAX
// 005b60c4: JNZ 0x005b60d0
//   XREF to: 005b60d0 (CONDITIONAL_JUMP)
// 005b60c6: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b60d0: PUSH 0x6529f4
//   Label: LAB_005b60d0
//   XREF to: 006529f4 (DATA)
// 005b60d5: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b60db: PUSH ESI
// 005b60dc: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b60e1: ADD ESP,0x8
// 005b60e4: MOV [0x03f6b8b4],EAX
//   XREF to: 03f6b8b4 (WRITE)
// 005b60e9: TEST EAX,EAX
// 005b60eb: JNZ 0x005b60f7
//   XREF to: 005b60f7 (CONDITIONAL_JUMP)
// 005b60ed: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b60f7: PUSH 0x652a08
//   Label: LAB_005b60f7
//   XREF to: 00652a08 (DATA)
// 005b60fc: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6102: PUSH EBP
// 005b6103: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6108: ADD ESP,0x8
// 005b610b: MOV [0x03f6b8b8],EAX
//   XREF to: 03f6b8b8 (WRITE)
// 005b6110: TEST EAX,EAX
// 005b6112: JNZ 0x005b611e
//   XREF to: 005b611e (CONDITIONAL_JUMP)
// 005b6114: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b611e: PUSH 0x652a1c
//   Label: LAB_005b611e
//   XREF to: 00652a1c (DATA)
// 005b6123: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6129: PUSH EDX
// 005b612a: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b612f: ADD ESP,0x8
// 005b6132: PUSH 0x652a34
//   XREF to: 00652a34 (DATA)
// 005b6137: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b613d: PUSH ECX
// 005b613e: MOV [0x03f6b8bc],EAX
//   XREF to: 03f6b8bc (WRITE)
// 005b6143: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6148: ADD ESP,0x8
// 005b614b: PUSH 0x652a4c
//   XREF to: 00652a4c (DATA)
// 005b6150: MOV EBX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6156: PUSH EBX
// 005b6157: MOV [0x03f6b8c0],EAX
//   XREF to: 03f6b8c0 (WRITE)
// 005b615c: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6161: ADD ESP,0x8
// 005b6164: MOV [0x03f6b8c4],EAX
//   XREF to: 03f6b8c4 (WRITE)
// 005b6169: TEST EAX,EAX
// 005b616b: JNZ 0x005b6177
//   XREF to: 005b6177 (CONDITIONAL_JUMP)
// 005b616d: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6177: PUSH 0x652a61
//   Label: LAB_005b6177
//   XREF to: 00652a61 (DATA)
// 005b617c: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6182: PUSH EDI
// 005b6183: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6188: ADD ESP,0x8
// 005b618b: MOV [0x03f6b8c8],EAX
//   XREF to: 03f6b8c8 (WRITE)
// 005b6190: TEST EAX,EAX
// 005b6192: JNZ 0x005b619e
//   XREF to: 005b619e (CONDITIONAL_JUMP)
// 005b6194: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b619e: PUSH 0x652a73
//   Label: LAB_005b619e
//   XREF to: 00652a73 (DATA)
// 005b61a3: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b61a8: PUSH EAX
// 005b61a9: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b61ae: ADD ESP,0x8
// 005b61b1: MOV [0x03f6b8cc],EAX
//   XREF to: 03f6b8cc (WRITE)
// 005b61b6: TEST EAX,EAX
// 005b61b8: JNZ 0x005b61c4
//   XREF to: 005b61c4 (CONDITIONAL_JUMP)
// 005b61ba: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b61c4: PUSH 0x652a86
//   Label: LAB_005b61c4
//   XREF to: 00652a86 (DATA)
// 005b61c9: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b61cf: PUSH ECX
// 005b61d0: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b61d5: ADD ESP,0x8
// 005b61d8: PUSH 0x652a99
//   XREF to: 00652a99 (DATA)
// 005b61dd: MOV EBX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b61e3: PUSH EBX
// 005b61e4: MOV [0x03f6b8d0],EAX
//   XREF to: 03f6b8d0 (WRITE)
// 005b61e9: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b61ee: ADD ESP,0x8
// 005b61f1: PUSH 0x652aad
//   XREF to: 00652aad (DATA)
// 005b61f6: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b61fc: PUSH ESI
// 005b61fd: MOV [0x03f6b8d4],EAX
//   XREF to: 03f6b8d4 (WRITE)
// 005b6202: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6207: ADD ESP,0x8
// 005b620a: PUSH 0x652ac1
//   XREF to: 00652ac1 (DATA)
// 005b620f: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6215: PUSH EDI
// 005b6216: MOV [0x03f6b8d8],EAX
//   XREF to: 03f6b8d8 (WRITE)
// 005b621b: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6220: ADD ESP,0x8
// 005b6223: MOV [0x03f6b8dc],EAX
//   XREF to: 03f6b8dc (WRITE)
// 005b6228: TEST EAX,EAX
// 005b622a: JNZ 0x005b6236
//   XREF to: 005b6236 (CONDITIONAL_JUMP)
// 005b622c: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6236: PUSH 0x652ad3
//   Label: LAB_005b6236
//   XREF to: 00652ad3 (DATA)
// 005b623b: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6240: PUSH EAX
// 005b6241: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6246: ADD ESP,0x8
// 005b6249: MOV [0x03f6b8e0],EAX
//   XREF to: 03f6b8e0 (WRITE)
// 005b624e: TEST EAX,EAX
// 005b6250: JNZ 0x005b625c
//   XREF to: 005b625c (CONDITIONAL_JUMP)
// 005b6252: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b625c: PUSH 0x652aeb
//   Label: LAB_005b625c
//   XREF to: 00652aeb (DATA)
// 005b6261: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6267: PUSH ECX
// 005b6268: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b626d: ADD ESP,0x8
// 005b6270: MOV [0x03f6b8e4],EAX
//   XREF to: 03f6b8e4 (WRITE)
// 005b6275: TEST EAX,EAX
// 005b6277: JNZ 0x005b6283
//   XREF to: 005b6283 (CONDITIONAL_JUMP)
// 005b6279: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6283: PUSH 0x652afb
//   Label: LAB_005b6283
//   XREF to: 00652afb (DATA)
// 005b6288: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b628e: PUSH ESI
// 005b628f: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6294: ADD ESP,0x8
// 005b6297: MOV [0x03f6b8e8],EAX
//   XREF to: 03f6b8e8 (WRITE)
// 005b629c: TEST EAX,EAX
// 005b629e: JNZ 0x005b62aa
//   XREF to: 005b62aa (CONDITIONAL_JUMP)
// 005b62a0: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b62aa: PUSH 0x652b0f
//   Label: LAB_005b62aa
//   XREF to: 00652b0f (DATA)
// 005b62af: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b62b5: PUSH EBP
// 005b62b6: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b62bb: ADD ESP,0x8
// 005b62be: MOV [0x03f6b8ec],EAX
//   XREF to: 03f6b8ec (WRITE)
// 005b62c3: TEST EAX,EAX
// 005b62c5: JNZ 0x005b62d1
//   XREF to: 005b62d1 (CONDITIONAL_JUMP)
// 005b62c7: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b62d1: PUSH 0x652b1b
//   Label: LAB_005b62d1
//   XREF to: 00652b1b (DATA)
// 005b62d6: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b62dc: PUSH EDX
// 005b62dd: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b62e2: ADD ESP,0x8
// 005b62e5: MOV [0x03f6b8f0],EAX
//   XREF to: 03f6b8f0 (WRITE)
// 005b62ea: TEST EAX,EAX
// 005b62ec: JNZ 0x005b62f8
//   XREF to: 005b62f8 (CONDITIONAL_JUMP)
// 005b62ee: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b62f8: PUSH 0x652b2d
//   Label: LAB_005b62f8
//   XREF to: 00652b2d (DATA)
// 005b62fd: MOV EBX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6303: PUSH EBX
// 005b6304: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6309: ADD ESP,0x8
// 005b630c: MOV [0x03f6b8f4],EAX
//   XREF to: 03f6b8f4 (WRITE)
// 005b6311: TEST EAX,EAX
// 005b6313: JNZ 0x005b631f
//   XREF to: 005b631f (CONDITIONAL_JUMP)
// 005b6315: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b631f: PUSH 0x652b38
//   Label: LAB_005b631f
//   XREF to: 00652b38 (DATA)
// 005b6324: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b632a: PUSH EDI
// 005b632b: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6330: ADD ESP,0x8
// 005b6333: MOV [0x03f6b8f8],EAX
//   XREF to: 03f6b8f8 (WRITE)
// 005b6338: TEST EAX,EAX
// 005b633a: JNZ 0x005b6346
//   XREF to: 005b6346 (CONDITIONAL_JUMP)
// 005b633c: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6346: PUSH 0x652b4b
//   Label: LAB_005b6346
//   XREF to: 00652b4b (DATA)
// 005b634b: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6350: PUSH EAX
// 005b6351: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6356: ADD ESP,0x8
// 005b6359: MOV [0x03f6b8fc],EAX
//   XREF to: 03f6b8fc (WRITE)
// 005b635e: TEST EAX,EAX
// 005b6360: JNZ 0x005b636c
//   XREF to: 005b636c (CONDITIONAL_JUMP)
// 005b6362: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b636c: PUSH 0x652b5b
//   Label: LAB_005b636c
//   XREF to: 00652b5b (DATA)
// 005b6371: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6377: PUSH ECX
// 005b6378: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b637d: ADD ESP,0x8
// 005b6380: MOV [0x03f6b900],EAX
//   XREF to: 03f6b900 (WRITE)
// 005b6385: TEST EAX,EAX
// 005b6387: JNZ 0x005b6393
//   XREF to: 005b6393 (CONDITIONAL_JUMP)
// 005b6389: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6393: PUSH 0x652b71
//   Label: LAB_005b6393
//   XREF to: 00652b71 (DATA)
// 005b6398: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b639e: PUSH ESI
// 005b639f: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b63a4: ADD ESP,0x8
// 005b63a7: MOV [0x03f6b904],EAX
//   XREF to: 03f6b904 (WRITE)
// 005b63ac: TEST EAX,EAX
// 005b63ae: JNZ 0x005b63ba
//   XREF to: 005b63ba (CONDITIONAL_JUMP)
// 005b63b0: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b63ba: PUSH 0x652b89
//   Label: LAB_005b63ba
//   XREF to: 00652b89 (DATA)
// 005b63bf: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b63c5: PUSH EBP
// 005b63c6: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b63cb: ADD ESP,0x8
// 005b63ce: MOV [0x03f6b908],EAX
//   XREF to: 03f6b908 (WRITE)
// 005b63d3: TEST EAX,EAX
// 005b63d5: JNZ 0x005b63e1
//   XREF to: 005b63e1 (CONDITIONAL_JUMP)
// 005b63d7: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b63e1: PUSH 0x652ba5
//   Label: LAB_005b63e1
//   XREF to: 00652ba5 (DATA)
// 005b63e6: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b63ec: PUSH EDX
// 005b63ed: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b63f2: ADD ESP,0x8
// 005b63f5: MOV [0x03f6b90c],EAX
//   XREF to: 03f6b90c (WRITE)
// 005b63fa: TEST EAX,EAX
// 005b63fc: JNZ 0x005b6408
//   XREF to: 005b6408 (CONDITIONAL_JUMP)
// 005b63fe: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6408: PUSH 0x652bb9
//   Label: LAB_005b6408
//   XREF to: 00652bb9 (DATA)
// 005b640d: MOV EBX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6413: PUSH EBX
// 005b6414: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6419: ADD ESP,0x8
// 005b641c: MOV [0x03f6b910],EAX
//   XREF to: 03f6b910 (WRITE)
// 005b6421: TEST EAX,EAX
// 005b6423: JNZ 0x005b642f
//   XREF to: 005b642f (CONDITIONAL_JUMP)
// 005b6425: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b642f: PUSH 0x652bce
//   Label: LAB_005b642f
//   XREF to: 00652bce (DATA)
// 005b6434: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b643a: PUSH EDI
// 005b643b: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6440: ADD ESP,0x8
// 005b6443: MOV [0x03f6b914],EAX
//   XREF to: 03f6b914 (WRITE)
// 005b6448: TEST EAX,EAX
// 005b644a: JNZ 0x005b6456
//   XREF to: 005b6456 (CONDITIONAL_JUMP)
// 005b644c: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6456: PUSH 0x652be3
//   Label: LAB_005b6456
//   XREF to: 00652be3 (DATA)
// 005b645b: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6460: PUSH EAX
// 005b6461: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6466: ADD ESP,0x8
// 005b6469: MOV [0x03f6b918],EAX
//   XREF to: 03f6b918 (WRITE)
// 005b646e: TEST EAX,EAX
// 005b6470: JNZ 0x005b647c
//   XREF to: 005b647c (CONDITIONAL_JUMP)
// 005b6472: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b647c: PUSH 0x652bf4
//   Label: LAB_005b647c
//   XREF to: 00652bf4 (DATA)
// 005b6481: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6487: PUSH ECX
// 005b6488: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b648d: ADD ESP,0x8
// 005b6490: MOV [0x03f6b91c],EAX
//   XREF to: 03f6b91c (WRITE)
// 005b6495: TEST EAX,EAX
// 005b6497: JNZ 0x005b64a3
//   XREF to: 005b64a3 (CONDITIONAL_JUMP)
// 005b6499: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b64a3: PUSH 0x652c08
//   Label: LAB_005b64a3
//   XREF to: 00652c08 (DATA)
// 005b64a8: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b64ae: PUSH ESI
// 005b64af: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b64b4: ADD ESP,0x8
// 005b64b7: PUSH 0x652c1d
//   XREF to: 00652c1d (DATA)
// 005b64bc: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b64c2: PUSH EDI
// 005b64c3: MOV [0x03f6b920],EAX
//   XREF to: 03f6b920 (WRITE)
// 005b64c8: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b64cd: ADD ESP,0x8
// 005b64d0: PUSH 0x652c34
//   XREF to: 00652c34 (DATA)
// 005b64d5: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b64db: PUSH EBP
// 005b64dc: MOV [0x03f6b924],EAX
//   XREF to: 03f6b924 (WRITE)
// 005b64e1: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b64e6: ADD ESP,0x8
// 005b64e9: PUSH 0x652c46
//   XREF to: 00652c46 (DATA)
// 005b64ee: MOV [0x03f6b928],EAX
//   XREF to: 03f6b928 (WRITE)
// 005b64f3: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b64f8: PUSH EAX
// 005b64f9: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b64fe: ADD ESP,0x8
// 005b6501: PUSH 0x652c5a
//   XREF to: 00652c5a (DATA)
// 005b6506: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b650c: PUSH EDX
// 005b650d: MOV [0x03f6b92c],EAX
//   XREF to: 03f6b92c (WRITE)
// 005b6512: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6517: ADD ESP,0x8
// 005b651a: MOV [0x03f6b930],EAX
//   XREF to: 03f6b930 (WRITE)
// 005b651f: TEST EAX,EAX
// 005b6521: JNZ 0x005b652d
//   XREF to: 005b652d (CONDITIONAL_JUMP)
// 005b6523: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b652d: PUSH 0x652c6f
//   Label: LAB_005b652d
//   XREF to: 00652c6f (DATA)
// 005b6532: MOV EBX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6538: PUSH EBX
// 005b6539: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b653e: ADD ESP,0x8
// 005b6541: PUSH 0x652c83
//   XREF to: 00652c83 (DATA)
// 005b6546: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b654c: PUSH ESI
// 005b654d: MOV [0x03f6b934],EAX
//   XREF to: 03f6b934 (WRITE)
// 005b6552: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6557: ADD ESP,0x8
// 005b655a: PUSH 0x652c9b
//   XREF to: 00652c9b (DATA)
// 005b655f: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6565: PUSH EDI
// 005b6566: MOV [0x03f6b938],EAX
//   XREF to: 03f6b938 (WRITE)
// 005b656b: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6570: ADD ESP,0x8
// 005b6573: PUSH 0x652cac
//   XREF to: 00652cac (DATA)
// 005b6578: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b657e: PUSH EBP
// 005b657f: MOV [0x03f6b93c],EAX
//   XREF to: 03f6b93c (WRITE)
// 005b6584: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6589: ADD ESP,0x8
// 005b658c: PUSH 0x652cbf
//   XREF to: 00652cbf (DATA)
// 005b6591: MOV [0x03f6b940],EAX
//   XREF to: 03f6b940 (WRITE)
// 005b6596: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b659b: PUSH EAX
// 005b659c: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b65a1: ADD ESP,0x8
// 005b65a4: PUSH 0x652ccd
//   XREF to: 00652ccd (DATA)
// 005b65a9: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b65af: PUSH EDX
// 005b65b0: MOV [0x03f6b944],EAX
//   XREF to: 03f6b944 (WRITE)
// 005b65b5: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b65ba: ADD ESP,0x8
// 005b65bd: PUSH 0x652cdf
//   XREF to: 00652cdf (DATA)
// 005b65c2: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b65c8: PUSH ECX
// 005b65c9: MOV [0x03f6b948],EAX
//   XREF to: 03f6b948 (WRITE)
// 005b65ce: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b65d3: ADD ESP,0x8
// 005b65d6: PUSH 0x652cf7
//   XREF to: 00652cf7 (DATA)
// 005b65db: MOV EBX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b65e1: PUSH EBX
// 005b65e2: MOV [0x03f6b94c],EAX
//   XREF to: 03f6b94c (WRITE)
// 005b65e7: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b65ec: ADD ESP,0x8
// 005b65ef: PUSH 0x652d0c
//   XREF to: 00652d0c (DATA)
// 005b65f4: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b65fa: PUSH ESI
// 005b65fb: MOV [0x03f6b950],EAX
//   XREF to: 03f6b950 (WRITE)
// 005b6600: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6605: ADD ESP,0x8
// 005b6608: PUSH 0x652d22
//   XREF to: 00652d22 (DATA)
// 005b660d: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6613: PUSH EDI
// 005b6614: MOV [0x03f6b954],EAX
//   XREF to: 03f6b954 (WRITE)
// 005b6619: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b661e: ADD ESP,0x8
// 005b6621: PUSH 0x652d35
//   XREF to: 00652d35 (DATA)
// 005b6626: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b662c: PUSH EBP
// 005b662d: MOV [0x03f6b958],EAX
//   XREF to: 03f6b958 (WRITE)
// 005b6632: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6637: ADD ESP,0x8
// 005b663a: PUSH 0x652d44
//   XREF to: 00652d44 (DATA)
// 005b663f: MOV [0x03f6b95c],EAX
//   XREF to: 03f6b95c (WRITE)
// 005b6644: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6649: PUSH EAX
// 005b664a: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b664f: ADD ESP,0x8
// 005b6652: PUSH 0x652d5b
//   XREF to: 00652d5b (DATA)
// 005b6657: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b665d: PUSH EDX
// 005b665e: MOV [0x03f6b960],EAX
//   XREF to: 03f6b960 (WRITE)
// 005b6663: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6668: ADD ESP,0x8
// 005b666b: PUSH 0x652d77
//   XREF to: 00652d77 (DATA)
// 005b6670: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6676: PUSH ECX
// 005b6677: MOV [0x03f6b964],EAX
//   XREF to: 03f6b964 (WRITE)
// 005b667c: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6681: ADD ESP,0x8
// 005b6684: PUSH 0x652d8b
//   XREF to: 00652d8b (DATA)
// 005b6689: MOV EBX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b668f: PUSH EBX
// 005b6690: MOV [0x03f6b968],EAX
//   XREF to: 03f6b968 (WRITE)
// 005b6695: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b669a: ADD ESP,0x8
// 005b669d: PUSH 0x652da0
//   XREF to: 00652da0 (DATA)
// 005b66a2: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b66a8: PUSH ESI
// 005b66a9: MOV [0x03f6b96c],EAX
//   XREF to: 03f6b96c (WRITE)
// 005b66ae: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b66b3: ADD ESP,0x8
// 005b66b6: PUSH 0x652db6
//   XREF to: 00652db6 (DATA)
// 005b66bb: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b66c1: PUSH EDI
// 005b66c2: MOV [0x03f6b970],EAX
//   XREF to: 03f6b970 (WRITE)
// 005b66c7: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b66cc: MOV EBP,dword ptr [0x03f6b994]
//   XREF to: 03f6b994 (READ)
// 005b66d2: ADD ESP,0x8
// 005b66d5: MOV [0x03f6b974],EAX
//   XREF to: 03f6b974 (WRITE)
// 005b66da: TEST EBP,EBP
// 005b66dc: JNZ 0x005b6727
//   XREF to: 005b6727 (CONDITIONAL_JUMP)
// 005b66de: MOV EAX,0x1
// 005b66e3: MOV [0x03f6b978],EAX
//   XREF to: 03f6b978 (WRITE)
// 005b66e8: ADD ESP,0x3b90
// 005b66ee: POP EBP
// 005b66ef: POP EDI
// 005b66f0: POP ESI
// 005b66f1: POP EBX
// 005b66f2: RET
// 005b66f3: CALL wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
//   Label: LAB_005b66f3
//   XREF to: 005b5d20 (UNCONDITIONAL_CALL)
// 005b66f8: XOR ECX,ECX
// 005b66fa: XOR EAX,EAX
// 005b66fc: MOV dword ptr [0x03f6b878],ECX
//   XREF to: 03f6b878 (WRITE)
// 005b6702: ADD ESP,0x3b90
// 005b6708: POP EBP
// 005b6709: POP EDI
// 005b670a: POP ESI
// 005b670b: POP EBX
// 005b670c: RET
// 005b670d: CALL wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
//   Label: LAB_005b670d
//   XREF to: 005b5d20 (UNCONDITIONAL_CALL)
// 005b6712: XOR EBX,EBX
// 005b6714: XOR EAX,EAX
// 005b6716: MOV dword ptr [0x03f6b878],EBX
//   XREF to: 03f6b878 (WRITE)
// 005b671c: ADD ESP,0x3b90
// 005b6722: POP EBP
// 005b6723: POP EDI
// 005b6724: POP ESI
// 005b6725: POP EBX
// 005b6726: RET
// 005b6727: CALL wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
//   Label: LAB_005b6727
//   XREF to: 005b5d20 (UNCONDITIONAL_CALL)
// 005b672c: XOR EDX,EDX
// 005b672e: XOR EAX,EAX
// 005b6730: MOV dword ptr [0x03f6b878],EDX
//   XREF to: 03f6b878 (WRITE)
// 005b6736: ADD ESP,0x3b90
// 005b673c: POP EBP
// 005b673d: POP EDI
// 005b673e: POP ESI
// 005b673f: POP EBX
// 005b6740: RET
