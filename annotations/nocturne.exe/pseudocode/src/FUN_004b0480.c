// Name: FUN_004b0480
// Address: 004b0480
// Address Range: [[004b0480, 004b04ac]]
// Convention: unknown
// Signature: void FUN_004b0480(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_004b0480(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 2) {
    return;
  }
  uVar1 = FUN_004b0430(param_1);
  FUN_004af730(uVar1,param_2,param_3);
  return;
}
