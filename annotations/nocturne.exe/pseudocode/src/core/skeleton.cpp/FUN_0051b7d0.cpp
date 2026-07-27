// Name: core_skeleton.cpp_FUN_0051b7d0
// Address: 0051b7d0
// Address Range: [[0051b7d0, 0051b7f5]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_0051b7d0(int param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_0051b7d0(int param_1)

{
  if (*(int *)(param_1 + 0x2234) == 0) {
    return;
  }
  shape_memdbg_cpp_free_FUN_00564486(*(int *)(param_1 + 0x2234));
  *(uint *)(param_1 + 0x2234) = 0;
  return;
}
