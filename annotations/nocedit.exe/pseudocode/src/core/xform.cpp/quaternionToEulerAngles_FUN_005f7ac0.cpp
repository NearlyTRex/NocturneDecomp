// Name: core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
// Address: 005f7ac0
// Address Range: [[005f7ac0, 005f7aee]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(CVector3f *out_euler,CQuaternion4f *quat_in)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(CVector3f *out_euler,CQuaternion4f *quat_in)

{
  CMatrix3x4f local_34;
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(&local_34,quat_in);
  core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_34,out_euler);
  return out_euler;
}
