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
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  int iStack_14;
  
  bVar1 = 0;
  iStack_14 = 5;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_01e6614c,&CStack_44);
  CStack_50.x = CStack_44.x;
  *(uint *)((int)&CStack_50 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_44 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_50 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array != &CStack_50) {
    out_points_array->x = CStack_50.x;
    out_points_array->y = CStack_50.y;
    out_points_array->z = CStack_50.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_01e66160,&CStack_8c);
  CStack_80.x = CStack_8c.x;
  *(uint *)((int)&CStack_80 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_8c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_80 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_8c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 1 != &CStack_80) {
    out_points_array[1].x = CStack_80.x;
    out_points_array[1].y = CStack_80.y;
    out_points_array[1].z = CStack_80.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_01e66164,&CStack_20);
  CStack_74.x = CStack_20.x;
  *(uint *)((int)&CStack_74 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_20 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_74 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_20 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 2 != &CStack_74) {
    out_points_array[2].x = CStack_74.x;
    out_points_array[2].y = CStack_74.y;
    out_points_array[2].z = CStack_74.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_01e66170,&CStack_5c);
  CStack_38.x = CStack_5c.x;
  *(uint *)((int)&CStack_38 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_5c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_5c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 3 != &CStack_38) {
    out_points_array[3].x = CStack_38.x;
    out_points_array[3].y = CStack_38.y;
    out_points_array[3].z = CStack_38.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_01e66178,&CStack_2c);
  CStack_68.x = CStack_2c.x;
  *(uint *)((int)&CStack_68 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_2c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_68 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_2c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 4 == &CStack_68) {
    return iStack_14;
  }
  out_points_array[4].x = CStack_68.x;
  out_points_array[4].y = CStack_68.y;
  out_points_array[4].z = CStack_68.z;
  return iStack_14;
}
