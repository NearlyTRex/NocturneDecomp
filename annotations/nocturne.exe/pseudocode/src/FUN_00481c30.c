// Name: FUN_00481c30
// Address: 00481c30
// Address Range: [[00481c30, 00481c9c]]
// Convention: unknown
// Signature: int FUN_00481c30(undefined4 param_1)

#include "nocturne.h"

int FUN_00481c30(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00409d30(param_1);
  iVar2 = FUN_00454490(iVar2 + 0x150);
  *(byte ***)(iVar2 + -4) = &PTR_FUN_0059cf84;
  FUN_00454580(iVar2,"filmreel.kfm");
  pcVar3 = &DAT_00580f99;
  pcVar4 = (char *)(iVar2 + 0x180);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return iVar2 + -0x150;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return iVar2 + -0x150;
}
