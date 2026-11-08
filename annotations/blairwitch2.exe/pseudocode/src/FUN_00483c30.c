// Name: FUN_00483c30
// Address: 00483c30
// Address Range: [[00483c30, 00483ca2]]
// Convention: unknown
// Signature: void FUN_00483c30(int *param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00483c30(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_00480eb0(param_1,param_2,param_3);
  for (iVar2 = *param_1 + -2; param_2 < iVar2; iVar2 = iVar2 + -1) {
    uVar1 = FUN_00483aa0(param_1,iVar2 + -1);
    FUN_004839d0(param_1,iVar2,uVar1);
    uVar1 = FUN_00483bd0(param_1,iVar2 + -1);
    FUN_00483b00(param_1,iVar2,uVar1);
  }
  FUN_004839d0(param_1,param_2,1);
  FUN_00483b00(param_1,param_2,0xffffffff);
  return;
}
