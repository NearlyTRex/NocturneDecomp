// Name: core_dlight.cpp_FUN_0044e2c0
// Address: 0044e2c0
// Address Range: [[0044e2c0, 0044e33f]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_0044e2c0(int param_1)

#include "nocturne.h"

void core_dlight_cpp_FUN_0044e2c0(int param_1)

{
  if (*(int *)(param_1 + 0x2f94) != 0) {
    FUN_005638d0(*(uint *)(param_1 + 0x2f98));
    *(uint *)(param_1 + 0x2f94) = 0;
    *(uint *)(param_1 + 0x2f98) = 0;
  }
  core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440(param_1);
  if (*(int *)(param_1 + 0x2fa0) != 0) {
    FUN_005638d0(*(int *)(param_1 + 0x2fa0));
    *(uint *)(param_1 + 0x2fa0) = 0;
  }
  if (*(int *)(param_1 + 0x1c6c) == 0) {
    return;
  }
  FUN_005638d0(*(int *)(param_1 + 0x1c6c));
  *(uint *)(param_1 + 0x1c6c) = 0;
  return;
}
