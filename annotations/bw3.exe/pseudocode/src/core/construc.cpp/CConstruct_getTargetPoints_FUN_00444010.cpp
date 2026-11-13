// Name: core_construc.cpp_CConstruct_getTargetPoints_FUN_00444010
// Address: 00444010
// Address Range: [[00444010, 00444101]]
// Convention: __cdecl
// Signature: int __cdecl core_construc_cpp_CConstruct_getTargetPoints_FUN_00444010(CConstruct *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_construc_cpp_CConstruct_getTargetPoints_FUN_00444010(CConstruct *this_ptr,CVector3f *out_points_array)

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
            (&(this_ptr->base).base.model,DAT_007f8e64,&CStack_1c);
  CStack_4c.x = CStack_1c.x;
  *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_1c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_1c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array != &CStack_4c) {
    out_points_array->x = CStack_4c.x;
    out_points_array->y = CStack_4c.y;
    out_points_array->z = CStack_4c.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
            (&(this_ptr->base).base.model,DAT_007f8e94,&CStack_40);
  CStack_34.x = CStack_40.x;
  *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_40 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_40 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 1 != &CStack_34) {
    out_points_array[1].x = CStack_34.x;
    out_points_array[1].y = CStack_34.y;
    out_points_array[1].z = CStack_34.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
            (&(this_ptr->base).base.model,DAT_007f8e9c,&CStack_58);
  CStack_28.x = CStack_58.x;
  *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_58 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_58 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 2 == &CStack_28) {
    return 3;
  }
  out_points_array[2].x = CStack_28.x;
  out_points_array[2].y = CStack_28.y;
  out_points_array[2].z = CStack_28.z;
  return 3;
}
