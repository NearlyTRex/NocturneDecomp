// Name: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004dd790
// Address: 004dd790
// Address Range: [[004dd790, 004dd9a1]]
// Convention: __cdecl
// Signature: int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004dd790(CGargoyle *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004dd790(CGargoyle *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  int iVar2;
  byte bVar3;
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
  
  bVar3 = 0;
  iVar2 = 1;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,_DAT_01cd0c9c,&CStack_34);
  CStack_70.x = CStack_34.x;
  *(uint *)((int)&CStack_70 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&CStack_70 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if (&CStack_70 != out_points_array) {
    out_points_array->x = CStack_70.x;
    out_points_array->y = CStack_70.y;
    out_points_array->z = CStack_70.z;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&(this_ptr->base).base.model,_DAT_01cd0cb0,&CStack_64);
    CStack_7c.x = CStack_64.x;
    *(uint *)((int)&CStack_7c + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_64 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_7c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (out_points_array + 1 != &CStack_7c) {
      out_points_array[1].x = CStack_7c.x;
      out_points_array[1].y = CStack_7c.y;
      out_points_array[1].z = CStack_7c.z;
    }
    iVar2 = 2;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&(this_ptr->base).base.model,_DAT_01cd0cb4,&CStack_88);
    pCVar1 = out_points_array + iVar2;
    CStack_28.x = CStack_88.x;
    *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_88 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_88 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (pCVar1 != &CStack_28) {
      pCVar1->x = CStack_28.x;
      pCVar1->y = CStack_28.y;
      pCVar1->z = CStack_28.z;
    }
    iVar2 = iVar2 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[8]] != 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&(this_ptr->base).base.model,_DAT_01cd0cc0,&CStack_1c);
    pCVar1 = out_points_array + iVar2;
    CStack_4c.x = CStack_1c.x;
    *(uint *)((int)&CStack_4c + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_1c + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (pCVar1 != &CStack_4c) {
      pCVar1->x = CStack_4c.x;
      pCVar1->y = CStack_4c.y;
      pCVar1->z = CStack_4c.z;
    }
    iVar2 = iVar2 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) {
    return iVar2;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,_DAT_01cd0cc8,&CStack_40);
  pCVar1 = out_points_array + iVar2;
  CStack_58.x = CStack_40.x;
  *(uint *)((int)&CStack_58 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&CStack_40 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&CStack_58 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&CStack_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if (pCVar1 != &CStack_58) {
    pCVar1->x = CStack_58.x;
    pCVar1->y = CStack_58.y;
    pCVar1->z = CStack_58.z;
  }
  return iVar2 + 1;
}
