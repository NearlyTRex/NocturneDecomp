// Name: FUN_004c2350
// Address: 004c2350
// Address Range: [[004c2350, 004c239a]]
// Convention: unknown
// Signature: void FUN_004c2350(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

void FUN_004c2350(uint param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  int iVar1;
  
  iVar1 = FUN_004c3ea0(param_1,param_7,param_4,param_5,param_6,param_7);
  FUN_004c2060(param_1,((param_2 + param_3 + 1) - iVar1) / 2);
  return;
}
