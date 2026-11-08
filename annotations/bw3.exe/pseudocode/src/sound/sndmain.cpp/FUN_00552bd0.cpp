// Name: FUN_00552bd0
// Address: 00552bd0
// Address Range: [[00552bd0, 00552d80]]
// Convention: unknown
// Signature: void FUN_00552bd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552bd0(void)

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
  if (_DAT_02cf341c < 1) {
    pcStack_44 = "SfxSlot::kill - must be locked!";
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x595;
    puStack_48 = (byte *)0x552d79;
    FUN_004e4330();
  }
  if (0 < _DAT_02cf3294) {
    pcStack_44 = "nextMixingBuffer - shouldn't have any data pending!";
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x599;
    puStack_48 = (byte *)0x552c0d;
    FUN_004e4330();
  }
  iVar5 = 0;
  iVar3 = _DAT_02cf329c * 4;
  if (0 < DAT_0060422c) {
    iVar1 = 0;
    do {
      pcStack_44 = (char *)((_DAT_02cf32a0 + -1) * iVar3);
      iStack_4c = *(int *)(iVar1 + 0x2cf32cc);
      puStack_48 = (byte *)(_DAT_02cf329c * 4 + iStack_4c);
      uStack_50 = 0x552c48;
      FUN_005a54c0();
      puStack_48 = (byte *)0x0;
      iStack_4c = *(int *)(iVar1 + 0x2cf32cc) + (_DAT_02cf32a0 + -1) * _DAT_02cf329c * 4;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 1;
      uStack_50 = 0x552c76;
      pcStack_44 = (char *)iVar3;
      FUN_005a28f0();
    } while (iVar5 < DAT_0060422c);
  }
  iStack_20 = _DAT_02cf329c;
  iStack_1c = DAT_0060422c;
  iStack_18 = DAT_00604230;
  if (0 < DAT_0060422c) {
    iVar3 = 0;
    do {
      iVar5 = iVar3 + 4;
      *(uint *)((int)auStack_40 + iVar3) = *(uint *)(iVar3 + 0x2cf32cc);
      iVar3 = iVar5;
    } while (iVar5 < DAT_0060422c * 4);
  }
  fStack_14 = (float)_DAT_02cf329c / (float)DAT_00604230;
  puVar2 = (byte *)0x2ce721c;
  do {
    pcStack_44 = (char *)fStack_14;
    iStack_4c = 0x552cf7;
    puStack_48 = puVar2;
    FUN_00554430();
    puVar2 = puVar2 + 0x11c;
  } while (puVar2 != &DAT_02ceb91c);
  puVar2 = (byte *)0x2ce721c;
  do {
    puVar4 = auStack_40;
    puVar6 = auStack_6c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_00554920(puVar2);
    puVar2 = puVar2 + 0x11c;
  } while (puVar2 != &DAT_02ceb91c);
  _DAT_02cf3294 = _DAT_02cf329c;
  _DAT_02cf3298 = 0;
  _DAT_02cf3338 = _DAT_02cf3338 + 1;
  return;
}
