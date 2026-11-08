// Name: FUN_004ce980
// Address: 004ce980
// Address Range: [[004ce980, 004ce9b3]]
// Convention: unknown
// Signature: void FUN_004ce980(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void FUN_004ce980(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 2) {
    return;
  }
  uVar1 = FUN_004ce900(param_1);
  FUN_004cd510(uVar1,param_2,param_3,param_4);
  return;
}
