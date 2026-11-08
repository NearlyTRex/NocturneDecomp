// Name: FUN_004fd810
// Address: 004fd810
// Address Range: [[004fd810, 004fd947]]
// Convention: unknown
// Signature: int FUN_004fd810(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004fd810(uint param_1)

{
  char cVar1;
  uint uVar2;
  byte uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar4 = FUN_00487db0(param_1);
  *(byte **)(iVar4 + 0x2b0) = &DAT_005fa244;
  FUN_005478b0(iVar4 + 0x2b4,"?mobster1.dfm" + 1);
  uVar5 = _DAT_005fa230;
  *(uint *)(iVar4 + 0x3430) = 0x3f19999a;
  uVar2 = _DAT_005fa234;
  *(uint *)(iVar4 + 0x3434) = 0x3f666666;
  *(uint *)(iVar4 + 0x3438) = uVar5;
  *(uint *)(iVar4 + 0x343c) = uVar2;
  uVar5 = FUN_0040cfc0(0,0xff);
  *(uint *)(iVar4 + 0x10afc) = 0;
  *(uint *)(iVar4 + 0x10b00) = 0;
  *(uint *)(iVar4 + 0x10b04) = 0;
  *(uint *)(iVar4 + 0x10bc8) = 0;
  *(uint *)(iVar4 + 0x10bcc) = 0;
  *(uint *)(iVar4 + 0x10aec) = 0x42200000;
  *(uint *)(iVar4 + 0x10af8) = uVar5;
  uVar3 = FUN_0040cfc0(0x62,0x65);
  *(uint *)(iVar4 + 0x10b10) = 0;
  *(uint *)(iVar4 + 0x10b08) = 0;
  *(uint *)(iVar4 + 0x10b14) = 0;
  *(uint *)(iVar4 + 0x10b18) = 0;
  *(uint *)(iVar4 + 0x10b1c) = 0;
  pcVar6 = &DAT_005dec1a;
  *(uint *)(iVar4 + 0x10b20) = 0;
  *(uint *)(iVar4 + 0x10b24) = 0;
  pcVar7 = (char *)(iVar4 + 0x10b28);
  *(byte *)(iVar4 + 0x10b0c) = uVar3;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0x10af4) = 0;
  return iVar4;
}
