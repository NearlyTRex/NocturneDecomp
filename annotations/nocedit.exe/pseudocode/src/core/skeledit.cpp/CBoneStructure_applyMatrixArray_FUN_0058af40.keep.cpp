// Name: core_skeledit.cpp_CBoneStructure_applyMatrixArray_FUN_0058af40
// Address: 0058af40
// MANUAL RECONSTRUCTION
// Address Range: [[0058af40, 0058afd0] [03fc3fc0, 03fc401e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_applyMatrixArray_FUN_0058af40(CBoneStructure *this_ptr,CMatrix3x4f *matrices)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_applyMatrixArray_FUN_0058af40(CBoneStructure *this_ptr,CMatrix3x4f *matrices)

{
  CMatrix3x4f local_40;
  int local_10;

  local_10 = 0;
  if (0 < this_ptr->bone_count) {
    do {
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&matrices[local_10],&this_ptr->bones[local_10].world_matrix,&local_40);
      this_ptr->bones[local_10].world_matrix = local_40;
      local_10 = local_10 + 1;
    } while (local_10 < this_ptr->bone_count);
  }
  core_skeledit_cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(this_ptr);
  return;
}
