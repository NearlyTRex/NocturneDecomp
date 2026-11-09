// Name: core_charactr.cpp_FUN_0042e8e0
// Address: 0042e8e0
// Address Range: [[0042e8e0, 0042e911]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042e8e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042e8e0(int param_1,int param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 0xc194) = param_4;
  *(uint *)(param_1 + 0xc190) = 0;
  if (param_2 == 0) {
    *(uint *)(param_1 + 0xc184) = param_3;
    return;
  }
  *(uint *)(param_1 + 0xc188) = param_3;
  return;
}
