// Name: core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0
// Address: 0059dbe0
// MANUAL RECONSTRUCTION
// Address Range: [[0059dbe0, 0059dc9f]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0(CDeformableModel *this_ptr)

{
  CSkeleton *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  int iVar6;
  float local_18;
  float fVar1;
  
  pCVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  iVar6 = 0;
  if (0 < pCVar2->bone_count) {
    do {
      this_ptr->farthest_child_bone[iVar6] = -1;
      iVar3 = 0;
      local_18 = 0.0;
      pCVar4 = this_ptr->vertex_pool;
      if (0 < pCVar2->bone_count) {
        do {
          if ((iVar6 == pCVar2->bone_list[iVar3].parent_index) &&
             (fVar1 = SQRT(pCVar4->z * pCVar4->z + pCVar4->x * pCVar4->x + pCVar4->y * pCVar4->y),
             local_18 < fVar1)) {
            this_ptr->farthest_child_bone[iVar6] = iVar3;
            local_18 = fVar1;
          }
          iVar3 = iVar3 + 1;
          pCVar4 = pCVar4 + 1;
        } while (iVar3 < pCVar2->bone_count);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < pCVar2->bone_count);
  }
  return;
}
