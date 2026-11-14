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
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  CVector3f CStack_10;
  
  bVar1 = 0;
  if (this_ptr->model_variant == 3) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_02628610,&CStack_64);
  CStack_4c.x = CStack_64.x;
  *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_64 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_64 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array != &CStack_4c) {
    out_points_array->x = CStack_4c.x;
    out_points_array->y = CStack_4c.y;
    out_points_array->z = CStack_4c.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_02628624,&CStack_40);
  CStack_28.x = CStack_40.x;
  *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_40 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_40 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 1 != &CStack_28) {
    out_points_array[1].x = CStack_28.x;
    out_points_array[1].y = CStack_28.y;
    out_points_array[1].z = CStack_28.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_02628628,&CStack_10);
  CStack_70.x = CStack_10.x;
  *(uint *)((int)&CStack_70 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_10 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_70 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_10 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 2 != &CStack_70) {
    out_points_array[2].x = CStack_70.x;
    out_points_array[2].y = CStack_70.y;
    out_points_array[2].z = CStack_70.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_02628634,&CStack_7c);
  CStack_34.x = CStack_7c.x;
  *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_7c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_7c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 3 != &CStack_34) {
    out_points_array[3].x = CStack_34.x;
    out_points_array[3].y = CStack_34.y;
    out_points_array[3].z = CStack_34.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_0262863c,&CStack_58);
  CStack_1c.x = CStack_58.x;
  *(uint *)((int)&CStack_1c + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_58 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_1c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_58 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 4 != &CStack_1c) {
    out_points_array[4].x = CStack_1c.x;
    out_points_array[4].y = CStack_1c.y;
    out_points_array[4].z = CStack_1c.z;
  }
  return 5;
}
