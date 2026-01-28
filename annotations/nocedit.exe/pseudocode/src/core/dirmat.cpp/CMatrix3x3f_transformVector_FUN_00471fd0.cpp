// Name: core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
// Address: 00471fd0
// Address Range: [[00471fd0, 00472024]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0 (CMatrix3x3f *this_ptr,CVector3f *output,CVector3f *input)

#include "nocturne.h"

CVector3f * __cdecl
core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
          (CMatrix3x3f *this_ptr,CVector3f *output,CVector3f *input)

{
  output->x = input->z * this_ptr->m[0].z +
              input->x * this_ptr->m[0].x + input->y * this_ptr->m[0].y;
  output->y = input->z * this_ptr->m[1].z +
              input->x * this_ptr->m[1].x + input->y * this_ptr->m[1].y;
  output->z = input->z * this_ptr->m[2].z +
              input->x * this_ptr->m[2].x + input->y * this_ptr->m[2].y;
  return output;
}
