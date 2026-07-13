// Name: FUN_00481f10
// Address: 00481f10
// Address Range: [[00481f10, 00481fc9]]
// Convention: unknown
// Signature: int FUN_00481f10(undefined4 param_1)

#include "nocturne.h"

int FUN_00481f10(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_0044b7a0(param_1);
  iVar2 = FUN_00454490(iVar2 + 0x1ec);
  pcVar3 = "CFilmReel";
  *(byte ***)(iVar2 + -0xa0) = &PTR_FUN_0059d064;
  FUN_00454580(iVar2,"filmreel.kfm");
  pcVar4 = (char *)(iVar2 + -0x98);
  *(uint *)(iVar2 + 0x1e4) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_00580fdc;
  *(uint *)(iVar2 + 0x1e8) = 0;
  pcVar4 = (char *)(iVar2 + 0x180);
  *(uint *)(iVar2 + 0x17c) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x1ec) = 0;
  return iVar2 + -0x1ec;
}
