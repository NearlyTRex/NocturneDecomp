// Name: core_charactr.cpp_FUN_0042a5a0
// Address: 0042a5a0
// Address Range: [[0042a5a0, 0042a617]]
// Convention: unknown
// Signature: float core_charactr_cpp_FUN_0042a5a0(int param_1,int param_2)

#include "nocturne.h"

float core_charactr_cpp_FUN_0042a5a0(int param_1,int param_2)

{
  uint local_18;
  
  local_18 = 0.0;
  if (param_2 == *(int *)(param_1 + 0x2838 + *(int *)(param_1 + 0x2d04) * 0x38)) {
    local_18 = *(float *)(param_1 + 0x2d08);
  }
  if (param_2 != *(int *)(param_1 + 0x2834 + *(int *)(param_1 + 0x2d04) * 0x38)) {
    return local_18;
  }
  return (1.0 - *(float *)(param_1 + 0x2d08)) + local_18;
}
