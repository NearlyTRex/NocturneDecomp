// Name: core_construc.cpp_CConstruct_getTargetPoints_FUN_00437ee0
// Address: 00437ee0
// Address Range: [[00437ee0, 0043805e]]
// Convention: __cdecl
// Signature: int __cdecl core_construc_cpp_CConstruct_getTargetPoints_FUN_00437ee0(CConstruct *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_construc_cpp_CConstruct_getTargetPoints_FUN_00437ee0(CConstruct *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_1070 [1016];
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar1 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,DAT_007c254c,&CStack_70);
  CStack_58.x = CStack_70.x;
  *(uint *)((int)&CStack_58 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_70 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_58 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_70 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array != &CStack_58) {
    out_points_array->x = CStack_58.x;
    out_points_array->y = CStack_58.y;
    out_points_array->z = CStack_58.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,DAT_007c2568,&CStack_28);
  CStack_40.x = CStack_28.x;
  *(uint *)((int)&CStack_40 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_40 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 1 != &CStack_40) {
    out_points_array[1].x = CStack_40.x;
    out_points_array[1].y = CStack_40.y;
    out_points_array[1].z = CStack_40.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,DAT_007c256c,&CStack_1c);
  CStack_34.x = CStack_1c.x;
  *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_1c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_1c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 2 != &CStack_34) {
    out_points_array[2].x = CStack_34.x;
    out_points_array[2].y = CStack_34.y;
    out_points_array[2].z = CStack_34.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,DAT_007c2578,&CStack_4c);
  CStack_7c.x = CStack_4c.x;
  *(uint *)((int)&CStack_7c + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_7c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 3 != &CStack_7c) {
    out_points_array[3].x = CStack_7c.x;
    out_points_array[3].y = CStack_7c.y;
    out_points_array[3].z = CStack_7c.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,DAT_007c2580,&CStack_88);
  CStack_64.x = CStack_88.x;
  *(uint *)((int)&CStack_64 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_88 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_64 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_88 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 4 == &CStack_64) {
    return 5;
  }
  out_points_array[4].x = CStack_64.x;
  out_points_array[4].y = CStack_64.y;
  out_points_array[4].z = CStack_64.z;
  return 5;
}
