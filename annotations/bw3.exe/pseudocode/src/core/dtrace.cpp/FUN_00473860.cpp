// Name: core_dtrace.cpp_FUN_00473860
// Address: 00473860
// Address Range: [[00473860, 004738a1]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_00473860(int param_1)

#include "nocturne.h"

void core_dtrace_cpp_FUN_00473860(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_005a30b6(*(void **)(param_1 + 8));
  }
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    FUN_005a30b6(*(void **)(param_1 + 0xc));
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 8) = 0;
  return;
}
