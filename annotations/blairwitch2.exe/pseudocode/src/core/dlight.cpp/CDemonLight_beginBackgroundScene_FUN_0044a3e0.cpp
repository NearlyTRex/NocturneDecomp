// Name: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0
// Address: 0044a3e0
// Address Range: [[0044a3e0, 0044a4cd]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((this_ptr->base).scene_open_flag == 0) {
    _DAT_01d046a0 = "..\\core\\dlight.cpp";
    _DAT_01d046a4 = 0x1b0;
    core_main_c_FUN_004e4500("CDemonLight::beginBackgroundScene - Scene not open");
  }
  _DAT_01b11db4 = _DAT_01b11db4 + 1;
  if (_DAT_01b11db4 == 1) {
    puVar4 = (uint *)&DAT_01c2a38c;
    puVar5 = (uint *)&DAT_01b11db8;
    for (uVar1 = this_ptr->shadow_map_height & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    if (this_ptr->master_zbuffer == (void *)0x0) {
      _DAT_01d046a0 = "..\\core\\dlight.cpp";
      _DAT_01d046a4 = 0x1bd;
      core_main_c_FUN_004e4500("CDemonLight::beginBackgroundScene - No master Z buffer");
    }
    iVar2 = 0;
    if (0 < this_ptr->shadow_map_height) {
      iVar3 = 0;
      do {
        *(void **)(&DAT_01c2a38c + iVar3) =
             (void *)((int)this_ptr->master_zbuffer + this_ptr->shadow_map_width * iVar2 * 2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->shadow_map_height);
    }
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,1);
  }
  return;
}
