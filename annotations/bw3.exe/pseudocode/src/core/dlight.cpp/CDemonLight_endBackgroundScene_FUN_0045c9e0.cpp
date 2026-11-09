// Name: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0045c9e0
// Address: 0045c9e0
// Address Range: [[0045c9e0, 0045ca2d]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0045c9e0(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0045c9e0(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  _DAT_01b49be0 = _DAT_01b49be0 + -1;
  if (_DAT_01b49be0 != 0) {
    return;
  }
  _DAT_01b49be0 = 0;
  puVar3 = (uint *)&DAT_01b49be4;
  puVar4 = (uint *)&DAT_01c5faec;
  for (uVar1 = *(uint *)&this_ptr->field_0x1cc4 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(byte *)puVar4 = *(byte *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,0);
  return;
}
