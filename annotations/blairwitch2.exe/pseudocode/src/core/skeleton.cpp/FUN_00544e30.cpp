// Name: core_skeleton.cpp_FUN_00544e30
// Address: 00544e30
// Address Range: [[00544e30, 00544e55]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00544e30(int param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00544e30(int param_1)

{
  if (*(void **)(param_1 + 0x2234) == (void *)0x0) {
    return;
  }
  FUN_005b7fce(*(void **)(param_1 + 0x2234));
  *(uint *)(param_1 + 0x2234) = 0;
  return;
}
