// Name: FUN_005478b0
// Address: 005478b0
// Address Range: [[005478b0, 005479f3]]
// Convention: unknown
// Signature: int FUN_005478b0(undefined4 param_1)

#include "nocturne.h"

int FUN_005478b0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00409d30(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_FUN_005a3664;
  *(uint *)(iVar2 + 0x158) = 0x40a00000;
  *(uint *)(iVar2 + 0x15c) = 0x41100000;
  *(uint *)(iVar2 + 0x160) = 0x40a00000;
  *(uint *)(iVar2 + 0x168) = 0;
  *(uint *)(iVar2 + 0x154) = 0;
  pcVar3 = "nobody";
  *(byte *)(iVar2 + 0x21c) = 0;
  *(byte *)(iVar2 + 0x280) = 0;
  *(uint *)(iVar2 + 0x164) = 0;
  pcVar4 = (char *)(iVar2 + 0x170);
  *(uint *)(iVar2 + 0x16c) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "CDemonActor";
  pcVar4 = (char *)(iVar2 + 0x1c0);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x210) = 0;
  *(uint *)(iVar2 + 0x214) = 0x3e800000;
  *(uint *)(iVar2 + 0x218) = 0x3f800000;
  *(uint *)(iVar2 + 0x2e4) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0;
  *(uint *)(iVar2 + 0x2ec) = 1;
  *(uint *)(iVar2 + 0x2f0) = 0x42c80000;
  *(uint *)(iVar2 + 100) = 0x96;
  *(uint *)(iVar2 + 0x360) = 0;
  *(uint *)(iVar2 + 0x2f4) = 0;
  *(uint *)(iVar2 + 0x150) = 0x47c34ff3;
  *(uint *)(iVar2 + 0x2f8) = 1;
  *(byte *)(iVar2 + 0x2fc) = 0;
  *(uint *)(iVar2 + 0x364) = 0;
  return iVar2;
}
