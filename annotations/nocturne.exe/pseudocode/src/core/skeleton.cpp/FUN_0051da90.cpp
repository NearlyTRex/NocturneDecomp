// Name: core_skeleton.cpp_FUN_0051da90
// Address: 0051da90
// Address Range: [[0051da90, 0051dac2]]
// Convention: unknown
// Signature: undefined4 core_skeleton_cpp_FUN_0051da90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint core_skeleton_cpp_FUN_0051da90(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                    (param_1,param_2,param_3,param_4,param_1 + 0xe80);
  core_skeleton_cpp_FUN_00518320(uVar1);
  return param_2;
}
