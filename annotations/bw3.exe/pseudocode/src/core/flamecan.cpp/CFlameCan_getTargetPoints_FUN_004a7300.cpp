// Name: core_flamecan.cpp_CFlameCan_getTargetPoints_FUN_004a7300
// Address: 004a7300
// Address Range: [[004a7300, 004a73c9]]
// Convention: __cdecl
// Signature: int __cdecl core_flamecan_cpp_CFlameCan_getTargetPoints_FUN_004a7300(CFlameCan *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flamecan_cpp_CFlameCan_getTargetPoints_FUN_004a7300(CFlameCan *this_ptr,CVector3f *out_points_array)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_101c [1003];
  CBoundingBox3D *in_stack_ffffff94;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [5];
  float fStack_10;
  
  bVar4 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff94);
  puVar2 = (uint *)&stack0xffffffb4;
  puVar3 = (uint *)&stack0xffffff94;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_28 = fStack_64 + fStack_58;
  afStack_24[0] = fStack_60 + fStack_54;
  afStack_24[1] = fStack_5c + fStack_50;
  afStack_24[2] = fStack_64 + fStack_58;
  afStack_24[(uint)bVar4 * -2 + 3] = afStack_24[(uint)bVar4 * -2];
  afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_10 = afStack_24[2] * _DAT_005c0cb4;
  CStack_34.x = afStack_24[2] * _DAT_005c0cb4;
  *(uint *)((int)&CStack_34 + (uint)bVar4 * -8 + 4) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar4 * -8);
  *(uint *)((int)&CStack_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)(&stack0xfffffff8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (out_points_array == &CStack_34) {
    return 1;
  }
  out_points_array->x = CStack_34.x;
  out_points_array->y = CStack_34.y;
  out_points_array->z = CStack_34.z;
  return 1;
}
