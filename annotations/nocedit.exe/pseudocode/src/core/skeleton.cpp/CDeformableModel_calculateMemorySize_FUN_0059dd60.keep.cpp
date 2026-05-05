// Name: core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60
// Address: 0059dd60
// MANUAL RECONSTRUCTION
// Address Range: [[0059dd60, 0059dda0]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60(CDeformableModel *this_ptr)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60(CDeformableModel *this_ptr)

{
  int iVar1;
  int iVar3;

  iVar1 = 0;
  for (iVar3 = 0; iVar3 < this_ptr->num_lods; iVar3 = iVar3 + 1) {
    iVar1 = iVar1 + (this_ptr->tri_count[iVar3] + this_ptr->cap_tri_count[iVar3]) * 0x16 +
            this_ptr->cap_tri_count[iVar3] * 4 + this_ptr->vertex_count[iVar3] * 0x34;
  }
  return iVar1;
}
