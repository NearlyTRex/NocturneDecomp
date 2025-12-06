// Name: core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
// Address: 00472030
// Address Range: [[00472030, 00472084]]
// Convention: __cdecl
// Signature: CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * matrix, CVector3f * output, CVector3f * input)

#include "nocturne.h"

CVector3f * __cdecl
core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
          (CMatrix3x3f *matrix,CVector3f *output,CVector3f *input)

{
  output->x = input->z * matrix->m[2].x + input->x * matrix->m[0].x + input->y * matrix->m[1].x;
  output->y = input->z * matrix->m[2].y + input->x * matrix->m[0].y + input->y * matrix->m[1].y;
  output->z = input->z * matrix->m[2].z + input->x * matrix->m[0].z + input->y * matrix->m[1].z;
  return output;
}
