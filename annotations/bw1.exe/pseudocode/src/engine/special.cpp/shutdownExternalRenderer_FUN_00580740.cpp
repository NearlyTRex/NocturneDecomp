// Name: engine_special.cpp_shutdownExternalRenderer_FUN_00580740
// Address: 00580740
// Address Range: [[00580740, 00580924]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_00580740(void)

#include "nocturne.h"

void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_00580740(void)

{
  g_INT_01c50948 = 0;
  g_LoadedExternalDLLRenderer = 0;
  if (g_HMODULE_02c834b0 != (HMODULE)0x0) {
    wincore_wddvmem_cpp_freeLibrary_FUN_005ad450(g_HMODULE_02c834b0);
    g_HMODULE_02c834b0 = (HMODULE)0x0;
  }
  g_APIDLL_kill = (byte *)0x0;
  g_APIDLL_toggle = (byte *)0x0;
  g_INT_02c83394 = 0;
  g_APIDLL_setVideoMode2 = (byte *)0x0;
  g_APIDLL_restoreVideoMode = (byte *)0x0;
  g_PTR_02c833a0 = (byte *)0x0;
  g_PTR_02c833a4 = (byte *)0x0;
  g_APIDLL_lockFrame = (byte *)0x0;
  g_PTR_02c833ac = (byte *)0x0;
  g_PTR_02c833b0 = (byte *)0x0;
  g_PTR_02c833b4 = (byte *)0x0;
  g_PTR_02c833c0 = (byte *)0x0;
  g_APIDLL_drawPolygon = (byte *)0x0;
  g_APIDLL_drawPolygon2 = (byte *)0x0;
  g_APIDLL_drawPolyList = (byte *)0x0;
  g_APIDLL_drawPolyList2 = (byte *)0x0;
  g_APIDLL_drawPolyList3 = (byte *)0x0;
  g_PTR_02c833d8 = (byte *)0x0;
  g_PTR_02c833dc = (byte *)0x0;
  g_APIDLL_add3dLine = (byte *)0x0;
  g_APIDLL_flushLineList = (byte *)0x0;
  g_APIDLL_clear = (byte *)0x0;
  g_APIDLL_setFogColor = (byte *)0x0;
  g_APIDLL_sync = (byte *)0x0;
  g_APIDLL_clearZBuffer = (byte *)0x0;
  g_APIDLL_clearZBox = (byte *)0x0;
  g_APIDLL_setColorTable16 = (byte *)0x0;
  g_INT_02c83400 = 0;
  g_INT_02c83404 = 0;
  g_APIDLL_masterZBuffer = (byte *)0x0;
  g_APIDLL_restoreZBuffer = (byte *)0x0;
  g_APIDLL_getVideoMemory = (byte *)0x0;
  g_APIDLL_selectCard = (byte *)0x0;
  g_APIDLL_buildCardList = (byte *)0x0;
  g_PTR_02c8341c = (byte *)0x0;
  g_PTR_02c83420 = (byte *)0x0;
  g_PTR_02c83424 = (byte *)0x0;
  g_PTR_02c83428 = (byte *)0x0;
  g_PTR_02c8342c = (byte *)0x0;
  g_PTR_02c83430 = (byte *)0x0;
  g_INT_02c83434 = 0;
  g_PTR_02c83438 = (byte *)0x0;
  g_INT_02c8343c = 0;
  g_PTR_02c83440 = (byte *)0x0;
  g_PTR_02c83444 = (byte *)0x0;
  g_PTR_02c83448 = (byte *)0x0;
  g_PTR_02c8344c = (byte *)0x0;
  g_PTR_02c83450 = (byte *)0x0;
  g_PTR_02c83454 = (byte *)0x0;
  g_PTR_02c83458 = (byte *)0x0;
  g_PTR_02c8345c = (byte *)0x0;
  g_PTR_02c83460 = (byte *)0x0;
  g_PTR_02c83464 = (byte *)0x0;
  g_PTR_02c83468 = (byte *)0x0;
  g_PTR_02c8346c = (byte *)0x0;
  g_PTR_02c83470 = (byte *)0x0;
  g_INT_02c83474 = 0;
  g_INT_02c83478 = 0;
  g_INT_02c8347c = 0;
  g_PTR_02c83480 = (byte *)0x0;
  g_PTR_02c83484 = (byte *)0x0;
  g_PTR_02c83488 = (byte *)0x0;
  g_PTR_02c8348c = (byte *)0x0;
  g_INT_02c83490 = 0;
  g_PTR_02c83494 = (byte *)0x0;
  g_PTR_02c83498 = (byte *)0x0;
  g_PTR_02c8349c = (byte *)0x0;
  g_PTR_02c834a0 = (byte *)0x0;
  g_PTR_02c834a4 = (byte *)0x0;
  g_PTR_02c834a8 = (byte *)0x0;
  g_PTR_02c83388 = (byte *)0x0;
  return;
}
