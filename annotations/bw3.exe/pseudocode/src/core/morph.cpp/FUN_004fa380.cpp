// Name: FUN_004fa380
// Address: 004fa380
// Address Range: [[004fa380, 004fa442]]
// Convention: unknown
// Signature: int FUN_004fa380(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004fa380(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    iVar4 = param_1 + 0x70;
    do {
      iVar2 = FUN_005a3260(iVar4,param_2);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x48;
    } while (iVar3 < *(int *)(param_1 + 100));
  }
  if (0x13 < *(int *)(param_1 + 100)) {
    _DAT_01d71de0 = "..\\core\\morph.cpp";
    _DAT_01d71de4 = 0x1d0;
    FUN_004e4330("CMorphModel::findOrAddTexture - too many textures!");
  }
  FUN_005a28f0(*(int *)(param_1 + 100) * 0x48 + param_1 + 0x68,0,0x48);
  pcVar5 = (char *)(param_1 + 0x68 + *(int *)(param_1 + 100) * 0x48 + 8);
  do {
    cVar1 = *param_2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = *(int *)(param_1 + 100);
  *(int *)(param_1 + 100) = iVar3 + 1;
  return iVar3;
}
