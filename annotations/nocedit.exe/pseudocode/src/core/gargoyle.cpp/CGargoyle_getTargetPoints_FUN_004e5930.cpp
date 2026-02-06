// Name: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004e5930
// Address: 004e5930
// Address Range: [[004e5930, 004e5ace]]
// Convention: __cdecl
// Signature: int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004e5930 (CGargoyle *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl
core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004e5930
          (CGargoyle *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar3 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_4c,INT_02d83200);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk1 + 8)] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_40,INT_02d83214);
    if (out_points_array + 1 != pCVar1) {
      out_points_array[1].x = pCVar1->x;
      out_points_array[1].y = pCVar1->y;
      out_points_array[1].z = pCVar1->z;
    }
    iVar3 = 2;
  }
  if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk1 + 0x10)] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_34,INT_02d83218);
    pCVar2 = out_points_array + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk1 + 0x28)] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_1c,INT_02d83224);
    pCVar2 = out_points_array + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk1 + 0x2c)] == 0) {
    return iVar3;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_28,INT_02d8322c);
  pCVar2 = out_points_array + iVar3;
  if (pCVar2 != pCVar1) {
    pCVar2->x = pCVar1->x;
    pCVar2->y = pCVar1->y;
    pCVar2->z = pCVar1->z;
  }
  return iVar3 + 1;
}
