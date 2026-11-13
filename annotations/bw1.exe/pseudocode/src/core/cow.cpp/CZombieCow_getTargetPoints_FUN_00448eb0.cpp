// Name: core_cow.cpp_CZombieCow_getTargetPoints_FUN_00448eb0
// Address: 00448eb0
// Address Range: [[00448eb0, 00448f15]]
// Convention: __cdecl
// Signature: int __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_00448eb0(CZombieCow *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_00448eb0(CZombieCow *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_100c [1016];
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  bVar1 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,this_ptr->bone_spine,&CStack_24);
  CStack_18.x = CStack_24.x;
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array == &CStack_18) {
    return 1;
  }
  out_points_array->x = CStack_18.x;
  out_points_array->y = CStack_18.y;
  out_points_array->z = CStack_18.z;
  return 1;
}
