// Name: core_dtrace.cpp_FUN_004727f0
// Address: 004727f0
// Address Range: [[004727f0, 00472831]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_004727f0(int param_1)

#include "nocturne.h"

void core_dtrace_cpp_FUN_004727f0(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_005b7fce(*(void **)(param_1 + 8));
  }
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    FUN_005b7fce(*(void **)(param_1 + 0xc));
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 8) = 0;
  return;
}
