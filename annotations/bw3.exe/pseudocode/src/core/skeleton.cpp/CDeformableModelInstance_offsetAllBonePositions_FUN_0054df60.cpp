// Name: core_skeleton.cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0054df60
// Address: 0054df60
// Address Range: [[0054df60, 0054dfce]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0054df60(CDeformableModelInstance *this_ptr,CVector3f *offset_vector)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0054df60(CDeformableModelInstance *this_ptr,CVector3f *offset_vector)

{
  CSkeleton *pCVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < pCVar1->bone_count) {
    do {
      *(float *)&pCVar2->field_0xe8c = offset_vector->x + *(float *)&pCVar2->field_0xe8c;
      *(float *)&pCVar2->field_0xe9c = offset_vector->y + *(float *)&pCVar2->field_0xe9c;
      iVar3 = iVar3 + 1;
      *(float *)&pCVar2->field_0xeac = offset_vector->z + *(float *)&pCVar2->field_0xeac;
      pCVar2 = (CDeformableModelInstance *)(pCVar2->base).current_motion_name;
    } while (iVar3 < pCVar1->bone_count);
  }
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
