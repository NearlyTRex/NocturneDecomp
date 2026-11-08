// Name: FUN_004ab5c0
// Address: 004ab5c0
// Address Range: [[004ab5c0, 004ab679]]
// Convention: unknown
// Signature: int FUN_004ab5c0(undefined4 param_1)

#include "nocturne.h"

int FUN_004ab5c0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_0045d1f0(param_1);
  iVar2 = FUN_00468860(iVar2 + 500);
  pcVar3 = "CFilmReel";
  *(uint *)(iVar2 + -0xa0) = 0x5ffdf4;
  FUN_00468950(iVar2,0x5df0d9);
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
  pcVar3 = (char *)0x5df0f0;
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
  return iVar2 + -500;
}
