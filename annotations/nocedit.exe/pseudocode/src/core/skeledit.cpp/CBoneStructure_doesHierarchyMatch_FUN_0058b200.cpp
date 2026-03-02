// Name: core_skeledit.cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200
// Address: 0058b200
// Address Range: [[0058b200, 0058b253]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200(CBoneStructure *this_ptr,CBoneStructure *other)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200(CBoneStructure *this_ptr,CBoneStructure *other)

{
  uint uVar1;
  CBoneStructure *pCVar2;
  
  __STK();
  if (this_ptr->bone_count != other->bone_count) {
    return 0;
  }
  uVar1 = this_ptr->bone_count ^ other->bone_count;
  pCVar2 = this_ptr;
  if (0 < this_ptr->bone_count) {
    do {
      if (other->bones[0].parent_index != pCVar2->bones[0].parent_index) {
        return 0;
      }
      other = (CBoneStructure *)&other->bones[0].world_matrix.m[2].z;
      uVar1 = uVar1 + 1;
      pCVar2 = (CBoneStructure *)&pCVar2->bones[0].world_matrix.m[2].z;
    } while ((int)uVar1 < this_ptr->bone_count);
  }
  return 1;
}
