// Name: FUN_00434590
// Address: 00434590
// Address Range: [[00434590, 00434607]]
// Convention: unknown
// Signature: float FUN_00434590(int param_1,int param_2)

#include "nocturne.h"

float FUN_00434590(int param_1,int param_2)

{
  uint local_18;
  
  local_18 = 0.0;
  if (param_2 == *(int *)(param_1 + 0x27cc + *(int *)(param_1 + 0x2c98) * 0x38)) {
    local_18 = *(float *)(param_1 + 0x2c9c);
  }
  if (param_2 != *(int *)(param_1 + 0x27c8 + *(int *)(param_1 + 0x2c98) * 0x38)) {
    return local_18;
  }
  return (1.0 - *(float *)(param_1 + 0x2c9c)) + local_18;
}
