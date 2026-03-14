// Name: core_skeledit.cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0
// Address: 0058aeb0
// Address Range: [[0058aeb0, 0058af34]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0(CBoneStructure *this_ptr,CMatrix3x4f *inverse_matrices)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0(CBoneStructure *this_ptr,CMatrix3x4f *inverse_matrices)

{
  int iVar1;
  CMatrix3x4f *matrix_in;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  byte bVar1;
  CMatrix3x4f local_38;
  int local_8;
  
  bVar1 = 0;
  local_8 = 0;
  if (0 < this_ptr->bone_count) {
    matrix_in = &this_ptr->bones[0].world_matrix;
    do {
      core_xform_cpp_inverse_FUN_005f6210(matrix_in,&local_38);
      pCVar2 = &local_38;
      pCVar3 = inverse_matrices;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + (uint)bVar1 * -8 + 4);
        pCVar2 = (CMatrix3x4f *)((int)pCVar2 + (uint)bVar1 * -8 + 4);
        pCVar3->m[0].w = pCVar2->m[0].w;
        pCVar2 = pCVar2;
        pCVar3 = pCVar3;
      }
      core_xform_cpp_clearTranslation_FUN_005f5370(inverse_matrices);
      core_xform_cpp_setRotationScaleIdentity_FUN_005f5190(matrix_in);
      inverse_matrices = inverse_matrices + 1;
      matrix_in = (CMatrix3x4f *)&matrix_in[2].m[2].x;
      local_8 = local_8 + 1;
    } while (local_8 < this_ptr->bone_count);
  }
  core_skeledit_cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(this_ptr);
  return;
}
