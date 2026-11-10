// Name: core_ghoul.cpp_CGhoul_getTargetPoint_FUN_004e0520
// Address: 004e0520
// Address Range: [[004e0520, 004e058a]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_ghoul_cpp_CGhoul_getTargetPoint_FUN_004e0520(CGhoul *this_ptr,CVector3f *out_point)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_ghoul_cpp_CGhoul_getTargetPoint_FUN_004e0520(CGhoul *this_ptr,CVector3f *out_point)

{
  int iVar1;
  CVector3f *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1000 [989];
  uint auStack_84 [12];
  uint auStack_54 [12];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  uint auStack_14 [2];
  
  bVar4 = 0;
  core_skeleton_cpp_FUN_00568e30(&(this_ptr->base).base.model,_DAT_01cd0d98);
  puVar3 = auStack_54;
  puVar2 = auStack_84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  uStack_24 = 0;
  uStack_20 = 0x3f333333;
  uStack_1c = 0x3e99999a;
  core_xform_cpp_FUN_005b5080(&uStack_24,auStack_84);
  puVar3 = (uint *)((int)unaff_ESI + (uint)bVar4 * -8 + 4);
  unaff_ESI->x = fStack_18;
  *puVar3 = *(uint *)((int)auStack_14 + (uint)bVar4 * 0xfffffff8);
  puVar3[(uint)bVar4 * -2 + 1] = auStack_14[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1]
  ;
  return unaff_ESI;
}
