// Name: wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
// Address: 005b5d20
// Address Range: [[005b5d20, 005b5eb0]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20(void)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20(void)

{
  g_UseExternalRenderer = 0;
  g_LoadedExternalDLLRenderer = 0;
  if (g_RendererDLLHandle != (HMODULE)0x0) {
    wincore_wddvmem_cpp_freeLibrary_FUN_005ede00(g_RendererDLLHandle);
    g_RendererDLLHandle = (HMODULE)0x0;
  }
  g_APIDLL_kill = (APIDLL_kill *)0x0;
  g_APIDLL_toggle = (APIDLL_toggle *)0x0;
  g_APIDLL_setVideoMode = (APIDLL_unknown *)0x0;
  g_APIDLL_setVideoMode2 = (APIDLL_setVideoMode2 *)0x0;
  g_APIDLL_restoreVideoMode = (APIDLL_restoreVideoMode *)0x0;
  g_APIDLL_beginScene = (APIDLL_beginScene *)0x0;
  g_APIDLL_endScene = (APIDLL_endScene *)0x0;
  g_APIDLL_lockFrame = (APIDLL_lockFrame *)0x0;
  g_APIDLL_unlockFrame = (APIDLL_unlockFrame *)0x0;
  g_APIDLL_selectTexture = (APIDLL_selectTexture *)0x0;
  g_APIDLL_updateTexture = (APIDLL_updateTexture *)0x0;
  g_APIDLL_setMipMapLevel = (APIDLL_setMipMapLevel *)0x0;
  g_APIDLL_drawPolygon = (APIDLL_drawPolygon *)0x0;
  g_APIDLL_drawPolygon2 = (APIDLL_drawPolygon2 *)0x0;
  g_APIDLL_drawPolyList = (APIDLL_drawPolyList *)0x0;
  g_APIDLL_drawPolyList2 = (APIDLL_drawPolyList2 *)0x0;
  g_APIDLL_drawPolyList3 = (APIDLL_drawPolyList3 *)0x0;
  g_APIDLL_addParticle = (APIDLL_addParticle *)0x0;
  g_APIDLL_flushParticleList = (APIDLL_flushParticleList *)0x0;
  g_APIDLL_add3dLine = (APIDLL_add3dLine *)0x0;
  g_APIDLL_flushLineList = (APIDLL_flushLineList *)0x0;
  g_APIDLL_clear = (APIDLL_clear *)0x0;
  g_APIDLL_setFogColor = (APIDLL_setFogColor *)0x0;
  g_APIDLL_sync = (APIDLL_sync *)0x0;
  g_APIDLL_clearZBuffer = (APIDLL_clearZBuffer *)0x0;
  g_APIDLL_clearZBox = (APIDLL_clearZBox *)0x0;
  g_APIDLL_setColorTable16 = (APIDLL_setColorTable16 *)0x0;
  g_APIDLL_GetDisplayContext = (APIDLL_unknown *)0x0;
  g_APIDLL_ReleaseDisplayContext = (APIDLL_unknown *)0x0;
  g_APIDLL_masterZBuffer = (APIDLL_masterZBuffer *)0x0;
  g_APIDLL_restoreZBuffer = (APIDLL_restoreZBuffer *)0x0;
  g_APIDLL_getVideoMemory = (APIDLL_getVideoMemory *)0x0;
  g_APIDLL_selectCard = (APIDLL_selectCard *)0x0;
  g_APIDLL_buildCardList = (APIDLL_buildCardList *)0x0;
  g_APIDLL_lockHoldBuffer = (APIDLL_lockHoldBuffer *)0x0;
  g_APIDLL_unlockHoldBuffer = (APIDLL_unlockHoldBuffer *)0x0;
  g_APIDLL_lockTexture = (APIDLL_lockTexture *)0x0;
  g_APIDLL_unlockTexture = (APIDLL_unlockTexture *)0x0;
  g_APIDLL_getTextureInfo = (APIDLL_getTextureInfo *)0x0;
  g_APIDLL_setVideoModeX = (APIDLL_setVideoModeX *)0x0;
  g_APIDLL_restoreVideoModeX = (APIDLL_restoreVideoModeX *)0x0;
  g_APIDLL_lockFrameX = (APIDLL_lockFrameX *)0x0;
  g_APIDLL_unlockFrameX = (APIDLL_unlockFrameX *)0x0;
  g_APIDLL_toggleX = (APIDLL_toggleX *)0x0;
  g_APIDLL_setViewport = (APIDLL_unknown *)0x0;
  g_APIDLL_setLightConstants = (APIDLL_unknown *)0x0;
  g_APIDLL_setLightVector = (APIDLL_unknown *)0x0;
  g_APIDLL_setAmbientLight = (APIDLL_unknown *)0x0;
  g_APIDLL_setTransform = (APIDLL_unknown *)0x0;
  g_APIDLL_polyList = (APIDLL_unknown *)0x0;
  g_APIDLL_getTextureHandle = (APIDLL_unknown *)0x0;
  g_APIDLL_selectTextureByHandle = (APIDLL_unknown *)0x0;
  g_APIDLL_enableCulling = (APIDLL_unknown *)0x0;
  g_APIDLL_enableClipping = (APIDLL_unknown *)0x0;
  g_APIDLL_setTextureClamp = (APIDLL_unknown *)0x0;
  g_APIDLL_setFog = (APIDLL_unknown *)0x0;
  g_APIDLL_init = (APIDLL_init *)0x0;
  return;
}
