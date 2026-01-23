// Name: core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
// Address: 00472030
// Address Range: [[00472030, 00472084]]
// Convention: __cdecl
// Signature: CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)

#include "nocturne.h"

CVector3f * __cdecl
core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
          (CMatrix3x3f *this_ptr,CVector3f *output,CVector3f *input)

{
  output->x = input->z * this_ptr->m[2].x +
              input->x * this_ptr->m[0].x + input->y * this_ptr->m[1].x;
  output->y = input->z * this_ptr->m[2].y +
              input->x * this_ptr->m[0].y + input->y * this_ptr->m[1].y;
  output->z = input->z * this_ptr->m[2].z +
              input->x * this_ptr->m[0].z + input->y * this_ptr->m[1].z;
  return output;
}
