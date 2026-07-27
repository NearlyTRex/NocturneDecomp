// Name: core_trap.cpp_FUN_005468d0
// Address: 005468d0
// Address Range: [[005468d0, 005468de]]
// Convention: unknown
// Signature: void core_trap_cpp_FUN_005468d0(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_trap_cpp_FUN_005468d0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2cc) = param_2;
  return;
}
