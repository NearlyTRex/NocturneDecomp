// Name: FUN_00514cd0
// Address: 00514cd0
// Address Range: [[00514cd0, 00514dda]]
// Convention: unknown
// Signature: int FUN_00514cd0(undefined4 param_1)

#include "nocturne.h"

int FUN_00514cd0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  iVar2 = FUN_0044fc80(iVar2 + 0x2b4);
  *(uint *)(iVar2 + -4) = 0x5fab04;
  FUN_0044fd70(iVar2,0x5e19fc);
  pcVar3 = (char *)0x5e1a05;
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
  pcVar3 = (char *)0x5e1a0a;
  pcVar4 = (char *)(iVar2 + 0x1e0);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x244) = 1;
  *(uint *)(iVar2 + 0x248) = 0;
  *(uint *)(iVar2 + 0x250) = 0x3f060a92;
  *(byte *)(iVar2 + 0x254) = 0;
  *(byte *)(iVar2 + 0x278) = 0;
  *(byte *)(iVar2 + 0x298) = 0;
  *(uint *)(iVar2 + 0x274) = 0;
  *(uint *)(iVar2 + 0x2d0) = 0;
  *(uint *)(iVar2 + 0x2d4) = 0;
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0;
  *(uint *)(iVar2 + 0x2e4) = 0;
  return iVar2 + -0x2b4;
}
