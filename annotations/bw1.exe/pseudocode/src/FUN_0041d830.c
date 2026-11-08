// Name: FUN_0041d830
// Address: 0041d830
// Address Range: [[0041d830, 0041d84e]]
// Convention: unknown
// Signature: undefined4 FUN_0041d830(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0041d830(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc888) != 0) {
    return 0;
  }
  uVar1 = FUN_004310b0(param_1,param_2);
  return uVar1;
}
