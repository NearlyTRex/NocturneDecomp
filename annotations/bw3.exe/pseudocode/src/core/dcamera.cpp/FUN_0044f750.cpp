// Name: FUN_0044f750
// Address: 0044f750
// Address Range: [[0044f750, 0044fdc9]]
// Convention: unknown
// Signature: void FUN_0044f750(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f750(int param_1)

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
  byte local_20c [256];
  byte local_10c [100];
  byte local_a8 [4];
  byte local_a4 [60];
  int local_68;
  int local_64;
  int local_60;
  byte local_5c [8];
  uint local_54;
  int local_50;
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
  
  _DAT_0134017c = 1;
  _DAT_0149d6d0 = 0;
  _DAT_0149d6d4 = 0;
  FUN_00448720(0x149d6dc);
  _DAT_0149d6d8 = 0x10;
  if ((_DAT_0149e6e8 == 0 && _DAT_0149e6ec == 0) && _DAT_0149e6f0 == 0) {
    _DAT_0149d6d8 = 1;
  }
  FUN_005a28c0(local_20c,"%s.fog",param_1 + 0x40);
  iVar1 = FUN_004659c0("backdrop",local_20c,&DAT_005b9f7d);
  if (iVar1 != 0) {
    FUN_005a3a90(iVar1);
    return;
  }
  FUN_005a28c0(local_10c,"backdrop\\%s",local_20c);
  FUN_005747e0(local_5c,local_10c,&DAT_005b9f95);
  iVar1 = FUN_00574980(local_5c);
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\dcamera.cpp";
    _DAT_01d71de4 = 0x1344;
    FUN_004e4330("Can't create %s",local_10c);
  }
  FUN_005748e0(local_5c,0x149d6dc,0x1000);
  if (_DAT_0149e6f8 != 0) {
    local_54 = 0x00444645;
    FUN_005748e0(local_5c,&local_54,3);
    fVar11 = (float10)_DAT_005ba056;
    fVar12 = (float10)*(float *)(param_1 + 4) * fVar11;
    iVar1 = FUN_005a3120();
    local_68 = (int)ROUND(fVar12);
    fVar12 = (float10)*(float *)(iVar1 + 8) * fVar11;
    iVar1 = FUN_005a3120(6);
    local_64 = (int)ROUND(fVar12);
    fVar11 = fVar11 * (float10)*(float *)(iVar1 + 0xc);
    uVar2 = FUN_005a3120(0x10000);
    local_60 = (int)ROUND(fVar11);
    FUN_004410f0(uVar2);
    FUN_00441140(local_a8);
    local_18 = 0;
    if (0 < _DAT_0149d6d8) {
      local_48 = 0;
      local_4c = -0x12c00;
      do {
        FUN_00448b60(0x149d6dc,local_18,0);
        local_30 = 1;
        if (1 < *(int *)(param_1 + 0x154)) {
          local_40 = 0x140;
          local_3c = 0xf00;
          local_44 = 0x500;
          do {
            iVar10 = local_3c + 0x874588;
            iVar1 = 1;
            puVar7 = &DAT_0135ead0 + local_40;
            piVar8 = (int *)(local_44 + 0xb52a48);
            if (1 < *(int *)(param_1 + 0x150)) {
              do {
                if (*piVar8 == 0x7fffffff) {
                  *puVar7 = 0xff;
                }
                else {
                  iVar3 = FUN_00448980(0x149d6dc,&local_68,iVar10,*piVar8);
                  uVar4 = (uint)(iVar3 * 0xff) >> 0xe;
                  if (0xff < uVar4) {
                    uVar4 = 0xff;
                  }
                  *puVar7 = (char)uVar4;
                }
                iVar10 = iVar10 + 0xc;
                puVar7 = puVar7 + 1;
                iVar1 = iVar1 + 1;
                piVar8 = piVar8 + 1;
              } while (iVar1 < *(int *)(param_1 + 0x150));
            }
            local_44 = local_44 + 0x500;
            local_40 = local_40 + 0x140;
            local_3c = local_3c + 0xf00;
            local_30 = local_30 + 1;
          } while (local_30 < *(int *)(param_1 + 0x154));
        }
        FUN_0044fdd0(param_1,local_18);
        local_34 = 0;
        if (0 < *(int *)(param_1 + 0x154)) {
          local_24 = local_4c;
          local_20 = local_4c;
          local_2c = 0;
          local_28 = local_48;
          local_38 = local_48;
          do {
            iVar10 = 0;
            iVar1 = 0;
            if (0 < *(int *)(param_1 + 0x150)) {
              local_14 = local_2c;
              local_1c = local_2c;
              iVar3 = local_38;
              iVar9 = local_2c;
              do {
                uVar4 = (uint)*(byte *)(iVar10 + 0x13716d0 + local_48 + local_2c);
                if (0 < local_18) {
                  uVar4 = uVar4 - *(byte *)(iVar10 + 0x13716d0 + local_4c + local_2c);
                }
                iVar5 = ((int)uVar4 >> 2) - iVar1;
                if (iVar5 < -0x20) {
                  iVar5 = -0x20;
                }
                else if (0x3f < iVar5) {
                  iVar5 = 0x3f;
                }
                (&DAT_0135ead0)[iVar9] = (char)iVar5;
                iVar1 = iVar5 + iVar1;
                cVar6 = (char)iVar1 * '\x04';
                if (0 < local_18) {
                  cVar6 = cVar6 + *(char *)(iVar10 + 0x13716d0 + local_4c + local_2c);
                }
                *(char *)(iVar3 + 0x13716d0) = cVar6;
                iVar9 = iVar9 + 1;
                iVar10 = iVar10 + 1;
                iVar3 = iVar3 + 1;
              } while (iVar10 < *(int *)(param_1 + 0x150));
            }
            local_2c = local_2c + 0x140;
            local_38 = local_38 + 0x140;
            local_34 = local_34 + 1;
          } while (local_34 < *(int *)(param_1 + 0x154));
        }
        local_50 = 0x12c00;
        iVar1 = FUN_00440970(local_a8,&DAT_0135ead0,&local_50,local_5c);
        if (iVar1 == 0) {
          _DAT_01d71de0 = "..\\core\\dcamera.cpp";
          _DAT_01d71de4 = 0x13b1;
          FUN_004e4330("Error compressing %s",local_10c);
        }
        if (local_50 != 0) {
          _DAT_01d71de0 = "..\\core\\dcamera.cpp";
          _DAT_01d71de4 = 0x13b3;
          FUN_004e4330("Not all bytes consumed compressing %s",local_10c);
        }
        iVar1 = FUN_00574980(local_5c);
        if (iVar1 == 0) {
          _DAT_01d71de0 = "..\\core\\dcamera.cpp";
          _DAT_01d71de4 = 0x13b4;
          FUN_004e4330("Error writing compressed file %s",local_10c);
        }
        local_48 = local_48 + 0x12c00;
        local_4c = local_4c + 0x12c00;
        local_18 = local_18 + 1;
      } while (local_18 < _DAT_0149d6d8);
    }
    FUN_00441290(local_a8,local_5c);
    FUN_00440bf0(local_a4,0);
    FUN_00440810(local_a8,1);
  }
  FUN_00574850(local_5c,0);
  return;
}
