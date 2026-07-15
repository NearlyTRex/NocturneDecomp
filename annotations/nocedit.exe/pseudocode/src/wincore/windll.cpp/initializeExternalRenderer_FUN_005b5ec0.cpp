// Name: wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0
// Address: 005b5ec0
// Address Range: [[005b5ec0, 005b6740]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_initializeExternalRenderer_FUN_005b5ec0(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_initializeExternalRenderer_FUN_005b5ec0(void)

{
  FARPROC pFVar1;
  int iVar2;
  CExternalRenderer CStack_3ba0;
  
  g_RendererDLLHandle = wincore_wddvmem_cpp_loadLibrary_FUN_005ede10(g_RendererDllPath);
  if (g_RendererDLLHandle == (HMODULE)0x0) {
    g_UseDirect3D = (int)g_RendererDLLHandle;
    return 0;
  }
  pFVar1 = wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                     (g_RendererDLLHandle,"APIDLLInformation");
  if (pFVar1 == (FARPROC)0x0) {
    wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20();
    g_UseDirect3D = 0;
    return 0;
  }
  (*pFVar1)(g_RendererDLLHandle,&CStack_3ba0);
  wincore_windll_cpp_CExternalRenderer_ctor_FUN_005b7f90
            ((CExternalRenderer *)CStack_3ba0.renderer_dll_name);
  iVar2 = wincore_windll_cpp_CExternalRenderer_validate_FUN_005b7fe0
                    (&CStack_3ba0,(CExternalRenderer *)CStack_3ba0.renderer_dll_name);
  if (iVar2 == 0) {
    wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20();
    g_UseDirect3D = 0;
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
       (APIDLL_setVideoMode *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetVideoMode");
  if (g_APIDLL_setVideoMode == (APIDLL_setVideoMode *)0x0) {
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
  g_APIDLL_getDisplayContext =
       (APIDLL_getDisplayContext *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLGetDisplayContext");
  if (g_APIDLL_getDisplayContext == (APIDLL_getDisplayContext *)0x0) {
    g_DLLFunctionsMissing = 1;
  }
  g_APIDLL_releaseDisplayContext =
       (APIDLL_releaseDisplayContext *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLReleaseDisplayContext");
  if (g_APIDLL_releaseDisplayContext == (APIDLL_releaseDisplayContext *)0x0) {
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
       (APIDLL_unknown *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetViewport");
  g_APIDLL_setLightConstants =
       (APIDLL_unknown *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetLightConstants");
  g_APIDLL_setLightVector =
       (APIDLL_unknown *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetLightVector");
  g_APIDLL_setAmbientLight =
       (APIDLL_unknown *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetAmbientLight");
  g_APIDLL_setTransform =
       (APIDLL_unknown *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetTransform");
  g_APIDLL_polyList =
       (APIDLL_unknown *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLpolyList");
  g_APIDLL_getTextureHandle =
       (APIDLL_unknown *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLgetTextureHandle");
  g_APIDLL_selectTextureByHandle =
       (APIDLL_unknown *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLselectTextureByHandle");
  g_APIDLL_enableCulling =
       (APIDLL_unknown *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLenableCulling");
  g_APIDLL_enableClipping =
       (APIDLL_unknown *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLenableClipping");
  g_APIDLL_setTextureClamp =
       (APIDLL_unknown *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20
                 (g_RendererDLLHandle,"APIDLLsetTextureClamp");
  g_APIDLL_setFog =
       (APIDLL_unknown *)
       wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(g_RendererDLLHandle,"APIDLLsetFog");
  if (g_DLLFunctionsMissing == 0) {
    g_LoadedExternalDLLRenderer = 1;
    return 1;
  }
  wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20();
  g_UseDirect3D = 0;
  return 0;
}
