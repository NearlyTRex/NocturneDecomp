// Name: FUN_005294f0
// Address: 005294f0
// Address Range: [[005294f0, 00529802]]
// Convention: unknown
// Signature: void FUN_005294f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005294f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
  if (_DAT_02dc84bc < 1) {
    pcStack_70 = "pollSfx - must be locked!";
    _DAT_01cc4800 = "!\t@..\\sound\\sndmain.cpp" + 3;
    _DAT_01cc4804 = 0x1442;
    puStack_74 = (byte *)0x5297cb;
    FUN_004c8440();
  }
  if (0 < param_3) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x2dc8360) == 0) {
        return;
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 < param_3 * 4);
  }
  if (((param_2 == DAT_005bea64) && (param_3 == DAT_005bea68)) && (param_4 == DAT_005bea6c)) {
    pcStack_70 = (char *)0x52955e;
    FUN_00522d10();
    iVar1 = 0;
    if (0 < param_3) {
      do {
        iVar1 = iVar1 + 1;
        local_44[iVar1] = *param_1;
        param_1 = param_1 + 1;
      } while (iVar1 < param_3);
    }
    local_20 = param_3 << 2;
    local_18 = &DAT_02dc1b74;
    local_1c = &DAT_02dc1b74;
    for (; 0 < param_5; param_5 = param_5 - iVar7) {
      if (_DAT_02dc8328 < 1) {
        if (_DAT_02dc84bc < 1) {
          pcStack_70 = "SfxSlot::kill - must be locked!";
          _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
          _DAT_01cc4804 = 0x4e0;
          puStack_74 = (byte *)0x5297f3;
          FUN_004c8440();
        }
        if (0 < _DAT_02dc8328) {
          pcStack_70 = "nextMixingBuffer - shouldn't have any data pending!";
          _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
          _DAT_01cc4804 = 0x4e4;
          puStack_74 = (byte *)0x5295ee;
          FUN_004c8440();
        }
        iVar7 = 0;
        iVar1 = _DAT_02dc8330 * 4;
        if (0 < DAT_005bea68) {
          iVar2 = 0;
          do {
            pcStack_70 = (char *)((_DAT_02dc8334 + -1) * iVar1);
            iStack_78 = *(int *)(iVar2 + 0x2dc8360);
            puStack_74 = (byte *)(_DAT_02dc8330 * 4 + iStack_78);
            uStack_7c = 0x52962a;
            FUN_00566170();
            puStack_74 = (byte *)0x0;
            iStack_78 = (_DAT_02dc8334 + -1) * _DAT_02dc8330 * 4 + *(int *)(iVar2 + 0x2dc8360);
            iVar2 = iVar2 + 4;
            iVar7 = iVar7 + 1;
            uStack_7c = 0x529654;
            pcStack_70 = (char *)iVar1;
            FUN_00563cc0();
          } while (iVar7 < DAT_005bea68);
        }
        local_4c = _DAT_02dc8330;
        local_48 = DAT_005bea68;
        local_44[0] = DAT_005bea6c;
        if (0 < DAT_005bea68) {
          iVar1 = 0;
          do {
            iVar7 = iVar1 + 4;
            *(uint *)((int)local_6c + iVar1) = *(uint *)(iVar1 + 0x2dc8360);
            iVar1 = iVar7;
          } while (iVar7 < DAT_005bea68 * 4);
        }
        puVar4 = local_1c;
        local_14 = (float)_DAT_02dc8330 / (float)DAT_005bea6c;
        puVar3 = (byte *)0x2dbd374;
        do {
          pcStack_70 = (char *)local_14;
          iStack_78 = 0x5296bf;
          puStack_74 = puVar3;
          FUN_00524830();
          puVar3 = puVar3 + 0x120;
        } while (puVar3 != puVar4);
        puVar4 = (byte *)0x2dbd374;
        do {
          puVar6 = local_6c;
          puVar8 = auStack_98;
          for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          FUN_00524d10(puVar4);
          puVar4 = puVar4 + 0x120;
        } while (puVar4 != local_18);
        _DAT_02dc8328 = _DAT_02dc8330;
        _DAT_02dc83d0 = _DAT_02dc83d0 + 1;
        _DAT_02dc832c = 0;
      }
      iVar1 = local_20;
      iVar7 = _DAT_02dc8328;
      if (param_5 < _DAT_02dc8328) {
        iVar7 = param_5;
      }
      if (0 < param_3) {
        iVar2 = 0;
        do {
          pcStack_70 = (char *)param_6;
          uStack_7c = *(uint *)((int)local_44 + iVar2 + 4);
          iStack_78 = param_2;
          iStack_80 = _DAT_02dc832c * 4 + *(int *)(iVar2 + 0x2dc8360);
          uStack_84 = 0x529766;
          puStack_74 = (byte *)iVar7;
          FUN_00523330();
          iVar5 = iVar2 + 4;
          *(int *)((int)local_44 + iVar2 + 4) =
               *(int *)((int)local_44 + iVar2 + 4) + param_6 * iVar7;
          iVar2 = iVar5;
        } while (iVar5 < iVar1);
      }
      _DAT_02dc8328 = _DAT_02dc8328 - iVar7;
      _DAT_02dc832c = _DAT_02dc832c + iVar7;
    }
  }
  return;
}
