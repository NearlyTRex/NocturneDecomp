// Name: core_tvbat.cpp_FUN_005a4fb0
// Address: 005a4fb0
// Address Range: [[005a4fb0, 005a4fcf] [005a4fd3, 005a4fd8]]
// Convention: unknown
// Signature: undefined4 core_tvbat_cpp_FUN_005a4fb0(int param_1)

#include "nocturne.h"

uint core_tvbat_cpp_FUN_005a4fb0(int param_1)

{
  if ((0.0 < *(float *)(param_1 + 0x2538)) && (*(int *)(param_1 + 0xc424) != 3)) {
    return 1;
  }
  return 0;
}
