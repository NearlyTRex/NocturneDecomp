// Name: FUN_005541f0
// Address: 005541f0
// Address Range: [[005541f0, 00554502]]
// Convention: unknown
// Signature: void FUN_005541f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005541f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  uint auStack_98 [5];
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  int iStack_78;
  byte *puStack_74;
  char *pcStack_70;
  uint local_6c [8];
  int local_4c;
  int local_48;
  int local_44 [9];
  int local_20;
  byte *local_1c;
  byte *local_18;
  float local_14;
  
  bVar9 = 0;
  if (_DAT_0264901c < 1) {
    pcStack_70 = "pollSfx - must be locked!";
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x19a3;
    puStack_74 = (byte *)0x5544cb;
    FUN_004e4500();
  }
  if (0 < param_3) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x2648ec8) == 0) {
        return;
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 < param_3 * 4);
  }
  if (((param_2 == DAT_0061bc98) && (param_3 == DAT_0061bc9c)) && (param_4 == DAT_0061bca0)) {
    pcStack_70 = (char *)0x55425e;
    FUN_0054cb70();
    iVar1 = 0;
    if (0 < param_3) {
      do {
        iVar1 = iVar1 + 1;
        local_44[iVar1] = *param_1;
        param_1 = param_1 + 1;
      } while (iVar1 < param_3);
    }
    local_20 = param_3 << 2;
    local_18 = &DAT_0264161c;
    local_1c = &DAT_0264161c;
    for (; 0 < param_5; param_5 = param_5 - iVar7) {
      if (_DAT_02648e90 < 1) {
        if (_DAT_0264901c < 1) {
          pcStack_70 = "SfxSlot::kill - must be locked!";
          _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
          _DAT_01d046a4 = 0x593;
          puStack_74 = (byte *)0x5544f3;
          FUN_004e4500();
        }
        if (0 < _DAT_02648e90) {
          pcStack_70 = "nextMixingBuffer - shouldn't have any data pending!";
          _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
          _DAT_01d046a4 = 0x597;
          puStack_74 = (byte *)0x5542ee;
          FUN_004e4500();
        }
        iVar7 = 0;
        iVar1 = _DAT_02648e98 * 4;
        if (0 < DAT_0061bc9c) {
          iVar2 = 0;
          do {
            pcStack_70 = (char *)((_DAT_02648e9c + -1) * iVar1);
            iStack_78 = *(int *)(iVar2 + 0x2648ec8);
            puStack_74 = (byte *)(_DAT_02648e98 * 4 + iStack_78);
            uStack_7c = 0x55432a;
            FUN_005ba1f0();
            puStack_74 = (byte *)0x0;
            iStack_78 = (_DAT_02648e9c + -1) * _DAT_02648e98 * 4 + *(int *)(iVar2 + 0x2648ec8);
            iVar2 = iVar2 + 4;
            iVar7 = iVar7 + 1;
            uStack_7c = 0x554354;
            pcStack_70 = (char *)iVar1;
            FUN_005b77c0();
          } while (iVar7 < DAT_0061bc9c);
        }
        local_4c = _DAT_02648e98;
        local_48 = DAT_0061bc9c;
        local_44[0] = DAT_0061bca0;
        if (0 < DAT_0061bc9c) {
          iVar1 = 0;
          do {
            iVar7 = iVar1 + 4;
            *(uint *)((int)local_6c + iVar1) = *(uint *)(iVar1 + 0x2648ec8);
            iVar1 = iVar7;
          } while (iVar7 < DAT_0061bc9c * 4);
        }
        puVar4 = local_1c;
        local_14 = (float)_DAT_02648e98 / (float)DAT_0061bca0;
        puVar3 = (byte *)0x263cf1c;
        do {
          pcStack_70 = (char *)local_14;
          iStack_78 = 0x5543bf;
          puStack_74 = puVar3;
          FUN_0054e8c0();
          puVar3 = puVar3 + 0x11c;
        } while (puVar3 != puVar4);
        puVar4 = (byte *)0x263cf1c;
        do {
          puVar6 = local_6c;
          puVar8 = auStack_98;
          for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          FUN_0054edb0(puVar4);
          puVar4 = puVar4 + 0x11c;
        } while (puVar4 != local_18);
        _DAT_02648e90 = _DAT_02648e98;
        _DAT_02648f38 = _DAT_02648f38 + 1;
        _DAT_02648e94 = 0;
      }
      iVar1 = local_20;
      iVar7 = _DAT_02648e90;
      if (param_5 < _DAT_02648e90) {
        iVar7 = param_5;
      }
      if (0 < param_3) {
        iVar2 = 0;
        do {
          pcStack_70 = (char *)param_6;
          uStack_7c = *(uint *)((int)local_44 + iVar2 + 4);
          iStack_78 = param_2;
          iStack_80 = _DAT_02648e94 * 4 + *(int *)(iVar2 + 0x2648ec8);
          uStack_84 = 0x554466;
          puStack_74 = (byte *)iVar7;
          FUN_0054d220();
          iVar5 = iVar2 + 4;
          *(int *)((int)local_44 + iVar2 + 4) =
               *(int *)((int)local_44 + iVar2 + 4) + param_6 * iVar7;
          iVar2 = iVar5;
        } while (iVar5 < iVar1);
      }
      _DAT_02648e90 = _DAT_02648e90 - iVar7;
      _DAT_02648e94 = _DAT_02648e94 + iVar7;
    }
  }
  return;
}
