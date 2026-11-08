// Name: FUN_00559d90
// Address: 00559d90
// Address Range: [[00559d90, 0055a0a2]]
// Convention: unknown
// Signature: void FUN_00559d90(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559d90(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
  if (_DAT_02cf341c < 1) {
    pcStack_70 = "pollSfx - must be locked!";
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x19ad;
    puStack_74 = (byte *)0x55a06b;
    FUN_004e4330();
  }
  if (0 < param_3) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x2cf32cc) == 0) {
        return;
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 < param_3 * 4);
  }
  if (((param_2 == DAT_00604228) && (param_3 == DAT_0060422c)) && (param_4 == DAT_00604230)) {
    pcStack_70 = (char *)0x559dfe;
    FUN_005526d0();
    iVar1 = 0;
    if (0 < param_3) {
      do {
        iVar1 = iVar1 + 1;
        local_44[iVar1] = *param_1;
        param_1 = param_1 + 1;
      } while (iVar1 < param_3);
    }
    local_20 = param_3 << 2;
    local_18 = &DAT_02ceb91c;
    local_1c = &DAT_02ceb91c;
    for (; 0 < param_5; param_5 = param_5 - iVar7) {
      if (_DAT_02cf3294 < 1) {
        if (_DAT_02cf341c < 1) {
          pcStack_70 = "SfxSlot::kill - must be locked!";
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x595;
          puStack_74 = (byte *)0x55a093;
          FUN_004e4330();
        }
        if (0 < _DAT_02cf3294) {
          pcStack_70 = "nextMixingBuffer - shouldn't have any data pending!";
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x599;
          puStack_74 = (byte *)0x559e8e;
          FUN_004e4330();
        }
        iVar7 = 0;
        iVar1 = _DAT_02cf329c * 4;
        if (0 < DAT_0060422c) {
          iVar2 = 0;
          do {
            pcStack_70 = (char *)((_DAT_02cf32a0 + -1) * iVar1);
            iStack_78 = *(int *)(iVar2 + 0x2cf32cc);
            puStack_74 = (byte *)(_DAT_02cf329c * 4 + iStack_78);
            uStack_7c = 0x559eca;
            FUN_005a54c0();
            puStack_74 = (byte *)0x0;
            iStack_78 = (_DAT_02cf32a0 + -1) * _DAT_02cf329c * 4 + *(int *)(iVar2 + 0x2cf32cc);
            iVar2 = iVar2 + 4;
            iVar7 = iVar7 + 1;
            uStack_7c = 0x559ef4;
            pcStack_70 = (char *)iVar1;
            FUN_005a28f0();
          } while (iVar7 < DAT_0060422c);
        }
        local_4c = _DAT_02cf329c;
        local_48 = DAT_0060422c;
        local_44[0] = DAT_00604230;
        if (0 < DAT_0060422c) {
          iVar1 = 0;
          do {
            iVar7 = iVar1 + 4;
            *(uint *)((int)local_6c + iVar1) = *(uint *)(iVar1 + 0x2cf32cc);
            iVar1 = iVar7;
          } while (iVar7 < DAT_0060422c * 4);
        }
        puVar4 = local_1c;
        local_14 = (float)_DAT_02cf329c / (float)DAT_00604230;
        puVar3 = (byte *)0x2ce721c;
        do {
          pcStack_70 = (char *)local_14;
          iStack_78 = 0x559f5f;
          puStack_74 = puVar3;
          FUN_00554430();
          puVar3 = puVar3 + 0x11c;
        } while (puVar3 != puVar4);
        puVar4 = (byte *)0x2ce721c;
        do {
          puVar6 = local_6c;
          puVar8 = auStack_98;
          for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          FUN_00554920(puVar4);
          puVar4 = puVar4 + 0x11c;
        } while (puVar4 != local_18);
        _DAT_02cf3294 = _DAT_02cf329c;
        _DAT_02cf3338 = _DAT_02cf3338 + 1;
        _DAT_02cf3298 = 0;
      }
      iVar1 = local_20;
      iVar7 = _DAT_02cf3294;
      if (param_5 < _DAT_02cf3294) {
        iVar7 = param_5;
      }
      if (0 < param_3) {
        iVar2 = 0;
        do {
          pcStack_70 = (char *)param_6;
          uStack_7c = *(uint *)((int)local_44 + iVar2 + 4);
          iStack_78 = param_2;
          iStack_80 = _DAT_02cf3298 * 4 + *(int *)(iVar2 + 0x2cf32cc);
          uStack_84 = 0x55a006;
          puStack_74 = (byte *)iVar7;
          FUN_00552d90();
          iVar5 = iVar2 + 4;
          *(int *)((int)local_44 + iVar2 + 4) =
               *(int *)((int)local_44 + iVar2 + 4) + param_6 * iVar7;
          iVar2 = iVar5;
        } while (iVar5 < iVar1);
      }
      _DAT_02cf3294 = _DAT_02cf3294 - iVar7;
      _DAT_02cf3298 = _DAT_02cf3298 + iVar7;
    }
  }
  return;
}
