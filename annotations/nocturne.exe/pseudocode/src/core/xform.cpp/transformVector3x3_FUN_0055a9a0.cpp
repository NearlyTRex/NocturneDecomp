// Name: core_xform.cpp_transformVector3x3_FUN_0055a9a0
// Address: 0055a9a0
// Address Range: [[0055a9a0, 0055a9f4]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_transformVector3x3_FUN_0055a9a0(CMatrix3x3f *matrix,CVector3f *output_vector,CVector3f *input_vector)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_transformVector3x3_FUN_0055a9a0(CMatrix3x3f *matrix,CVector3f *output_vector,CVector3f *input_vector)

{
  output_vector->x =
       input_vector->z * matrix->m[0].z +
       input_vector->x * matrix->m[0].x + input_vector->y * matrix->m[0].y;
  output_vector->y =
       input_vector->z * matrix->m[2].x +
       input_vector->x * matrix->m[1].y + input_vector->y * matrix->m[1].z;
  output_vector->z =
       input_vector->z * matrix[1].m[0].y +
       input_vector->x * matrix->m[2].z + input_vector->y * matrix[1].m[0].x;
  return output_vector;
}
