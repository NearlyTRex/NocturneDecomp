// Name: core_skeleton.cpp_FUN_00547b90
// Address: 00547b90
// Address Range: [[00547b90, 00547c12]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00547b90(int param_1,int param_2)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00547b90(int param_1,int param_2)

{
  if (param_2 != 0) {
    unkafter_box_cpp_FUN_004fb210(param_1);
  }
  *(uint *)(param_1 + 0x1de78) = 0;
  *(uint *)(param_1 + 0x1ec8c) = 0;
  FUN_005a30b6(*(void **)(param_1 + 0x1ec90));
  FUN_005a30b6(*(void **)(param_1 + 0x1ec94));
  FUN_005a30b6(*(void **)(param_1 + 0x1ec98));
  *(uint *)(param_1 + 0x1ec90) = 0;
  *(uint *)(param_1 + 0x1ec94) = 0;
  *(uint *)(param_1 + 0x1ec98) = 0;
  *(byte *)(param_1 + 0x1de28) = 0;
  return;
}
