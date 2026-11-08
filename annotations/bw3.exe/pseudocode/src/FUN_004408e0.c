// Name: FUN_004408e0
// Address: 004408e0
// Address Range: [[004408e0, 00440961]]
// Convention: unknown
// Signature: undefined4 FUN_004408e0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

#include "nocturne.h"

uint FUN_004408e0(int *param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  byte auStack_24 [24];
  
  FUN_00574ac0(auStack_24,param_3,*param_4);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,auStack_24);
  if (iVar1 == 1) {
    uVar2 = 1;
    if (param_5 == 0) goto LAB_00440922;
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,auStack_24);
    uVar2 = 1;
    if (iVar1 == 1) goto LAB_00440922;
  }
  uVar2 = 0;
LAB_00440922:
  iVar1 = FUN_00574d00(auStack_24);
  *param_4 = *param_4 - iVar1;
  FUN_00574b50(auStack_24,0);
  return uVar2;
}
