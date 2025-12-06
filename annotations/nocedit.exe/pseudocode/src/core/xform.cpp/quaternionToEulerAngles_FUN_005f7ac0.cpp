// Name: core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
// Address: 005f7ac0
// Address Range: [[005f7ac0, 005f7aee]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CVector3f * euler_out, CQuaternion4f * quat_ptr)

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(CVector3f *euler_out,CQuaternion4f *quat_ptr)

{
  BADSPACEBASE *in_ESP;
  CVector3f aCStack_30 [3];
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)&stack0xffffffcc,quat_ptr);
  core_xform_cpp_matrixToEulerAngles_FUN_005f5690(aCStack_30,(CMatrix3x3f *)euler_out);
  return euler_out;
}
