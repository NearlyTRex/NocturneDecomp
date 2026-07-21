// Name: core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0
// Address: 0055d5b0
// Address Range: [[0055d5b0, 0055d5de]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0(uint param_1,uint param_2)

{
  byte local_34 [48];
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70(local_34,param_2);
  core_xform_cpp_matrixToEulerAngles_FUN_0055b180(local_34,param_1);
  return param_1;
}
