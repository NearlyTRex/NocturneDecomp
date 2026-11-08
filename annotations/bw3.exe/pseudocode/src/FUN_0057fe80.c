// Name: FUN_0057fe80
// Address: 0057fe80
// Address Range: [[0057fe80, 0057fecb]]
// Convention: unknown
// Signature: undefined4 FUN_0057fe80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 ,undefined4 param_6)

#include "nocturne.h"

uint FUN_0057fe80(int param_1,uint param_2,uint param_3,uint param_4,uint param_5 ,uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_00580110(param_1,0xffffffff,0xffffffff);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0057fed0(param_1,*(uint *)(param_1 + 0x6a48),param_2,param_3,param_4,param_5,param_6);
  return 0;
}
