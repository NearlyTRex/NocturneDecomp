// Name: FUN_004c9810
// Address: 004c9810
// Address Range: [[004c9810, 004c9843]]
// Convention: unknown
// Signature: void FUN_004c9810(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void FUN_004c9810(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 2) {
    return;
  }
  uVar1 = FUN_004c9790(param_1);
  FUN_004c7ea0(uVar1,param_2,param_3,param_4);
  return;
}
