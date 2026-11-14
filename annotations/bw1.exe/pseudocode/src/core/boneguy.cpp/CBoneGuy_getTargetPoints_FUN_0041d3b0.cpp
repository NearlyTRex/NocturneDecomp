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
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  CVector3f CStack_14;
  
  bVar1 = 0;
  if (this_ptr->blown_up != 0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,DAT_007c4ff0,&CStack_38);
  CStack_44.x = CStack_38.x;
  *(uint *)((int)&CStack_44 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_38 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array != &CStack_44) {
    out_points_array->x = CStack_44.x;
    out_points_array->y = CStack_44.y;
    out_points_array->z = CStack_44.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,DAT_007c5004,&CStack_80);
  CStack_74.x = CStack_80.x;
  *(uint *)((int)&CStack_74 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_80 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_74 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_80 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 1 != &CStack_74) {
    out_points_array[1].x = CStack_74.x;
    out_points_array[1].y = CStack_74.y;
    out_points_array[1].z = CStack_74.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,DAT_007c5008,&CStack_14);
  CStack_68.x = CStack_14.x;
  *(uint *)((int)&CStack_68 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_14 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_68 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_14 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 2 != &CStack_68) {
    out_points_array[2].x = CStack_68.x;
    out_points_array[2].y = CStack_68.y;
    out_points_array[2].z = CStack_68.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,DAT_007c5014,&CStack_50);
  CStack_2c.x = CStack_50.x;
  *(uint *)((int)&CStack_2c + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_50 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_2c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_50 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 3 != &CStack_2c) {
    out_points_array[3].x = CStack_2c.x;
    out_points_array[3].y = CStack_2c.y;
    out_points_array[3].z = CStack_2c.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,DAT_007c5018,&CStack_20);
  CStack_5c.x = CStack_20.x;
  *(uint *)((int)&CStack_5c + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_20 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_5c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_20 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 4 != &CStack_5c) {
    out_points_array[4].x = CStack_5c.x;
    out_points_array[4].y = CStack_5c.y;
    out_points_array[4].z = CStack_5c.z;
  }
  return 5;
}
