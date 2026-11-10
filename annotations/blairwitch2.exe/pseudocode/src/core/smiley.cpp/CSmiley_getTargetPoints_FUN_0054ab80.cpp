// Name: core_smiley.cpp_CSmiley_getTargetPoints_FUN_0054ab80
// Address: 0054ab80
// Address Range: [[0054ab80, 0054ad55]]
// Convention: __cdecl
// Signature: int __cdecl core_smiley_cpp_CSmiley_getTargetPoints_FUN_0054ab80(CSmiley *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_smiley_cpp_CSmiley_getTargetPoints_FUN_0054ab80(CSmiley *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_1064 [1013];
  float fStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [5];
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  float fStack_10;
  uint auStack_c [2];
  
  bVar1 = 0;
  if (this_ptr->model_variant == 3) {
    return 0;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_02628610);
  CStack_4c.x = fStack_64;
  *(float *)((int)&CStack_4c + (uint)bVar1 * -8 + 4) = afStack_60[(uint)bVar1 * -2];
  *(float *)((int)&CStack_4c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_60[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array != &CStack_4c) {
    out_points_array->x = CStack_4c.x;
    out_points_array->y = CStack_4c.y;
    out_points_array->z = CStack_4c.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_02628624);
  CStack_28.x = fStack_40;
  *(float *)((int)&CStack_28 + (uint)bVar1 * -8 + 4) = afStack_3c[(uint)bVar1 * -2];
  *(float *)((int)&CStack_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_3c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array + 1 != &CStack_28) {
    out_points_array[1].x = CStack_28.x;
    out_points_array[1].y = CStack_28.y;
    out_points_array[1].z = CStack_28.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_02628628);
  CStack_70.x = fStack_10;
  *(uint *)((int)&CStack_70 + (uint)bVar1 * -8 + 4) = auStack_c[(uint)bVar1 * -2];
  *(uint *)((int)&CStack_70 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       auStack_c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array + 2 != &CStack_70) {
    out_points_array[2].x = CStack_70.x;
    out_points_array[2].y = CStack_70.y;
    out_points_array[2].z = CStack_70.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_02628634);
  CStack_34.x = fStack_7c;
  *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + 4) =
       *(uint *)(&stack0xffffff88 + (uint)bVar1 * -8);
  *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)(&stack0xffffff8c + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (out_points_array + 3 != &CStack_34) {
    out_points_array[3].x = CStack_34.x;
    out_points_array[3].y = CStack_34.y;
    out_points_array[3].z = CStack_34.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_0262863c);
  CStack_1c.x = afStack_60[2];
  *(float *)((int)&CStack_1c + (uint)bVar1 * -8 + 4) = afStack_60[(uint)bVar1 * -2 + 3];
  *(float *)((int)&CStack_1c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_60[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  if (out_points_array + 4 != &CStack_1c) {
    out_points_array[4].x = CStack_1c.x;
    out_points_array[4].y = CStack_1c.y;
    out_points_array[4].z = CStack_1c.z;
  }
  return 5;
}
