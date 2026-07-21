// Name: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440
// Address: 0044e440
// Address Range: [[0044e440, 0044e462]]
// Convention: unknown
// Signature: void core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440(int param_1)

#include "nocturne.h"

void core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440(int param_1)

{
  if (*(int *)(param_1 + 0x2f9c) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x164) = 0;
  *(uint *)(param_1 + 0x2f9c) = 0;
  return;
}
