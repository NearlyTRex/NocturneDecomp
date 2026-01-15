// Name: core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0
// Address: 005f7af0
// Address Range: [[005f7af0, 005f7b1e]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0(CVector3f * euler_out, CQuaternion4f * quat_ptr)

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_quaternionToEulerAnglesZYX_FUN_005f7af0(CVector3f *euler_out,CQuaternion4f *quat_ptr)

{
  CMatrix3x3f local_34;
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(&local_34,quat_ptr);
  core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(local_34.m,(CMatrix3x3f *)euler_out);
  return euler_out;
}
