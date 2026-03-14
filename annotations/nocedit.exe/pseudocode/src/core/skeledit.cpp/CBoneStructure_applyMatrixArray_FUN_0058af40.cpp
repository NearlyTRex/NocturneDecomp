// Name: core_skeledit.cpp_CBoneStructure_applyMatrixArray_FUN_0058af40
// Address: 0058af40
// Address Range: [[0058af40, 0058afd0]]
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
  byte bVar1;
  CMatrix3x4f local_40;
  int local_10;
  CBoneStructure *local_c;
  
  bVar1 = 0;
  local_10 = 0;
  if (0 < this_ptr->bone_count) {
    local_c = this_ptr;
    matrix_b = &this_ptr->bones[0].world_matrix;
    do {
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(matrices,matrix_b,&local_40);
      pCVar2 = &local_40;
      pCVar3 = &local_c->bones[0].world_matrix;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + (uint)bVar1 * -8 + 4);
        pCVar2 = (CMatrix3x4f *)((int)pCVar2 + (uint)bVar1 * -8 + 4);
        pCVar3->m[0].w = pCVar2->m[0].w;
        pCVar2 = pCVar2;
        pCVar3 = pCVar3;
      }
      local_c = (CBoneStructure *)&local_c->bones[0].world_matrix.m[2].z;
      local_10 = local_10 + 1;
      matrix_b = (CMatrix3x4f *)&matrix_b[2].m[2].x;
      matrices = matrices + 1;
    } while (local_10 < this_ptr->bone_count);
  }
  core_skeledit_cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(this_ptr);
  return;
}
