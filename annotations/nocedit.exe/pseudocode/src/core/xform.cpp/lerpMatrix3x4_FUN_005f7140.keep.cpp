// Name: core_xform.cpp_lerpMatrix3x4_FUN_005f7140
// Address: 005f7140
// MANUAL RECONSTRUCTION
// Address Range: [[005f7140, 005f727d] [00605319, 0060538c] [03fc4b91, 03fc4bee] [03fc5a44, 03fc5a96]]
// Convention: __stack3_esi
// Signature: CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out)

{
  CMatrix3x4f *pCVar3;
  CMatrix3x4f local_d0;
  CQuaternion4f local_60;
  CQuaternion4f local_50;
  CQuaternion4f local_20;
  float fVar1;

  pCVar3 = matrix_a;
  if ((0.0 < t) && (pCVar3 = matrix_b, t < 1.0)) {
    core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)matrix_a,&local_20);
    core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)matrix_b,&local_60);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(&local_20,&local_60,t,&local_50);
    core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(&local_d0,&local_50);
    fVar1 = 1.0 - t;
    local_d0.m[0].z = matrix_b->m[0].z * t + matrix_a->m[0].z * fVar1;
    local_d0.m[1].z = matrix_b->m[1].z * t + matrix_a->m[1].z * fVar1;
    pCVar3 = &local_d0;
    local_d0.m[2].z = matrix_b->m[2].z * t + fVar1 * matrix_a->m[2].z;
  }
  *matrix_out = *pCVar3;
  return matrix_out;
}
