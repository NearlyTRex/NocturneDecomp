// Name: core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0051b600
// Address: 0051b600
// Address Range: [[0051b600, 0051b640]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0051b600(CDeformableModel *this_ptr)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0051b600(CDeformableModel *this_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->num_lods) {
    do {
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + (pCVar2->tri_count[0] + pCVar2->cap_tri_count[0]) * 0x16 +
              pCVar2->cap_tri_count[0] * 4 + pCVar2->vertex_count[0] * 0x34;
      pCVar2 = (CDeformableModel *)pCVar2->lod_info;
    } while (iVar3 < this_ptr->num_lods);
  }
  return iVar1;
}
