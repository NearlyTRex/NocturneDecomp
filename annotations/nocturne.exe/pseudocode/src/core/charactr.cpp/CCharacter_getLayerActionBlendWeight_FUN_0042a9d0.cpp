// Name: core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
// Address: 0042a9d0
// Address Range: [[0042a9d0, 0042aa47]]
// Convention: unknown
// Signature: float core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(int param_1,int param_2)

#include "nocturne.h"

float core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(int param_1,int param_2)

{
  uint local_18;
  
  local_18 = 0.0;
  if (param_2 == *(int *)(param_1 + 0x2628 + *(int *)(param_1 + 0x2a84) * 0x38)) {
    local_18 = *(float *)(param_1 + 0x2a88);
  }
  if (param_2 != *(int *)(param_1 + 0x2624 + *(int *)(param_1 + 0x2a84) * 0x38)) {
    return local_18;
  }
  return (1.0 - *(float *)(param_1 + 0x2a88)) + local_18;
}
