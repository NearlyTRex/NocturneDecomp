// Name: FUN_00595a90
// Address: 00595a90
// Address Range: [[00595a90, 00595bf1]]
// Convention: unknown
// Signature: int FUN_00595a90(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00595a90(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar3 = FUN_00487db0(param_1);
  pcVar6 = (char *)0x5eee4e;
  *(uint *)(iVar3 + 0x2b0) = 0x5fe334;
  FUN_005478b0(iVar3 + 0x2b4,0x5eee42);
  *(uint *)(iVar3 + 0x3430) = 0x3f000000;
  pcVar7 = (char *)(iVar3 + 0x10b18);
  *(uint *)(iVar3 + 0x3434) = 0x3f800000;
  uVar4 = _DAT_005fe31c;
  *(uint *)(iVar3 + 0x10b08) = 0;
  uVar2 = _DAT_005fe320;
  *(uint *)(iVar3 + 0x10b04) = 0;
  *(uint *)(iVar3 + 0x3438) = uVar4;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar4 = FUN_0040cf60(0x3e99999a,0x3f800000);
  *(uint *)(iVar3 + 0x10b10) = 0;
  *(uint *)(iVar3 + 0x10af8) = uVar4;
  uVar4 = FUN_0040cfc0(0,0xff);
  *(uint *)(iVar3 + 0x10b00) = 0;
  *(uint *)(iVar3 + 0x10b14) = 0;
  *(uint *)(iVar3 + 0x10afc) = uVar4;
  iVar5 = 0x01E661B8 + 0x14d0f0;
  *(uint *)(iVar3 + 0x10b7c) = 0;
  *(uint *)(iVar3 + 0x10bd0) = 0;
  iVar5 = FUN_005b8130(iVar5,"mine.geo");
  *(uint *)(iVar3 + 0x10b80) = 0;
  *(uint *)(iVar3 + 0x10be0) = 0;
  *(uint *)(iVar3 + 0x10be4) = 0;
  *(uint *)(iVar3 + 0x10af4) = 0;
  *(uint *)(iVar3 + 0x259c) = 0x3fc90fdb;
  *(uint *)(iVar3 + 0x10b7c) = (uint)(iVar5 == 0);
  return iVar3;
}
