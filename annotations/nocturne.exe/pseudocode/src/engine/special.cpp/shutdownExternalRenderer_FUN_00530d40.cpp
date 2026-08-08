// Name: engine_special.cpp_shutdownExternalRenderer_FUN_00530d40
// Address: 00530d40
// Address Range: [[00530d40, 00530e52]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_00530d40(void)

#include "nocturne.h"

void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_00530d40(void)

{
  g_UseExternalRenderer = 0;
  g_LoadedExternalDLLRenderer = 0;
  if (g_RendererDLLHandle != (HMODULE)0x0) {
    wincore_wddvmem_cpp_freeLibrary_FUN_00553d20(g_RendererDLLHandle);
    g_RendererDLLHandle = (HMODULE)0x0;
  }
  g_APIDLL_kill = (APIDLL_kill *)0x0;
  g_APIDLL_toggle = (APIDLL_toggle *)0x0;
  g_APIDLL_setVideoMode = (APIDLL_setVideoMode *)0x0;
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
  g_APIDLL_getDisplayContext = (APIDLL_getDisplayContext *)0x0;
  g_APIDLL_releaseDisplayContext = (APIDLL_releaseDisplayContext *)0x0;
  g_APIDLL_masterZBuffer = (APIDLL_masterZBuffer *)0x0;
  g_APIDLL_restoreZBuffer = (APIDLL_restoreZBuffer *)0x0;
  g_APIDLL_getVideoMemory = (APIDLL_getVideoMemory *)0x0;
  g_APIDLL_selectCard = (APIDLL_selectCard *)0x0;
  g_APIDLL_buildCardList = (APIDLL_buildCardList *)0x0;
  g_APIDLL_lockHoldBuffer = (APIDLL_lockHoldBuffer *)0x0;
  g_APIDLL_unlockHoldBuffer = (APIDLL_unlockHoldBuffer *)0x0;
  g_APIDLL_init = (APIDLL_init *)0x0;
  return;
}
