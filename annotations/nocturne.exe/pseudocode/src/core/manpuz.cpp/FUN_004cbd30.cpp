// Name: core_manpuz.cpp_FUN_004cbd30
// Address: 004cbd30
// Address Range: [[004cbd30, 004cbd4f]]
// Convention: unknown
// Signature: undefined4 core_manpuz_cpp_FUN_004cbd30(int param_1,undefined4 param_2)

#include "nocturne.h"

uint core_manpuz_cpp_FUN_004cbd30(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x2cc) != 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x2cc) = param_2;
  return 1;
}
