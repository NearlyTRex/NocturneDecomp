// Name: core_cloth.cpp_FUN_005ade80
// Address: 005ade80
// Address Range: [[005ade80, 005adea5]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_005ade80(int param_1)

#include "nocturne.h"

void core_cloth_cpp_FUN_005ade80(int param_1)

{
  if (*(void **)(param_1 + 0x3aafc) == (void *)0x0) {
    return;
  }
  FUN_005b7fce(*(void **)(param_1 + 0x3aafc));
  *(uint *)(param_1 + 0x3aafc) = 0;
  return;
}
