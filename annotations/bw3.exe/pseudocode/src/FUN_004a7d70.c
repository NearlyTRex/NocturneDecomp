// Name: FUN_004a7d70
// Address: 004a7d70
// Address Range: [[004a7d70, 004a8070]]
// Convention: unknown
// Signature: void FUN_004a7d70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a7d70(void)

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
  
  iVar1 = 0x1d19bc0;
  FUN_0040d400(0x1d19bac);
  do {
    FUN_0040d400(iVar1);
    iVar1 = iVar1 + 0x14;
  } while (iVar1 != 0x1d19c38);
  FUN_0040d400(0x1d19c38);
  FUN_0040d400(0x1d19c4c);
  FUN_0040d400(0x1d19c60);
  FUN_0040d400(0x1d19c74);
  FUN_0040d400(0x1d19c9c);
  FUN_0040d400(0x1d19cb0);
  FUN_0040d400(0x1d19cc4);
  FUN_0040d400(0x1d19cd8);
  DAT_01d19f90 = 0;
  DAT_005fe3a8 = 0xffffffff;
  DAT_005fe370 = 1;
  _DAT_01d19f78 = 0;
  _DAT_01d1a058 = 0;
  FUN_00465e50(&DAT_01d0cfc8,0,0,auStack_518,0);
  FUN_005a28c0(auStack_418,&DAT_005c0d12,auStack_518,&DAT_01d0cfa8);
  FUN_0040d460(0x1d19bac,auStack_418,0x280,0x1e0);
  iVar2 = 9;
  iVar1 = 0;
  FUN_0040dbb0(0x1d19bac,0xff);
  if (0 < _DAT_01d0d210) {
    iVar3 = 0x1d0d214;
    iVar4 = 0x1d19bc0;
    do {
      iStack_18 = iVar1 * 0x2e4;
      FUN_005a28c0(auStack_318,"tab_%s",iVar3);
      iStack_14 = iVar1 * 0x14;
      FUN_00465e50(auStack_318,0,0,auStack_118,0);
      FUN_005a28c0(auStack_218,&DAT_005c0d12,auStack_118,&DAT_01d0cfa8);
      FUN_0040d460(iVar4,auStack_218,0x5a,0x36);
      *(uint *)(&DAT_01d0d35c + iStack_18) = 0x215;
      *(int *)(&DAT_01d0d360 + iStack_18) = iVar2;
      iVar3 = iVar3 + 0x2e4;
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x14;
      iVar2 = iVar2 + *(int *)(iStack_14 + 0x1d19bd0) + 10;
    } while (iVar1 < _DAT_01d0d210);
  }
  FUN_0040d460(0x1d19c38,"pentip",0x20,0x20);
  FUN_0040d460(0x1d19c4c,"pentipink",0x20,0x20);
  FUN_0040d460(0x1d19c60,"xmarker",0x10,0x10);
  FUN_0040d460(0x1d19c74,"questionmark",0x21,0x3f);
  FUN_0040d460(0x1d19c88,"twanabox",0x80,0x4a);
  FUN_0040d460(0x1d19c9c,"ltarrow",0x40,0x20);
  FUN_0040d460(0x1d19cb0,"rtarrow",0x40,0x20);
  FUN_0040d460(0x1d19cc4,"fieldnotes_exit",0x1e,0x20);
  FUN_0040dbb0(0x1d19cc4,0xff);
  FUN_0040d460(0x1d19cd8,"underline",0x100,8);
  DAT_005fe370 = 0;
  return;
}
