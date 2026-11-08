// Name: FUN_00576c20
// Address: 00576c20
// Address Range: [[00576c20, 00576f32]]
// Convention: unknown
// Signature: void FUN_00576c20(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00576c20(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
  if (_DAT_02c807ec < 1) {
    pcStack_70 = "pollSfx - must be locked!";
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x199a;
    puStack_74 = (byte *)0x576efb;
    FUN_005030e0();
  }
  if (0 < param_3) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x2c80698) == 0) {
        return;
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 < param_3 * 4);
  }
  if (((param_2 == DAT_006232e8) && (param_3 == DAT_006232ec)) && (param_4 == DAT_006232f0)) {
    pcStack_70 = (char *)0x576c8e;
    FUN_0056f1e0();
    iVar1 = 0;
    if (0 < param_3) {
      do {
        iVar1 = iVar1 + 1;
        local_44[iVar1] = *param_1;
        param_1 = param_1 + 1;
      } while (iVar1 < param_3);
    }
    local_20 = param_3 << 2;
    local_18 = &DAT_02c78cec;
    local_1c = &DAT_02c78cec;
    for (; 0 < param_5; param_5 = param_5 - iVar7) {
      if (_DAT_02c80660 < 1) {
        if (_DAT_02c807ec < 1) {
          pcStack_70 = "SfxSlot::kill - must be locked!";
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x593;
          puStack_74 = (byte *)0x576f23;
          FUN_005030e0();
        }
        if (0 < _DAT_02c80660) {
          pcStack_70 = "nextMixingBuffer - shouldn't have any data pending!";
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x597;
          puStack_74 = (byte *)0x576d1e;
          FUN_005030e0();
        }
        iVar7 = 0;
        iVar1 = _DAT_02c80668 * 4;
        if (0 < DAT_006232ec) {
          iVar2 = 0;
          do {
            pcStack_70 = (char *)((_DAT_02c8066c + -1) * iVar1);
            iStack_78 = *(int *)(iVar2 + 0x2c80698);
            puStack_74 = (byte *)(_DAT_02c80668 * 4 + iStack_78);
            uStack_7c = 0x576d5a;
            FUN_005c25d0();
            puStack_74 = (byte *)0x0;
            iStack_78 = (_DAT_02c8066c + -1) * _DAT_02c80668 * 4 + *(int *)(iVar2 + 0x2c80698);
            iVar2 = iVar2 + 4;
            iVar7 = iVar7 + 1;
            uStack_7c = 0x576d84;
            pcStack_70 = (char *)iVar1;
            FUN_005bfb70();
          } while (iVar7 < DAT_006232ec);
        }
        local_4c = _DAT_02c80668;
        local_48 = DAT_006232ec;
        local_44[0] = DAT_006232f0;
        if (0 < DAT_006232ec) {
          iVar1 = 0;
          do {
            iVar7 = iVar1 + 4;
            *(uint *)((int)local_6c + iVar1) = *(uint *)(iVar1 + 0x2c80698);
            iVar1 = iVar7;
          } while (iVar7 < DAT_006232ec * 4);
        }
        puVar4 = local_1c;
        local_14 = (float)_DAT_02c80668 / (float)DAT_006232f0;
        puVar3 = (byte *)0x2c745ec;
        do {
          pcStack_70 = (char *)local_14;
          iStack_78 = 0x576def;
          puStack_74 = puVar3;
          FUN_00570f30();
          puVar3 = puVar3 + 0x11c;
        } while (puVar3 != puVar4);
        puVar4 = (byte *)0x2c745ec;
        do {
          puVar6 = local_6c;
          puVar8 = auStack_98;
          for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          FUN_00571420(puVar4);
          puVar4 = puVar4 + 0x11c;
        } while (puVar4 != local_18);
        _DAT_02c80660 = _DAT_02c80668;
        _DAT_02c80708 = _DAT_02c80708 + 1;
        _DAT_02c80664 = 0;
      }
      iVar1 = local_20;
      iVar7 = _DAT_02c80660;
      if (param_5 < _DAT_02c80660) {
        iVar7 = param_5;
      }
      if (0 < param_3) {
        iVar2 = 0;
        do {
          pcStack_70 = (char *)param_6;
          uStack_7c = *(uint *)((int)local_44 + iVar2 + 4);
          iStack_78 = param_2;
          iStack_80 = _DAT_02c80664 * 4 + *(int *)(iVar2 + 0x2c80698);
          uStack_84 = 0x576e96;
          puStack_74 = (byte *)iVar7;
          FUN_0056f890();
          iVar5 = iVar2 + 4;
          *(int *)((int)local_44 + iVar2 + 4) =
               *(int *)((int)local_44 + iVar2 + 4) + param_6 * iVar7;
          iVar2 = iVar5;
        } while (iVar5 < iVar1);
      }
      _DAT_02c80660 = _DAT_02c80660 - iVar7;
      _DAT_02c80664 = _DAT_02c80664 + iVar7;
    }
  }
  return;
}
