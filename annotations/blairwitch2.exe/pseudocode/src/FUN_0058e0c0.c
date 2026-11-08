// Name: FUN_0058e0c0
// Address: 0058e0c0
// Address Range: [[0058e0c0, 0058e10b]]
// Convention: unknown
// Signature: undefined4 FUN_0058e0c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 ,undefined4 param_6)

#include "nocturne.h"

uint FUN_0058e0c0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5 ,uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_0058e450(param_1,0xffffffff,0xffffffff);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0058e110(param_1,*(uint *)(param_1 + 0x6a48),param_2,param_3,param_4,param_5,param_6);
  return 0;
}
