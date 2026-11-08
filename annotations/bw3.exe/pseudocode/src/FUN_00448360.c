// Name: FUN_00448360
// Address: 00448360
// Address Range: [[00448360, 0044837c]]
// Convention: unknown
// Signature: undefined4 FUN_00448360(int param_1)

#include "nocturne.h"

uint FUN_00448360(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x17c) < 0xfde9) {
    return 0;
  }
  uVar1 = FUN_00448060(param_1);
  return uVar1;
}
