// Name: core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0054bea0
// Address: 0054bea0
// Address Range: [[0054bea0, 0054beee]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0054bea0(CDeformableModel *this_ptr)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0054bea0(CDeformableModel *this_ptr)

{
  CDeformableModel *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->num_lods) {
    do {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + (pCVar1->cap_tri_count[0] + pCVar1->tri_count[0]) * 0x16 +
              pCVar1->cap_tri_count[0] * 4 + pCVar1->vertex_count[0] * 0x34;
      pCVar1 = (CDeformableModel *)pCVar1->lod_info;
    } while (iVar3 < this_ptr->num_lods);
  }
  return iVar2;
}
