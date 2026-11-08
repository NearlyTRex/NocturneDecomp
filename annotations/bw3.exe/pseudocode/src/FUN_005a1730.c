// Name: FUN_005a1730
// Address: 005a1730
// Address Range: [[005a1730, 005a1759]]
// Convention: unknown
// Signature: void FUN_005a1730(int param_1,int param_2)

#include "nocturne.h"

void FUN_005a1730(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x33fa8) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x24fc) = 1;
    }
    FUN_00509530(param_1,param_2);
  }
  return;
}
