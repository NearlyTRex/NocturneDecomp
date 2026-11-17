// Name: engine_special.cpp_shutdownExternalRenderer_FUN_00564010
// Address: 00564010
// Address Range: [[00564010, 005641f4]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_00564010(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_00564010(void)

{
  g_INT_01c6cee8 = 0;
  g_INT_02cf6108 = 0;
  if (g_HMODULE_02cf610c != (HMODULE)0x0) {
    wincore_wddvmem_cpp_freeLibrary_FUN_0057ad00(g_HMODULE_02cf610c);
    g_HMODULE_02cf610c = (HMODULE)0x0;
  }
  g_APIDLL_kill = (byte *)0x0;
  g_APIDLL_toggle = (byte *)0x0;
  _DAT_02cf5ff0 = 0;
  g_APIDLL_setVideoMode2 = (byte *)0x0;
  g_APIDLL_restoreVideoMode = (byte *)0x0;
  g_APIDLL_beginScene = (byte *)0x0;
  g_APIDLL_endScene = (byte *)0x0;
  g_APIDLL_lockFrame = (byte *)0x0;
  g_APIDLL_unlockFrame = (byte *)0x0;
  g_APIDLL_selectTexture = (byte *)0x0;
  g_APIDLL_updateTexture = (byte *)0x0;
  g_APIDLL_setMipMapLevel = (byte *)0x0;
  g_APIDLL_drawPolygon = (byte *)0x0;
  g_APIDLL_drawPolygon2 = (byte *)0x0;
  g_APIDLL_drawPolyList = (byte *)0x0;
  g_APIDLL_drawPolyList2 = (byte *)0x0;
  g_APIDLL_drawPolyList3 = (byte *)0x0;
  g_APIDLL_addParticle = (byte *)0x0;
  g_APIDLL_flushParticleList = (byte *)0x0;
  g_APIDLL_add3dLine = (byte *)0x0;
  g_APIDLL_flushLineList = (byte *)0x0;
  g_APIDLL_clear = (byte *)0x0;
  g_APIDLL_setFogColor = (byte *)0x0;
  g_APIDLL_sync = (byte *)0x0;
  g_APIDLL_clearZBuffer = (byte *)0x0;
  g_APIDLL_clearZBox = (byte *)0x0;
  g_APIDLL_setColorTable16 = (byte *)0x0;
  _DAT_02cf605c = 0;
  _DAT_02cf6060 = 0;
  g_APIDLL_masterZBuffer = (byte *)0x0;
  g_APIDLL_restoreZBuffer = (byte *)0x0;
  g_APIDLL_getVideoMemory = (byte *)0x0;
  g_APIDLL_selectCard = (byte *)0x0;
  g_APIDLL_buildCardList = (byte *)0x0;
  g_APIDLL_lockHoldBuffer = (byte *)0x0;
  g_APIDLL_unlockHoldBuffer = (byte *)0x0;
  g_APIDLL_lockTexture = (byte *)0x0;
  g_APIDLL_unlockTexture = (byte *)0x0;
  g_APIDLL_getTextureInfo = (byte *)0x0;
  g_APIDLL_setVideoModeX = (byte *)0x0;
  _DAT_02cf6090 = 0;
  g_APIDLL_lockFrameX = (byte *)0x0;
  _DAT_02cf6098 = 0;
  g_APIDLL_toggleX = (byte *)0x0;
  g_APIDLL_setViewport = (byte *)0x0;
  g_APIDLL_setLightConstants = (byte *)0x0;
  g_APIDLL_setLightVector = (byte *)0x0;
  g_APIDLL_setAmbientLight = (byte *)0x0;
  g_APIDLL_setTransform = (byte *)0x0;
  g_APIDLL_polyList = (byte *)0x0;
  g_APIDLL_getTextureHandle = (byte *)0x0;
  g_PTR_02cf60bc = (byte *)0x0;
  g_PTR_02cf60c0 = (byte *)0x0;
  g_PTR_02cf60c4 = (byte *)0x0;
  g_PTR_02cf60c8 = (byte *)0x0;
  g_PTR_02cf60cc = (byte *)0x0;
  _DAT_02cf60d0 = 0;
  _DAT_02cf60d4 = 0;
  _DAT_02cf60d8 = 0;
  g_APIDLL_setTextureClamp = (byte *)0x0;
  g_PTR_02cf60e0 = (byte *)0x0;
  g_APIDLL_setFog = (byte *)0x0;
  g_PTR_02cf60e8 = (byte *)0x0;
  g_PTR_02cf60ec = (byte *)0x0;
  g_PTR_02cf60f0 = (byte *)0x0;
  g_PTR_02cf60f4 = (byte *)0x0;
  g_PTR_02cf60f8 = (byte *)0x0;
  g_PTR_02cf60fc = (byte *)0x0;
  g_PTR_02cf6100 = (byte *)0x0;
  g_PTR_02cf6104 = (byte *)0x0;
  g_APIDLL_init = (byte *)0x0;
  return;
}
