// Name: FUN_00441f50
// Address: 00441f50
// Address Range: [[00441f50, 004425c9]]
// Convention: unknown
// Signature: void FUN_00441f50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441f50(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  byte *puVar8;
  int *piVar9;
  int iVar10;
  byte *puVar11;
  float10 fVar12;
  float10 fVar13;
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
  
  _DAT_013083cc = 1;
  _DAT_01465920 = 0;
  _DAT_01465924 = 0;
  FUN_0043af40(0x146592c);
  _DAT_01465928 = 0x10;
  if ((_DAT_01466938 == 0 && _DAT_0146693c == 0) && _DAT_01466940 == 0) {
    _DAT_01465928 = 1;
  }
  FUN_005b7790(local_20c,"%s.fog",param_1 + 0x40);
  iVar1 = FUN_00460c70("backdrop",local_20c,&DAT_005ce64d);
  if (iVar1 != 0) {
    FUN_005b89c0(iVar1);
    return;
  }
  FUN_005b7790(local_10c,"backdrop\\%s",local_20c);
  FUN_0057dba0(local_5c,local_10c,&DAT_005ce665);
  iVar1 = FUN_0057dd40(local_5c);
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x1325;
    FUN_004e4500("Can't create %s",local_10c);
  }
  FUN_0057dca0(local_5c,0x146592c,0x1000);
  if (_DAT_01466948 != 0) {
    local_54 = 0x00444645;
    FUN_0057dca0(local_5c,&local_54,3);
    fVar12 = (float10)_DAT_005ce726;
    fVar13 = (float10)*(float *)(param_1 + 4) * fVar12;
    iVar1 = FUN_005b7ff0();
    local_68 = (int)ROUND(fVar13);
    fVar13 = (float10)*(float *)(iVar1 + 8) * fVar12;
    iVar1 = FUN_005b7ff0(6);
    local_64 = (int)ROUND(fVar13);
    fVar12 = fVar12 * (float10)*(float *)(iVar1 + 0xc);
    uVar2 = FUN_005b7ff0(0x10000);
    local_60 = (int)ROUND(fVar12);
    FUN_00434770(uVar2);
    FUN_004347c0(local_a8);
    local_18 = 0;
    if (0 < _DAT_01465928) {
      local_48 = 0;
      local_4c = -0x12c00;
      do {
        FUN_0043b380(0x146592c,local_18,0);
        local_30 = 1;
        if (1 < *(int *)(param_1 + 0x154)) {
          local_40 = 0x140;
          local_3c = 0xf00;
          local_44 = 0x500;
          do {
            puVar11 = &DAT_0083c7d4 + local_3c;
            iVar1 = 1;
            puVar8 = &DAT_01326d20 + local_40;
            piVar9 = (int *)(local_44 + 0xb1ac98);
            if (1 < *(int *)(param_1 + 0x150)) {
              do {
                if (*piVar9 == 0x7fffffff) {
                  *puVar8 = 0xff;
                }
                else {
                  iVar3 = FUN_0043b1a0(0x146592c,&local_68,puVar11,*piVar9);
                  uVar4 = (uint)(iVar3 * 0xff) >> 0xe;
                  if (0xff < uVar4) {
                    uVar4 = 0xff;
                  }
                  *puVar8 = (char)uVar4;
                }
                puVar11 = puVar11 + 0xc;
                puVar8 = puVar8 + 1;
                iVar1 = iVar1 + 1;
                piVar9 = piVar9 + 1;
              } while (iVar1 < *(int *)(param_1 + 0x150));
            }
            local_44 = local_44 + 0x500;
            local_40 = local_40 + 0x140;
            local_3c = local_3c + 0xf00;
            local_30 = local_30 + 1;
          } while (local_30 < *(int *)(param_1 + 0x154));
        }
        FUN_004425d0(param_1,local_18);
        local_34 = 0;
        if (0 < *(int *)(param_1 + 0x154)) {
          local_24 = local_4c;
          local_20 = local_4c;
          local_2c = 0;
          local_28 = local_48;
          local_38 = local_48;
          do {
            iVar3 = 0;
            iVar1 = 0;
            if (0 < *(int *)(param_1 + 0x150)) {
              local_14 = local_2c;
              local_1c = local_2c;
              iVar6 = local_38;
              iVar10 = local_2c;
              do {
                uVar4 = (uint)*(byte *)(iVar3 + 0x1339920 + local_48 + local_2c);
                if (0 < local_18) {
                  uVar4 = uVar4 - *(byte *)(iVar3 + 0x1339920 + local_4c + local_2c);
                }
                iVar5 = ((int)uVar4 >> 2) - iVar1;
                if (iVar5 < -0x20) {
                  iVar5 = -0x20;
                }
                else if (0x3f < iVar5) {
                  iVar5 = 0x3f;
                }
                (&DAT_01326d20)[iVar10] = (char)iVar5;
                iVar1 = iVar5 + iVar1;
                cVar7 = (char)iVar1 * '\x04';
                if (0 < local_18) {
                  cVar7 = cVar7 + *(char *)(iVar3 + 0x1339920 + local_4c + local_2c);
                }
                *(char *)(iVar6 + 0x1339920) = cVar7;
                iVar10 = iVar10 + 1;
                iVar3 = iVar3 + 1;
                iVar6 = iVar6 + 1;
              } while (iVar3 < *(int *)(param_1 + 0x150));
            }
            local_2c = local_2c + 0x140;
            local_38 = local_38 + 0x140;
            local_34 = local_34 + 1;
          } while (local_34 < *(int *)(param_1 + 0x154));
        }
        local_50 = 0x12c00;
        iVar1 = FUN_00433ff0(local_a8,&DAT_01326d20,&local_50,local_5c);
        if (iVar1 == 0) {
          _DAT_01d046a0 = "..\\core\\dcamera.cpp";
          _DAT_01d046a4 = 0x1392;
          FUN_004e4500("Error compressing %s",local_10c);
        }
        if (local_50 != 0) {
          _DAT_01d046a0 = "..\\core\\dcamera.cpp";
          _DAT_01d046a4 = 0x1394;
          FUN_004e4500("Not all bytes consumed compressing %s",local_10c);
        }
        iVar1 = FUN_0057dd40(local_5c);
        if (iVar1 == 0) {
          _DAT_01d046a0 = "..\\core\\dcamera.cpp";
          _DAT_01d046a4 = 0x1395;
          FUN_004e4500("Error writing compressed file %s",local_10c);
        }
        local_48 = local_48 + 0x12c00;
        local_4c = local_4c + 0x12c00;
        local_18 = local_18 + 1;
      } while (local_18 < _DAT_01465928);
    }
    FUN_00434910(local_a8,local_5c);
    FUN_00434270(local_a4,0);
    FUN_00433e90(local_a8,1);
  }
  FUN_0057dc10(local_5c,0);
  return;
}
