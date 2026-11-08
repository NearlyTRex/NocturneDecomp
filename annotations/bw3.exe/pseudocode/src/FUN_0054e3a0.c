// Name: FUN_0054e3a0
// Address: 0054e3a0
// Address Range: [[0054e3a0, 0054e41b]]
// Convention: unknown
// Signature: void FUN_0054e3a0(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_0054e3a0(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  if (param_2 < 0) {
    uVar1 = FUN_0054ea40(param_1,param_1 + 9000);
    param_2 = FUN_0054af10(uVar1);
  }
  FUN_0054e4b0(param_1,param_2);
  if (param_4 == 0) {
    if (((int)param_3 < 0) || ((param_3 & 0x100) == 0)) {
      FUN_0054e550(param_1,param_2);
    }
  }
  else {
    FUN_0054e500(param_1,param_2);
  }
  FUN_0054e5a0(param_1,param_3,param_5);
  return;
}
