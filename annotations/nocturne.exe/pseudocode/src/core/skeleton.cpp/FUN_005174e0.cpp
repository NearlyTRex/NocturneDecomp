// Name: core_skeleton.cpp_FUN_005174e0
// Address: 005174e0
// Address Range: [[005174e0, 00517557]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_005174e0(int param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_005174e0(int param_1)

{
  *(uint *)(param_1 + 0x28558) = 0;
  *(uint *)(param_1 + 0x2936c) = 0;
  shape_memdbg_cpp_free_FUN_00564486(*(uint *)(param_1 + 0x29370));
  if (*(int *)(param_1 + 0x29374) != 0) {
    shape_memdbg_cpp_free_FUN_00564486(*(int *)(param_1 + 0x29374) + -4);
  }
  if (*(int *)(param_1 + 0x29378) != 0) {
    shape_memdbg_cpp_free_FUN_00564486(*(int *)(param_1 + 0x29378) + -4);
  }
  *(uint *)(param_1 + 0x29374) = 0;
  *(uint *)(param_1 + 0x29378) = 0;
  *(uint *)(param_1 + 0x29370) = 0;
  return;
}
