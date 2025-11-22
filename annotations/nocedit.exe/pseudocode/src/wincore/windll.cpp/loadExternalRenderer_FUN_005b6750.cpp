// Name: wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
// Address: 005b6750
// Address Range: [[005b6750, 005b71d7]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_loadExternalRenderer_FUN_005b6750(HWND window_handle)
// Cross-references:
//   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 (00510c80) at 00511245 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10 (005ecc10) at 005ecd39 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460 (005b7460) at 005b748a [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_switchRenderer_FUN_005b8140 (005b8140) at 005b817a [UNCONDITIONAL_CALL]
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
//   int g_TextureFilteringEnabled = 0x1
//   int g_CurrentTextureDimension = 0x100
//   int g_CurrentAlphaValue = 0xff
//   int g_RenderingQuality = 0x1
//   TerminatedCString g_RendererDllName
//   int g_SystemInitialized = 0x1
//   int g_VideoMemorySize = 0x1
//   int g_MaxTextureSize = 0x40
//   int g_SystemMemorySize = 0x3c000
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_RedBitCount
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_GreenBitCount
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   int g_BlueBitCount
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ActiveRenderColor
//   int g_CurrentLightingValue
//   int g_TextureBits
//   int g_BlendMode
//   int g_ProcessorType
//   int g_FullscreenMode
//   int g_RendererHandle
//   void* g_FrameBufferPtr
//   int g_PodSystemVersion
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
//   HWND g_StoredWindowHandle
//   int g_DLLFunctionsMissing
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   wincore_wddvmem.cpp_loadLibrary_FUN_005ede10
//   wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90
//   wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
//   wincore_windll.cpp_selectCard_FUN_005b7d90
//   wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20

#include "nocturne.h"

int __cdecl wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(HWND window_handle)

{
  HWND pHVar1;
  bool bVar2;
  FARPROC pFVar3;
  undefined3 extraout_var;
  int iVar4;
  BADSPACEBASE *in_ESP;
  char acStack_3c2c [4];
  undefined1 auStack_1e64 [7624];
  CExternalRendererBridge CStack_9c;
  
  pHVar1 = window_handle;
  if (window_handle == (HWND)0x0) {
    pHVar1 = g_StoredWindowHandle;
  }
  g_StoredWindowHandle = pHVar1;
  pHVar1 = g_StoredWindowHandle;
  if (g_FullscreenMode == 0) {
    return 0;
  }
  g_RendererDLLHandle = wincore_wddvmem_cpp_loadLibrary_FUN_005ede10(g_RendererDllName);
  if (g_RendererDLLHandle == (HMODULE)0x0) {
    g_FullscreenMode = (int)g_RendererDLLHandle;
    return 0;
  }
  pFVar3 = wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                     (g_RendererDLLHandle,"APIDLLInformation");
  if (pFVar3 == (FARPROC)0x0) {
    wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20();
    g_FullscreenMode = 0;
    return 0;
  }
  (*pFVar3)(g_RendererDLLHandle,acStack_3c2c);
  wincore_windll_cpp_CExternalRenderer_ctor_FUN_005b7f90((CExternalRenderer *)auStack_1e64);
  bVar2 = wincore_windll_cpp_CExternalRenderer_validate_FUN_005b7fe0
                    ((CExternalRenderer *)acStack_3c2c,(CExternalRenderer *)auStack_1e64);
  if (CONCAT31(extraout_var,bVar2) != 0) {
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
         wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                   (g_RendererDLLHandle,"APIDLLtoggle");
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
         wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(g_RendererDLLHandle,"APIDLLclear")
    ;
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
         wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                   (g_RendererDLLHandle,"APIDLLtoggleX");
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
         wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                   (g_RendererDLLHandle,"APIDLLsetFog");
    if (g_DLLFunctionsMissing == 0) {
      g_ExternalRendererActive = 1;
      crt_memory_c_memset_FUN_005fde40(&CStack_9c,0,0x8c);
      CStack_9c.red_bit_position = &g_RedBitPosition;
      CStack_9c.red_scale_factor = &g_RedScaleFactor;
      CStack_9c.red_bit_count = &g_RedBitCount;
      CStack_9c.green_bit_position = &g_GreenBitPosition;
      CStack_9c.green_scale_factor = &g_GreenScaleFactor;
      CStack_9c.green_bit_count = &g_GreenBitCount;
      CStack_9c.blue_bit_position = &g_BlueBitPosition;
      CStack_9c.blue_scale_factor = &g_BlueScaleFactor;
      CStack_9c.blue_bit_count = &g_BlueBitCount;
      CStack_9c.blend_mode = &g_BlendMode;
      CStack_9c.current_lighting = &g_CurrentLightingValue;
      CStack_9c.current_alpha = &g_CurrentAlphaValue;
      CStack_9c.console_text_color = &g_ActiveRenderColor;
      CStack_9c.clip_left = &g_ClipLeft;
      CStack_9c.clip_top = &g_ClipTop;
      CStack_9c.clip_right = &g_ClipRight;
      CStack_9c.clip_bottom = &g_ClipBottom;
      CStack_9c.texture_filtering = &g_TextureFilteringEnabled;
      CStack_9c.texture_dimension = &g_CurrentTextureDimension;
      CStack_9c.texture_bits = &g_TextureBits;
      CStack_9c.system_memory_size = &g_SystemMemorySize;
      CStack_9c.video_memory_size = &g_VideoMemorySize;
      CStack_9c.max_texture_size = &g_MaxTextureSize;
      CStack_9c.frame_buffer_ptr = &g_FrameBufferPtr;
      CStack_9c.system_initialized = &g_SystemInitialized;
      CStack_9c.pod_system_version = &g_PodSystemVersion;
      CStack_9c.processor_type = &g_ProcessorType;
      CStack_9c.rendering_quality = &g_RenderingQuality;
      CStack_9c.sizeof1 = 0x30;
      CStack_9c.sizeof2 = 0x2c;
      CStack_9c.sizeof3 = 0x2c;
      CStack_9c.sizeof4 = 0xc;
      CStack_9c.sizeof5 = 0x20;
      CStack_9c.sizeof6 = 0x24;
      CStack_9c.sizeof7 = 0x28;
      iVar4 = (*g_APIDLL_init)(pHVar1,&CStack_9c);
      if (iVar4 != 0) {
        acStack_3c2c[0] = -0x3b;
        acStack_3c2c[1] = 'q';
        acStack_3c2c[2] = '[';
        acStack_3c2c[3] = '\0';
        wincore_windll_cpp_selectCard_FUN_005b7d90(g_RendererHandle);
        return 1;
      }
      g_FullscreenMode = iVar4;
      return 0;
    }
  }
  wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20();
  g_FullscreenMode = 0;
  return 0;
}


