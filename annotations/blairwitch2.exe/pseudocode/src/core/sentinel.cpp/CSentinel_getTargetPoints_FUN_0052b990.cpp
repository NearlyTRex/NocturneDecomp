// Name: core_sentinel.cpp_CSentinel_getTargetPoints_FUN_0052b990
// Address: 0052b990
// Address Range: [[0052b990, 0052bb18]]
// Convention: __cdecl
// Signature: int __cdecl core_sentinel_cpp_CSentinel_getTargetPoints_FUN_0052b990(CSentinel *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_sentinel_cpp_CSentinel_getTargetPoints_FUN_0052b990(CSentinel *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_1074 [1016];
  float fStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [2];
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  float fStack_2c;
  float afStack_28 [5];
  int iStack_14;
  
  bVar1 = 0;
  iStack_14 = 5;
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_01e6614c);
  CStack_50.x = fStack_44;
  *(float *)((int)&CStack_50 + (uint)bVar1 * -8 + 4) = afStack_40[(uint)bVar1 * -2];
  *(float *)((int)&CStack_50 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array != &CStack_50) {
    out_points_array->x = CStack_50.x;
    out_points_array->y = CStack_50.y;
    out_points_array->z = CStack_50.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_01e66160);
  CStack_80.x = fStack_8c;
  *(uint *)((int)&CStack_80 + (uint)bVar1 * -8 + 4) =
       *(uint *)(&stack0xffffff78 + (uint)bVar1 * -8);
  *(uint *)((int)&CStack_80 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)(&stack0xffffff7c + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (out_points_array + 1 != &CStack_80) {
    out_points_array[1].x = CStack_80.x;
    out_points_array[1].y = CStack_80.y;
    out_points_array[1].z = CStack_80.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_01e66164);
  CStack_74.x = afStack_28[2];
  *(float *)((int)&CStack_74 + (uint)bVar1 * -8 + 4) = afStack_28[(uint)bVar1 * -2 + 3];
  *(float *)((int)&CStack_74 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  if (out_points_array + 2 != &CStack_74) {
    out_points_array[2].x = CStack_74.x;
    out_points_array[2].y = CStack_74.y;
    out_points_array[2].z = CStack_74.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_01e66170);
  CStack_38.x = fStack_5c;
  *(float *)((int)&CStack_38 + (uint)bVar1 * -8 + 4) = afStack_58[(uint)bVar1 * -2];
  *(float *)((int)&CStack_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_58[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array + 3 != &CStack_38) {
    out_points_array[3].x = CStack_38.x;
    out_points_array[3].y = CStack_38.y;
    out_points_array[3].z = CStack_38.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_01e66178);
  CStack_68.x = fStack_2c;
  *(float *)((int)&CStack_68 + (uint)bVar1 * -8 + 4) = afStack_28[(uint)bVar1 * -2];
  *(float *)((int)&CStack_68 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array + 4 == &CStack_68) {
    return iStack_14;
  }
  out_points_array[4].x = CStack_68.x;
  out_points_array[4].y = CStack_68.y;
  out_points_array[4].z = CStack_68.z;
  return iStack_14;
}
