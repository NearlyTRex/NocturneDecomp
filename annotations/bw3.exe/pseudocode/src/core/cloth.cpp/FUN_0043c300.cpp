// Name: core_cloth.cpp_FUN_0043c300
// Address: 0043c300
// Address Range: [[0043c300, 0043c325]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043c300(int param_1)

#include "nocturne.h"

void core_cloth_cpp_FUN_0043c300(int param_1)

{
  if (*(void **)(param_1 + 0x3aafc) == (void *)0x0) {
    return;
  }
  FUN_005a30b6(*(void **)(param_1 + 0x3aafc));
  *(uint *)(param_1 + 0x3aafc) = 0;
  return;
}
