// Name: FUN_00416890
// Address: 00416890
// Address Range: [[00416890, 0041696d]]
// Convention: unknown
// Signature: int FUN_00416890(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00416890(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18c)) {
    iVar4 = param_1 + 0x198;
    do {
      iVar2 = FUN_005a3260(iVar4,param_2);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < *(int *)(param_1 + 0x18c));
  }
  if (9 < *(int *)(param_1 + 0x18c)) {
    _DAT_01d71de0 = "..\\core\\bodypart.cpp";
    _DAT_01d71de4 = 0x48e;
    FUN_004e4330("Too many body part textures!");
  }
  FUN_005a28f0(*(int *)(param_1 + 0x18c) * 0x18 + param_1 + 400,0,0x18);
  pcVar5 = (char *)(param_1 + 400 + *(int *)(param_1 + 0x18c) * 0x18 + 8);
  do {
    cVar1 = *param_2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = *(int *)(param_1 + 0x18c);
  *(int *)(param_1 + 0x18c) = iVar3 + 1;
  return iVar3;
}
