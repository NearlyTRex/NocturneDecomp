// Name: core_charactr.cpp_FUN_00433a60
// Address: 00433a60
// Address Range: [[00433a60, 00433ad7]]
// Convention: unknown
// Signature: float core_charactr_cpp_FUN_00433a60(int param_1,int param_2)

#include "nocturne.h"

float core_charactr_cpp_FUN_00433a60(int param_1,int param_2)

{
  uint local_18;
  
  local_18 = 0.0;
  if (param_2 == *(int *)(param_1 + 0x27cc + *(int *)(param_1 + 0x2f00) * 0x38)) {
    local_18 = *(float *)(param_1 + 0x2f04);
  }
  if (param_2 != *(int *)(param_1 + 0x27c8 + *(int *)(param_1 + 0x2f00) * 0x38)) {
    return local_18;
  }
  return (1.0 - *(float *)(param_1 + 0x2f04)) + local_18;
}
