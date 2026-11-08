// Name: FUN_004ce950
// Address: 004ce950
// Address Range: [[004ce950, 004ce97c]]
// Convention: unknown
// Signature: void FUN_004ce950(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_004ce950(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 2) {
    return;
  }
  uVar1 = FUN_004ce900(param_1);
  FUN_004cd450(uVar1,param_2,param_3);
  return;
}
