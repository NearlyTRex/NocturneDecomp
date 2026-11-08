// Name: FUN_004e6020
// Address: 004e6020
// Address Range: [[004e6020, 004e6053]]
// Convention: unknown
// Signature: void FUN_004e6020(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void FUN_004e6020(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 2) {
    return;
  }
  uVar1 = FUN_004e5fa0(param_1);
  FUN_004e4830(uVar1,param_2,param_3,param_4);
  return;
}
