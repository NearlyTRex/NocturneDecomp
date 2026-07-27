// Name: core_dtrace.cpp_FUN_004675e0
// Address: 004675e0
// Address Range: [[004675e0, 00467624]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_004675e0(int param_1)

#include "nocturne.h"

void core_dtrace_cpp_FUN_004675e0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    shape_memdbg_cpp_free_FUN_00564486(*(int *)(param_1 + 8) + -4);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    shape_memdbg_cpp_free_FUN_00564486(*(int *)(param_1 + 0xc));
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 8) = 0;
  return;
}
