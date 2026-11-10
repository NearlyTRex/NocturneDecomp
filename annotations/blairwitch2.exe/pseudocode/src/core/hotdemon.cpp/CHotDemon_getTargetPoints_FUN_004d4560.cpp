// Name: core_hotdemon.cpp_CHotDemon_getTargetPoints_FUN_004d4560
// Address: 004d4560
// Address Range: [[004d4560, 004d4652]]
// Convention: __cdecl
// Signature: int __cdecl core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004d4560(CHotDemon *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004d4560(CHotDemon *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_1040 [1016];
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [2];
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [2];
  CVector3f CStack_28;
  float fStack_1c;
  uint auStack_18 [2];
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_01cee00c);
  CStack_28.x = fStack_1c;
  *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + 4) = auStack_18[(uint)bVar1 * -2];
  *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       auStack_18[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array != &CStack_28) {
    out_points_array->x = CStack_28.x;
    out_points_array->y = CStack_28.y;
    out_points_array->z = CStack_28.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_01cee030);
  CStack_40.x = fStack_4c;
  *(float *)((int)&CStack_40 + (uint)bVar1 * -8 + 4) = afStack_48[(uint)bVar1 * -2];
  *(float *)((int)&CStack_40 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_48[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array + 1 != &CStack_40) {
    out_points_array[1].x = CStack_40.x;
    out_points_array[1].y = CStack_40.y;
    out_points_array[1].z = CStack_40.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_01cee038);
  CStack_58.x = fStack_34;
  *(float *)((int)&CStack_58 + (uint)bVar1 * -8 + 4) = afStack_30[(uint)bVar1 * -2];
  *(float *)((int)&CStack_58 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_30[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array + 2 == &CStack_58) {
    return 3;
  }
  out_points_array[2].x = CStack_58.x;
  out_points_array[2].y = CStack_58.y;
  out_points_array[2].z = CStack_58.z;
  return 3;
}
