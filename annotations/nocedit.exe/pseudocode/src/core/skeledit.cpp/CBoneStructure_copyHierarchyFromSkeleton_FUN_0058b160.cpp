// Name: core_skeledit.cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160
// Address: 0058b160
// Address Range: [[0058b160, 0058b1f3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160(CBoneStructure *this_ptr,CSkeleton *skeleton)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160(CBoneStructure *this_ptr,CSkeleton *skeleton)

{
  char cVar1;
  int iVar2;
  SBoneData *pSVar3;
  SBone *pSVar4;
  int iVar5;
  CBoneStructure *pCVar6;
  SBone *pSVar7;
  SBoneData *pSVar8;
  CSkeleton *local_10;
  
  __STK();
  iVar2 = skeleton->bone_count;
  iVar5 = 0;
  this_ptr->bone_count = iVar2;
  if (0 < iVar2) {
    pSVar7 = skeleton->bone_list;
    pSVar8 = this_ptr->bones;
    local_10 = skeleton;
    pCVar6 = this_ptr;
    pSVar4 = pSVar7;
    pSVar3 = pSVar8;
LAB_0058b1a1:
    do {
      cVar1 = pSVar7->bone_name[0];
      pSVar8->name[0] = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pSVar7->bone_name[1];
        pSVar7 = (SBone *)(pSVar7->bone_name + 2);
        pSVar8->name[1] = cVar1;
        pSVar8 = (SBoneData *)(pSVar8->name + 2);
        if (cVar1 != '\0') goto LAB_0058b1a1;
      }
      iVar5 = iVar5 + 1;
      pSVar8 = pSVar3 + 1;
      pCVar6->bones[0].parent_index = local_10->bone_list[0].parent_index;
      pSVar7 = pSVar4 + 1;
      local_10 = (CSkeleton *)((local_10->motion_list).state_names[1] + 2);
      pCVar6 = (CBoneStructure *)&pCVar6->bones[0].world_matrix.m[2].z;
      pSVar4 = pSVar7;
      pSVar3 = pSVar8;
    } while (iVar5 < this_ptr->bone_count);
  }
  return;
}
