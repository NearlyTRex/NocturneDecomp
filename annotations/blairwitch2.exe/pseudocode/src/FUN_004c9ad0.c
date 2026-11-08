// Name: FUN_004c9ad0
// Address: 004c9ad0
// Address Range: [[004c9ad0, 004c9afc]]
// Convention: unknown
// Signature: void FUN_004c9ad0(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_004c9ad0(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 2) {
    return;
  }
  uVar1 = FUN_004c9a80(param_1);
  FUN_004c8d10(uVar1,param_2,param_3);
  return;
}
