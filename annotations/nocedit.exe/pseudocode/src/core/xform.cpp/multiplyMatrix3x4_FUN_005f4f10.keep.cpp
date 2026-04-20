// Name: core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
// Address: 005f4f10
// MANUAL RECONSTRUCTION
// Address Range: [[005f4f10, 005f50b8]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_38 [12];

  local_38[0] = matrix_b->m[0].y * matrix_a->m[2].w +
                matrix_b->m[0].w * matrix_a->m[0].w + matrix_b->m[0].x * matrix_a->m[1].w;
  local_38[1] = matrix_b->m[0].y * matrix_a->m[2].x +
                matrix_b->m[0].w * matrix_a->m[0].x + matrix_b->m[0].x * matrix_a->m[1].x;
  local_38[2] = matrix_b->m[0].y * matrix_a->m[2].y +
                matrix_b->m[0].w * matrix_a->m[0].y + matrix_b->m[0].x * matrix_a->m[1].y;
  local_38[3] = matrix_b->m[0].y * matrix_a->m[2].z +
                matrix_b->m[0].w * matrix_a->m[0].z + matrix_b->m[0].x * matrix_a->m[1].z +
                matrix_b->m[0].z;
  local_38[4] = matrix_b->m[1].y * matrix_a->m[2].w +
                matrix_b->m[1].w * matrix_a->m[0].w + matrix_b->m[1].x * matrix_a->m[1].w;
  local_38[5] = matrix_b->m[1].y * matrix_a->m[2].x +
                matrix_b->m[1].w * matrix_a->m[0].x + matrix_b->m[1].x * matrix_a->m[1].x;
  local_38[6] = matrix_b->m[1].y * matrix_a->m[2].y +
                matrix_b->m[1].w * matrix_a->m[0].y + matrix_b->m[1].x * matrix_a->m[1].y;
  local_38[7] = matrix_b->m[1].y * matrix_a->m[2].z +
                matrix_b->m[1].w * matrix_a->m[0].z + matrix_b->m[1].x * matrix_a->m[1].z +
                matrix_b->m[1].z;
  local_38[8] = matrix_b->m[2].y * matrix_a->m[2].w +
                matrix_b->m[2].w * matrix_a->m[0].w + matrix_b->m[2].x * matrix_a->m[1].w;
  local_38[9] = matrix_b->m[2].y * matrix_a->m[2].x +
                matrix_b->m[2].w * matrix_a->m[0].x + matrix_b->m[2].x * matrix_a->m[1].x;
  local_38[10] = matrix_b->m[2].y * matrix_a->m[2].y +
                 matrix_b->m[2].w * matrix_a->m[0].y + matrix_b->m[2].x * matrix_a->m[1].y;
  local_38[11] = matrix_b->m[2].y * matrix_a->m[2].z +
                 matrix_b->m[2].w * matrix_a->m[0].z + matrix_b->m[2].x * matrix_a->m[1].z +
                 matrix_b->m[2].z;
  pfVar2 = local_38;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
