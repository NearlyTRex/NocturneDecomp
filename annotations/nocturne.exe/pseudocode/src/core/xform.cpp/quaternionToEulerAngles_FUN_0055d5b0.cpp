// Name: core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0
// Address: 0055d5b0
// Address Range: [[0055d5b0, 0055d5de]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0(CVector3f *out_euler,CQuaternion4f *quat_in)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0(CVector3f *out_euler,CQuaternion4f *quat_in)

{
  CMatrix3x4f local_34;
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70(&local_34,quat_in);
  core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_34,out_euler);
  return out_euler;
}
