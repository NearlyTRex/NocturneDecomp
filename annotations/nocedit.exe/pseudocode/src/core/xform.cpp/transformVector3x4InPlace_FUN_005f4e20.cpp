// Name: core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
// Address: 005f4e20
// Address Range: [[005f4e20, 005f4ea3]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20(CVector3f *input_output_vector,CMatrix3x4f *matrix)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20(CVector3f *input_output_vector,CMatrix3x4f *matrix)

{
  CVector3f local_c;
  float fVar11;
  float fVar9;
  float fVar10;
  float fVar1;
  float fVar7;
  float fVar8;
  float fVar5;
  float fVar6;
  float fVar3;
  float fVar4;
  float fVar2;
  
  fVar1 = matrix->m[1].x;
  fVar2 = input_output_vector->x;
  fVar3 = matrix->m[1].w;
  fVar4 = matrix->m[1].y;
  fVar5 = matrix->m[1].z;
  fVar6 = input_output_vector->y;
  fVar7 = matrix->m[2].x;
  fVar8 = input_output_vector->x;
  fVar9 = matrix->m[2].w;
  fVar10 = matrix->m[2].y;
  fVar11 = matrix->m[2].z;
  if (input_output_vector == &local_c) {
    return input_output_vector;
  }
  input_output_vector->x =
       input_output_vector->z * matrix->m[0].y +
       input_output_vector->x * matrix->m[0].w + input_output_vector->y * matrix->m[0].x +
       matrix->m[0].z;
  input_output_vector->y =
       input_output_vector->z * fVar4 + fVar2 * fVar3 + input_output_vector->y * fVar1 + fVar5;
  input_output_vector->z = input_output_vector->z * fVar10 + fVar8 * fVar9 + fVar6 * fVar7 + fVar11;
  return input_output_vector;
}
