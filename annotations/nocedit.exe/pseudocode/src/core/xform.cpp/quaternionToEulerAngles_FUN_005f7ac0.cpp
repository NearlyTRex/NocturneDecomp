// Name: core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
// Address: 005f7ac0
// Address Range: [[005f7ac0, 005f7aee]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CQuaternion4f * quat_in, CVector3f * vector_out)

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(CQuaternion4f *quat_in,CVector3f *vector_out)

{
  CMatrix3x3f local_34;
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(&local_34,(CQuaternion4f *)vector_out);
  core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_34,(CVector3f *)quat_in);
  return (CVector3f *)quat_in;
}
