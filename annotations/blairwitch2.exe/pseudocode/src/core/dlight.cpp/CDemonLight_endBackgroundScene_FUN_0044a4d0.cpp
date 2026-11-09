// Name: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0044a4d0
// Address: 0044a4d0
// Address Range: [[0044a4d0, 0044a51d]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0044a4d0(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0044a4d0(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  _DAT_01b11db4 = _DAT_01b11db4 + -1;
  if (_DAT_01b11db4 != 0) {
    return;
  }
  _DAT_01b11db4 = 0;
  puVar3 = (uint *)&DAT_01b11db8;
  puVar4 = (uint *)&DAT_01c2a38c;
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
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,0);
  return;
}
