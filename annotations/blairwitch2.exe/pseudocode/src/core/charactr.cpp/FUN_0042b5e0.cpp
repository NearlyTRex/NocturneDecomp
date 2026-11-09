// Name: core_charactr.cpp_FUN_0042b5e0
// Address: 0042b5e0
// Address Range: [[0042b5e0, 0042b611]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042b5e0(int param_1,float param_2)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042b5e0(int param_1,float param_2)

{
  if ((*(int *)(param_1 + 0x10a28) != 0) &&
     (param_2 = *(float *)(param_1 + 0x10a38) - param_2, *(float *)(param_1 + 0x10a38) = param_2,
     param_2 <= 0.0)) {
    *(uint *)(param_1 + 0x10a38) = 0;
    return;
  }
  return;
}
