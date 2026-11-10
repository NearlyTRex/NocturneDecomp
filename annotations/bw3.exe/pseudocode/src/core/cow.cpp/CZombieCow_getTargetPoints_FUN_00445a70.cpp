// Name: core_cow.cpp_CZombieCow_getTargetPoints_FUN_00445a70
// Address: 00445a70
// Address Range: [[00445a70, 00445ad5]]
// Convention: __cdecl
// Signature: int __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_00445a70(CZombieCow *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_00445a70(CZombieCow *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_100c [1016];
  float fStack_24;
  CVector3f CStack_18;
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_0054dcc0(&(this_ptr->base).base.model,this_ptr->bone_spine);
  CStack_18.x = fStack_24;
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + 4) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8);
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (out_points_array == &CStack_18) {
    return 1;
  }
  out_points_array->x = CStack_18.x;
  out_points_array->y = CStack_18.y;
  out_points_array->z = CStack_18.z;
  return 1;
}
