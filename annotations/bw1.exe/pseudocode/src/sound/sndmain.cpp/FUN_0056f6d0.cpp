// Name: FUN_0056f6d0
// Address: 0056f6d0
// Address Range: [[0056f6d0, 0056f880]]
// Convention: unknown
// Signature: void FUN_0056f6d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056f6d0(void)

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
  if (_DAT_02c807ec < 1) {
    pcStack_44 = "SfxSlot::kill - must be locked!";
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x593;
    puStack_48 = (byte *)0x56f879;
    FUN_005030e0();
  }
  if (0 < _DAT_02c80660) {
    pcStack_44 = "nextMixingBuffer - shouldn't have any data pending!";
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x597;
    puStack_48 = (byte *)0x56f70d;
    FUN_005030e0();
  }
  iVar5 = 0;
  iVar3 = _DAT_02c80668 * 4;
  if (0 < DAT_006232ec) {
    iVar1 = 0;
    do {
      pcStack_44 = (char *)((_DAT_02c8066c + -1) * iVar3);
      iStack_4c = *(int *)(iVar1 + 0x2c80698);
      puStack_48 = (byte *)(_DAT_02c80668 * 4 + iStack_4c);
      uStack_50 = 0x56f748;
      FUN_005c25d0();
      puStack_48 = (byte *)0x0;
      iStack_4c = *(int *)(iVar1 + 0x2c80698) + (_DAT_02c8066c + -1) * _DAT_02c80668 * 4;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 1;
      uStack_50 = 0x56f776;
      pcStack_44 = (char *)iVar3;
      FUN_005bfb70();
    } while (iVar5 < DAT_006232ec);
  }
  iStack_20 = _DAT_02c80668;
  iStack_1c = DAT_006232ec;
  iStack_18 = DAT_006232f0;
  if (0 < DAT_006232ec) {
    iVar3 = 0;
    do {
      iVar5 = iVar3 + 4;
      *(uint *)((int)auStack_40 + iVar3) = *(uint *)(iVar3 + 0x2c80698);
      iVar3 = iVar5;
    } while (iVar5 < DAT_006232ec * 4);
  }
  fStack_14 = (float)_DAT_02c80668 / (float)DAT_006232f0;
  puVar2 = (byte *)0x2c745ec;
  do {
    pcStack_44 = (char *)fStack_14;
    iStack_4c = 0x56f7f7;
    puStack_48 = puVar2;
    FUN_00570f30();
    puVar2 = puVar2 + 0x11c;
  } while (puVar2 != &DAT_02c78cec);
  puVar2 = (byte *)0x2c745ec;
  do {
    puVar4 = auStack_40;
    puVar6 = auStack_6c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_00571420(puVar2);
    puVar2 = puVar2 + 0x11c;
  } while (puVar2 != &DAT_02c78cec);
  _DAT_02c80660 = _DAT_02c80668;
  _DAT_02c80664 = 0;
  _DAT_02c80708 = _DAT_02c80708 + 1;
  return;
}
