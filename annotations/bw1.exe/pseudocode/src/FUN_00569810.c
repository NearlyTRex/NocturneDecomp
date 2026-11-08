// Name: FUN_00569810
// Address: 00569810
// Address Range: [[00569810, 0056988b]]
// Convention: unknown
// Signature: void FUN_00569810(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_00569810(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  if (param_2 < 0) {
    uVar1 = FUN_00569eb0(param_1,param_1 + 9000);
    param_2 = FUN_00566380(uVar1);
  }
  FUN_00569920(param_1,param_2);
  if (param_4 == 0) {
    if (((int)param_3 < 0) || ((param_3 & 0x100) == 0)) {
      FUN_005699c0(param_1,param_2);
    }
  }
  else {
    FUN_00569970(param_1,param_2);
  }
  FUN_00569a10(param_1,param_3,param_5);
  return;
}
