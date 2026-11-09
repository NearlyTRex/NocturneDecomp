// Name: core_dimage.cpp_FUN_0045f100
// Address: 0045f100
// Address Range: [[0045f100, 0045f125]]
// Convention: unknown
// Signature: void core_dimage_cpp_FUN_0045f100(int param_1)

#include "nocturne.h"

void core_dimage_cpp_FUN_0045f100(int param_1)

{
  if (*(int *)(param_1 + 0x300) == 0) {
    return;
  }
  FUN_005c09f0(*(int *)(param_1 + 0x300));
  *(uint *)(param_1 + 0x300) = 0;
  return;
}
