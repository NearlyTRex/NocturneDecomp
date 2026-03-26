// Name: core_skeledit.cpp_CBoneStructure_applyMatrixArray_FUN_0058af40
// Address: 0058af40
// Address Range: [[0058af40, 0058afd0] [03fc3fc0, 03fc401e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_applyMatrixArray_FUN_0058af40(CBoneStructure *this_ptr,CMatrix3x4f *matrices)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_applyMatrixArray_FUN_0058af40(CBoneStructure *this_ptr,CMatrix3x4f *matrices)

{
  int iVar1;
  CMatrix3x4f *matrix_b;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_40;
  int local_10;
  CBoneStructure *local_c;
  
  local_10 = 0;
  if (0 < this_ptr->bone_count) {
    local_c = this_ptr;
    matrix_b = &this_ptr->bones[0].world_matrix;
    do {
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(matrices,matrix_b,&local_40);
      local_c->bones[0].world_matrix.m[0].w = local_40.m[0].w;
      local_c->bones[0].world_matrix.m[0].x = local_40.m[0].x;
      local_c->bones[0].world_matrix.m[0].y = local_40.m[0].y;
      local_c->bones[0].world_matrix.m[0].z = local_40.m[0].z;
      local_c->bones[0].world_matrix.m[1].w = local_40.m[1].w;
      local_c->bones[0].world_matrix.m[1].x = local_40.m[1].x;
      local_c->bones[0].world_matrix.m[1].y = local_40.m[1].y;
      local_c->bones[0].world_matrix.m[1].z = local_40.m[1].z;
      local_c->bones[0].world_matrix.m[2].w = local_40.m[2].w;
      local_c->bones[0].world_matrix.m[2].x = local_40.m[2].x;
      local_c->bones[0].world_matrix.m[2].y = local_40.m[2].y;
      local_c->bones[0].world_matrix.m[2].z = local_40.m[2].z;
      local_c = (CBoneStructure *)&local_c->bones[0].world_matrix.m[2].z;
      local_10 = local_10 + 1;
      matrix_b = (CMatrix3x4f *)&matrix_b[2].m[2].x;
      matrices = matrices + 1;
    } while (local_10 < this_ptr->bone_count);
  }
  core_skeledit_cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(this_ptr);
  return;
}
