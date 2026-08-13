// Name: core_xform.cpp_quaternionToEulerAnglesZYX_FUN_0055d5e0
// Address: 0055d5e0
// Address Range: [[0055d5e0, 0055d60e]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_quaternionToEulerAnglesZYX_FUN_0055d5e0(CQuaternion4f *quat_in,CVector3f *vector_out)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_quaternionToEulerAnglesZYX_FUN_0055d5e0(CQuaternion4f *quat_in,CVector3f *vector_out)

{
  CMatrix3x4f CStack_34;
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70(&CStack_34,(CQuaternion4f *)vector_out);
  core_xform_cpp_matrixToEulerAnglesZYX_FUN_0055b6c0(&CStack_34,(CVector3f *)quat_in);
  return (CVector3f *)quat_in;
}
