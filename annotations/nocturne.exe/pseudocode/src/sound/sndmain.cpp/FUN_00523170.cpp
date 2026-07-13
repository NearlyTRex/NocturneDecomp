// Name: FUN_00523170
// Address: 00523170
// Address Range: [[00523170, 00523320]]
// Convention: unknown
// Signature: void FUN_00523170(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523170(void)

{
  int iVar1;
  byte *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  uint auStack_6c [7];
  uint uStack_50;
  int iStack_4c;
  byte *puStack_48;
  char *pcStack_44;
  uint auStack_40 [8];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  if (_DAT_02dc84bc < 1) {
    pcStack_44 = "SfxSlot::kill - must be locked!";
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x4e0;
    puStack_48 = (byte *)0x523319;
    FUN_004c8440();
  }
  if (0 < _DAT_02dc8328) {
    pcStack_44 = "nextMixingBuffer - shouldn't have any data pending!";
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x4e4;
    puStack_48 = (byte *)0x5231ad;
    FUN_004c8440();
  }
  iVar5 = 0;
  iVar3 = _DAT_02dc8330 * 4;
  if (0 < DAT_005bea68) {
    iVar1 = 0;
    do {
      pcStack_44 = (char *)((_DAT_02dc8334 + -1) * iVar3);
      iStack_4c = *(int *)(iVar1 + 0x2dc8360);
      puStack_48 = (byte *)(_DAT_02dc8330 * 4 + iStack_4c);
      uStack_50 = 0x5231e8;
      FUN_00566170();
      puStack_48 = (byte *)0x0;
      iStack_4c = *(int *)(iVar1 + 0x2dc8360) + (_DAT_02dc8334 + -1) * _DAT_02dc8330 * 4;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 1;
      uStack_50 = 0x523216;
      pcStack_44 = (char *)iVar3;
      FUN_00563cc0();
    } while (iVar5 < DAT_005bea68);
  }
  iStack_20 = _DAT_02dc8330;
  iStack_1c = DAT_005bea68;
  iStack_18 = DAT_005bea6c;
  if (0 < DAT_005bea68) {
    iVar3 = 0;
    do {
      iVar5 = iVar3 + 4;
      *(uint *)((int)auStack_40 + iVar3) = *(uint *)(iVar3 + 0x2dc8360);
      iVar3 = iVar5;
    } while (iVar5 < DAT_005bea68 * 4);
  }
  fStack_14 = (float)_DAT_02dc8330 / (float)DAT_005bea6c;
  puVar2 = (byte *)0x2dbd374;
  do {
    pcStack_44 = (char *)fStack_14;
    iStack_4c = 0x523297;
    puStack_48 = puVar2;
    FUN_00524830();
    puVar2 = puVar2 + 0x120;
  } while (puVar2 != &DAT_02dc1b74);
  puVar2 = (byte *)0x2dbd374;
  do {
    puVar4 = auStack_40;
    puVar6 = auStack_6c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_00524d10(puVar2);
    puVar2 = puVar2 + 0x120;
  } while (puVar2 != &DAT_02dc1b74);
  _DAT_02dc8328 = _DAT_02dc8330;
  _DAT_02dc832c = 0;
  _DAT_02dc83d0 = _DAT_02dc83d0 + 1;
  return;
}
