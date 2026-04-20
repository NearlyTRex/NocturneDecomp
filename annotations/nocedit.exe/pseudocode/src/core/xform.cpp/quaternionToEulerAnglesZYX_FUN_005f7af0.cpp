// Name: core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0
// Address: 005f7af0
// Address Range: [[005f7af0, 005f7b1e]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_quaternionToEulerAnglesZYX_FUN_005f7af0(CQuaternion4f *quat_in,CVector3f *vector_out)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_quaternionToEulerAnglesZYX_FUN_005f7af0(CQuaternion4f *quat_in,CVector3f *vector_out)

{
  CMatrix3x4f local_34;
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(&local_34,(CQuaternion4f *)vector_out);
  core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(&local_34,(CVector3f *)quat_in);
  return (CVector3f *)quat_in;
}
