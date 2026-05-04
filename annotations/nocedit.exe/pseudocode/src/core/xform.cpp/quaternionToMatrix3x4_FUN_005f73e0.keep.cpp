// Name: core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
// Address: 005f73e0
// MANUAL RECONSTRUCTION
// Address Range: [[005f73e0, 005f7418] [03fc39aa, 03fc3a04]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(CQuaternion4f *quat_in,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(CQuaternion4f *quat_in,CMatrix3x4f *matrix_out)

{
  CMatrix3x4f local_38;

  core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(&local_38,quat_in);
  core_xform_cpp_clearTranslation_FUN_005f5370(&local_38);
  *matrix_out = local_38;
  return matrix_out;
}
