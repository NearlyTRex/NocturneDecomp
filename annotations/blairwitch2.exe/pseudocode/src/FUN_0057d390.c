// Name: FUN_0057d390
// Address: 0057d390
// Address Range: [[0057d390, 0057d444]]
// Convention: unknown
// Signature: undefined4 FUN_0057d390(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0057d390(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  HANDLE pvVar2;
  byte auStack_218 [256];
  CHAR aCStack_118 [256];
  int iStack_18;
  int iStack_14;
  
  (**(code **)(*param_1 + 0x24))(param_1);
  param_1[4] = 0;
  FUN_00460910(auStack_218,param_2,param_3);
  iVar1 = FUN_00460980(auStack_218);
  if (iVar1 != 0) {
    param_1[2] = iStack_14;
    param_1[3] = iStack_18;
    pvVar2 = CreateFileA(aCStack_118,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    param_1[1] = (int)pvVar2;
  }
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
  if (iVar1 != 0) {
    FUN_0057d1d0(param_1);
    return 1;
  }
  (**(code **)(*param_1 + 0x24))(param_1);
  return 0;
}
