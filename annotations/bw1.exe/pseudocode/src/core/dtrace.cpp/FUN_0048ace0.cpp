// Name: core_dtrace.cpp_FUN_0048ace0
// Address: 0048ace0
// Address Range: [[0048ace0, 0048ad21]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_0048ace0(int param_1)

#include "nocturne.h"

void core_dtrace_cpp_FUN_0048ace0(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_005c0336(*(void **)(param_1 + 8));
  }
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    FUN_005c0336(*(void **)(param_1 + 0xc));
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 8) = 0;
  return;
}
