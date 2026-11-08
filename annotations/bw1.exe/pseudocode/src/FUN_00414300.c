// Name: FUN_00414300
// Address: 00414300
// Address Range: [[00414300, 0041431e]]
// Convention: unknown
// Signature: undefined4 FUN_00414300(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00414300(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc308) != 0) {
    return 0;
  }
  uVar1 = FUN_004310b0(param_1,param_2);
  return uVar1;
}
