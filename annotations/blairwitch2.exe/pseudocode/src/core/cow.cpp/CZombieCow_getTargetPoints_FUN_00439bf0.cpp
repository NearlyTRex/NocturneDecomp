// Name: core_cow.cpp_CZombieCow_getTargetPoints_FUN_00439bf0
// Address: 00439bf0
// Address Range: [[00439bf0, 00439c55]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_00439bf0(CZombieCow *this_ptr,undefined4 *param_2)

#include "nocturne.h"

uint __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_00439bf0(CZombieCow *this_ptr,uint *param_2)

{
  byte bVar1;
  uint auStackY_100c [1016];
  uint uStack_24;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,this_ptr->bone_spine);
  uStack_18 = uStack_24;
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 == &stack0xffffffe8) {
    return 1;
  }
  *param_2 = uStack_18;
  param_2[1] = uStack_14;
  param_2[2] = uStack_10;
  return 1;
}
