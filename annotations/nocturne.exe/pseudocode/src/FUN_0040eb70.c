// Name: FUN_0040eb70
// Address: 0040eb70
// Address Range: [[0040eb70, 0040ebf0]]
// Convention: unknown
// Signature: int FUN_0040eb70(undefined4 param_1)

#include "nocturne.h"

int FUN_0040eb70(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00409d30(param_1);
  iVar2 = FUN_00454490(iVar2 + 0x150);
  *(byte ***)(iVar2 + -4) = &PTR_LAB_00599454;
  FUN_00454580(iVar2,"bullet.kfm");
  pcVar3 = &DAT_005781f6;
  pcVar4 = (char *)(iVar2 + 0x17c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x1bc) = 0x14;
  *(uint *)(iVar2 + 0x1c0) = 0;
  return iVar2 + -0x150;
}
