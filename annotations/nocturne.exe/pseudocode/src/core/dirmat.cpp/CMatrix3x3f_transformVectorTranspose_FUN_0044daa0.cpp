// Name: core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
// Address: 0044daa0
// Address Range: [[0044daa0, 0044daf4]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f *this_ptr,CVector3f *output,CVector3f *input)

#include "nocturne.h"

CVector3f * __cdecl core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f *this_ptr,CVector3f *output,CVector3f *input)

{
  output->x = input->z * this_ptr->m[2].x +
              input->x * this_ptr->m[0].x + input->y * this_ptr->m[1].x;
  output->y = input->z * this_ptr->m[2].y +
              input->x * this_ptr->m[0].y + input->y * this_ptr->m[1].y;
  output->z = input->z * this_ptr->m[2].z +
              input->x * this_ptr->m[0].z + input->y * this_ptr->m[1].z;
  return output;
}
