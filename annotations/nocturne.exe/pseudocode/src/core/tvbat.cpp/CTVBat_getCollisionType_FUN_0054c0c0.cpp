// Name: core_tvbat.cpp_CTVBat_getCollisionType_FUN_0054c0c0
// Address: 0054c0c0
// Address Range: [[0054c0c0, 0054c0df] [0054c0e3, 0054c0e8]]
// Convention: unknown
// Signature: undefined4 core_tvbat_cpp_CTVBat_getCollisionType_FUN_0054c0c0(int param_1)

#include "nocturne.h"

uint core_tvbat_cpp_CTVBat_getCollisionType_FUN_0054c0c0(int param_1)

{
  if ((0.0 < *(float *)(param_1 + 0x2434)) && (*(int *)(param_1 + 0xbee0) != 3)) {
    return 1;
  }
  return 0;
}
