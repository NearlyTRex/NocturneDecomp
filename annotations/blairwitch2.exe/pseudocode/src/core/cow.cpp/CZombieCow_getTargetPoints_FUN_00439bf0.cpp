// Name: core_cow.cpp_CZombieCow_getTargetPoints_FUN_00439bf0
// Address: 00439bf0
// Address Range: [[00439bf0, 00439c55]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_00439bf0(CZombieCow *this_ptr,undefined4 *param_2)

#include "nocturne.h"

uint __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_00439bf0(CZombieCow *this_ptr,uint *param_2)

{
  byte bVar1;
  float afStackY_100c [1016];
  CVector3f CStack_24;
  float fStack_18;
  uint auStack_14 [2];
  
  bVar1 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,this_ptr->bone_spine,&CStack_24);
  fStack_18 = CStack_24.x;
  auStack_14[(uint)bVar1 * -2] = *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + 4);
  auStack_14[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if ((float *)param_2 == &fStack_18) {
    return 1;
  }
  *param_2 = fStack_18;
  param_2[1] = auStack_14[0];
  param_2[2] = auStack_14[1];
  return 1;
}
