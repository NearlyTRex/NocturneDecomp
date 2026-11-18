// Name: core_xform.cpp_transformVector3x4_FUN_005b5080
// Address: 005b5080
// Address Range: [[005b5080, 005b50ff]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_xform_cpp_transformVector3x4_FUN_005b5080(CVector3f *input_vector,CMatrix3x4f *matrix,CVector3f *output_vector)

#include "nocturne.h"

CVector3f * __stack2_esi core_xform_cpp_transformVector3x4_FUN_005b5080(CVector3f *input_vector,CMatrix3x4f *matrix,CVector3f *output_vector)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = input_vector->y;
  fVar2 = matrix->m[1].x;
  fVar3 = input_vector->y;
  fVar4 = matrix->m[2].x;
  fVar5 = input_vector->x;
  fVar6 = matrix->m[1].w;
  fVar7 = input_vector->x;
  fVar8 = matrix->m[2].w;
  fVar9 = input_vector->z;
  fVar10 = matrix->m[1].y;
  fVar11 = input_vector->z;
  fVar12 = matrix->m[2].y;
  fVar13 = matrix->m[1].z;
  fVar14 = matrix->m[2].z;
  output_vector->x =
       input_vector->z * matrix->m[0].y +
       input_vector->x * matrix->m[0].w + input_vector->y * matrix->m[0].x + matrix->m[0].z;
  output_vector->y = fVar9 * fVar10 + fVar5 * fVar6 + fVar1 * fVar2 + fVar13;
  output_vector->z = fVar11 * fVar12 + fVar7 * fVar8 + fVar3 * fVar4 + fVar14;
  return output_vector;
}
