// Name: unkafter_bird.cpp_FUN_00415660
// Address: 00415660
// Address Range: [[00415660, 00415689]]
// Convention: unknown
// Signature: void unkafter_bird_cpp_FUN_00415660(int param_1,int param_2)

#include "nocturne.h"

void unkafter_bird_cpp_FUN_00415660(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1fab0) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x24fc) = 1;
    }
    core_charactr_cpp_FUN_0042f320(param_1,param_2);
  }
  return;
}
