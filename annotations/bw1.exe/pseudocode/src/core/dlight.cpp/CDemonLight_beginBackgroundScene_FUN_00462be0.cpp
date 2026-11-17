// Name: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00462be0
// Address: 00462be0
// Address Range: [[00462be0, 00462ccd]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00462be0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00462be0(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte **ppuVar4;
  byte **ppuVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((this_ptr->base).scene_open_flag == 0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dlight.cpp";
    g_INT_01d1d404 = 0x1af;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonLight::beginBackgroundScene - Scene not open");
  }
  g_INT_01b2d374 = g_INT_01b2d374 + 1;
  if (g_INT_01b2d374 == 1) {
    ppuVar4 = g_ARRAY_PTR_01c4354c;
    ppuVar5 = g_ARRAY_PTR_01b2d378;
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
      g_CHAR_PTR_01d1d400 = "..\\core\\dlight.cpp";
      g_INT_01d1d404 = 0x1bc;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonLight::beginBackgroundScene - No master Z buffer");
    }
    iVar2 = 0;
    if (0 < this_ptr->shadow_map_height) {
      iVar3 = 0;
      do {
        *(void **)((int)g_ARRAY_PTR_01c4354c + iVar3) =
             (void *)((int)this_ptr->master_zbuffer + this_ptr->shadow_map_width * iVar2 * 2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->shadow_map_height);
    }
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(g_CDemonRenderer_PTR_00612560,1);
  }
  return;
}
