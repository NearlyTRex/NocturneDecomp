// Name: core_skeleton.cpp_FUN_005674d0
// Address: 005674d0
// Address Range: [[005674d0, 005674f5]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_005674d0(int param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_005674d0(int param_1)

{
  if (*(void **)(param_1 + 0x2324) == (void *)0x0) {
    return;
  }
  FUN_005c0336(*(void **)(param_1 + 0x2324));
  *(uint *)(param_1 + 0x2324) = 0;
  return;
}
