// Name: core_charactr.cpp_FUN_0042d8a0
// Address: 0042d8a0
// Address Range: [[0042d8a0, 0042d8b8]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042d8a0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042d8a0(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0xcd80) = param_2;
  *(uint *)(param_1 + 0xcd8c) = param_3;
  return;
}
