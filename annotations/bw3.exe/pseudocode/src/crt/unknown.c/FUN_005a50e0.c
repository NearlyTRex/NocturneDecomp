// Name: crt_unknown.c_FUN_005a50e0
// Address: 005a50e0
// Address Range: [[005a50e0, 005a5127]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a50e0(int param_1,undefined4 param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_005a50e0(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_4 < param_3) {
      param_3 = param_4;
    }
    uVar1 = FUN_005ac8f0(param_2,param_3);
    FUN_005ac930(param_1,param_2,uVar1);
    iVar2 = FUN_005ac960(param_1,uVar1);
    *(byte *)(param_1 + iVar2) = 0;
  }
  return;
}
