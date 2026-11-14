// Name: core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0054bd10
// Address: 0054bd10
// Address Range: [[0054bd10, 0054bdda]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0054bd10(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0054bd10(CDeformableModel *this_ptr)

{
  float fVar1;
  CSkeleton *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  CSkeleton *pCVar5;
  int iVar6;
  CDeformableModel *local_24;
  float local_1c;
  
  pCVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0(this_ptr);
  iVar6 = 0;
  if (0 < pCVar2->bone_count) {
    local_24 = this_ptr;
    do {
      iVar3 = 0;
      local_24->farthest_child_bone[0] = -1;
      local_1c = 0.0;
      pCVar4 = this_ptr->bone_origins;
      pCVar5 = pCVar2;
      if (0 < pCVar2->bone_count) {
        do {
          if ((iVar6 == pCVar5->bone_list[0].parent_index) &&
             (fVar1 = SQRT(pCVar4->z * pCVar4->z + pCVar4->x * pCVar4->x + pCVar4->y * pCVar4->y),
             local_1c < fVar1)) {
            local_24->farthest_child_bone[0] = iVar3;
            local_1c = fVar1;
          }
          iVar3 = iVar3 + 1;
          pCVar4 = pCVar4 + 1;
          pCVar5 = (CSkeleton *)((pCVar5->motion_list).state_names[1] + 2);
        } while (iVar3 < pCVar2->bone_count);
      }
      iVar6 = iVar6 + 1;
      local_24 = (CDeformableModel *)local_24->lod_info;
    } while (iVar6 < pCVar2->bone_count);
  }
  return;
}
