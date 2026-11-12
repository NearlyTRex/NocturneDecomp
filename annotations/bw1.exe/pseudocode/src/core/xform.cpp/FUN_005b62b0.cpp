// Name: core_xform.cpp_FUN_005b62b0
// Address: 005b62b0
// Address Range: [[005b62b0, 005b62f6]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_005b62b0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_xform_cpp_FUN_005b62b0(uint param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_ffc [993];
  uint auStack_74 [12];
  uint auStack_44 [12];
  uint uStack_14;
  uint auStack_10 [2];
  
  bVar4 = 0;
  core_xform_cpp_inverse_FUN_005b6380(param_1);
  puVar2 = auStack_44;
  puVar3 = auStack_74;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_xform_cpp_FUN_005b6270(auStack_74);
  *unaff_ESI = uStack_14;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(uint *)((int)auStack_10 + (uint)bVar4 * 0xfffffff8);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       auStack_10[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
  return;
}
