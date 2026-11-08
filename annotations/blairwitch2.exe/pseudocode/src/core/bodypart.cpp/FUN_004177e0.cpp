// Name: FUN_004177e0
// Address: 004177e0
// Address Range: [[004177e0, 004178bd]]
// Convention: unknown
// Signature: int FUN_004177e0(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004177e0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2e8)) {
    iVar4 = param_1 + 0x2f4;
    do {
      iVar2 = FUN_005b8130(iVar4,param_2);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < *(int *)(param_1 + 0x2e8));
  }
  if (9 < *(int *)(param_1 + 0x2e8)) {
    _DAT_01d046a0 = "..\\core\\bodypart.cpp";
    _DAT_01d046a4 = 0x47a;
    FUN_004e4500("Too many body part textures!");
  }
  FUN_005b77c0(*(int *)(param_1 + 0x2e8) * 0x18 + param_1 + 0x2ec,0,0x18);
  pcVar5 = (char *)(param_1 + 0x2ec + *(int *)(param_1 + 0x2e8) * 0x18 + 8);
  do {
    cVar1 = *param_2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = *(int *)(param_1 + 0x2e8);
  *(int *)(param_1 + 0x2e8) = iVar3 + 1;
  return iVar3;
}
