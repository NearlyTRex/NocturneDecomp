// Name: core_batman.cpp_CBatman_getTargetPoints_FUN_004141c0
// Address: 004141c0
// Address Range: [[004141c0, 004142f7]]
// Convention: __cdecl
// Signature: int __cdecl core_batman_cpp_CBatman_getTargetPoints_FUN_004141c0(CBatman *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_batman_cpp_CBatman_getTargetPoints_FUN_004141c0(CBatman *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1040 [1016];
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar3 = 0;
  iVar2 = 1;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,DAT_007c37b8,&CStack_34);
  CStack_4c.x = CStack_34.x;
  *(uint *)((int)&CStack_4c + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&CStack_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if (&CStack_4c != out_points_array) {
    out_points_array->x = CStack_4c.x;
    out_points_array->y = CStack_4c.y;
    out_points_array->z = CStack_4c.z;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&(this_ptr->base).base.model,DAT_007c37dc,&CStack_58);
    CStack_1c.x = CStack_58.x;
    *(uint *)((int)&CStack_1c + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_58 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_58 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (out_points_array + 1 != &CStack_1c) {
      out_points_array[1].x = CStack_1c.x;
      out_points_array[1].y = CStack_1c.y;
      out_points_array[1].z = CStack_1c.z;
    }
    iVar2 = 2;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0) {
    return iVar2;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,DAT_007c37e4,&CStack_40);
  pCVar1 = out_points_array + iVar2;
  CStack_28.x = CStack_40.x;
  *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&CStack_40 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&CStack_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if (pCVar1 != &CStack_28) {
    pCVar1->x = CStack_28.x;
    pCVar1->y = CStack_28.y;
    pCVar1->z = CStack_28.z;
  }
  return iVar2 + 1;
}
