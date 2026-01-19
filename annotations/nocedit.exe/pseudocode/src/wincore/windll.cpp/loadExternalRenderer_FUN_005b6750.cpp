// Name: wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
// Address: 005b6750
// Address Range: [[005b6750, 005b71d7]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_loadExternalRenderer_FUN_005b6750(HWND window_handle)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(HWND window_handle)

{
  HWND pHVar1;
  FARPROC pFVar2;
  int iVar3;
  char acStack_3c2c [4];
  byte auStack_1e64 [7624];
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
  pFVar2 = wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                     (g_RendererDLLHandle,"APIDLLInformation");
  if (pFVar2 == (FARPROC)0x0) {
    wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20();
    g_FullscreenMode = 0;
    return 0;
  }
  (*pFVar2)(g_RendererDLLHandle,acStack_3c2c);
  wincore_windll_cpp_CExternalRenderer_ctor_FUN_005b7f90((CExternalRenderer *)auStack_1e64);
  iVar3 = wincore_windll_cpp_CExternalRenderer_validate_FUN_005b7fe0
                    ((CExternalRenderer *)acStack_3c2c,(CExternalRenderer *)auStack_1e64);
  if (iVar3 != 0) {
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
    if (g_APIDLL_setVideoMode == (FARPROC)0x0) {
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
    if (g_APIDLL_GetDisplayContext == (FARPROC)0x0) {
      g_DLLFunctionsMissing = 1;
    }
    g_APIDLL_ReleaseDisplayContext =
         wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                   (g_RendererDLLHandle,"APIDLLReleaseDisplayContext");
    if (g_APIDLL_ReleaseDisplayContext == (FARPROC)0x0) {
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
      iVar3 = (*g_APIDLL_init)(pHVar1,&CStack_9c);
      if (iVar3 != 0) {
        acStack_3c2c[0] = -0x3b;
        acStack_3c2c[1] = 'q';
        acStack_3c2c[2] = '[';
        acStack_3c2c[3] = '\0';
        wincore_windll_cpp_selectCard_FUN_005b7d90(g_RendererHandle);
        return 1;
      }
      g_FullscreenMode = iVar3;
      return 0;
    }
  }
  wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20();
  g_FullscreenMode = 0;
  return 0;
}
