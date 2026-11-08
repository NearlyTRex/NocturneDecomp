// Name: FUN_004b0da0
// Address: 004b0da0
// Address Range: [[004b0da0, 004b0dd9]]
// Convention: unknown
// Signature: void FUN_004b0da0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_004b0da0(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_004b2a80(param_1,param_6,param_3,param_4,param_5,param_6);
  FUN_004b0cb0(param_1,(param_2 - iVar1) + 1);
  return;
}
