// Name: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00462be0
// Address: 00462be0
// Address Range: [[00462be0, 00462ccd]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00462be0(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00462be0(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (*(int *)&this_ptr->field_0x11e4 == 0) {
    _DAT_01d1d400 = "..\\core\\dlight.cpp";
    _DAT_01d1d404 = 0x1af;
    core_main_c_FUN_005030e0("CDemonLight::beginBackgroundScene - Scene not open");
  }
  _DAT_01b2d374 = _DAT_01b2d374 + 1;
  if (_DAT_01b2d374 == 1) {
    puVar4 = (uint *)&DAT_01c4354c;
    puVar5 = (uint *)&DAT_01b2d378;
    for (uVar1 = *(uint *)&this_ptr->field_0x1cc4 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    if (*(int *)&this_ptr->field_0x2f9c == 0) {
      _DAT_01d1d400 = "..\\core\\dlight.cpp";
      _DAT_01d1d404 = 0x1bc;
      core_main_c_FUN_005030e0("CDemonLight::beginBackgroundScene - No master Z buffer");
    }
    iVar2 = 0;
    if (0 < *(int *)&this_ptr->field_0x1cc4) {
      iVar3 = 0;
      do {
        *(int *)(&DAT_01c4354c + iVar3) =
             *(int *)&this_ptr->field_0x2f9c + *(int *)&this_ptr->field_0x1cc0 * iVar2 * 2;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)&this_ptr->field_0x1cc4);
    }
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(DAT_00612560,1);
  }
  return;
}
