// Name: core_tvbat.cpp_FUN_00581360
// Address: 00581360
// Address Range: [[00581360, 0058137f] [00581383, 00581388]]
// Convention: unknown
// Signature: undefined4 core_tvbat_cpp_FUN_00581360(int param_1)

#include "nocturne.h"

uint core_tvbat_cpp_FUN_00581360(int param_1)

{
  if ((0.0 < *(float *)(param_1 + 0x25a8)) && (*(int *)(param_1 + 0x10cb4) != 3)) {
    return 1;
  }
  return 0;
}
