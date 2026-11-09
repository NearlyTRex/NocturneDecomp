// Name: core_dimage.cpp_FUN_0045b270
// Address: 0045b270
// Address Range: [[0045b270, 0045b295]]
// Convention: unknown
// Signature: void core_dimage_cpp_FUN_0045b270(int param_1)

#include "nocturne.h"

void core_dimage_cpp_FUN_0045b270(int param_1)

{
  if (*(int *)(param_1 + 0x300) == 0) {
    return;
  }
  FUN_005a3770(*(int *)(param_1 + 0x300));
  *(uint *)(param_1 + 0x300) = 0;
  return;
}
