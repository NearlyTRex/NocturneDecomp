// Name: core_xform.cpp_FUN_00583800
// Address: 00583800
// Address Range: [[00583800, 0058393c]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_FUN_00583800(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl core_xform_cpp_FUN_00583800(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  core_dirmat_cpp_FUN_0045bef0(&local_18,&local_24,euler_angles);
  core_dirmat_cpp_FUN_0045bef0(&local_14,&local_20,&euler_angles->z);
  core_dirmat_cpp_FUN_0045bef0(&local_10,&local_1c,&euler_angles->y);
  output_matrix->m[0].w = local_1c * local_20 + local_10 * local_18 * local_14;
  output_matrix->m[1].w = -local_1c * local_14 + local_10 * local_18 * local_20;
  output_matrix->m[2].w = local_10 * local_24;
  output_matrix->m[0].x = local_14 * local_24;
  output_matrix->m[1].x = local_20 * local_24;
  output_matrix->m[2].x = -local_18;
  output_matrix->m[0].y = -local_10 * local_20 + local_1c * local_18 * local_14;
  output_matrix->m[1].y = local_14 * local_10 + local_1c * local_18 * local_20;
  output_matrix->m[2].y = local_1c * local_24;
  output_matrix->m[0].z =
       -(position->z * output_matrix->m[0].y +
        position->x * output_matrix->m[0].w + position->y * output_matrix->m[0].x);
  output_matrix->m[1].z =
       -(position->z * output_matrix->m[1].y +
        position->x * output_matrix->m[1].w + position->y * output_matrix->m[1].x);
  output_matrix->m[2].z =
       -(position->z * output_matrix->m[2].y +
        position->x * output_matrix->m[2].w + position->y * output_matrix->m[2].x);
  return;
}
