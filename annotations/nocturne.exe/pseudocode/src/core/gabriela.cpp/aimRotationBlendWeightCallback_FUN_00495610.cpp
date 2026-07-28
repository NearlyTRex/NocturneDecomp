// Name: core_gabriela.cpp_aimRotationBlendWeightCallback_FUN_00495610
// Address: 00495610
// Address Range: [[00495610, 0049566f]]
// Convention: unknown
// Signature: float core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_00495610(undefined4 param_1,undefined4 param_2,float param_3,int param_4)

#include "nocturne.h"

float core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_00495610(uint param_1,uint param_2,float param_3,int param_4)

{
  if (param_4 < 1) {
    param_3 = param_3 * (float)0.20000000000000001;
  }
  else if (param_4 == 1) {
    param_3 = param_3 * (float)0.40000000000000002;
  }
  else if (param_4 == 2) {
    param_3 = param_3 * (float)0.59999999999999998;
  }
  else {
    if (param_4 != 3) {
      return param_3;
    }
    param_3 = param_3 * (float)0.80000000000000004;
  }
  return param_3;
}
