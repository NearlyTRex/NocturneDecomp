// Name: core_beast.cpp_CBeast_getTargetPoints_FUN_00414880
// Address: 00414880
// Address Range: [[00414880, 004148dd]]
// Convention: __cdecl
// Signature: int __cdecl core_beast_cpp_CBeast_getTargetPoints_FUN_00414880(CBeast *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_beast_cpp_CBeast_getTargetPoints_FUN_00414880(CBeast *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_100c [1016];
  CVector3f CStack_24;
  float fStack_18;
  uint auStack_14 [2];
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,0);
  CStack_24.x = fStack_18;
  *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + 4) = auStack_14[(uint)bVar1 * -2];
  *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       auStack_14[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array == &CStack_24) {
    return 1;
  }
  out_points_array->x = CStack_24.x;
  out_points_array->y = CStack_24.y;
  out_points_array->z = CStack_24.z;
  return 1;
}
