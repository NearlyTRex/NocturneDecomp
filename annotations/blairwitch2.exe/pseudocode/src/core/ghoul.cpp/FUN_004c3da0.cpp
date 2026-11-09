// Name: core_ghoul.cpp_FUN_004c3da0
// Address: 004c3da0
// Address Range: [[004c3da0, 004c3e0a]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004c3da0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ghoul_cpp_FUN_004c3da0(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1000 [989];
  uint auStack_84 [12];
  uint auStack_54 [12];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint auStack_14 [2];
  
  bVar4 = 0;
  core_skeleton_cpp_FUN_00546790(param_1 + 0x2b4,_DAT_01cb821c);
  puVar2 = auStack_54;
  puVar3 = auStack_84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  uStack_24 = 0;
  uStack_20 = 0x3f333333;
  uStack_1c = 0x3e99999a;
  core_xform_cpp_FUN_00591530(&uStack_24,auStack_84);
  *unaff_ESI = uStack_18;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(uint *)((int)auStack_14 + (uint)bVar4 * 0xfffffff8);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       auStack_14[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
  return;
}
