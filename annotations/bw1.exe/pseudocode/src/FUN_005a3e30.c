// Name: FUN_005a3e30
// Address: 005a3e30
// Address Range: [[005a3e30, 005a3e55]]
// Convention: unknown
// Signature: undefined4 FUN_005a3e30(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005a3e30(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(0x01CCF390 + 0x220) == 0) {
    return 0;
  }
  uVar1 = FUN_005ad9a0(param_1,param_2);
  return uVar1;
}
