// Name: core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
// Address: 0045b550
// Address Range: [[0045b550, 0045b638]]
// Convention: __cdecl
// Signature: void __cdecl core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f *this_ptr,CVector3f *euler_angles)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  core_dirmat_cpp_FUN_0045bef0(&local_20,&local_1c,euler_angles);
  core_dirmat_cpp_FUN_0045bef0(&local_18,&local_14,&euler_angles->z);
  core_dirmat_cpp_FUN_0045bef0(&local_10,&local_c,&euler_angles->y);
  this_ptr->m[0].x = local_c * local_14 + local_10 * local_20 * local_18;
  this_ptr->m[0].y = -local_c * local_18 + local_10 * local_20 * local_14;
  this_ptr->m[0].z = local_10 * local_1c;
  this_ptr->m[1].x = local_18 * local_1c;
  this_ptr->m[1].y = local_14 * local_1c;
  this_ptr->m[1].z = -local_20;
  this_ptr->m[2].x = -local_10 * local_14 + local_c * local_20 * local_18;
  this_ptr->m[2].y = local_18 * local_10 + local_c * local_20 * local_14;
  this_ptr->m[2].z = local_c * local_1c;
  return;
}
