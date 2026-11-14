// Name: core_styldemo.cpp_CStylerDemon_getTargetPoints_FUN_005a06c0
// Address: 005a06c0
// Address Range: [[005a06c0, 005a07b2]]
// Convention: __cdecl
// Signature: int __cdecl core_styldemo_cpp_CStylerDemon_getTargetPoints_FUN_005a06c0(CStylerDemon *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_styldemo_cpp_CStylerDemon_getTargetPoints_FUN_005a06c0(CStylerDemon *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_1040 [1016];
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar1 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
            (&(this_ptr->base).base.model,_DAT_02d24d04,&CStack_1c);
  CStack_28.x = CStack_1c.x;
  *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_1c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_1c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array != &CStack_28) {
    out_points_array->x = CStack_28.x;
    out_points_array->y = CStack_28.y;
    out_points_array->z = CStack_28.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
            (&(this_ptr->base).base.model,_DAT_02d24cfc,&CStack_4c);
  CStack_40.x = CStack_4c.x;
  *(uint *)((int)&CStack_40 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_40 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 1 != &CStack_40) {
    out_points_array[1].x = CStack_40.x;
    out_points_array[1].y = CStack_40.y;
    out_points_array[1].z = CStack_40.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
            (&(this_ptr->base).base.model,_DAT_02d24d00,&CStack_34);
  CStack_58.x = CStack_34.x;
  *(uint *)((int)&CStack_58 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_58 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 2 == &CStack_58) {
    return 3;
  }
  out_points_array[2].x = CStack_58.x;
  out_points_array[2].y = CStack_58.y;
  out_points_array[2].z = CStack_58.z;
  return 3;
}
