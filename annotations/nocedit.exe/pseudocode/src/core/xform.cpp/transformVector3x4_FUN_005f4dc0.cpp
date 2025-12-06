// Name: core_xform.cpp_transformVector3x4_FUN_005f4dc0
// Address: 005f4dc0
// Address Range: [[005f4dc0, 005f4e1d]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_transformVector3x4_FUN_005f4dc0
          (CVector3f *output_vector,CVector3f *input_vector,CMatrix3x4f *matrix)

{
  output_vector->x =
       input_vector->z * matrix->m[0].y +
       input_vector->x * matrix->m[0].w + input_vector->y * matrix->m[0].x + matrix->m[0].z;
  output_vector->y =
       input_vector->z * matrix->m[1].y +
       input_vector->x * matrix->m[1].w + input_vector->y * matrix->m[1].x + matrix->m[1].z;
  output_vector->z =
       input_vector->z * matrix->m[2].y +
       input_vector->x * matrix->m[2].w + input_vector->y * matrix->m[2].x + matrix->m[2].z;
  return output_vector;
}
