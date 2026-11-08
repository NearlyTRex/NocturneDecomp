// Name: FUN_00574960
// Address: 00574960
// Address Range: [[00574960, 0057497a]]
// Convention: unknown
// Signature: undefined4 FUN_00574960(int param_1)

#include "nocturne.h"

uint FUN_00574960(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_005a5d00(*(int *)(param_1 + 4));
  return uVar1;
}
