// Name: FUN_00442c80
// Address: 00442c80
// Address Range: [[00442c80, 00442d01]]
// Convention: unknown
// Signature: undefined4 FUN_00442c80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

#include "nocturne.h"

uint FUN_00442c80(int *param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  byte auStack_24 [24];
  
  FUN_005a1ad0(auStack_24,param_3,*param_4);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,auStack_24);
  if (iVar1 == 1) {
    uVar2 = 1;
    if (param_5 == 0) goto LAB_00442cc2;
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,auStack_24);
    uVar2 = 1;
    if (iVar1 == 1) goto LAB_00442cc2;
  }
  uVar2 = 0;
LAB_00442cc2:
  iVar1 = FUN_005a1d10(auStack_24);
  *param_4 = *param_4 - iVar1;
  FUN_005a1b60(auStack_24,0);
  return uVar2;
}
