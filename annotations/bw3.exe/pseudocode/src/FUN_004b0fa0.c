// Name: FUN_004b0fa0
// Address: 004b0fa0
// Address Range: [[004b0fa0, 004b0fea]]
// Convention: unknown
// Signature: void FUN_004b0fa0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

void FUN_004b0fa0(uint param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  int iVar1;
  
  iVar1 = FUN_004b2a80(param_1,param_7,param_4,param_5,param_6,param_7);
  FUN_004b0cb0(param_1,((param_2 + param_3 + 1) - iVar1) / 2);
  return;
}
