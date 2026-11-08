// Name: FUN_004a1870
// Address: 004a1870
// Address Range: [[004a1870, 004a1b57]]
// Convention: unknown
// Signature: void FUN_004a1870(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a1870(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte auStack_518 [256];
  byte auStack_418 [256];
  byte auStack_318 [256];
  byte auStack_218 [256];
  byte auStack_118 [256];
  int iStack_18;
  int iStack_14;
  
  iVar1 = 0x1caf128;
  FUN_0040d540(0x1caf114);
  do {
    FUN_0040d540(iVar1);
    iVar1 = iVar1 + 0x14;
  } while (iVar1 != 0x1caf1a0);
  FUN_0040d540(0x1caf1a0);
  FUN_0040d540(0x1caf1b4);
  FUN_0040d540(0x1caf1c8);
  FUN_0040d540(0x1caf1dc);
  FUN_0040d540(0x1caf1f0);
  FUN_0040d540(0x1caf204);
  FUN_0040d540(0x1caf218);
  FUN_0040d540(0x1caf22c);
  DAT_01caf4a0 = 0;
  DAT_00616040 = 0xffffffff;
  DAT_00616010 = 1;
  _DAT_01caf488 = 0;
  _DAT_01caf568 = 0;
  FUN_00461070(&DAT_01cab7a8,0,0,auStack_518,0);
  FUN_005b7790(auStack_418,&DAT_005d59e3,auStack_518,&DAT_01cab788);
  FUN_0040d5a0(0x1caf114,auStack_418,0x280,0x1e0);
  iVar2 = 9;
  iVar1 = 0;
  FUN_0040dd20(0x1caf114,0xff);
  if (0 < _DAT_01cab9f0) {
    iVar3 = 0x1cab9f4;
    iVar4 = 0x1caf128;
    do {
      iStack_18 = iVar1 * 0x2e4;
      FUN_005b7790(auStack_318,"tab_%s",iVar3);
      iStack_14 = iVar1 * 0x14;
      FUN_00461070(auStack_318,0,0,auStack_118,0);
      FUN_005b7790(auStack_218,&DAT_005d59e3,auStack_118,&DAT_01cab788);
      FUN_0040d5a0(iVar4,auStack_218,0x5a,0x36);
      *(uint *)(&DAT_01cabb3c + iStack_18) = 0x215;
      *(int *)(&DAT_01cabb40 + iStack_18) = iVar2;
      iVar3 = iVar3 + 0x2e4;
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x14;
      iVar2 = iVar2 + *(int *)(iStack_14 + 0x1caf138) + 10;
    } while (iVar1 < _DAT_01cab9f0);
  }
  FUN_0040d5a0(0x1caf1a0,"pentip",0x20,0x20);
  FUN_0040d5a0(0x1caf1b4,"pentipink",0x20,0x20);
  FUN_0040d5a0(0x1caf1c8,"xmarker",0x20,0x20);
  FUN_0040d5a0(0x1caf1dc,"questionmark",0x21,0x3f);
  FUN_0040d5a0(0x1caf1f0,"ltarrow",0x40,0x20);
  FUN_0040d5a0(0x1caf204,"rtarrow",0x40,0x20);
  FUN_0040d5a0(0x1caf218,"fieldnotes_exit",0x1e,0x20);
  FUN_0040dd20(0x1caf218,0xff);
  FUN_0040d5a0(0x1caf22c,"underline",0x100,8);
  DAT_00616010 = 0;
  return;
}
