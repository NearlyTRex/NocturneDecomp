// Name: core_cloth.cpp_FUN_00435210
// Address: 00435210
// Address Range: [[00435210, 00435235]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_00435210(int param_1)

#include "nocturne.h"

void core_cloth_cpp_FUN_00435210(int param_1)

{
  if (*(int *)(param_1 + 0x3aafc) == 0) {
    return;
  }
  shape_memdbg_cpp_free_FUN_00564486(*(int *)(param_1 + 0x3aafc));
  *(uint *)(param_1 + 0x3aafc) = 0;
  return;
}
