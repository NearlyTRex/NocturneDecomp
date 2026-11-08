// Name: FUN_0043e930
// Address: 0043e930
// Address Range: [[0043e930, 0043f815]]
// Convention: unknown
// Signature: void FUN_0043e930(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e930(int param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  int *piVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  byte bVar29;
  char local_144 [80];
  char local_f4 [80];
  int local_a4;
  byte local_a0 [3];
  byte local_9d;
  uint local_9c;
  int local_98;
  int local_94;
  uint *local_90;
  int local_8c;
  uint *local_88;
  uint local_84;
  int local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
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
  int iStack_1c;
  int local_14;
  
  bVar29 = 0;
  pcVar24 = local_144;
  pcVar22 = param_2;
  do {
    cVar4 = *pcVar22;
    *pcVar24 = cVar4;
    pcVar23 = local_144;
    if (cVar4 == '\0') break;
    cVar4 = pcVar22[1];
    pcVar22 = pcVar22 + 2;
    pcVar24[1] = cVar4;
    pcVar24 = pcVar24 + 2;
    pcVar23 = local_144;
  } while (cVar4 != '\0');
  do {
    pcVar22 = pcVar23;
    if (*pcVar23 == '.') goto LAB_0043e979;
    if (*pcVar23 == '\0') break;
    pcVar22 = pcVar23 + 1;
    if (*pcVar22 == '.') goto LAB_0043e979;
    pcVar23 = pcVar23 + 2;
  } while (*pcVar22 != '\0');
  pcVar22 = (char *)0x0;
