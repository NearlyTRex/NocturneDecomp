// Name: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0
// Address: 0044a3e0
// Address Range: [[0044a3e0, 0044a4cd]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte **ppuVar4;
  byte **ppuVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((this_ptr->base).scene_open_flag == 0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\dlight.cpp";
    g_INT_01d046a4 = 0x1b0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonLight::beginBackgroundScene - Scene not open");
  }
  g_BackgroundSceneNestingCount = g_BackgroundSceneNestingCount + 1;
  if (g_BackgroundSceneNestingCount == 1) {
    ppuVar4 = g_ScreenBufferArray;
    ppuVar5 = g_SavedScreenBufferArray;
    for (uVar1 = this_ptr->shadow_map_height & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *ppuVar5 = *ppuVar4;
      ppuVar4 = ppuVar4 + (uint)bVar6 * -2 + 1;
      ppuVar5 = ppuVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)ppuVar5 = *(byte *)ppuVar4;
      ppuVar4 = (byte **)((int)ppuVar4 + (uint)bVar6 * -2 + 1);
      ppuVar5 = (byte **)((int)ppuVar5 + (uint)bVar6 * -2 + 1);
    }
    if (this_ptr->master_zbuffer == (void *)0x0) {
      g_CHAR_PTR_01d046a0 = "..\\core\\dlight.cpp";
      g_INT_01d046a4 = 0x1bd;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonLight::beginBackgroundScene - No master Z buffer");
    }
    iVar2 = 0;
    if (0 < this_ptr->shadow_map_height) {
      iVar3 = 0;
      do {
        *(void **)((int)g_ScreenBufferArray + iVar3) =
             (void *)((int)this_ptr->master_zbuffer + this_ptr->shadow_map_width * iVar2 * 2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->shadow_map_height);
    }
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(g_CDemonRenderer_PTR_0060b280,1);
  }
  return;
}
