// Name: FUN_00487db0
// Address: 00487db0
// Address Range: [[00487db0, 00487ea5]]
// Convention: unknown
// Signature: int FUN_00487db0(undefined4 param_1)

#include "nocturne.h"

int FUN_00487db0(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = FUN_00422340(param_1);
  *(byte **)(iVar2 + 0x2b0) = &DAT_005f6074;
  uVar3 = FUN_0040cf60(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar2 + 0x10a64) = 0;
  *(uint *)(iVar2 + 0x10ae8) = 0;
  *(uint *)(iVar2 + 0x10a78) = 0;
  *(uint *)(iVar2 + 0x10a7c) = 0;
  *(uint *)(iVar2 + 0x10a80) = 0x42480000;
  *(uint *)(iVar2 + 0x10a68) = 1;
  *(uint *)(iVar2 + 0x10af0) = 0;
  *(uint *)(iVar2 + 0x10a6c) = 0;
  *(byte *)(iVar2 + 0x10a84) = 0;
  *(uint *)(iVar2 + 0x10a70) = 0x42c80000;
  pcVar4 = &DAT_005d2d28;
  *(uint *)(iVar2 + 0x10a74) = 0;
  pcVar5 = (char *)(iVar2 + 0x120);
  *(uint *)(iVar2 + 0x10aec) = 0x40c00000;
  *(uint *)(iVar2 + 0x10af4) = 1;
  *(uint *)(iVar2 + 0x10a60) = uVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x259c) = 0x3fc90fdb;
  return iVar2;
}
