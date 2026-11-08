// Name: FUN_004c2150
// Address: 004c2150
// Address Range: [[004c2150, 004c2189]]
// Convention: unknown
// Signature: void FUN_004c2150(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_004c2150(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_004c3ea0(param_1,param_6,param_3,param_4,param_5,param_6);
  FUN_004c2060(param_1,(param_2 - iVar1) + 1);
  return;
}
