// Name: core_gabriela.cpp_flashlightBlendWeightCallback_FUN_004955c0
// Address: 004955c0
// Address Range: [[004955c0, 0049560d]]
// Convention: unknown
// Signature: float core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004955c0(undefined4 param_1,undefined4 param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004955c0(uint param_1,uint param_2,float param_3,int param_4)

{
  uint local_c;
  
  local_c = param_3 * _DAT_01c71394;
  if (param_4 < 1) {
    local_c = local_c * (float)0.69999999999999996;
  }
  else if (param_4 != 1) {
    return param_3;
  }
  return local_c;
}
