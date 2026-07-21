// Name: core_tvbat.cpp_CTVBat_getDeathState_FUN_0054c0f0
// Address: 0054c0f0
// Address Range: [[0054c0f0, 0054c11e]]
// Convention: unknown
// Signature: int core_tvbat_cpp_CTVBat_getDeathState_FUN_0054c0f0(int param_1)

#include "nocturne.h"

int core_tvbat_cpp_CTVBat_getDeathState_FUN_0054c0f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar1 = *(int *)(param_1 + 0xbee0);
  if (iVar1 != 0) {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 2;
    }
    return iVar1;
  }
  return 0;
}
