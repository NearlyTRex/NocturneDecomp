// Name: core_conveyor.cpp_CConstruct_getTargetPoints_FUN_00437ee0
// Address: 00437ee0
// Address Range: [[00437ee0, 0043805e]]
// Convention: __cdecl
// Signature: int __cdecl core_conveyor_cpp_CConstruct_getTargetPoints_FUN_00437ee0(CConstruct *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_conveyor_cpp_CConstruct_getTargetPoints_FUN_00437ee0(CConstruct *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_1070 [1016];
  float fStack_88;
  CVector3f CStack_7c;
  float fStack_70;
  float afStack_6c [2];
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [2];
  CVector3f CStack_40;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [5];
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,DAT_007c254c);
  CStack_58.x = fStack_70;
  *(float *)((int)&CStack_58 + (uint)bVar1 * -8 + 4) = afStack_6c[(uint)bVar1 * -2];
  *(float *)((int)&CStack_58 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_6c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array != &CStack_58) {
    out_points_array->x = CStack_58.x;
    out_points_array->y = CStack_58.y;
    out_points_array->z = CStack_58.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,DAT_007c2568);
  CStack_40.x = fStack_28;
  *(float *)((int)&CStack_40 + (uint)bVar1 * -8 + 4) = afStack_24[(uint)bVar1 * -2];
  *(float *)((int)&CStack_40 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_24[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array + 1 != &CStack_40) {
    out_points_array[1].x = CStack_40.x;
    out_points_array[1].y = CStack_40.y;
    out_points_array[1].z = CStack_40.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,DAT_007c256c);
  CStack_34.x = afStack_24[2];
  *(float *)((int)&CStack_34 + (uint)bVar1 * -8 + 4) = afStack_24[(uint)bVar1 * -2 + 3];
  *(float *)((int)&CStack_34 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_24[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  if (out_points_array + 2 != &CStack_34) {
    out_points_array[2].x = CStack_34.x;
    out_points_array[2].y = CStack_34.y;
    out_points_array[2].z = CStack_34.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,DAT_007c2578);
  CStack_7c.x = fStack_4c;
  *(float *)((int)&CStack_7c + (uint)bVar1 * -8 + 4) = afStack_48[(uint)bVar1 * -2];
  *(float *)((int)&CStack_7c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_48[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array + 3 != &CStack_7c) {
    out_points_array[3].x = CStack_7c.x;
    out_points_array[3].y = CStack_7c.y;
    out_points_array[3].z = CStack_7c.z;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,DAT_007c2580);
  CStack_64.x = fStack_88;
  *(uint *)((int)&CStack_64 + (uint)bVar1 * -8 + 4) =
       *(uint *)(&stack0xffffff7c + (uint)bVar1 * -8);
  *(uint *)((int)&CStack_64 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)(&stack0xffffff80 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (out_points_array + 4 == &CStack_64) {
    return 5;
  }
  out_points_array[4].x = CStack_64.x;
  out_points_array[4].y = CStack_64.y;
  out_points_array[4].z = CStack_64.z;
  return 5;
}
