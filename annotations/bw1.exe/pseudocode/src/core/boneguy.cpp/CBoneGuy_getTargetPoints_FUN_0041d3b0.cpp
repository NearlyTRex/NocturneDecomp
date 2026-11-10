// Name: core_boneguy.cpp_CBoneGuy_getTargetPoints_FUN_0041d3b0
// Address: 0041d3b0
// Address Range: [[0041d3b0, 0041d532]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_getTargetPoints_FUN_0041d3b0(CBoneGuy *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_CBoneGuy_getTargetPoints_FUN_0041d3b0(CBoneGuy *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_1068 [1014];
  float fStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [2];
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [5];
  
  bVar1 = 0;
  if (this_ptr->blown_up != 0) {
    return 0;
  }
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,DAT_007c4ff0);
  CStack_44.x = fStack_38;
  *(float *)((int)&CStack_44 + (uint)bVar1 * -8 + 4) = afStack_34[(uint)bVar1 * -2];
  *(float *)((int)&CStack_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_34[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array != &CStack_44) {
    out_points_array->x = CStack_44.x;
    out_points_array->y = CStack_44.y;
    out_points_array->z = CStack_44.z;
  }
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,DAT_007c5004);
  CStack_74.x = fStack_80;
  *(uint *)((int)&CStack_74 + (uint)bVar1 * -8 + 4) =
       *(uint *)(&stack0xffffff84 + (uint)bVar1 * -8);
  *(uint *)((int)&CStack_74 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)(&stack0xffffff88 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (out_points_array + 1 != &CStack_74) {
    out_points_array[1].x = CStack_74.x;
    out_points_array[1].y = CStack_74.y;
    out_points_array[1].z = CStack_74.z;
  }
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,DAT_007c5008);
  CStack_68.x = afStack_1c[2];
  *(float *)((int)&CStack_68 + (uint)bVar1 * -8 + 4) = afStack_1c[(uint)bVar1 * -2 + 3];
  *(float *)((int)&CStack_68 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_1c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  if (out_points_array + 2 != &CStack_68) {
    out_points_array[2].x = CStack_68.x;
    out_points_array[2].y = CStack_68.y;
    out_points_array[2].z = CStack_68.z;
  }
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,DAT_007c5014);
  CStack_2c.x = fStack_50;
  *(float *)((int)&CStack_2c + (uint)bVar1 * -8 + 4) = afStack_4c[(uint)bVar1 * -2];
  *(float *)((int)&CStack_2c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_4c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array + 3 != &CStack_2c) {
    out_points_array[3].x = CStack_2c.x;
    out_points_array[3].y = CStack_2c.y;
    out_points_array[3].z = CStack_2c.z;
  }
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,DAT_007c5018);
  CStack_5c.x = fStack_20;
  *(float *)((int)&CStack_5c + (uint)bVar1 * -8 + 4) = afStack_1c[(uint)bVar1 * -2];
  *(float *)((int)&CStack_5c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_1c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array + 4 != &CStack_5c) {
    out_points_array[4].x = CStack_5c.x;
    out_points_array[4].y = CStack_5c.y;
    out_points_array[4].z = CStack_5c.z;
  }
  return 5;
}
