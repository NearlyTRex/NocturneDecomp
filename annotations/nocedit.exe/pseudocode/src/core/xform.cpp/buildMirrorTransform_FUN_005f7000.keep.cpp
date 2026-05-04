// Name: core_xform.cpp_buildMirrorTransform_FUN_005f7000
// Address: 005f7000
// MANUAL RECONSTRUCTION
// Address Range: [[005f7000, 005f713c] [03fc2707, 03fc28a3]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_xform_cpp_buildMirrorTransform_FUN_005f7000(CVector3f *axis_vector,float distance,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_xform_cpp_buildMirrorTransform_FUN_005f7000(CVector3f *axis_vector,float distance,CMatrix3x4f *matrix_out)

{
  float fVar1;
  CVector3f *euler_angles;
  CMatrix3x4f *matrix_b;
  CMatrix3x4f local_1a4;
  CMatrix3x4f local_174;
  CMatrix3x4f local_144;
  CMatrix3x4f local_114;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x4f local_84;
  CMatrix3x4f local_54;
  CVector3f local_24;
  CVector3f local_18;
  
  fVar1 = distance /
          (axis_vector->z * axis_vector->z +
          axis_vector->x * axis_vector->x + axis_vector->y * axis_vector->y);
  local_24.x = axis_vector->x * fVar1;
  local_24.y = axis_vector->y * fVar1;
  local_24.z = axis_vector->z * fVar1;
  euler_angles = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_18,axis_vector);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(&local_84,&local_24,euler_angles);
  core_xform_cpp_inverse_FUN_005f6210(&local_84,&local_54);
  local_b4 = local_54;
  matrix_b = &local_b4;
  core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0(0.0,&local_1a4);
  local_114 = local_1a4;
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_84,&local_114,&local_174);
  local_e4 = local_174;
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_e4,matrix_b,&local_144);
  *matrix_out = local_144;
  return matrix_out;
}
