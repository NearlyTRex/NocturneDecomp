// Name: core_shadow.cpp_CShadow_getTargetPoints_FUN_0053ec70
// Address: 0053ec70
// Address Range: [[0053ec70, 0053ecd5]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_shadow_cpp_CShadow_getTargetPoints_FUN_0053ec70(CShadow *this_ptr,undefined4 *param_2)

#include "nocturne.h"

uint __cdecl core_shadow_cpp_CShadow_getTargetPoints_FUN_0053ec70(CShadow *this_ptr,uint *param_2)

{
  byte bVar1;
  uint auStackY_100c [1016];
  uint uStack_24;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,this_ptr->bone_indices[0]);
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
