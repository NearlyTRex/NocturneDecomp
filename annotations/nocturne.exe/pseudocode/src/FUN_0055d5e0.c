// Name: FUN_0055d5e0
// Address: 0055d5e0
// Address Range: [[0055d5e0, 0055d60e]]
// Convention: unknown
// Signature: undefined4 FUN_0055d5e0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0055d5e0(uint param_1,uint param_2)

{
  byte auStack_34 [48];
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70(auStack_34,param_2);
  core_xform_cpp_matrixToEulerAnglesZYX_FUN_0055b6c0(auStack_34,param_1);
  return param_1;
}
