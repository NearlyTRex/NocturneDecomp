// Name: FUN_005b6940
// Address: 005b6940
// Address Range: [[005b6940, 005b6a02]]
// Convention: unknown
// Signature: int FUN_005b6940(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005b6940(int param_1,char *param_2)

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
      iVar2 = FUN_005b8130(iVar4,param_2);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x48;
    } while (iVar3 < *(int *)(param_1 + 100));
  }
  if (0x13 < *(int *)(param_1 + 100)) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0x1d0;
    FUN_004e4500("CMorphModel::findOrAddTexture - too many textures!");
  }
  FUN_005b77c0(*(int *)(param_1 + 100) * 0x48 + param_1 + 0x68,0,0x48);
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
