// Name: core_skeleton.cpp_FUN_0054c060
// Address: 0054c060
// Address Range: [[0054c060, 0054c085]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_0054c060(int param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_0054c060(int param_1)

{
  if (*(void **)(param_1 + 0x2324) == (void *)0x0) {
    return;
  }
  FUN_005a30b6(*(void **)(param_1 + 0x2324));
  *(uint *)(param_1 + 0x2324) = 0;
  return;
}
