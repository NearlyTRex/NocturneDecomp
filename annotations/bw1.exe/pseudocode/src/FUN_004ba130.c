// Name: FUN_004ba130
// Address: 004ba130
// Address Range: [[004ba130, 004ba430]]
// Convention: unknown
// Signature: void FUN_004ba130(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba130(void)

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
  
  iVar1 = 0x1cc7ba8;
  FUN_0040d1c0(0x1cc7b94);
  do {
    FUN_0040d1c0(iVar1);
    iVar1 = iVar1 + 0x14;
  } while (iVar1 != 0x1cc7c20);
  FUN_0040d1c0(0x1cc7c20);
  FUN_0040d1c0(0x1cc7c34);
  FUN_0040d1c0(0x1cc7c48);
  FUN_0040d1c0(0x1cc7c5c);
  FUN_0040d1c0(0x1cc7c84);
  FUN_0040d1c0(0x1cc7c98);
  FUN_0040d1c0(0x1cc7cac);
  FUN_0040d1c0(0x1cc7cc0);
  DAT_01cc7f38 = 0;
  DAT_0061d310 = 0xffffffff;
  DAT_0061d2e0 = 1;
  _DAT_01cc7f1c = 0;
  _DAT_01cc8000 = 0;
  FUN_00479580(&DAT_01cc4228,0,0,auStack_518,0);
  FUN_005bfb40(auStack_418,&DAT_005df825,auStack_518,&DAT_01cc4208);
  FUN_0040d220(0x1cc7b94,auStack_418,0x280,0x1e0);
  iVar2 = 9;
  iVar1 = 0;
  FUN_0040d970(0x1cc7b94,0xff);
  if (0 < _DAT_01cc4470) {
    iVar3 = 0x1cc4474;
    iVar4 = 0x1cc7ba8;
    do {
      iStack_18 = iVar1 * 0x2e4;
      FUN_005bfb40(auStack_318,"tab_%s",iVar3);
      iStack_14 = iVar1 * 0x14;
      FUN_00479580(auStack_318,0,0,auStack_118,0);
      FUN_005bfb40(auStack_218,&DAT_005df825,auStack_118,&DAT_01cc4208);
      FUN_0040d220(iVar4,auStack_218,0x5a,0x36);
      *(uint *)(&DAT_01cc45bc + iStack_18) = 0x215;
      *(int *)(&DAT_01cc45c0 + iStack_18) = iVar2;
      iVar3 = iVar3 + 0x2e4;
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x14;
      iVar2 = iVar2 + *(int *)(iStack_14 + 0x1cc7bb8) + 10;
    } while (iVar1 < _DAT_01cc4470);
  }
  FUN_0040d220(0x1cc7c20,"pentipink",0x20,0x20);
  FUN_0040d220(0x1cc7c34,"pentip",0x20,0x20);
  FUN_0040d220(0x1cc7c48,"xmarker",0x10,0x10);
  FUN_0040d220(0x1cc7c5c,"questionmark",0x21,0x3f);
  FUN_0040d220(0x1cc7c70,"twanabox",0x80,0x4a);
  FUN_0040d220(0x1cc7c84,"ltarrow",0x40,0x20);
  FUN_0040d220(0x1cc7c98,"rtarrow",0x40,0x20);
  FUN_0040d220(0x1cc7cac,"fieldnotes_exit",0x1e,0x20);
  FUN_0040d970(0x1cc7cac,0xff);
  FUN_0040d220(0x1cc7cc0,"underline",0x100,8);
  DAT_0061d2e0 = 0;
  return;
}
