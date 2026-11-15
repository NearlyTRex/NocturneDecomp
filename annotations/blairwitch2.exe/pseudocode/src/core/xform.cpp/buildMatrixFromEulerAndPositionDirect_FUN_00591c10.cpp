// Name: core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
// Address: 00591c10
// Address Range: [[00591c10, 00591d0f]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  core_dirmat_cpp_FUN_00449c20(&local_24,&local_20,euler_angles);
  core_dirmat_cpp_FUN_00449c20(&local_1c,&local_14,&euler_angles->z);
  core_dirmat_cpp_FUN_00449c20(&local_10,&local_18,&euler_angles->y);
  output_matrix->m[0].w = local_18 * local_14 + local_10 * local_24 * local_1c;
  output_matrix->m[0].x = -local_18 * local_1c + local_10 * local_24 * local_14;
  output_matrix->m[0].y = local_10 * local_20;
  output_matrix->m[1].w = local_1c * local_20;
  output_matrix->m[1].x = local_14 * local_20;
  output_matrix->m[1].y = -local_24;
  output_matrix->m[2].w = -local_10 * local_14 + local_18 * local_24 * local_1c;
  output_matrix->m[2].x = local_1c * local_10 + local_18 * local_24 * local_14;
  output_matrix->m[2].y = local_18 * local_20;
  output_matrix->m[0].z = position->x;
  output_matrix->m[1].z = position->y;
  output_matrix->m[2].z = position->z;
  return;
}