LAB_0043e979:
  if (pcVar22 == (char *)0x0) {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x9bd;
    FUN_004e4500("CDemonCamera::loadImage - no extention");
  }
  pcVar24 = &DAT_005ce4a1;
  do {
    cVar4 = *pcVar24;
    *pcVar22 = cVar4;
    if (cVar4 == '\0') break;
    cVar4 = pcVar24[1];
    pcVar24 = pcVar24 + 2;
    pcVar22[1] = cVar4;
    pcVar22 = pcVar22 + 2;
  } while (cVar4 != '\0');
  iVar5 = FUN_00460c70("backdrop",local_144,&DAT_005ce4a6);
  if ((iVar5 != 0) || (iVar5 = FUN_00460c70(&DAT_005ce4b5,local_144,&DAT_005ce4b2), iVar5 != 0)) {
    FUN_005b87c0(&DAT_00b65c98,0x100,3,iVar5);
    FUN_005b89c0(iVar5);
    pcVar22 = local_f4;
    pcVar24 = param_2;
    do {
      cVar4 = *pcVar24;
      *pcVar22 = cVar4;
      if (cVar4 == '\0') break;
      cVar4 = pcVar24[1];
      pcVar24 = pcVar24 + 2;
      pcVar22[1] = cVar4;
      pcVar22 = pcVar22 + 2;
    } while (cVar4 != '\0');
    pcVar22 = local_f4;
    do {
      pcVar24 = pcVar22;
      if (*pcVar22 == '.') goto LAB_0043ea43;
      if (*pcVar22 == '\0') break;
      pcVar24 = pcVar22 + 1;
      if (*pcVar24 == '.') goto LAB_0043ea43;
      pcVar22 = pcVar22 + 2;
    } while (*pcVar24 != '\0');
    pcVar24 = (char *)0x0;
LAB_0043ea43:
    if (pcVar24 == (char *)0x0) {
      _DAT_01d046a0 = "..\\core\\dcamera.cpp";
      _DAT_01d046a4 = 0x9d0;
      FUN_004e4500("CDemonCamera::loadImage - no ext");
    }
    pcVar22 = &DAT_005ce4ee;
    do {
      cVar4 = *pcVar22;
      *pcVar24 = cVar4;
      if (cVar4 == '\0') break;
      cVar4 = pcVar22[1];
      pcVar22 = pcVar22 + 2;
      pcVar24[1] = cVar4;
      pcVar24 = pcVar24 + 2;
    } while (cVar4 != '\0');
    local_14 = FUN_00460c70("backdrop",local_f4,&DAT_005ce4f3);
    if (local_14 != 0) {
      FUN_005b87c0(0x146592c,0x1000,1,local_14);
      iVar5 = local_14;
      if (_DAT_01466948 == 0) {
        FUN_005b77c0(0x1339920,0,0x12c000);
      }
      else {
        _DAT_01465928 = 0x10;
        if ((_DAT_01466938 == 0 && _DAT_0146693c == 0) && _DAT_01466940 == 0) {
          _DAT_01465928 = 1;
        }
        FUN_005b87c0(local_a0,3,1,local_14);
        local_9d = 0;
        iVar6 = FUN_005b8c30(local_a0,&DAT_005ce4ff);
        if ((iVar6 == 0) || (iVar6 = FUN_005b8c30(local_a0,&DAT_005ce503), iVar6 == 0)) {
          iVar5 = FUN_00460aa0("backdrop",local_f4);
          local_9c = iVar5 - 0x1003;
          if ((int)local_9c < 1) {
            _DAT_01d046a0 = "..\\core\\dcamera.cpp";
            _DAT_01d046a4 = 0x9f0;
            FUN_004e4500("Hell froze loading %s",local_f4);
          }
          if (500000 < local_9c) {
            _DAT_01d046a0 = "..\\core\\dcamera.cpp";
            _DAT_01d046a4 = 0x9f6;
            FUN_004e4500("%s too big to fit in decompress buffer",local_f4);
          }
          FUN_005b87c0(&DAT_007c26b0,local_9c,1,local_14);
          FUN_004349d0(0x1325cc8);
          local_98 = _DAT_01465928 * 0x12c00;
          iVar5 = FUN_00434070(0x1325cc8,&DAT_007c26b0,&local_9c,0x1339920,&local_98,1);
          if (iVar5 == 0) {
            _DAT_01d046a0 = "..\\core\\dcamera.cpp";
            _DAT_01d046a4 = 0x9ff;
            FUN_004e4500("Error decompressing %s",local_f4);
          }
          local_a4 = 0;
          if (0 < _DAT_01465928) {
            local_34 = 0;
            local_30 = -0x12c00;
            local_38 = 0x12c00;
            do {
              local_48 = local_34;
              local_44 = local_30;
              local_40 = local_34;
              local_3c = local_38;
              do {
                iVar15 = 0;
                iVar6 = 0;
                iVar5 = local_40;
                do {
                  iVar6 = (*(int *)(iVar15 + local_48 + 0x133991d) >> 0x18) + iVar6;
                  cVar4 = (char)iVar6 * '\x04';
                  if (0 < local_a4) {
                    cVar4 = cVar4 + *(char *)(local_44 + iVar15 + 0x1339920);
                  }
                  iVar15 = iVar15 + 1;
                  *(char *)(iVar5 + 0x1339920) = cVar4;
                  iVar5 = iVar5 + 1;
                } while (iVar15 < 0x140);
                local_44 = local_44 + 0x140;
                local_40 = local_40 + 0x140;
                local_48 = local_48 + 0x140;
              } while (local_40 != local_38);
              local_38 = local_38 + 0x12c00;
              local_34 = local_34 + 0x12c00;
              local_30 = local_30 + 0x12c00;
              local_a4 = local_a4 + 1;
            } while (local_a4 < _DAT_01465928);
          }
        }
        else {
          FUN_005b929c(iVar5,0xfffffffd,1);
          FUN_005b87c0(0x1339920,0x12c00,_DAT_01465928,iVar5);
        }
      }
      FUN_005b89c0(local_14);
    }
    iVar5 = FUN_00460c70("backdrop",param_2,&DAT_005ce5a0);
    if ((iVar5 != 0) || (iVar5 = FUN_00460c70(&DAT_005ce5af,param_2,&DAT_005ce5ac), iVar5 != 0)) {
      iVar15 = 0;
      iVar6 = 0;
      do {
        if (DAT_006141c0 == 0x20) {
          uVar13 = (uint)*(byte *)(iVar15 + 0xb65c9a) << (DAT_01c3582c & 0x1f) |
                   (uint)*(byte *)(iVar15 + 0xb65c99) << (DAT_01c35820 & 0x1f) |
                   (uint)(byte)(&DAT_00b65c98)[iVar15] << (DAT_01c35814 & 0x1f);
        }
        else {
          uVar13 = (uint)*(byte *)(iVar15 + 0xb65c99) << 8 |
                   (uint)(byte)(&DAT_00b65c98)[iVar15] << 0x10 | (uint)*(byte *)(iVar15 + 0xb65c9a);
        }
        iVar16 = iVar6 + 4;
        iVar15 = iVar15 + 3;
        *(uint *)(iVar6 + 0xb65f9c) = uVar13;
        iVar6 = iVar16;
      } while (iVar16 != 0x400);
      FUN_005b87c0(&DAT_01468550,0x280,0x1e0,iVar5);
      FUN_005b89c0(iVar5);
      iVar5 = *(int *)(param_1 + 0x148);
      if (iVar5 == 0xf0) {
        local_20 = 0;
        do {
          local_94 = 0;
          pbVar7 = &DAT_01468550 + local_20;
          piVar25 = (int *)(*(int *)(param_1 + 0x158) + local_20);
          do {
            local_94 = local_94 + 1;
            *piVar25 = ((*(uint *)((uint)*pbVar7 * 4 + 0xb65f9c) & 0xfcfcfc) >> 2) +
                       ((*(uint *)((uint)pbVar7[1] * 4 + 0xb65f9c) & 0xfcfcfc) >> 2) +
                       ((*(uint *)((uint)pbVar7[0x280] * 4 + 0xb65f9c) & 0xfcfcfc) >> 2) +
                       ((*(uint *)((uint)pbVar7[0x281] * 4 + 0xb65f9c) & 0xfcfcfc) >> 2);
            pbVar7 = pbVar7 + 2;
            piVar25 = piVar25 + 1;
          } while (local_94 < 0x140);
          local_20 = local_20 + 0x500;
        } while (local_20 != 0x4b000);
        local_20 = 0x4b000;
      }
      else if (iVar5 == 0x1e0) {
        pbVar7 = &DAT_01468550;
        iVar5 = 0;
        puVar14 = *(uint **)(param_1 + 0x158);
        do {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar5 = iVar5 + 1;
          *puVar14 = *(uint *)((uint)bVar1 * 4 + 0xb65f9c);
          puVar14 = puVar14 + 1;
        } while (iVar5 < 0x4b000);
      }
      else if (iVar5 < 0x1e1) {
        local_88 = *(uint **)(param_1 + 0x158);
        uVar3 = 0x9600000 / (longlong)*(int *)(param_1 + 0x144);
        local_84 = (uint)((longlong)
                          ((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                         (longlong)*(int *)(param_1 + 0x148));
        local_7c = 0;
        if (0 < *(int *)(param_1 + 0x148)) {
          local_28 = 0;
          do {
            local_80 = 0;
            if (0 < *(int *)(param_1 + 0x144)) {
              local_2c = 0;
              local_64 = local_28;
              do {
                uVar8 = local_2c / *(int *)(param_1 + 0x144);
                uVar9 = local_28 / *(int *)(param_1 + 0x148);
                local_6c = (int)(0x27d80 / (longlong)*(int *)(param_1 + 0x144)) + uVar8;
                iVar6 = ((int)uVar9 >> 8) * 0x280;
                local_68 = (int)(0x1de20 / (longlong)*(int *)(param_1 + 0x148)) + uVar9;
                local_60 = (int)uVar8 >> 8;
                uVar13 = *(uint *)((uint)(byte)(&DAT_01468550)[local_60 + iVar6] * 4 + 0xb65f9c);
                iVar15 = 0xff - (uVar9 & 0xff);
                uVar19 = uVar13 >> 8 & 0xff;
                uVar10 = uVar13 >> 0x10 & 0xff;
                iVar5 = 0xff - (uVar8 & 0xff);
                local_5c = (int)local_6c >> 8;
                uVar8 = *(uint *)((uint)(byte)(&DAT_01468550)[iVar6 + local_5c] * 4 + 0xb65f9c);
                uVar11 = uVar8 >> 0x10 & 0xff;
                uVar20 = uVar8 >> 8 & 0xff;
                uVar21 = local_6c & 0xff;
                local_58 = ((int)local_68 >> 8) * 0x280;
                uVar9 = *(uint *)((uint)(byte)(&DAT_01468550)[local_58 + local_60] * 4 + 0xb65f9c);
                uVar12 = uVar9 >> 0x10 & 0xff;
                uVar27 = uVar9 >> 8 & 0xff;
                uVar28 = local_68 & 0xff;
                local_54 = uVar27 * iVar5;
                uVar2 = *(uint *)((uint)(byte)(&DAT_01468550)[local_58 + local_5c] * 4 + 0xb65f9c);
                local_78 = uVar2 & 0xff;
                local_70 = uVar2 >> 0x10 & 0xff;
                local_74 = uVar2 >> 8 & 0xff;
                local_50 = local_74 * uVar21;
                uVar13 = ((uVar13 & 0xff) * iVar15 + (uVar13 & 0xff) * iVar5 +
                          (uVar8 & 0xff) * uVar21 + (uVar8 & 0xff) * iVar15 +
                          (uVar9 & 0xff) * iVar5 + (uVar9 & 0xff) * uVar28 +
                         local_78 * uVar28 + local_78 * uVar21) / local_84;
                uVar8 = (uVar19 * iVar15 + uVar19 * iVar5 + uVar20 * uVar21 + uVar20 * iVar15 +
                         local_54 + uVar27 * uVar28 + local_74 * uVar28 + local_50) / local_84;
                uVar9 = (uVar10 * iVar15 + uVar10 * iVar5 + iVar15 * uVar11 + uVar11 * uVar21 +
                         uVar12 * uVar28 + uVar12 * iVar5 + local_70 * uVar28 + uVar21 * local_70) /
                        local_84;
                if (0xff < uVar13) {
                  uVar13 = 0xff;
                }
                if (0xff < uVar8) {
                  uVar8 = 0xff;
                }
                if (0xff < uVar9) {
                  uVar9 = 0xff;
                }
                local_80 = local_80 + 1;
                *local_88 = uVar13 | uVar8 << 8 | uVar9 << 0x10;
                local_88 = local_88 + 1;
                local_2c = local_2c + 0x28000;
              } while (local_80 < *(int *)(param_1 + 0x144));
            }
            local_28 = local_28 + 0x1e000;
            local_7c = local_7c + 1;
          } while (local_7c < *(int *)(param_1 + 0x148));
        }
      }
      else {
        local_90 = *(uint **)(param_1 + 0x158);
        local_8c = 0;
        if (0 < *(int *)(param_1 + 0x148)) {
          local_24 = 0;
          do {
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x144)) {
              iVar6 = 0;
              do {
                iVar15 = iVar6 / *(int *)(param_1 + 0x144);
                iVar6 = iVar6 + 0x280;
                *local_90 = *(uint *)
                             ((uint)(byte)(&DAT_01468550)
                                          [iVar15 + (local_24 / *(int *)(param_1 + 0x148)) * 0x280]
                              * 4 + 0xb65f9c);
                local_90 = local_90 + 1;
                iVar5 = iVar5 + 1;
              } while (iVar5 < *(int *)(param_1 + 0x144));
            }
            local_24 = local_24 + 0x1e0;
            local_8c = local_8c + 1;
          } while (local_8c < *(int *)(param_1 + 0x148));
        }
      }
      iVar6 = 0;
      iVar5 = 0;
      do {
        iVar16 = 0;
        iVar15 = iVar5;
        do {
          iVar17 = iVar16 >> 0x1f;
          iVar18 = iVar16 + iVar17 * -0x100;
          iVar16 = iVar16 + 0x280;
          (&DAT_014b3550)[iVar15] =
               (&DAT_01468550)
               [((int)(iVar18 - (uint)(iVar17 << 7 < 0)) >> 8) +
                ((int)((iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0)) >> 8)
                * 0x280];
          iVar15 = iVar15 + 1;
        } while (iVar16 != 0x28000);
        iVar5 = iVar5 + 0x100;
        iVar6 = iVar6 + 0x1e0;
      } while (iVar5 != 0x10000);
      FUN_0046ca00(DAT_0060b280,&DAT_00609ff0);
      puVar14 = (uint *)&DAT_014b3550;
      puVar26 = _DAT_01c37770;
      for (iVar5 = 0x4000; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar26 = *puVar14;
        puVar14 = puVar14 + (uint)bVar29 * -2 + 1;
        puVar26 = puVar26 + (uint)bVar29 * -2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(byte *)puVar26 = *(byte *)puVar14;
        puVar14 = (uint *)((int)puVar14 + (uint)bVar29 * -2 + 1);
        puVar26 = (uint *)((int)puVar26 + (uint)bVar29 * -2 + 1);
      }
      puVar14 = (uint *)&DAT_00b65c98;
      puVar26 = _DAT_01c35210;
      for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar26 = *puVar14;
        puVar14 = puVar14 + (uint)bVar29 * -2 + 1;
        puVar26 = puVar26 + (uint)bVar29 * -2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(byte *)puVar26 = *(byte *)puVar14;
        puVar14 = (uint *)((int)puVar14 + (uint)bVar29 * -2 + 1);
        puVar26 = (uint *)((int)puVar26 + (uint)bVar29 * -2 + 1);
      }
      FUN_0046cab0(DAT_0060b280,&DAT_00609ff0,&DAT_00b65c98);
      FUN_00492670(0x12d40);
      if (DAT_006141bc == 0x180) {
        iStack_1c = 0;
        local_20 = 0;
        do {
          iVar6 = 0;
          iVar5 = 0;
          do {
            iVar15 = 0;
            if (0 < _DAT_01465928) {
              iVar16 = ((int)((iVar5 + (iVar5 >> 0x1f) * -0x100) - (uint)((iVar5 >> 0x1f) << 7 < 0))
                       >> 8) + (iStack_1c / 0xc0) * 0x140;
              iVar18 = local_20 + iVar6;
              do {
                iVar15 = iVar15 + 1;
                *(byte *)(iVar18 + 0x1339920) = *(byte *)(iVar16 + 0x1339920);
                iVar16 = iVar16 + 0x12c00;
                iVar18 = iVar18 + 0x12c00;
              } while (iVar15 < _DAT_01465928);
            }
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 0x140;
          } while (iVar6 < 0x100);
          iStack_1c = iStack_1c + 0xf0;
          local_20 = local_20 + 0x140;
        } while (iStack_1c != 0xb400);
      }
    }
  }
  return;
}
