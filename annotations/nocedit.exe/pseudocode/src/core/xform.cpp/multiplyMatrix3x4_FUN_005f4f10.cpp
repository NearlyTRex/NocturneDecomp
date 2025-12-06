// Name: core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
// Address: 005f4f10
// Address Range: [[005f4f10, 005f50b8]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
          (CMatrix3x4f *output_matrix,CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  float *pfVar2;
  float *pfVar3;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_38[0] = matrix_a->m[0].y * output_matrix->m[2].w +
                matrix_a->m[0].w * output_matrix->m[0].w + matrix_a->m[0].x * output_matrix->m[1].w;
  local_38[1] = matrix_a->m[0].y * output_matrix->m[2].x +
                matrix_a->m[0].w * output_matrix->m[0].x + matrix_a->m[0].x * output_matrix->m[1].x;
  local_38[2] = matrix_a->m[0].y * output_matrix->m[2].y +
                matrix_a->m[0].w * output_matrix->m[0].y + matrix_a->m[0].x * output_matrix->m[1].y;
  local_28 = matrix_a->m[1].y * output_matrix->m[2].w +
             matrix_a->m[1].w * output_matrix->m[0].w + matrix_a->m[1].x * output_matrix->m[1].w;
  local_24 = matrix_a->m[1].y * output_matrix->m[2].x +
             matrix_a->m[1].x * output_matrix->m[1].x + matrix_a->m[1].w * output_matrix->m[0].x;
  local_20 = matrix_a->m[1].y * output_matrix->m[2].y +
             matrix_a->m[1].x * output_matrix->m[1].y + matrix_a->m[1].w * output_matrix->m[0].y;
  local_18 = matrix_a->m[2].y * output_matrix->m[2].w +
             matrix_a->m[2].w * output_matrix->m[0].w + matrix_a->m[2].x * output_matrix->m[1].w;
  local_14 = matrix_a->m[2].y * output_matrix->m[2].x +
             matrix_a->m[2].x * output_matrix->m[1].x + matrix_a->m[2].w * output_matrix->m[0].x;
  local_10 = matrix_a->m[2].y * output_matrix->m[2].y +
             matrix_a->m[2].x * output_matrix->m[1].y + matrix_a->m[2].w * output_matrix->m[0].y;
  local_38[3] = matrix_a->m[0].y * output_matrix->m[2].z +
                matrix_a->m[0].w * output_matrix->m[0].z + matrix_a->m[0].x * output_matrix->m[1].z
                + matrix_a->m[0].z;
  local_1c = matrix_a->m[1].y * output_matrix->m[2].z +
             matrix_a->m[1].x * output_matrix->m[1].z + matrix_a->m[1].w * output_matrix->m[0].z +
             matrix_a->m[1].z;
  local_c = matrix_a->m[2].y * output_matrix->m[2].z +
            matrix_a->m[2].x * output_matrix->m[1].z + matrix_a->m[2].w * output_matrix->m[0].z +
            matrix_a->m[2].z;
  pfVar2 = local_38;
  pfVar3 = unaff_ESI;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return (CMatrix3x4f *)unaff_ESI;
}