// Assembly code:
// 005b6750: PUSH EBX
//   Label: wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
// 005b6751: PUSH ESI
// 005b6752: PUSH EDI
// 005b6753: PUSH EBP
// 005b6754: SUB ESP,0x3c1c
// 005b675a: MOV EBX,dword ptr [ESP + 0x3c30]
//   XREF to: Stack[0x4] (READ)
// 005b6761: TEST EBX,EBX
// 005b6763: JNZ 0x005b6781
//   XREF to: 005b6781 (CONDITIONAL_JUMP)
// 005b6765: MOV EBX,dword ptr [0x03f6b98c]
//   XREF to: 03f6b98c (READ)
// 005b676b: CMP dword ptr [0x03f6b878],0x0
//   Label: LAB_005b676b
//   XREF to: 03f6b878 (READ)
// 005b6772: JNZ 0x005b6789
//   XREF to: 005b6789 (CONDITIONAL_JUMP)
// 005b6774: XOR EAX,EAX
// 005b6776: ADD ESP,0x3c1c
// 005b677c: POP EBP
// 005b677d: POP EDI
// 005b677e: POP ESI
// 005b677f: POP EBX
// 005b6780: RET
// 005b6781: MOV dword ptr [0x03f6b98c],EBX
//   Label: LAB_005b6781
//   XREF to: 03f6b98c (WRITE)
// 005b6787: JMP 0x005b676b
//   XREF to: 005b676b (UNCONDITIONAL_JUMP)
// 005b6789: PUSH 0x684010
//   Label: LAB_005b6789
//   XREF to: 00684010 (DATA)
// 005b678e: CALL wincore_wddvmem.cpp_loadLibrary_FUN_005ede10
//   XREF to: 005ede10 (UNCONDITIONAL_CALL)
// 005b6793: ADD ESP,0x4
// 005b6796: MOV [0x03f6b97c],EAX
//   XREF to: 03f6b97c (WRITE)
// 005b679b: TEST EAX,EAX
// 005b679d: JNZ 0x005b67b1
//   XREF to: 005b67b1 (CONDITIONAL_JUMP)
// 005b679f: MOV [0x03f6b878],EAX
//   XREF to: 03f6b878 (WRITE)
// 005b67a4: XOR EAX,EAX
// 005b67a6: ADD ESP,0x3c1c
// 005b67ac: POP EBP
// 005b67ad: POP EDI
// 005b67ae: POP ESI
// 005b67af: POP EBX
// 005b67b0: RET
// 005b67b1: PUSH 0x65293f
//   Label: LAB_005b67b1
//   XREF to: 0065293f (DATA)
// 005b67b6: PUSH EAX
// 005b67b7: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b67bc: ADD ESP,0x8
// 005b67bf: MOV EDX,EAX
// 005b67c1: TEST EAX,EAX
// 005b67c3: JZ 0x005b6fb9
//   XREF to: 005b6fb9 (CONDITIONAL_JUMP)
// 005b67c9: MOV EAX,ESP
// 005b67cb: PUSH EAX
// 005b67cc: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b67d2: PUSH ECX
// 005b67d3: CALL EDX
// 005b67d5: ADD ESP,0x8
// 005b67d8: LEA EAX,[ESP + 0x1dc8]
// 005b67df: PUSH EAX
// 005b67e0: CALL wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90
//   XREF to: 005b7f90 (UNCONDITIONAL_CALL)
// 005b67e5: ADD ESP,0x4
// 005b67e8: LEA EAX,[ESP + 0x1dc8]
// 005b67ef: PUSH EAX
// 005b67f0: LEA EAX,[ESP + 0x4]
// 005b67f4: PUSH EAX
// 005b67f5: CALL wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
//   XREF to: 005b7fe0 (UNCONDITIONAL_CALL)
// 005b67fa: ADD ESP,0x8
// 005b67fd: TEST EAX,EAX
// 005b67ff: JZ 0x005b6f9f
//   XREF to: 005b6f9f (CONDITIONAL_JUMP)
// 005b6805: PUSH 0x652951
//   XREF to: 00652951 (DATA)
// 005b680a: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6810: XOR ESI,ESI
// 005b6812: PUSH EDI
// 005b6813: MOV dword ptr [0x03f6b994],ESI
//   XREF to: 03f6b994 (WRITE)
// 005b6819: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b681e: ADD ESP,0x8
// 005b6821: MOV [0x03f6b88c],EAX
//   XREF to: 03f6b88c (WRITE)
// 005b6826: TEST EAX,EAX
// 005b6828: JNZ 0x005b6834
//   XREF to: 005b6834 (CONDITIONAL_JUMP)
// 005b682a: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6834: PUSH 0x65295c
//   Label: LAB_005b6834
//   XREF to: 0065295c (DATA)
// 005b6839: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b683e: PUSH EAX
// 005b683f: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6844: ADD ESP,0x8
// 005b6847: MOV [0x03f6b890],EAX
//   XREF to: 03f6b890 (WRITE)
// 005b684c: TEST EAX,EAX
// 005b684e: JNZ 0x005b685a
//   XREF to: 005b685a (CONDITIONAL_JUMP)
// 005b6850: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b685a: PUSH 0x652967
//   Label: LAB_005b685a
//   XREF to: 00652967 (DATA)
// 005b685f: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6865: PUSH ECX
// 005b6866: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b686b: ADD ESP,0x8
// 005b686e: MOV [0x03f6b894],EAX
//   XREF to: 03f6b894 (WRITE)
// 005b6873: TEST EAX,EAX
// 005b6875: JNZ 0x005b6881
//   XREF to: 005b6881 (CONDITIONAL_JUMP)
// 005b6877: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6881: PUSH 0x652974
//   Label: LAB_005b6881
//   XREF to: 00652974 (DATA)
// 005b6886: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b688c: PUSH EDI
// 005b688d: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6892: ADD ESP,0x8
// 005b6895: MOV [0x03f6b898],EAX
//   XREF to: 03f6b898 (WRITE)
// 005b689a: TEST EAX,EAX
// 005b689c: JNZ 0x005b68a8
//   XREF to: 005b68a8 (CONDITIONAL_JUMP)
// 005b689e: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b68a8: PUSH 0x652987
//   Label: LAB_005b68a8
//   XREF to: 00652987 (DATA)
// 005b68ad: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b68b2: PUSH EAX
// 005b68b3: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b68b8: ADD ESP,0x8
// 005b68bb: MOV [0x03f6b89c],EAX
//   XREF to: 03f6b89c (WRITE)
// 005b68c0: TEST EAX,EAX
// 005b68c2: JNZ 0x005b68ce
//   XREF to: 005b68ce (CONDITIONAL_JUMP)
// 005b68c4: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b68ce: PUSH 0x65299b
//   Label: LAB_005b68ce
//   XREF to: 0065299b (DATA)
// 005b68d3: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b68d9: PUSH ECX
// 005b68da: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b68df: ADD ESP,0x8
// 005b68e2: MOV [0x03f6b8a0],EAX
//   XREF to: 03f6b8a0 (WRITE)
// 005b68e7: TEST EAX,EAX
// 005b68e9: JNZ 0x005b68f5
//   XREF to: 005b68f5 (CONDITIONAL_JUMP)
// 005b68eb: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b68f5: PUSH 0x6529b2
//   Label: LAB_005b68f5
//   XREF to: 006529b2 (DATA)
// 005b68fa: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6900: PUSH EDI
// 005b6901: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6906: ADD ESP,0x8
// 005b6909: MOV [0x03f6b8a4],EAX
//   XREF to: 03f6b8a4 (WRITE)
// 005b690e: TEST EAX,EAX
// 005b6910: JNZ 0x005b691c
//   XREF to: 005b691c (CONDITIONAL_JUMP)
// 005b6912: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b691c: PUSH 0x6529c3
//   Label: LAB_005b691c
//   XREF to: 006529c3 (DATA)
// 005b6921: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6926: PUSH EAX
// 005b6927: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b692c: ADD ESP,0x8
// 005b692f: MOV [0x03f6b8a8],EAX
//   XREF to: 03f6b8a8 (WRITE)
// 005b6934: TEST EAX,EAX
// 005b6936: JNZ 0x005b6942
//   XREF to: 005b6942 (CONDITIONAL_JUMP)
// 005b6938: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6942: PUSH 0x6529d2
//   Label: LAB_005b6942
//   XREF to: 006529d2 (DATA)
// 005b6947: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b694d: PUSH ECX
// 005b694e: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6953: ADD ESP,0x8
// 005b6956: MOV [0x03f6b8ac],EAX
//   XREF to: 03f6b8ac (WRITE)
// 005b695b: TEST EAX,EAX
// 005b695d: JNZ 0x005b6969
//   XREF to: 005b6969 (CONDITIONAL_JUMP)
// 005b695f: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6969: PUSH 0x6529e2
//   Label: LAB_005b6969
//   XREF to: 006529e2 (DATA)
// 005b696e: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6974: PUSH EDI
// 005b6975: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b697a: ADD ESP,0x8
// 005b697d: MOV [0x03f6b8b0],EAX
//   XREF to: 03f6b8b0 (WRITE)
// 005b6982: TEST EAX,EAX
// 005b6984: JNZ 0x005b6990
//   XREF to: 005b6990 (CONDITIONAL_JUMP)
// 005b6986: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6990: PUSH 0x6529f4
//   Label: LAB_005b6990
//   XREF to: 006529f4 (DATA)
// 005b6995: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b699a: PUSH EAX
// 005b699b: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b69a0: ADD ESP,0x8
// 005b69a3: MOV [0x03f6b8b4],EAX
//   XREF to: 03f6b8b4 (WRITE)
// 005b69a8: TEST EAX,EAX
// 005b69aa: JNZ 0x005b69b6
//   XREF to: 005b69b6 (CONDITIONAL_JUMP)
// 005b69ac: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b69b6: PUSH 0x652a08
//   Label: LAB_005b69b6
//   XREF to: 00652a08 (DATA)
// 005b69bb: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b69c1: PUSH ECX
// 005b69c2: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b69c7: ADD ESP,0x8
// 005b69ca: MOV [0x03f6b8b8],EAX
//   XREF to: 03f6b8b8 (WRITE)
// 005b69cf: TEST EAX,EAX
// 005b69d1: JNZ 0x005b69dd
//   XREF to: 005b69dd (CONDITIONAL_JUMP)
// 005b69d3: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b69dd: PUSH 0x652a1c
//   Label: LAB_005b69dd
//   XREF to: 00652a1c (DATA)
// 005b69e2: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b69e8: PUSH EDI
// 005b69e9: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b69ee: ADD ESP,0x8
// 005b69f1: PUSH 0x652a34
//   XREF to: 00652a34 (DATA)
// 005b69f6: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b69fc: PUSH EBP
// 005b69fd: MOV [0x03f6b8bc],EAX
//   XREF to: 03f6b8bc (WRITE)
// 005b6a02: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6a07: ADD ESP,0x8
// 005b6a0a: PUSH 0x652a4c
//   XREF to: 00652a4c (DATA)
// 005b6a0f: MOV [0x03f6b8c0],EAX
//   XREF to: 03f6b8c0 (WRITE)
// 005b6a14: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6a19: PUSH EAX
// 005b6a1a: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6a1f: ADD ESP,0x8
// 005b6a22: MOV [0x03f6b8c4],EAX
//   XREF to: 03f6b8c4 (WRITE)
// 005b6a27: TEST EAX,EAX
// 005b6a29: JNZ 0x005b6a35
//   XREF to: 005b6a35 (CONDITIONAL_JUMP)
// 005b6a2b: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6a35: PUSH 0x652a61
//   Label: LAB_005b6a35
//   XREF to: 00652a61 (DATA)
// 005b6a3a: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6a40: PUSH ECX
// 005b6a41: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6a46: ADD ESP,0x8
// 005b6a49: MOV [0x03f6b8c8],EAX
//   XREF to: 03f6b8c8 (WRITE)
// 005b6a4e: TEST EAX,EAX
// 005b6a50: JNZ 0x005b6a5c
//   XREF to: 005b6a5c (CONDITIONAL_JUMP)
// 005b6a52: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6a5c: PUSH 0x652a73
//   Label: LAB_005b6a5c
//   XREF to: 00652a73 (DATA)
// 005b6a61: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6a67: PUSH EDI
// 005b6a68: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6a6d: ADD ESP,0x8
// 005b6a70: MOV [0x03f6b8cc],EAX
//   XREF to: 03f6b8cc (WRITE)
// 005b6a75: TEST EAX,EAX
// 005b6a77: JNZ 0x005b6a83
//   XREF to: 005b6a83 (CONDITIONAL_JUMP)
// 005b6a79: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6a83: PUSH 0x652a86
//   Label: LAB_005b6a83
//   XREF to: 00652a86 (DATA)
// 005b6a88: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6a8d: PUSH EAX
// 005b6a8e: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6a93: ADD ESP,0x8
// 005b6a96: PUSH 0x652a99
//   XREF to: 00652a99 (DATA)
// 005b6a9b: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6aa1: PUSH EDX
// 005b6aa2: MOV [0x03f6b8d0],EAX
//   XREF to: 03f6b8d0 (WRITE)
// 005b6aa7: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6aac: ADD ESP,0x8
// 005b6aaf: PUSH 0x652aad
//   XREF to: 00652aad (DATA)
// 005b6ab4: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6aba: PUSH ECX
// 005b6abb: MOV [0x03f6b8d4],EAX
//   XREF to: 03f6b8d4 (WRITE)
// 005b6ac0: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6ac5: ADD ESP,0x8
// 005b6ac8: PUSH 0x652ac1
//   XREF to: 00652ac1 (DATA)
// 005b6acd: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6ad3: PUSH ESI
// 005b6ad4: MOV [0x03f6b8d8],EAX
//   XREF to: 03f6b8d8 (WRITE)
// 005b6ad9: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6ade: ADD ESP,0x8
// 005b6ae1: MOV [0x03f6b8dc],EAX
//   XREF to: 03f6b8dc (WRITE)
// 005b6ae6: TEST EAX,EAX
// 005b6ae8: JNZ 0x005b6af4
//   XREF to: 005b6af4 (CONDITIONAL_JUMP)
// 005b6aea: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6af4: PUSH 0x652ad3
//   Label: LAB_005b6af4
//   XREF to: 00652ad3 (DATA)
// 005b6af9: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6aff: PUSH EBP
// 005b6b00: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6b05: ADD ESP,0x8
// 005b6b08: MOV [0x03f6b8e0],EAX
//   XREF to: 03f6b8e0 (WRITE)
// 005b6b0d: TEST EAX,EAX
// 005b6b0f: JNZ 0x005b6b1b
//   XREF to: 005b6b1b (CONDITIONAL_JUMP)
// 005b6b11: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6b1b: PUSH 0x652aeb
//   Label: LAB_005b6b1b
//   XREF to: 00652aeb (DATA)
// 005b6b20: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6b26: PUSH EDX
// 005b6b27: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6b2c: ADD ESP,0x8
// 005b6b2f: MOV [0x03f6b8e4],EAX
//   XREF to: 03f6b8e4 (WRITE)
// 005b6b34: TEST EAX,EAX
// 005b6b36: JNZ 0x005b6b42
//   XREF to: 005b6b42 (CONDITIONAL_JUMP)
// 005b6b38: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6b42: PUSH 0x652afb
//   Label: LAB_005b6b42
//   XREF to: 00652afb (DATA)
// 005b6b47: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6b4d: PUSH ESI
// 005b6b4e: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6b53: ADD ESP,0x8
// 005b6b56: MOV [0x03f6b8e8],EAX
//   XREF to: 03f6b8e8 (WRITE)
// 005b6b5b: TEST EAX,EAX
// 005b6b5d: JNZ 0x005b6b69
//   XREF to: 005b6b69 (CONDITIONAL_JUMP)
// 005b6b5f: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6b69: PUSH 0x652b0f
//   Label: LAB_005b6b69
//   XREF to: 00652b0f (DATA)
// 005b6b6e: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6b74: PUSH EBP
// 005b6b75: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6b7a: ADD ESP,0x8
// 005b6b7d: MOV [0x03f6b8ec],EAX
//   XREF to: 03f6b8ec (WRITE)
// 005b6b82: TEST EAX,EAX
// 005b6b84: JNZ 0x005b6b90
//   XREF to: 005b6b90 (CONDITIONAL_JUMP)
// 005b6b86: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6b90: PUSH 0x652b1b
//   Label: LAB_005b6b90
//   XREF to: 00652b1b (DATA)
// 005b6b95: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6b9b: PUSH EDX
// 005b6b9c: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6ba1: ADD ESP,0x8
// 005b6ba4: MOV [0x03f6b8f0],EAX
//   XREF to: 03f6b8f0 (WRITE)
// 005b6ba9: TEST EAX,EAX
// 005b6bab: JNZ 0x005b6bb7
//   XREF to: 005b6bb7 (CONDITIONAL_JUMP)
// 005b6bad: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6bb7: PUSH 0x652b2d
//   Label: LAB_005b6bb7
//   XREF to: 00652b2d (DATA)
// 005b6bbc: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6bc2: PUSH ESI
// 005b6bc3: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6bc8: ADD ESP,0x8
// 005b6bcb: MOV [0x03f6b8f4],EAX
//   XREF to: 03f6b8f4 (WRITE)
// 005b6bd0: TEST EAX,EAX
// 005b6bd2: JNZ 0x005b6bde
//   XREF to: 005b6bde (CONDITIONAL_JUMP)
// 005b6bd4: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6bde: PUSH 0x652b38
//   Label: LAB_005b6bde
//   XREF to: 00652b38 (DATA)
// 005b6be3: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6be9: PUSH EBP
// 005b6bea: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6bef: ADD ESP,0x8
// 005b6bf2: MOV [0x03f6b8f8],EAX
//   XREF to: 03f6b8f8 (WRITE)
// 005b6bf7: TEST EAX,EAX
// 005b6bf9: JNZ 0x005b6c05
//   XREF to: 005b6c05 (CONDITIONAL_JUMP)
// 005b6bfb: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6c05: PUSH 0x652b4b
//   Label: LAB_005b6c05
//   XREF to: 00652b4b (DATA)
// 005b6c0a: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6c10: PUSH EDX
// 005b6c11: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6c16: ADD ESP,0x8
// 005b6c19: MOV [0x03f6b8fc],EAX
//   XREF to: 03f6b8fc (WRITE)
// 005b6c1e: TEST EAX,EAX
// 005b6c20: JNZ 0x005b6c2c
//   XREF to: 005b6c2c (CONDITIONAL_JUMP)
// 005b6c22: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6c2c: PUSH 0x652b5b
//   Label: LAB_005b6c2c
//   XREF to: 00652b5b (DATA)
// 005b6c31: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6c37: PUSH ESI
// 005b6c38: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6c3d: ADD ESP,0x8
// 005b6c40: MOV [0x03f6b900],EAX
//   XREF to: 03f6b900 (WRITE)
// 005b6c45: TEST EAX,EAX
// 005b6c47: JNZ 0x005b6c53
//   XREF to: 005b6c53 (CONDITIONAL_JUMP)
// 005b6c49: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6c53: PUSH 0x652b71
//   Label: LAB_005b6c53
//   XREF to: 00652b71 (DATA)
// 005b6c58: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6c5e: PUSH EBP
// 005b6c5f: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6c64: ADD ESP,0x8
// 005b6c67: MOV [0x03f6b904],EAX
//   XREF to: 03f6b904 (WRITE)
// 005b6c6c: TEST EAX,EAX
// 005b6c6e: JNZ 0x005b6c7a
//   XREF to: 005b6c7a (CONDITIONAL_JUMP)
// 005b6c70: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6c7a: PUSH 0x652b89
//   Label: LAB_005b6c7a
//   XREF to: 00652b89 (DATA)
// 005b6c7f: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6c85: PUSH EDX
// 005b6c86: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6c8b: ADD ESP,0x8
// 005b6c8e: MOV [0x03f6b908],EAX
//   XREF to: 03f6b908 (WRITE)
// 005b6c93: TEST EAX,EAX
// 005b6c95: JNZ 0x005b6ca1
//   XREF to: 005b6ca1 (CONDITIONAL_JUMP)
// 005b6c97: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6ca1: PUSH 0x652ba5
//   Label: LAB_005b6ca1
//   XREF to: 00652ba5 (DATA)
// 005b6ca6: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6cac: PUSH ESI
// 005b6cad: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6cb2: ADD ESP,0x8
// 005b6cb5: MOV [0x03f6b90c],EAX
//   XREF to: 03f6b90c (WRITE)
// 005b6cba: TEST EAX,EAX
// 005b6cbc: JNZ 0x005b6cc8
//   XREF to: 005b6cc8 (CONDITIONAL_JUMP)
// 005b6cbe: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6cc8: PUSH 0x652bb9
//   Label: LAB_005b6cc8
//   XREF to: 00652bb9 (DATA)
// 005b6ccd: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6cd3: PUSH EBP
// 005b6cd4: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6cd9: ADD ESP,0x8
// 005b6cdc: MOV [0x03f6b910],EAX
//   XREF to: 03f6b910 (WRITE)
// 005b6ce1: TEST EAX,EAX
// 005b6ce3: JNZ 0x005b6cef
//   XREF to: 005b6cef (CONDITIONAL_JUMP)
// 005b6ce5: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6cef: PUSH 0x652bce
//   Label: LAB_005b6cef
//   XREF to: 00652bce (DATA)
// 005b6cf4: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6cfa: PUSH EDX
// 005b6cfb: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6d00: ADD ESP,0x8
// 005b6d03: MOV [0x03f6b914],EAX
//   XREF to: 03f6b914 (WRITE)
// 005b6d08: TEST EAX,EAX
// 005b6d0a: JNZ 0x005b6d16
//   XREF to: 005b6d16 (CONDITIONAL_JUMP)
// 005b6d0c: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6d16: PUSH 0x652be3
//   Label: LAB_005b6d16
//   XREF to: 00652be3 (DATA)
// 005b6d1b: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6d21: PUSH ESI
// 005b6d22: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6d27: ADD ESP,0x8
// 005b6d2a: MOV [0x03f6b918],EAX
//   XREF to: 03f6b918 (WRITE)
// 005b6d2f: TEST EAX,EAX
// 005b6d31: JNZ 0x005b6d3d
//   XREF to: 005b6d3d (CONDITIONAL_JUMP)
// 005b6d33: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6d3d: PUSH 0x652bf4
//   Label: LAB_005b6d3d
//   XREF to: 00652bf4 (DATA)
// 005b6d42: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6d48: PUSH EBP
// 005b6d49: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6d4e: ADD ESP,0x8
// 005b6d51: MOV [0x03f6b91c],EAX
//   XREF to: 03f6b91c (WRITE)
// 005b6d56: TEST EAX,EAX
// 005b6d58: JNZ 0x005b6d64
//   XREF to: 005b6d64 (CONDITIONAL_JUMP)
// 005b6d5a: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6d64: PUSH 0x652c08
//   Label: LAB_005b6d64
//   XREF to: 00652c08 (DATA)
// 005b6d69: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6d6f: PUSH EDX
// 005b6d70: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6d75: ADD ESP,0x8
// 005b6d78: PUSH 0x652c1d
//   XREF to: 00652c1d (DATA)
// 005b6d7d: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6d83: PUSH ECX
// 005b6d84: MOV [0x03f6b920],EAX
//   XREF to: 03f6b920 (WRITE)
// 005b6d89: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6d8e: ADD ESP,0x8
// 005b6d91: PUSH 0x652c34
//   XREF to: 00652c34 (DATA)
// 005b6d96: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6d9c: PUSH ESI
// 005b6d9d: MOV [0x03f6b924],EAX
//   XREF to: 03f6b924 (WRITE)
// 005b6da2: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6da7: ADD ESP,0x8
// 005b6daa: PUSH 0x652c46
//   XREF to: 00652c46 (DATA)
// 005b6daf: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6db5: PUSH EDI
// 005b6db6: MOV [0x03f6b928],EAX
//   XREF to: 03f6b928 (WRITE)
// 005b6dbb: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6dc0: ADD ESP,0x8
// 005b6dc3: PUSH 0x652c5a
//   XREF to: 00652c5a (DATA)
// 005b6dc8: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6dce: PUSH EBP
// 005b6dcf: MOV [0x03f6b92c],EAX
//   XREF to: 03f6b92c (WRITE)
// 005b6dd4: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6dd9: ADD ESP,0x8
// 005b6ddc: MOV [0x03f6b930],EAX
//   XREF to: 03f6b930 (WRITE)
// 005b6de1: TEST EAX,EAX
// 005b6de3: JNZ 0x005b6def
//   XREF to: 005b6def (CONDITIONAL_JUMP)
// 005b6de5: MOV dword ptr [0x03f6b994],0x1
//   XREF to: 03f6b994 (WRITE)
// 005b6def: PUSH 0x652c6f
//   Label: LAB_005b6def
//   XREF to: 00652c6f (DATA)
// 005b6df4: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6dfa: PUSH EDX
// 005b6dfb: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6e00: ADD ESP,0x8
// 005b6e03: PUSH 0x652c83
//   XREF to: 00652c83 (DATA)
// 005b6e08: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6e0e: PUSH ECX
// 005b6e0f: MOV [0x03f6b934],EAX
//   XREF to: 03f6b934 (WRITE)
// 005b6e14: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6e19: ADD ESP,0x8
// 005b6e1c: PUSH 0x652c9b
//   XREF to: 00652c9b (DATA)
// 005b6e21: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6e27: PUSH ESI
// 005b6e28: MOV [0x03f6b938],EAX
//   XREF to: 03f6b938 (WRITE)
// 005b6e2d: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6e32: ADD ESP,0x8
// 005b6e35: PUSH 0x652cac
//   XREF to: 00652cac (DATA)
// 005b6e3a: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6e40: PUSH EDI
// 005b6e41: MOV [0x03f6b93c],EAX
//   XREF to: 03f6b93c (WRITE)
// 005b6e46: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6e4b: ADD ESP,0x8
// 005b6e4e: PUSH 0x652cbf
//   XREF to: 00652cbf (DATA)
// 005b6e53: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6e59: PUSH EBP
// 005b6e5a: MOV [0x03f6b940],EAX
//   XREF to: 03f6b940 (WRITE)
// 005b6e5f: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6e64: ADD ESP,0x8
// 005b6e67: PUSH 0x652ccd
//   XREF to: 00652ccd (DATA)
// 005b6e6c: MOV [0x03f6b944],EAX
//   XREF to: 03f6b944 (WRITE)
// 005b6e71: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6e76: PUSH EAX
// 005b6e77: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6e7c: ADD ESP,0x8
// 005b6e7f: PUSH 0x652cdf
//   XREF to: 00652cdf (DATA)
// 005b6e84: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6e8a: PUSH EDX
// 005b6e8b: MOV [0x03f6b948],EAX
//   XREF to: 03f6b948 (WRITE)
// 005b6e90: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6e95: ADD ESP,0x8
// 005b6e98: PUSH 0x652cf7
//   XREF to: 00652cf7 (DATA)
// 005b6e9d: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6ea3: PUSH ECX
// 005b6ea4: MOV [0x03f6b94c],EAX
//   XREF to: 03f6b94c (WRITE)
// 005b6ea9: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6eae: ADD ESP,0x8
// 005b6eb1: PUSH 0x652d0c
//   XREF to: 00652d0c (DATA)
// 005b6eb6: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6ebc: PUSH ESI
// 005b6ebd: MOV [0x03f6b950],EAX
//   XREF to: 03f6b950 (WRITE)
// 005b6ec2: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6ec7: ADD ESP,0x8
// 005b6eca: PUSH 0x652d22
//   XREF to: 00652d22 (DATA)
// 005b6ecf: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6ed5: PUSH EDI
// 005b6ed6: MOV [0x03f6b954],EAX
//   XREF to: 03f6b954 (WRITE)
// 005b6edb: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6ee0: ADD ESP,0x8
// 005b6ee3: PUSH 0x652d35
//   XREF to: 00652d35 (DATA)
// 005b6ee8: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6eee: PUSH EBP
// 005b6eef: MOV [0x03f6b958],EAX
//   XREF to: 03f6b958 (WRITE)
// 005b6ef4: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6ef9: ADD ESP,0x8
// 005b6efc: PUSH 0x652d44
//   XREF to: 00652d44 (DATA)
// 005b6f01: MOV [0x03f6b95c],EAX
//   XREF to: 03f6b95c (WRITE)
// 005b6f06: MOV EAX,[0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6f0b: PUSH EAX
// 005b6f0c: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6f11: ADD ESP,0x8
// 005b6f14: PUSH 0x652d5b
//   XREF to: 00652d5b (DATA)
// 005b6f19: MOV EDX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6f1f: PUSH EDX
// 005b6f20: MOV [0x03f6b960],EAX
//   XREF to: 03f6b960 (WRITE)
// 005b6f25: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6f2a: ADD ESP,0x8
// 005b6f2d: PUSH 0x652d77
//   XREF to: 00652d77 (DATA)
// 005b6f32: MOV ECX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6f38: PUSH ECX
// 005b6f39: MOV [0x03f6b964],EAX
//   XREF to: 03f6b964 (WRITE)
// 005b6f3e: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6f43: ADD ESP,0x8
// 005b6f46: PUSH 0x652d8b
//   XREF to: 00652d8b (DATA)
// 005b6f4b: MOV ESI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6f51: PUSH ESI
// 005b6f52: MOV [0x03f6b968],EAX
//   XREF to: 03f6b968 (WRITE)
// 005b6f57: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6f5c: ADD ESP,0x8
// 005b6f5f: PUSH 0x652da0
//   XREF to: 00652da0 (DATA)
// 005b6f64: MOV EDI,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6f6a: PUSH EDI
// 005b6f6b: MOV [0x03f6b96c],EAX
//   XREF to: 03f6b96c (WRITE)
// 005b6f70: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6f75: ADD ESP,0x8
// 005b6f78: PUSH 0x652db6
//   XREF to: 00652db6 (DATA)
// 005b6f7d: MOV EBP,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b6f83: PUSH EBP
// 005b6f84: MOV [0x03f6b970],EAX
//   XREF to: 03f6b970 (WRITE)
// 005b6f89: CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: 005ede20 (UNCONDITIONAL_CALL)
// 005b6f8e: MOV [0x03f6b974],EAX
//   XREF to: 03f6b974 (WRITE)
// 005b6f93: MOV EAX,[0x03f6b994]
//   XREF to: 03f6b994 (READ)
// 005b6f98: ADD ESP,0x8
// 005b6f9b: TEST EAX,EAX
// 005b6f9d: JZ 0x005b6fd3
//   XREF to: 005b6fd3 (CONDITIONAL_JUMP)
// 005b6f9f: XOR EBX,EBX
//   Label: LAB_005b6f9f
// 005b6fa1: CALL wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
//   XREF to: 005b5d20 (UNCONDITIONAL_CALL)
// 005b6fa6: MOV dword ptr [0x03f6b878],EBX
//   XREF to: 03f6b878 (WRITE)
// 005b6fac: XOR EAX,EAX
// 005b6fae: ADD ESP,0x3c1c
// 005b6fb4: POP EBP
// 005b6fb5: POP EDI
// 005b6fb6: POP ESI
// 005b6fb7: POP EBX
// 005b6fb8: RET
// 005b6fb9: XOR ESI,ESI
//   Label: LAB_005b6fb9
// 005b6fbb: CALL wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
//   XREF to: 005b5d20 (UNCONDITIONAL_CALL)
// 005b6fc0: MOV dword ptr [0x03f6b878],ESI
//   XREF to: 03f6b878 (WRITE)
// 005b6fc6: XOR EAX,EAX
// 005b6fc8: ADD ESP,0x3c1c
// 005b6fce: POP EBP
// 005b6fcf: POP EDI
// 005b6fd0: POP ESI
// 005b6fd1: POP EBX
// 005b6fd2: RET
// 005b6fd3: PUSH 0x8c
//   Label: LAB_005b6fd3
// 005b6fd8: MOV EDX,0x1
// 005b6fdd: MOV ESI,0x2d01f28
//   XREF to: 02d01f28 (DATA)
// 005b6fe2: PUSH EAX
// 005b6fe3: LEA EAX,[ESP + 0x3b98]
// 005b6fea: MOV EDI,0x2d01f2c
//   XREF to: 02d01f2c (DATA)
// 005b6fef: PUSH EAX
// 005b6ff0: MOV EBP,0x2d01f30
//   XREF to: 02d01f30 (DATA)
// 005b6ff5: MOV dword ptr [0x03f6b978],EDX
//   XREF to: 03f6b978 (WRITE)
// 005b6ffb: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005b7000: MOV ECX,0x2d01f24
//   XREF to: 02d01f24 (DATA)
// 005b7005: MOV EAX,0x2d01f34
//   XREF to: 02d01f34 (DATA)
// 005b700a: ADD ESP,0xc
// 005b700d: MOV EDX,0x2d01f38
//   XREF to: 02d01f38 (DATA)
// 005b7012: MOV dword ptr [ESP + 0x3b90],ECX
//   XREF to: 02d01f24 (DATA)
// 005b7019: MOV dword ptr [ESP + 0x3b94],ESI
//   XREF to: 02d01f28 (DATA)
// 005b7020: MOV dword ptr [ESP + 0x3b98],EDI
//   XREF to: 02d01f2c (DATA)
// 005b7027: MOV dword ptr [ESP + 0x3b9c],EBP
//   XREF to: 02d01f30 (DATA)
// 005b702e: MOV dword ptr [ESP + 0x3ba0],EAX
//   XREF to: 02d01f34 (DATA)
// 005b7035: MOV dword ptr [ESP + 0x3ba4],EDX
//   XREF to: 02d01f38 (DATA)
// 005b703c: MOV ECX,0x2d01f3c
//   XREF to: 02d01f3c (DATA)
// 005b7041: MOV ESI,0x2d01f40
//   XREF to: 02d01f40 (DATA)
// 005b7046: MOV EDI,0x2d01f44
//   XREF to: 02d01f44 (DATA)
// 005b704b: MOV EBP,0x2d05298
//   XREF to: 02d05298 (DATA)
// 005b7050: MOV EAX,0x2d02574
//   XREF to: 02d02574 (DATA)
// 005b7055: MOV EDX,0x6793b4
//   XREF to: 006793b4 (DATA)
// 005b705a: MOV dword ptr [ESP + 0x3ba8],ECX
//   XREF to: 02d01f3c (DATA)
// 005b7061: MOV dword ptr [ESP + 0x3bac],ESI
//   XREF to: 02d01f40 (DATA)
// 005b7068: MOV dword ptr [ESP + 0x3bb0],EDI
//   XREF to: 02d01f44 (DATA)
// 005b706f: MOV dword ptr [ESP + 0x3bb4],EBP
//   XREF to: 02d05298 (DATA)
// 005b7076: MOV dword ptr [ESP + 0x3bb8],EAX
//   XREF to: 02d02574 (DATA)
// 005b707d: MOV dword ptr [ESP + 0x3bbc],EDX
//   XREF to: 006793b4 (DATA)
// 005b7084: MOV ECX,0x2d02570
//   XREF to: 02d02570 (DATA)
// 005b7089: MOV ESI,0x2d02558
//   XREF to: 02d02558 (DATA)
// 005b708e: MOV EDI,0x2d0255c
//   XREF to: 02d0255c (DATA)
// 005b7093: MOV EBP,0x2d02560
//   XREF to: 02d02560 (DATA)
// 005b7098: MOV EAX,0x2d02564
//   XREF to: 02d02564 (DATA)
// 005b709d: MOV EDX,0x6793a0
//   XREF to: 006793a0 (DATA)
// 005b70a2: MOV dword ptr [ESP + 0x3bc0],ECX
//   XREF to: 02d02570 (DATA)
// 005b70a9: MOV dword ptr [ESP + 0x3bc4],ESI
//   XREF to: 02d02558 (DATA)
// 005b70b0: MOV dword ptr [ESP + 0x3bc8],EDI
//   XREF to: 02d0255c (DATA)
// 005b70b7: MOV dword ptr [ESP + 0x3bcc],EBP
//   XREF to: 02d02560 (DATA)
// 005b70be: MOV dword ptr [ESP + 0x3bd0],EAX
//   XREF to: 02d02564 (DATA)
// 005b70c5: MOV dword ptr [ESP + 0x3bd4],EDX
//   XREF to: 006793a0 (DATA)
// 005b70cc: MOV ECX,0x6793a4
//   XREF to: 006793a4 (DATA)
// 005b70d1: MOV ESI,0x2d03e90
//   XREF to: 02d03e90 (DATA)
// 005b70d6: MOV EDI,0x68411c
//   XREF to: 0068411c (DATA)
// 005b70db: MOV EBP,0x684114
//   XREF to: 00684114 (DATA)
// 005b70e0: MOV EAX,0x684118
//   XREF to: 00684118 (DATA)
// 005b70e5: MOV EDX,0x3f6b880
//   XREF to: 03f6b880 (DATA)
// 005b70ea: MOV dword ptr [ESP + 0x3bd8],ECX
//   XREF to: 006793a4 (DATA)
// 005b70f1: MOV dword ptr [ESP + 0x3bdc],ESI
//   XREF to: 02d03e90 (DATA)
// 005b70f8: MOV dword ptr [ESP + 0x3be0],EDI
//   XREF to: 0068411c (DATA)
// 005b70ff: MOV dword ptr [ESP + 0x3be4],EBP
//   XREF to: 00684114 (DATA)
// 005b7106: MOV dword ptr [ESP + 0x3be8],EAX
//   XREF to: 00684118 (DATA)
// 005b710d: MOV dword ptr [ESP + 0x3bec],EDX
//   XREF to: 03f6b880 (DATA)
// 005b7114: MOV ECX,0x684110
//   XREF to: 00684110 (DATA)
// 005b7119: MOV ESI,0x3f6b884
//   XREF to: 03f6b884 (DATA)
// 005b711e: MOV EDI,0x2d0529c
//   XREF to: 02d0529c (DATA)
// 005b7123: MOV EBP,0x6793b8
//   XREF to: 006793b8 (DATA)
// 005b7128: MOV EAX,0x30
// 005b712d: MOV EDX,0x2c
// 005b7132: MOV dword ptr [ESP + 0x3bf0],ECX
//   XREF to: 00684110 (DATA)
// 005b7139: MOV dword ptr [ESP + 0x3bf4],ESI
//   XREF to: 03f6b884 (DATA)
// 005b7140: MOV dword ptr [ESP + 0x3bf8],EDI
//   XREF to: 02d0529c (DATA)
// 005b7147: MOV dword ptr [ESP + 0x3bfc],EBP
//   XREF to: 006793b8 (DATA)
// 005b714e: MOV dword ptr [ESP + 0x3c00],EAX
// 005b7155: MOV dword ptr [ESP + 0x3c04],EDX
// 005b715c: MOV dword ptr [ESP + 0x3c18],EDX
// 005b7163: MOV ECX,0xc
// 005b7168: MOV ESI,0x20
// 005b716d: MOV EDI,0x24
// 005b7172: LEA EAX,[ESP + 0x3b90]
// 005b7179: MOV EBP,0x28
// 005b717e: PUSH EAX
// 005b717f: MOV dword ptr [ESP + 0x3c0c],ECX
// 005b7186: MOV dword ptr [ESP + 0x3c10],ESI
// 005b718d: PUSH EBX
// 005b718e: MOV dword ptr [ESP + 0x3c1c],EDI
// 005b7195: MOV dword ptr [ESP + 0x3c18],EBP
// 005b719c: CALL dword ptr [g_APIDLL_init]
//   XREF to: 03f6b88c (READ)
// 005b71a2: ADD ESP,0x8
// 005b71a5: TEST EAX,EAX
// 005b71a7: JNZ 0x005b71b9
//   XREF to: 005b71b9 (CONDITIONAL_JUMP)
// 005b71a9: MOV [0x03f6b878],EAX
//   XREF to: 03f6b878 (WRITE)
// 005b71ae: ADD ESP,0x3c1c
// 005b71b4: POP EBP
// 005b71b5: POP EDI
// 005b71b6: POP ESI
// 005b71b7: POP EBX
// 005b71b8: RET
// 005b71b9: MOV EDX,dword ptr [0x03f6b87c]
//   Label: LAB_005b71b9
//   XREF to: 03f6b87c (READ)
// 005b71bf: PUSH EDX
// 005b71c0: CALL wincore_windll.cpp_selectCard_FUN_005b7d90
//   XREF to: 005b7d90 (UNCONDITIONAL_CALL)
// 005b71c5: MOV EAX,0x1
// 005b71ca: ADD ESP,0x4
// 005b71cd: ADD ESP,0x3c1c
// 005b71d3: POP EBP
// 005b71d4: POP EDI
// 005b71d5: POP ESI
// 005b71d6: POP EBX
// 005b71d7: RET
