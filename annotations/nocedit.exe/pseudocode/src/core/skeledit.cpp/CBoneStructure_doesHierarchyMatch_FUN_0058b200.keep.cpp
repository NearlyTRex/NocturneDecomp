// Name: core_skeledit.cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200
// Address: 0058b200
// MANUAL RECONSTRUCTION
// Address Range: [[0058b200, 0058b253]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200(CBoneStructure *this_ptr,CBoneStructure *other)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200(CBoneStructure *this_ptr,CBoneStructure *other)

{
  uint uVar1;

  if (this_ptr->bone_count != other->bone_count) {
    return 0;
  }
  uVar1 = 0;
  if (0 < this_ptr->bone_count) {
    do {
      if (other->bones[uVar1].parent_index != this_ptr->bones[uVar1].parent_index) {
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < this_ptr->bone_count);
  }
  return 1;
}
