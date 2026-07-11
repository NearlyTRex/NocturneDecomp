// Name: FUN_00446810
// Address: 00446810
// Address Range: [[00446810, 00446e94]]
// Convention: unknown
// Signature: void FUN_00446810(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446810(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  byte *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  byte local_274 [256];
  byte local_174 [68];
  byte local_130 [28];
  int local_114;
  byte local_f8 [100];
  byte local_94 [4];
  byte local_90 [52];
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  _DAT_012b022c = 1;
  _DAT_0140d778 = 0;
  _DAT_0140d77c = 0;
  FUN_0043fa20(0x140d784);
  _DAT_0140d780 = 0x10;
  if ((_DAT_0140e790 == 0 && _DAT_0140e794 == 0) && _DAT_0140e798 == 0) {
    _DAT_0140d780 = 1;
  }
  FUN_00563c90(local_274,"%s.fog",param_1);
  iVar1 = FUN_00456a60("backdrop",local_274,&DAT_0057ba02);
  if (iVar1 != 0) {
    FUN_00563380(iVar1);
    return;
  }
  FUN_00563c90(local_f8,"backdrop\\%s",local_274);
  FUN_0056511e(local_174,0,local_f8,0x110,0x000001A4);
  if (local_114 != 0) {
    _DAT_01cc4800 = "..\\core\\dcamera.cpp";
    _DAT_01cc4804 = 0x12d0;
    FUN_004c8440("Can't create %s",local_f8);
  }
  FUN_00565a13(local_130,0x140d784,0x1000);
  if (_DAT_0140e7a0 != 0) {
    local_50 = 0x00444645;
    FUN_00565a13(local_130,&local_50,3);
    fVar11 = (float10)_DAT_0057badb;
    fVar12 = (float10)*(float *)(param_1 + 0x104) * fVar11;
    iVar1 = FUN_00563a30();
    local_5c = (int)ROUND(fVar12);
    fVar12 = (float10)*(float *)(iVar1 + 0x108) * fVar11;
    iVar1 = FUN_00563a30(6);
    local_58 = (int)ROUND(fVar12);
    fVar11 = fVar11 * (float10)*(float *)(iVar1 + 0x10c);
    uVar2 = FUN_00563a30(0x10000);
    local_54 = (int)ROUND(fVar11);
    FUN_00439830(uVar2);
    FUN_00439880(local_94);
    local_14 = 0;
    if (0 < _DAT_0140d780) {
      local_44 = 0;
      local_40 = -0x12c00;
      do {
        FUN_0043fe60(0x140d784,local_14,0);
        local_28 = 1;
        if (1 < *(int *)(param_1 + 0x154)) {
          local_34 = 0x140;
          local_3c = 0xf00;
          local_30 = 0x500;
          do {
            iVar9 = local_3c + 0x7f7378;
            puVar7 = &DAT_012ceb78 + local_34;
            piVar8 = (int *)(local_30 + 0xac2af8);
            iVar1 = 1;
            if (1 < *(int *)(param_1 + 0x150)) {
              do {
                if (*piVar8 == 0x7fffffff) {
                  *puVar7 = 0xff;
                }
                else {
                  iVar3 = FUN_0043fc80(0x140d784,&local_5c,iVar9,*piVar8);
                  uVar4 = (uint)(iVar3 * 0xff) >> 0xe;
                  if (0xff < uVar4) {
                    uVar4 = 0xff;
                  }
                  *puVar7 = (char)uVar4;
                }
                iVar9 = iVar9 + 0xc;
                puVar7 = puVar7 + 1;
                iVar1 = iVar1 + 1;
                piVar8 = piVar8 + 1;
              } while (iVar1 < *(int *)(param_1 + 0x150));
            }
            local_30 = local_30 + 0x500;
            local_34 = local_34 + 0x140;
            local_3c = local_3c + 0xf00;
            local_28 = local_28 + 1;
          } while (local_28 < *(int *)(param_1 + 0x154));
        }
        FUN_00446ea0(param_1,local_14);
        local_2c = 0;
        if (0 < *(int *)(param_1 + 0x154)) {
          local_24 = 0;
          local_1c = local_40;
          local_48 = local_40;
          local_20 = local_44;
          local_38 = local_44;
          do {
            iVar9 = 0;
            iVar1 = 0;
            if (0 < *(int *)(param_1 + 0x150)) {
              local_10 = local_24;
              local_18 = local_24;
              iVar3 = local_24;
              iVar10 = local_38;
              do {
                uVar4 = (uint)*(byte *)(iVar9 + 0x12e1778 + local_44 + local_24);
                if (0 < local_14) {
                  uVar4 = uVar4 - *(byte *)(iVar9 + 0x12e1778 + local_40 + local_24);
                }
                iVar5 = ((int)uVar4 >> 2) - iVar1;
                if (iVar5 < -0x20) {
                  iVar5 = -0x20;
                }
                else if (0x3f < iVar5) {
                  iVar5 = 0x3f;
                }
                (&DAT_012ceb78)[iVar3] = (char)iVar5;
                iVar1 = iVar5 + iVar1;
                cVar6 = (char)iVar1 * '\x04';
                if (0 < local_14) {
                  cVar6 = cVar6 + *(char *)(iVar9 + 0x12e1778 + local_40 + local_24);
                }
                *(char *)(iVar10 + 0x12e1778) = cVar6;
                iVar3 = iVar3 + 1;
                iVar9 = iVar9 + 1;
                iVar10 = iVar10 + 1;
              } while (iVar9 < *(int *)(param_1 + 0x150));
            }
            local_24 = local_24 + 0x140;
            local_38 = local_38 + 0x140;
            local_2c = local_2c + 1;
          } while (local_2c < *(int *)(param_1 + 0x154));
        }
        local_4c = 0x12c00;
        iVar1 = FUN_004390b0(local_94,&DAT_012ceb78,&local_4c,local_130);
        if (iVar1 == 0) {
          _DAT_01cc4800 = "..\\core\\dcamera.cpp";
          _DAT_01cc4804 = 0x133d;
          FUN_004c8440("Error compressing %s",local_f8);
        }
        if (local_4c != 0) {
          _DAT_01cc4800 = "..\\core\\dcamera.cpp";
          _DAT_01cc4804 = 0x133f;
          FUN_004c8440("Not all bytes consumed compressing %s",local_f8);
        }
        if (local_114 != 0) {
          _DAT_01cc4800 = "..\\core\\dcamera.cpp";
          _DAT_01cc4804 = 0x1340;
          FUN_004c8440("Error writing compressed file %s",local_f8);
        }
        local_44 = local_44 + 0x12c00;
        local_40 = local_40 + 0x12c00;
        local_14 = local_14 + 1;
      } while (local_14 < _DAT_0140d780);
    }
    FUN_004399a0(local_94,local_130);
    FUN_00439370(local_90,0);
    FUN_00438f30(local_94,1);
    FUN_005651ca(local_174,0);
    return;
  }
  FUN_005651ca(local_174,0);
  return;
}
