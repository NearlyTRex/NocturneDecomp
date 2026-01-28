// Name: core_dirmat.cpp_CMatrix3x3f_multiply_FUN_00472540
// Address: 00472540
// Address Range: [[00472540, 00472674]]
// Convention: __stack2_esi
// Signature: CMatrix3x3f * __stack2_esi core_dirmat_cpp_CMatrix3x3f_multiply_FUN_00472540 (CMatrix3x3f *matrix_a,CMatrix3x3f *matrix_b,CMatrix3x3f *matrix_out)

#include "nocturne.h"

CMatrix3x3f * __stack2_esi
core_dirmat_cpp_CMatrix3x3f_multiply_FUN_00472540
          (CMatrix3x3f *matrix_a,CMatrix3x3f *matrix_b,CMatrix3x3f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  local_30[1] = matrix_a->m[0].z * matrix_b->m[2].y +
                matrix_a->m[0].x * matrix_b->m[0].y + matrix_a->m[0].y * matrix_b->m[1].y;
  local_30[2] = matrix_a->m[0].z * matrix_b->m[2].z +
                matrix_a->m[0].x * matrix_b->m[0].z + matrix_a->m[0].y * matrix_b->m[1].z;
  local_30[3] = matrix_a->m[1].z * matrix_b->m[2].x +
                matrix_a->m[1].x * matrix_b->m[0].x + matrix_a->m[1].y * matrix_b->m[1].x;
  local_20 = matrix_a->m[1].z * matrix_b->m[2].y +
             matrix_a->m[1].y * matrix_b->m[1].y + matrix_a->m[1].x * matrix_b->m[0].y;
  local_1c = matrix_a->m[1].z * matrix_b->m[2].z +
             matrix_a->m[1].y * matrix_b->m[1].z + matrix_a->m[1].x * matrix_b->m[0].z;
  local_18 = matrix_a->m[2].z * matrix_b->m[2].x +
             matrix_a->m[2].x * matrix_b->m[0].x + matrix_a->m[2].y * matrix_b->m[1].x;
  local_14 = matrix_a->m[2].z * matrix_b->m[2].y +
             matrix_a->m[2].y * matrix_b->m[1].y + matrix_a->m[2].x * matrix_b->m[0].y;
  local_10 = matrix_a->m[2].z * matrix_b->m[2].z +
             matrix_a->m[2].y * matrix_b->m[1].z + matrix_a->m[2].x * matrix_b->m[0].z;
  local_30[0] = matrix_a->m[0].z * matrix_b->m[2].x +
                matrix_a->m[0].x * matrix_b->m[0].x + matrix_a->m[0].y * matrix_b->m[1].x;
  pfVar2 = local_30;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
