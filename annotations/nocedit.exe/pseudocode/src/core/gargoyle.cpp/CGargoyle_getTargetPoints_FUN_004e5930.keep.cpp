// Name: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004e5930
// Address: 004e5930
// MANUAL RECONSTRUCTION
// Address Range: [[004e5930, 004e5ace]]
// Convention: __cdecl
// Signature: int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004e5930(CGargoyle *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004e5930(CGargoyle *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f *pCVar3;
  CVector3f *pCVar2;
  CVector3f *pCVar4;
  int iVar3;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar3 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_4c,g_GargoyleIndices[0]);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_40,g_GargoyleIndices[5]);
    if (out_points_array + 1 != pCVar3) {
      out_points_array[1].x = pCVar3->x;
      out_points_array[1].y = pCVar3->y;
      out_points_array[1].z = pCVar3->z;
    }
    iVar3 = 2;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_34,g_GargoyleIndices[6]);
    pCVar2 = out_points_array + iVar3;
    if (pCVar2 != pCVar3) {
      pCVar2->x = pCVar3->x;
      pCVar2->y = pCVar3->y;
      pCVar2->z = pCVar3->z;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[8]] != 0) {
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_1c,g_GargoyleIndices[9]);
    pCVar4 = out_points_array + iVar3;
    if (pCVar4 != pCVar3) {
      pCVar4->x = pCVar3->x;
      pCVar4->y = pCVar3->y;
      pCVar4->z = pCVar3->z;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) {
    return iVar3;
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_28,g_GargoyleIndices[0xb]);
  pCVar4 = out_points_array + iVar3;
  if (pCVar4 != pCVar3) {
    pCVar4->x = pCVar3->x;
    pCVar4->y = pCVar3->y;
    pCVar4->z = pCVar3->z;
  }
  return iVar3 + 1;
}
