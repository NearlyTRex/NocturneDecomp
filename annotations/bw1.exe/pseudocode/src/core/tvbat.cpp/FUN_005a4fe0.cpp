// Name: core_tvbat.cpp_FUN_005a4fe0
// Address: 005a4fe0
// Address Range: [[005a4fe0, 005a500e]]
// Convention: unknown
// Signature: int core_tvbat_cpp_FUN_005a4fe0(int param_1)

#include "nocturne.h"

int core_tvbat_cpp_FUN_005a4fe0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar1 = *(int *)(param_1 + 0xc424);
  if (iVar1 != 0) {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 2;
    }
    return iVar1;
  }
  return 0;
}
