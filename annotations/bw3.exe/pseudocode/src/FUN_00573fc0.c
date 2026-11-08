// Name: FUN_00573fc0
// Address: 00573fc0
// Address Range: [[00573fc0, 0057407e]]
// Convention: unknown
// Signature: undefined4 FUN_00573fc0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

uint FUN_00573fc0(int *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  HANDLE pvVar2;
  byte auStack_218 [256];
  CHAR aCStack_118 [256];
  int iStack_18;
  int iStack_14;
  
  (**(code **)(*param_1 + 0x24))(param_1);
  param_1[4] = 0;
  FUN_00465660(auStack_218,param_2,param_3);
  iVar1 = FUN_004656d0(auStack_218);
  if (iVar1 != 0) {
    param_1[2] = iStack_14;
    param_1[3] = iStack_18;
    pvVar2 = CreateFileA(aCStack_118,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    param_1[1] = (int)pvVar2;
  }
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
  if (iVar1 != 0) {
    FUN_00573e00(param_1);
    param_1[10] = param_4;
    return 1;
  }
  (**(code **)(*param_1 + 0x24))(param_1);
  return 0;
}
