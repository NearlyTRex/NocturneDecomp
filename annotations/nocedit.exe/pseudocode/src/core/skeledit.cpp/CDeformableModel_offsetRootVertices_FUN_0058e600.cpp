// Name: core_skeledit.cpp_CDeformableModel_offsetRootVertices_FUN_0058e600
// Address: 0058e600
// Address Range: [[0058e600, 0058e68d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_offsetRootVertices_FUN_0058e600(CDeformableModel *this_ptr,CVector3f *offset)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_offsetRootVertices_FUN_0058e600(CDeformableModel *this_ptr,CVector3f *offset)

{
  CSkeleton *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CSkeleton *pCVar4;
  
  __STK();
  pCVar1 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  iVar3 = 0;
  if (0 < pCVar1->bone_count) {
    pCVar2 = this_ptr->vertex_pool;
    pCVar4 = pCVar1;
    do {
      if (pCVar4->bone_list[0].parent_index < 0) {
        pCVar2->x = offset->x + pCVar2->x;
        pCVar2->y = offset->y + pCVar2->y;
        pCVar2->z = offset->z + pCVar2->z;
      }
      pCVar4 = (CSkeleton *)((pCVar4->motion_list).state_names[1] + 2);
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 < pCVar1->bone_count);
  }
  this_ptr->bbox_pool[0].min.x = offset->x + this_ptr->bbox_pool[0].min.x;
  this_ptr->bbox_pool[0].min.y = offset->y + this_ptr->bbox_pool[0].min.y;
  this_ptr->bbox_pool[0].min.z = offset->z + this_ptr->bbox_pool[0].min.z;
  return;
}
