// Name: core_xform.cpp_FUN_0055d5e0
// Address: 0055d5e0
// Address Range: [[0055d5e0, 0055d60e]]
// Convention: unknown
// Signature: CVector3f * core_xform_cpp_FUN_0055d5e0(CVector3f *param_1,CQuaternion4f *param_2)

#include "nocturne.h"

CVector3f * core_xform_cpp_FUN_0055d5e0(CVector3f *param_1,CQuaternion4f *param_2)

{
  CMatrix3x4f CStack_34;
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70(&CStack_34,param_2);
  core_xform_cpp_matrixToEulerAnglesZYX_FUN_0055b6c0(&CStack_34,param_1);
  return param_1;
}
