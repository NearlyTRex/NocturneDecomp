// Name: FUN_0054d060
// Address: 0054d060
// Address Range: [[0054d060, 0054d210]]
// Convention: unknown
// Signature: void FUN_0054d060(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054d060(void)

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
  if (_DAT_0264901c < 1) {
    pcStack_44 = "SfxSlot::kill - must be locked!";
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x593;
    puStack_48 = (byte *)0x54d209;
    FUN_004e4500();
  }
  if (0 < _DAT_02648e90) {
    pcStack_44 = "nextMixingBuffer - shouldn't have any data pending!";
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x597;
    puStack_48 = (byte *)0x54d09d;
    FUN_004e4500();
  }
  iVar5 = 0;
  iVar3 = _DAT_02648e98 * 4;
  if (0 < DAT_0061bc9c) {
    iVar1 = 0;
    do {
      pcStack_44 = (char *)((_DAT_02648e9c + -1) * iVar3);
      iStack_4c = *(int *)(iVar1 + 0x2648ec8);
      puStack_48 = (byte *)(_DAT_02648e98 * 4 + iStack_4c);
      uStack_50 = 0x54d0d8;
      FUN_005ba1f0();
      puStack_48 = (byte *)0x0;
      iStack_4c = *(int *)(iVar1 + 0x2648ec8) + (_DAT_02648e9c + -1) * _DAT_02648e98 * 4;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 1;
      uStack_50 = 0x54d106;
      pcStack_44 = (char *)iVar3;
      FUN_005b77c0();
    } while (iVar5 < DAT_0061bc9c);
  }
  iStack_20 = _DAT_02648e98;
  iStack_1c = DAT_0061bc9c;
  iStack_18 = DAT_0061bca0;
  if (0 < DAT_0061bc9c) {
    iVar3 = 0;
    do {
      iVar5 = iVar3 + 4;
      *(uint *)((int)auStack_40 + iVar3) = *(uint *)(iVar3 + 0x2648ec8);
      iVar3 = iVar5;
    } while (iVar5 < DAT_0061bc9c * 4);
  }
  fStack_14 = (float)_DAT_02648e98 / (float)DAT_0061bca0;
  puVar2 = (byte *)0x263cf1c;
  do {
    pcStack_44 = (char *)fStack_14;
    iStack_4c = 0x54d187;
    puStack_48 = puVar2;
    FUN_0054e8c0();
    puVar2 = puVar2 + 0x11c;
  } while (puVar2 != &DAT_0264161c);
  puVar2 = (byte *)0x263cf1c;
  do {
    puVar4 = auStack_40;
    puVar6 = auStack_6c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_0054edb0(puVar2);
    puVar2 = puVar2 + 0x11c;
  } while (puVar2 != &DAT_0264161c);
  _DAT_02648e90 = _DAT_02648e98;
  _DAT_02648e94 = 0;
  _DAT_02648f38 = _DAT_02648f38 + 1;
  return;
}
