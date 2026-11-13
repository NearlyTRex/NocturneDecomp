// Name: core_mobster.cpp_CMobster_getTargetPoints_FUN_00500210
// Address: 00500210
// Address Range: [[00500210, 00500347]]
// Convention: __cdecl
// Signature: int __cdecl core_mobster_cpp_CMobster_getTargetPoints_FUN_00500210(CMobster *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mobster_cpp_CMobster_getTargetPoints_FUN_00500210(CMobster *this_ptr,CVector3f *out_points_array)

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
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_01d1c710,&CStack_34);
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
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[8]] != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
              (&(this_ptr->base).base.model,_DAT_01d1c734,&CStack_58);
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
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) {
    return iVar2;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_01d1c73c,&CStack_40);
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
