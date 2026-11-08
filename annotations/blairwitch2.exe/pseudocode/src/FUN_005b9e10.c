// Name: FUN_005b9e10
// Address: 005b9e10
// Address Range: [[005b9e10, 005b9e57]]
// Convention: unknown
// Signature: void FUN_005b9e10(int param_1,undefined4 param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_005b9e10(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_4 < param_3) {
      param_3 = param_4;
    }
    uVar1 = FUN_005c0cf0(param_2,param_3);
    FUN_005c0d30(param_1,param_2,uVar1);
    iVar2 = FUN_005c0d60(param_1,uVar1);
    *(byte *)(param_1 + iVar2) = 0;
  }
  return;
}
