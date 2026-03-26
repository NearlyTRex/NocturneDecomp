// Name: core_skeledit.cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0
// Address: 0058aeb0
// Address Range: [[0058aeb0, 0058af34] [03fc3f63, 03fc3fbf]]
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
  CMatrix3x4f local_38;
  int local_8;
  
  local_8 = 0;
  if (0 < this_ptr->bone_count) {
    matrix_in = &this_ptr->bones[0].world_matrix;
    do {
      core_xform_cpp_inverse_FUN_005f6210(matrix_in,&local_38);
      inverse_matrices->m[0].w = local_38.m[0].w;
      inverse_matrices->m[0].x = local_38.m[0].x;
      inverse_matrices->m[0].y = local_38.m[0].y;
      inverse_matrices->m[0].z = local_38.m[0].z;
      inverse_matrices->m[1].w = local_38.m[1].w;
      inverse_matrices->m[1].x = local_38.m[1].x;
      inverse_matrices->m[1].y = local_38.m[1].y;
      inverse_matrices->m[1].z = local_38.m[1].z;
      inverse_matrices->m[2].w = local_38.m[2].w;
      inverse_matrices->m[2].x = local_38.m[2].x;
      inverse_matrices->m[2].y = local_38.m[2].y;
      inverse_matrices->m[2].z = local_38.m[2].z;
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
