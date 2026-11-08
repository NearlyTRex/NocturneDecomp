// Name: FUN_004d27b0
// Address: 004d27b0
// Address Range: [[004d27b0, 004d5e3a]]
// Convention: unknown
// Signature: void FUN_004d27b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d27b0(int param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  float afStackY_12f8 [391];
  char *pcVar14;
  byte auStack_cc0 [516];
  byte auStack_abc [516];
  byte auStack_8b8 [516];
  byte auStack_6b4 [516];
  byte local_4b0 [256];
  char acStack_3b0 [100];
  byte auStack_34c [4];
  uint uStack_348;
  float fStack_310;
  float afStack_30c [4];
  float fStack_2fc;
  double local_2f8;
  int iStack_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int iStack_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  char *pcStack_280;
  uint uStack_27c;
  int iStack_278;
  int iStack_274;
  char *pcStack_270;
  uint uStack_26c;
  int iStack_268;
  int iStack_264;
  char *pcStack_260;
  uint uStack_25c;
  int iStack_258;
  int iStack_254;
  char *pcStack_250;
  uint uStack_24c;
  int iStack_248;
  int iStack_244;
  char *pcStack_240;
  uint uStack_23c;
  int iStack_238;
  int iStack_234;
  char *pcStack_230;
  uint uStack_22c;
  int iStack_228;
  int iStack_224;
  char *pcStack_220;
  uint uStack_21c;
  int iStack_218;
  int iStack_214;
  char *pcStack_210;
  uint uStack_20c;
  int iStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  float fStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  float fStack_16c;
  int iStack_168;
  int iStack_164;
  float fStack_160;
  int iStack_15c;
  int iStack_158;
  float fStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  bVar13 = 0;
  if (_DAT_01cd01f8 == 0) {
    iVar5 = FUN_004a6c30(0x01C51D80,"headOfHorror");
    if ((iVar5 != 0) && (*(int *)(0x01CCF390 + 0x230) != 0x29a)) {
      *(uint *)(0x01CCF390 + 0x230) = 0x29a;
      uVar6 = FUN_00531090("The horror has been unleashed.",0x40a00000);
      FUN_004cc190(param_1,uVar6);
      FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
    }
    if ((*(int *)(param_1 + 0x1f8) == 0) &&
       (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x44), iVar5 != 0)) {
      uVar6 = FUN_00531090("Enter cheat code",acStack_3b0,100,0);
      iVar5 = FUN_00496180(0x01C3EB54,uVar6);
      if (iVar5 != 0) {
        iVar5 = 0;
        while (acStack_3b0[0] != '\0') {
          FUN_005b25b0(acStack_3b0[iVar5]);
          iVar10 = iVar5 + 1;
          iVar5 = iVar5 + 1;
          acStack_3b0[0] = acStack_3b0[iVar10];
        }
      }
    }
    local_1d0 = param_1 + 0x208;
    while (iVar5 = FUN_005b2580(), iVar5 != 0) {
      DAT_01cd0c68 = FUN_004fd270(0x01D1BCA0);
      iVar5 = 0x13;
      do {
        iVar10 = iVar5 + -1;
        (&DAT_01cd0c68)[iVar5] = *(byte *)(iVar5 + 0x1cd0c67);
        iVar5 = iVar10;
      } while (0 < iVar10);
      pcVar7 = (char *)FUN_00531110(&DAT_005e1b78);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      local_2e8 = 0;
      local_2ec = iVar5;
      if (0 < iVar5) {
        local_e4 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            local_2e8 = local_2e8 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (local_e4 < iVar5);
      }
      if (local_2e8 == local_2ec) {
        DAT_01cd0c68 = 0;
        uVar6 = FUN_00531090("Buy Nocturne today!",0x40a00000);
        FUN_004cc190(param_1,uVar6);
        uVar9 = (uint)(*(int *)(param_1 + 0x22c) == 0);
        *(uint *)(param_1 + 0x22c) = uVar9;
        if (uVar9 != 0) {
          FUN_0057d880(0x02C82A60,0,"were1.wav @ 2.0");
        }
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e1bd5);
      local_2e0 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      local_2e4 = iVar5;
      if (0 < iVar5) {
        local_e0 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            local_2e0 = local_2e0 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (local_e0 < iVar5);
      }
      if (local_2e0 == local_2e4) {
        DAT_01cd0c68 = 0;
        if (*(int *)(param_1 + 0x224) == 0) {
          uVar6 = FUN_005b2420();
          *(uint *)(param_1 + 0x224) = 1;
          *(uint *)(param_1 + 0x298) = uVar6;
          *(uint *)(param_1 + 0x29c) = 0;
        }
        else {
          local_14 = FUN_005b2420();
          local_14 = local_14 - *(int *)(param_1 + 0x298);
          dVar4 = (double)local_14 * _DAT_005e2e7c;
          *(uint *)(param_1 + 0x224) = 0;
          local_2f8 = (double)*(int *)(param_1 + 0x29c) / (dVar4 * _DAT_005e2e84);
          FUN_005bfb40(local_4b0,"FPS: %3.2lf",local_2f8);
          FUN_004cc190(param_1,local_4b0,0x40a00000);
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e1c15);
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        local_2d4 = 0;
        local_2d8 = iVar5;
        if (0 < iVar5) {
          local_dc = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              local_2d4 = local_2d4 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (local_dc < iVar5);
        }
        if (local_2d4 == local_2d8) {
          DAT_01cd0c68 = 0;
          iVar5 = *(int *)(param_1 + 0x228) + 1;
          *(int *)(param_1 + 0x228) = iVar5;
          if (2 < iVar5) {
            *(uint *)(param_1 + 0x228) = 0;
          }
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e1c4a);
        local_2cc = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        local_2d0 = iVar5;
        if (0 < iVar5) {
          local_d8 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              local_2cc = local_2cc + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (local_d8 < iVar5);
        }
        if (local_2cc == local_2d0) {
          DAT_01cd0c68 = 0;
          uVar9 = (uint)(*(int *)(param_1 + 500) == 0);
          *(uint *)(param_1 + 500) = uVar9;
          if (uVar9 == 0) {
            pcVar14 = "Event debug off";
          }
          else {
            pcVar14 = "Event debug on";
          }
          uVar6 = FUN_00531090(pcVar14,0x40a00000);
          FUN_004cc190(param_1,uVar6);
          FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e1ca8);
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        local_2c4 = 0;
        local_2c8 = iVar5;
        if (0 < iVar5) {
          local_d4 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              local_2c4 = local_2c4 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (local_d4 < iVar5);
        }
        if (local_2c4 == local_2c8) {
          DAT_01cd0c68 = 0;
          uVar9 = (uint)(*(int *)(param_1 + 0x1f8) == 0);
          *(uint *)(param_1 + 0x1f8) = uVar9;
          if (uVar9 == 0) {
            uVar6 = FUN_00531090("Script debug off",0x40a00000);
            FUN_004cc190(param_1,uVar6);
            iVar5 = 0x01E82168;
            uVar6 = DAT_0061b49c;
            *(uint *)(param_1 + 0x2a8) = 0;
          }
          else {
            uVar6 = FUN_00531090("Script debug on",0x40a00000);
            FUN_004cc190(param_1,uVar6);
            iVar5 = 0x01E82168;
            uVar6 = 0xf0;
            *(uint *)(param_1 + 0x2a8) = 1;
          }
          FUN_0054fbf0(iVar5,0,0,uVar6);
          FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e1d09);
        local_2bc = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        local_2c0 = iVar5;
        if (0 < iVar5) {
          local_d0 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              local_2bc = local_2bc + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (local_d0 < iVar5);
        }
        if (local_2bc == local_2c0) {
          DAT_01cd0c68 = (byte)local_2bc ^ (byte)local_2c0;
          uVar9 = (uint)(*(int *)(param_1 + 0x214) == 0);
          *(uint *)(param_1 + 0x214) = uVar9;
          if (uVar9 == 0) {
            pcVar14 = "Memory debugging off";
          }
          else {
            pcVar14 = "Memory debugging on";
          }
          uVar6 = FUN_00531090(pcVar14,0x40a00000);
          FUN_004cc190(param_1,uVar6);
          FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
        }
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e1d72);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      local_2b4 = 0;
      local_2b8 = iVar5;
      if (0 < iVar5) {
        local_cc = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            local_2b4 = local_2b4 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (local_cc < iVar5);
      }
      if (local_2b4 == local_2b8) {
        DAT_01cd0c68 = (byte)((uint)local_2b4 >> 8) ^ (byte)((uint)local_2b8 >> 8);
        *(uint *)(param_1 + 0xd8) = 2;
        uVar6 = FUN_00531090("Manual aim enabled",0x40a00000);
        FUN_004cc190(param_1,uVar6);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae4) =
             *(uint *)(param_1 + 0xd8);
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e1dc5);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      local_2ac = 0;
      local_2b0 = iVar5;
      if (0 < iVar5) {
        local_c8 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            local_2ac = local_2ac + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (local_c8 < iVar5);
      }
      if (local_2ac == local_2b0) {
        DAT_01cd0c68 = 0;
        *(uint *)(param_1 + 0xd8) = 0;
        uVar6 = FUN_00531090("Auto aim enabled",0x40a00000);
        FUN_004cc190(param_1,uVar6);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae4) =
             *(uint *)(param_1 + 0xd8);
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e1e14);
        local_2a4 = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        local_2a8 = iVar5;
        if (0 < iVar5) {
          local_c4 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              local_2a4 = local_2a4 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (local_c4 < iVar5);
        }
        if (local_2a4 == local_2a8) {
          DAT_01cd0c68 = 0;
          _DAT_01cd0c3c = 0;
          _DAT_01cd0c44 = 0;
          iVar5 = FUN_00495e70(0x01C3EB54,"?Enter Movie FPS" + 1,&DAT_0061d968,1,
                               0x3e800000,0x43700000,1);
          if ((((iVar5 != 0) &&
               (iVar5 = FUN_00495da0(0x01C3EB54,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",&DAT_01cd0c40,
                                     1,0,99999,1), iVar5 != 0)) &&
              (iVar5 = FUN_00495da0(0x01C3EB54,"Enter image width",&DAT_0061d96c,1,1,9999
                                    ,1), iVar5 != 0)) &&
             (iVar5 = FUN_00495da0(0x01C3EB54,"Enter image height",&DAT_0061d970,1,1,9999
                                   ,1), iVar5 != 0)) {
            FUN_004942e0(0x01C3EB54,"Press CTRL+V to begin recording.");
            _DAT_01cd0c38 = 1;
          }
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e1e47);
        local_29c = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        local_2a0 = iVar5;
        if (0 < iVar5) {
          local_c0 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              local_29c = local_29c + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (local_c0 < iVar5);
        }
        if (local_29c == local_2a0) {
          DAT_01cd0c68 = 0;
          *(uint *)(param_1 + 0x238) = (uint)(*(int *)(param_1 + 0x238) == 0);
        }
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e1e7e);
      local_294 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      local_298 = iVar5;
      if (0 < iVar5) {
        local_bc = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            local_294 = local_294 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (local_bc < iVar5);
      }
      if (local_294 == local_298) {
        DAT_01cd0c68 = 0;
        iVar5 = FUN_004f8c40(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,
                             "Skeleton_key");
        if (iVar5 == 0) {
          pcVar7 = (char *)FUN_0040c2b0("CKeyActor");
          pcVar12 = "Skeleton_key";
          (*(code *)**(uint **)(pcVar7 + 0x154))(pcVar7);
          pcVar7[0x2d4] = -1;
          pcVar7[0x2d5] = -1;
          pcVar7[0x2d6] = -1;
          pcVar7[0x2d7] = -1;
          pcVar14 = pcVar7;
          do {
            cVar2 = *pcVar12;
            *pcVar14 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar12[1];
            pcVar12 = pcVar12 + 2;
            pcVar14[1] = cVar2;
            pcVar14 = pcVar14 + 2;
          } while (cVar2 != '\0');
          FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
          FUN_004f7690(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,pcVar7,1);
          uVar6 = FUN_00531090("You have the skeleton key",0x40a00000);
          FUN_004cc190(param_1,uVar6);
        }
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e1f01);
      iStack_28c = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_290 = iVar5;
      if (0 < iVar5) {
        iStack_b8 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_28c = iStack_28c + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_b8 < iVar5);
      }
      if (iStack_28c == iStack_290) {
        DAT_01cd0c68 = 0;
        uVar9 = (uint)(*(int *)(param_1 + 0x1ec) == 0);
        *(uint *)(param_1 + 0x1ec) = uVar9;
        if (uVar9 == 0) {
          uVar6 = FUN_00531090("God mode disabled",0x40a00000);
          FUN_004cc190(param_1,uVar6);
        }
        else {
          uVar6 = FUN_00531090("God mode enabled",0x40a00000);
          FUN_004cc190(param_1,uVar6);
          *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2538) = 0x42c80000;
        }
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e1f69);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_284 = 0;
      iStack_288 = iVar5;
      if (0 < iVar5) {
        iStack_b4 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_284 = iStack_284 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_b4 < iVar5);
      }
      if (iStack_284 == iStack_288) {
        DAT_01cd0c68 = 0;
        uVar9 = (uint)(*(int *)(param_1 + 0x1f0) == 0);
        *(uint *)(param_1 + 0x1f0) = uVar9;
        if (uVar9 == 0) {
          pcVar14 = "Enemies thawed";
        }
        else {
          pcVar14 = "Enemies frozen";
        }
        uVar6 = FUN_00531090(pcVar14,0x40a00000);
        FUN_004cc190(param_1,uVar6);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      uVar6 = FUN_00531090("You have the shotgun");
      pcVar7 = (char *)FUN_00531110(&DAT_005e1fec);
      pcStack_280 = "CShotgun";
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_274 = 0;
      uStack_27c = uVar6;
      iStack_278 = iVar5;
      if (0 < iVar5) {
        iStack_b0 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_274 = iStack_274 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_b0 < iVar5);
      }
      if (iStack_274 == iStack_278) {
        DAT_01cd0c68 = (byte)iStack_274 ^ (byte)iStack_278;
        FUN_004d2540(pcStack_280);
        FUN_004cc190(0x01CCF390,uStack_27c,0x40a00000);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      uVar6 = FUN_00531090("You have the crossbow");
      pcVar7 = (char *)FUN_00531110(&DAT_005e2049);
      iStack_264 = 0;
      pcStack_270 = "CCrossbow";
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      uStack_26c = uVar6;
      iStack_268 = iVar5;
      if (0 < iVar5) {
        iStack_2dc = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_264 = iStack_264 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_2dc < iVar5);
      }
      if (iStack_264 == iStack_268) {
        DAT_01cd0c68 = 0;
        FUN_004d2540(pcStack_270);
        FUN_004cc190(0x01CCF390,uStack_26c,0x40a00000);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      uVar6 = FUN_00531090("DY-NO-MITE");
      pcVar7 = (char *)FUN_00531110(&DAT_005e2096);
      pcStack_260 = "CDynamite";
      iStack_254 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      uStack_25c = uVar6;
      iStack_258 = iVar5;
      if (0 < iVar5) {
        iStack_ac = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_254 = iStack_254 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_ac < iVar5);
      }
      if (iStack_254 == iStack_258) {
        DAT_01cd0c68 = 0;
        FUN_004d2540(pcStack_260);
        FUN_004cc190(0x01CCF390,uStack_25c,0x40a00000);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      uVar6 = FUN_00531090("Fire! Fire! Fire!");
      pcVar7 = (char *)FUN_00531110(&DAT_005e20f0);
      pcStack_250 = "CFlameThrower";
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_244 = 0;
      uStack_24c = uVar6;
      iStack_248 = iVar5;
      if (0 < iVar5) {
        iStack_a8 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_244 = iStack_244 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_a8 < iVar5);
      }
      if (iStack_244 == iStack_248) {
        DAT_01cd0c68 = 0;
        FUN_004d2540(pcStack_250);
        FUN_004cc190(0x01CCF390,uStack_24c,0x40a00000);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      uVar6 = FUN_00531090("You have the tommy gun");
      pcVar7 = (char *)FUN_00531110(&DAT_005e214d);
      iStack_234 = 0;
      pcStack_240 = "CTommyGun";
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      uStack_23c = uVar6;
      iStack_238 = iVar5;
      if (0 < iVar5) {
        iStack_a4 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_234 = iStack_234 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_a4 < iVar5);
      }
      if (iStack_234 == iStack_238) {
        DAT_01cd0c68 = 0;
        FUN_004d2540(pcStack_240);
        FUN_004cc190(0x01CCF390,uStack_23c,0x40a00000);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      uVar6 = FUN_00531090("You can now summon the baron");
      pcVar7 = (char *)FUN_00531110(&DAT_005e21b3);
      pcStack_230 = "CBaronWeapon";
      iStack_224 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      uStack_22c = uVar6;
      iStack_228 = iVar5;
      if (0 < iVar5) {
        iStack_a0 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_224 = iStack_224 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_a0 < iVar5);
      }
      if (iStack_224 == iStack_228) {
        DAT_01cd0c68 = 0;
        FUN_004d2540(pcStack_230);
        FUN_004cc190(0x01CCF390,uStack_22c,0x40a00000);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      uVar6 = FUN_00531090("You have the elephant gun");
      pcVar7 = (char *)FUN_00531110(&DAT_005e2214);
      pcStack_220 = "CElephantGun";
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_214 = 0;
      uStack_21c = uVar6;
      iStack_218 = iVar5;
      if (0 < iVar5) {
        iStack_9c = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_214 = iStack_214 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_9c < iVar5);
      }
      if (iStack_214 == iStack_218) {
        DAT_01cd0c68 = 0;
        FUN_004d2540(pcStack_220);
        FUN_004cc190(0x01CCF390,uStack_21c,0x40a00000);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      uVar6 = FUN_00531090("You have the charged radiance emitter");
      pcVar7 = (char *)FUN_00531110(&DAT_005e227e);
      pcStack_210 = "CLightGun";
      iStack_204 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      uStack_20c = uVar6;
      iStack_208 = iVar5;
      if (0 < iVar5) {
        iStack_98 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_204 = iStack_204 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_98 < iVar5);
      }
      if (iStack_204 == iStack_208) {
        DAT_01cd0c68 = 0;
        FUN_004d2540(pcStack_210);
        FUN_004cc190(0x01CCF390,uStack_20c,0x40a00000);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e22b4);
      iStack_1fc = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_200 = iVar5;
      if (0 < iVar5) {
        iStack_94 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1fc = iStack_1fc + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_94 < iVar5);
      }
      if (iStack_1fc == iStack_200) {
        DAT_01cd0c68 = (byte)iStack_1fc ^ (byte)iStack_200;
        iVar10 = FUN_005c0f32(0x31c);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = FUN_0040dbc0(iVar10);
        }
        if (iVar5 != 0) {
          FUN_0051bd60(0x01D2C900,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x154))(iVar5);
          *(uint *)(iVar5 + 0x318) = 3;
          FUN_0040ddd0(iVar5,&DAT_005e22f0);
          iVar10 = _DAT_01d06ab4;
          *(uint *)(iVar5 + 0x314) = 500;
          FUN_004f7690(*(int *)(iVar10 * 4 + 0x1d06aa4) + 0x1fae8,iVar5,1);
        }
        iVar10 = FUN_005c0f32(0x31c);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = FUN_0040dbc0(iVar10);
        }
        if (iVar5 != 0) {
          FUN_0051bd60(0x01D2C900,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x154))(iVar5);
          *(uint *)(iVar5 + 0x318) = 7;
          FUN_0040ddd0(iVar5,&DAT_005e22f5);
          iVar10 = _DAT_01d06ab4;
          *(uint *)(iVar5 + 0x314) = 500;
          FUN_004f7690(*(int *)(iVar10 * 4 + 0x1d06aa4) + 0x1fae8,iVar5,1);
        }
        iVar10 = FUN_005c0f32(0x31c);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = FUN_0040dbc0(iVar10);
        }
        if (iVar5 != 0) {
          FUN_0051bd60(0x01D2C900,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x154))(iVar5);
          *(uint *)(iVar5 + 0x318) = 8;
          FUN_0040ddd0(iVar5,&DAT_005e22fa);
          iVar10 = _DAT_01d06ab4;
          *(uint *)(iVar5 + 0x314) = 500;
          FUN_004f7690(*(int *)(iVar10 * 4 + 0x1d06aa4) + 0x1fae8,iVar5,1);
        }
        FUN_004d2540("CShotgun");
        FUN_004d2540("CRifle");
        FUN_004d2540("CCrossbow");
        iVar10 = FUN_005c0f32(0x31c);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = FUN_0040dbc0(iVar10);
        }
        if (iVar5 != 0) {
          FUN_0051bd60(0x01D2C900,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x154))(iVar5);
          *(uint *)(iVar5 + 0x318) = 1;
          FUN_0040ddd0(iVar5,"CCrossbow");
          iVar10 = _DAT_01d06ab4;
          *(uint *)(iVar5 + 0x314) = 500;
          FUN_004f7690(*(int *)(iVar10 * 4 + 0x1d06aa4) + 0x1fae8,iVar5,1);
        }
        FUN_004d2540("CDynamite");
        FUN_004d2540("CFlameThrower");
        FUN_004d2540("CTommyGun");
        FUN_004d2540("CElephantGun");
        FUN_004d2540("CLightGun");
        uVar6 = FUN_00531090("You've got all the weapons",0x40a00000);
        FUN_004cc190(param_1,uVar6);
        *(uint *)(param_1 + 0x1ec) = 1;
        uVar6 = 0x02C82A60;
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2538) = 0x42c80000;
        FUN_0057d880(uVar6,0,"cheat-1.wav");
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2383);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_1f4 = 0;
      iStack_1f8 = iVar5;
      if (0 < iVar5) {
        iStack_90 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1f4 = iStack_1f4 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_90 < iVar5);
      }
      if (iStack_1f4 == iStack_1f8) {
        DAT_01cd0c68 = (byte)((uint)iStack_1f4 >> 8) ^ (byte)((uint)iStack_1f8 >> 8);
        iVar5 = *(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fe20);
        if (iVar5 != 0) {
          piVar1 = (int *)(iVar5 + 0x568);
          *piVar1 = *piVar1 + 100;
        }
        uVar6 = FUN_00531090("You just got 100 more bullets",0x40a00000);
        FUN_004cc190(param_1,uVar6);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e23ea);
        iStack_1ec = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_1f0 = iVar5;
        if (0 < iVar5) {
          iStack_8c = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_1ec = iStack_1ec + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_8c < iVar5);
        }
        if (iStack_1ec == iStack_1f0) {
          DAT_01cd0c68 = 0;
        }
        else {
          iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
          if ((iVar5 == 0) ||
             (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x13), iVar5 == 0))
          goto LAB_004d42bf;
        }
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
        while (iVar5 = FUN_00496150(0x01C3EB54,"Raise an event",&DAT_0061d8f0,100,1),
              iVar5 != 0) {
          iVar5 = FUN_004a6cd0(0x01C51D80,&DAT_0061d8f0);
          if (iVar5 == 0) {
            FUN_004a1b70(0x01C51D80,&DAT_0061d8f0);
            break;
          }
          FUN_004943a0(0x01C3EB54,iVar5);
        }
      }
LAB_004d42bf:
      pcVar7 = (char *)FUN_00531110(&DAT_005e2438);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_1e4 = 0;
      iStack_1e8 = iVar5;
      if (0 < iVar5) {
        iStack_88 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1e4 = iStack_1e4 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_88 < iVar5);
      }
      if (iStack_1e4 == iStack_1e8) {
        DAT_01cd0c68 = 0;
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
        iStack_84 = 0;
        for (iStack_18 = 0; iStack_18 < *(int *)(0x01E82168 + 0x150fec); iStack_18 = iStack_18 + 1
            ) {
          iVar5 = *(int *)(0x01E82168 + iStack_84 + 0x150ff0);
          iVar10 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          fStack_310 = *(float *)(iVar10 + 0x20) - *(float *)(iVar5 + 0x20);
          afStack_30c[0] = *(float *)(iVar10 + 0x24) - *(float *)(iVar5 + 0x24);
          afStack_30c[1] = *(float *)(iVar10 + 0x28) - *(float *)(iVar5 + 0x28);
          afStack_30c[2] = fStack_310;
          afStack_30c[(uint)bVar13 * -2 + 3] = afStack_30c[(uint)bVar13 * -2];
          afStack_30c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
               afStack_30c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          if (SQRT(fStack_2fc * fStack_2fc +
                   afStack_30c[2] * afStack_30c[2] + afStack_30c[3] * afStack_30c[3]) <=
              (float)_DAT_005e2e8c) {
            FUN_0042c010(auStack_34c);
            uStack_348 = 0x447a0000;
            (**(code **)(*(int *)(iVar5 + 0x154) + 0x108))(iVar5,auStack_34c);
          }
          iStack_84 = iStack_84 + 4;
        }
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e247a);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_1dc = 0;
      iStack_1e0 = iVar5;
      if (0 < iVar5) {
        iStack_80 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1dc = iStack_1dc + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_80 < iVar5);
      }
      if (iStack_1dc == iStack_1e0) {
        DAT_01cd0c68 = 0;
        uVar9 = (uint)(*(int *)(param_1 + 0x1fc) == 0);
        *(uint *)(param_1 + 0x1fc) = uVar9;
        if (uVar9 == 0) {
          pcVar14 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar14 = "Gratuitous dismemberment enabled";
        }
        uVar6 = FUN_00531090(pcVar14,0x40a00000);
        FUN_004cc190(param_1,uVar6);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e2501);
        iStack_1d4 = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_1d8 = iVar5;
        if (0 < iVar5) {
          iStack_7c = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_1d4 = iStack_1d4 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_7c < iVar5);
        }
        if (iStack_1d4 == iStack_1d8) {
          DAT_01cd0c68 = 0;
          FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
          uVar6 = 0x01C3EB54;
          *(uint *)(param_1 + 0x280) = 2;
          FUN_00495e70(uVar6,"Enter time factor",local_1d0,1,0x3c23d70a,0x40800000,1);
        }
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2551);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_1c8 = 0;
      iStack_1cc = iVar5;
      if (0 < iVar5) {
        iStack_78 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1c8 = iStack_1c8 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_78 < iVar5);
      }
      if (iStack_1c8 == iStack_1cc) {
        DAT_01cd0c68 = 0;
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
        *(uint *)(param_1 + 0x20c) = (uint)(*(int *)(param_1 + 0x20c) == 0);
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2590);
      iStack_1c0 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_1c4 = iVar5;
      if (0 < iVar5) {
        iStack_74 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1c0 = iStack_1c0 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_74 < iVar5);
      }
      if (iStack_1c0 == iStack_1c4) {
        DAT_01cd0c68 = 0;
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
        *(uint *)(param_1 + 0x210) = (uint)(*(int *)(param_1 + 0x210) == 0);
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e25cf);
      iStack_1b8 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_1bc = iVar5;
      if (0 < iVar5) {
        iStack_70 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1b8 = iStack_1b8 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_70 < iVar5);
      }
      if (iStack_1b8 == iStack_1bc) {
        DAT_01cd0c68 = (byte)iStack_1b8 ^ (byte)iStack_1bc;
        iVar5 = *(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fe20);
        if (iVar5 != 0) {
          if (*(int *)(iVar5 + 0x56c) == 5) {
            *(uint *)(iVar5 + 0x56c) = 0;
            uVar6 = FUN_00531090("Flaming ammo disabled",0x40a00000);
          }
          else {
            iVar10 = FUN_0040c550(iVar5,"CCrossbow");
            if (iVar10 == 0) {
              uVar6 = FUN_00531090("You can only use flaming ammo on the crossbow.",0x40a00000);
            }
            else {
              *(uint *)(iVar5 + 0x56c) = 5;
              uVar6 = FUN_00531090("Flaming ammo enabled.",0x40a00000);
            }
          }
          FUN_004cc190(param_1,uVar6);
        }
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e267b);
        iStack_1b0 = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_1b4 = iVar5;
        if (0 < iVar5) {
          iStack_6c = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_1b0 = iStack_1b0 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_6c < iVar5);
        }
        if (iStack_1b0 == iStack_1b4) {
          DAT_01cd0c68 = (byte)((uint)iStack_1b0 >> 8) ^ (byte)((uint)iStack_1b4 >> 8);
          FUN_004548f0(0x1fe37ec,0xff00ff);
          FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e26ba);
        iStack_1a8 = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_1ac = iVar5;
        if (0 < iVar5) {
          iStack_68 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_1a8 = iStack_1a8 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_68 < iVar5);
        }
        if (iStack_1a8 == iStack_1ac) {
          DAT_01cd0c68 = 0;
          *(uint *)(0x01E82168 + 0x14d150) = 0;
          FUN_00453540(0x1fe37ec,0);
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e26ec);
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_1a0 = 0;
        iStack_1a4 = iVar5;
        if (0 < iVar5) {
          iStack_2f0 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_1a0 = iStack_1a0 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_2f0 < iVar5);
        }
        if (iStack_1a0 == iStack_1a4) {
          DAT_01cd0c68 = 0;
          uVar9 = (uint)(*(int *)(param_1 + 0x21c) == 0);
          *(uint *)(param_1 + 0x21c) = uVar9;
          if (uVar9 == 0) {
            pcVar14 = "Single step disabled";
          }
          else {
            pcVar14 = "Single step enabled";
          }
          uVar6 = FUN_00531090(pcVar14,0x40a00000);
          FUN_004cc190(param_1,uVar6);
        }
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2747);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_198 = 0;
      iStack_19c = iVar5;
      if (0 < iVar5) {
        iStack_64 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_198 = iStack_198 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_64 < iVar5);
      }
      if (iStack_198 == iStack_19c) {
        DAT_01cd0c68 = 0;
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8) = 0x42c80000;
        uVar6 = FUN_00531090("Flashlight battery restored",0x40a00000);
        FUN_004cc190(param_1,uVar6);
        FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e27a5);
      iStack_190 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_194 = iVar5;
      if (0 < iVar5) {
        iStack_60 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_190 = iStack_190 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_60 < iVar5);
      }
      if (iStack_190 == iStack_194) {
        DAT_01cd0c68 = 0;
        FUN_005aefc0(0x02C997C0,1);
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e27df);
      iStack_188 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_18c = iVar5;
      if (0 < iVar5) {
        iStack_5c = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_188 = iStack_188 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_5c < iVar5);
      }
      if (iStack_188 == iStack_18c) {
        DAT_01cd0c68 = 0;
        FUN_005aefc0(0x02C997C0,2);
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2816);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_180 = 0;
      iStack_184 = iVar5;
      if (0 < iVar5) {
        iStack_58 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_180 = iStack_180 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_58 < iVar5);
      }
      if (iStack_180 == iStack_184) {
        DAT_01cd0c68 = 0;
        uVar9 = (uint)(*(int *)(param_1 + 0x220) == 0);
        fStack_17c = 0.25;
        *(uint *)(param_1 + 0x220) = uVar9;
        if (uVar9 == 0) {
          pcVar14 = "burp1.wav";
        }
        else {
          pcVar14 = "burp2.wav";
          fStack_17c = 4.0;
        }
        FUN_0057d880(0x02C82A60,0,pcVar14);
        iStack_54 = 0;
        for (iStack_1c = 0; iStack_1c < *(int *)(0x01E82168 + 0x14f0a8); iStack_1c = iStack_1c + 1
            ) {
          iVar5 = *(int *)(0x01E82168 + 0x14f0ac + iStack_54);
          iStack_178 = iVar5 + 0x158;
          if (*(char *)(iVar5 + 0x24a8) != '\0') {
            iVar5 = FUN_00569f30(iStack_178);
            iStack_174 = iVar5;
            iVar10 = FUN_005634f0(iVar5,"Bip01 head",0);
            if (iVar10 != -1) {
              iVar8 = iVar10 * 4 + iStack_178;
              iStack_170 = iStack_178;
              fStack_16c = fStack_17c;
              *(float *)(iVar8 + 0x514) = *(float *)(iVar8 + 0x514) * fStack_17c;
              iVar11 = 0;
              iVar8 = iVar5;
              iStack_168 = iVar10;
              if (0 < *(int *)(iVar5 + 0x1de78)) {
                do {
                  if (iStack_168 == *(int *)(iVar8 + 0x1de9c)) {
                    FUN_004d2740(iStack_170,iVar5,fStack_16c,iVar11);
                  }
                  iVar11 = iVar11 + 1;
                  iVar8 = iVar8 + 0x24;
                } while (iVar11 < *(int *)(iVar5 + 0x1de78));
              }
            }
            iVar10 = FUN_005634f0(iStack_174,"bipltit02",0);
            iVar5 = iStack_174;
            if (iVar10 != -1) {
              iVar8 = iVar10 * 4 + iStack_178;
              iStack_164 = iStack_178;
              fStack_160 = fStack_17c;
              *(float *)(iVar8 + 0x514) = *(float *)(iVar8 + 0x514) * fStack_17c;
              iVar11 = 0;
              iVar8 = iStack_174;
              iStack_15c = iVar10;
              if (0 < *(int *)(iStack_174 + 0x1de78)) {
                do {
                  if (iStack_15c == *(int *)(iVar8 + 0x1de9c)) {
                    FUN_004d2740(iStack_164,iVar5,fStack_160,iVar11);
                  }
                  iVar11 = iVar11 + 1;
                  iVar8 = iVar8 + 0x24;
                } while (iVar11 < *(int *)(iVar5 + 0x1de78));
              }
            }
            iVar10 = FUN_005634f0(iStack_174,"biprtit02",0);
            iVar5 = iStack_174;
            if (iVar10 != -1) {
              iVar8 = iVar10 * 4 + iStack_178;
              iStack_158 = iStack_178;
              fStack_154 = fStack_17c;
              *(float *)(iVar8 + 0x514) = *(float *)(iVar8 + 0x514) * fStack_17c;
              iVar11 = 0;
              iVar8 = iStack_174;
              iStack_150 = iVar10;
              if (0 < *(int *)(iStack_174 + 0x1de78)) {
                do {
                  if (iStack_150 == *(int *)(iVar8 + 0x1de9c)) {
                    FUN_004d2740(iStack_158,iVar5,fStack_154,iVar11);
                  }
                  iVar11 = iVar11 + 1;
                  iVar8 = iVar8 + 0x24;
                } while (iVar11 < *(int *)(iVar5 + 0x1de78));
              }
            }
          }
          iStack_54 = iStack_54 + 4;
        }
        iVar5 = FUN_0040c600(*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),_DAT_02c83694);
        if (iVar5 != 0) {
          if (*(int *)(param_1 + 0x220) == 0) {
            pcVar14 = "stranger-hat.kfm";
          }
          else {
            pcVar14 = "big-hat.kfm";
          }
          FUN_00468950(iVar5 + 0x200ac,pcVar14);
          FUN_004688e0(iVar5 + 0x200ac);
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e289b);
        iStack_148 = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_14c = iVar5;
        if (0 < iVar5) {
          iStack_50 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_148 = iStack_148 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_50 < iVar5);
        }
        if (iStack_148 == iStack_14c) {
          DAT_01cd0c68 = 0;
          *(uint *)(param_1 + 0x234) = (uint)(*(int *)(param_1 + 0x234) == 0);
        }
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e28d3);
      iStack_140 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_144 = iVar5;
      if (0 < iVar5) {
        iStack_4c = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_140 = iStack_140 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_4c < iVar5);
      }
      if (iStack_140 == iStack_144) {
        DAT_01cd0c68 = 0;
        iVar10 = FUN_005c0f32(0x2d8);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = FUN_004ddac0(iVar10);
        }
        FUN_0051bd60(0x01D2C900,iVar5);
        (*(code *)**(uint **)(iVar5 + 0x154))(iVar5);
        FUN_004f7690(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,iVar5,1);
        uVar6 = FUN_00531090("You've got a gasmask!",0x40a00000);
        FUN_004cc190(param_1,uVar6);
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2923);
      iStack_138 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_13c = iVar5;
      if (0 < iVar5) {
        iStack_48 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_138 = iStack_138 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_48 < iVar5);
      }
      if (iStack_138 == iStack_13c) {
        DAT_01cd0c68 = 0;
        iVar10 = FUN_005c0f32(0x2d8);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = FUN_004e3b30(iVar10);
        }
        FUN_0051bd60(0x01D2C900,iVar5);
        (*(code *)**(uint **)(iVar5 + 0x154))(iVar5);
        FUN_004f7690(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,iVar5,1);
        uVar6 = FUN_00531090("You've got nightvision goggles!",0x40a00000);
        FUN_004cc190(param_1,uVar6);
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2978);
      iStack_130 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_134 = iVar5;
      if (0 < iVar5) {
        iStack_44 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_130 = iStack_130 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_44 < iVar5);
      }
      if (iStack_130 == iStack_134) {
        DAT_01cd0c68 = 0;
        FUN_004a9a60(0x01C51D80,"puzzleModeHard",0);
        FUN_004a9a60(0x01C51D80,"combatModeHard",0);
        iVar5 = 0x01CCF390;
        *(uint *)(0x01CCF390 + 0xe4) = 0;
        *(uint *)(iVar5 + 0xe8) = 0;
        FUN_004f4b00(auStack_abc,"system\\nocturne.ini","Game");
        FUN_004f4d70(auStack_abc,"puzzleDifficultyMode",
                     *(uint *)(0x01CCF390 + 0xe4));
        FUN_004f4d70(auStack_abc,"combatDifficultyMode",
                     *(uint *)(0x01CCF390 + 0xe8));
        uVar6 = FUN_00531090("DEBUG: Game set to easy puzzle / easy combat. You just broke the game.",0x40a00000);
        FUN_004cc190(param_1,uVar6);
        FUN_004f4b30(auStack_abc,0);
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2a53);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_128 = 0;
      iStack_12c = iVar5;
      if (0 < iVar5) {
        iStack_40 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_128 = iStack_128 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_40 < iVar5);
      }
      if (iStack_128 == iStack_12c) {
        DAT_01cd0c68 = 0;
        FUN_004a9a60(0x01C51D80,"puzzleModeHard",1);
        FUN_004a9a60(0x01C51D80,"combatModeHard",0);
        iVar5 = 0x01CCF390;
        *(uint *)(0x01CCF390 + 0xe4) = 1;
        *(uint *)(iVar5 + 0xe8) = 0;
        FUN_004f4b00(auStack_6b4,"system\\nocturne.ini","Game");
        FUN_004f4d70(auStack_6b4,"puzzleDifficultyMode",
                     *(uint *)(0x01CCF390 + 0xe4));
        FUN_004f4d70(auStack_6b4,"combatDifficultyMode",
                     *(uint *)(0x01CCF390 + 0xe8));
        uVar6 = FUN_00531090("DEBUG: Game set to hard puzzle / easy combat. You just broke the game.",0x40a00000);
        FUN_004cc190(param_1,uVar6);
        FUN_004f4b30(auStack_6b4,0);
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2b36);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_120 = 0;
      iStack_124 = iVar5;
      if (0 < iVar5) {
        iStack_3c = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_120 = iStack_120 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_3c < iVar5);
      }
      if (iStack_120 == iStack_124) {
        DAT_01cd0c68 = (byte)iStack_120 ^ (byte)iStack_124;
        FUN_004a9a60(0x01C51D80,"puzzleModeHard",0);
        FUN_004a9a60(0x01C51D80,"combatModeHard",1);
        iVar5 = 0x01CCF390;
        *(uint *)(0x01CCF390 + 0xe4) = 0;
        *(uint *)(iVar5 + 0xe8) = 1;
        FUN_004f4b00(auStack_cc0,"system\\nocturne.ini","Game");
        FUN_004f4d70(auStack_cc0,"puzzleDifficultyMode",
                     *(uint *)(0x01CCF390 + 0xe4));
        FUN_004f4d70(auStack_cc0,"combatDifficultyMode",
                     *(uint *)(0x01CCF390 + 0xe8));
        uVar6 = FUN_00531090("DEBUG: Game set to easy puzzle / hard combat. You just broke the game.",0x40a00000);
        FUN_004cc190(param_1,uVar6);
        FUN_004f4b30(auStack_cc0,0);
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2c1b);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_118 = 0;
      iStack_11c = iVar5;
      if (0 < iVar5) {
        iStack_38 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_118 = iStack_118 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_38 < iVar5);
      }
      if (iStack_118 == iStack_11c) {
        DAT_01cd0c68 = (byte)((uint)iStack_118 >> 8) ^ (byte)((uint)iStack_11c >> 8);
        FUN_004a9a60(0x01C51D80,"puzzleModeHard",1);
        FUN_004a9a60(0x01C51D80,"combatModeHard",1);
        iVar5 = 0x01CCF390;
        *(uint *)(0x01CCF390 + 0xe4) = 1;
        *(uint *)(iVar5 + 0xe8) = 1;
        FUN_004f4b00(auStack_8b8,"system\\nocturne.ini","Game");
        FUN_004f4d70(auStack_8b8,"puzzleDifficultyMode",
                     *(uint *)(0x01CCF390 + 0xe4));
        FUN_004f4d70(auStack_8b8,"combatDifficultyMode",
                     *(uint *)(0x01CCF390 + 0xe8));
        uVar6 = FUN_00531090("DEBUG: Game set to hard puzzle / hard combat. You just broke the game.",0x40a00000);
        FUN_004cc190(param_1,uVar6);
        FUN_004f4b30(auStack_8b8,0);
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2cf6);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_110 = 0;
      iStack_114 = iVar5;
      if (0 < iVar5) {
        iStack_34 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_110 = iStack_110 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_34 < iVar5);
      }
      if (iStack_110 == iStack_114) {
        DAT_01cd0c68 = 0;
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2538) = 0x42c80000;
        uVar6 = FUN_00531090("Health restored.",0x40a00000);
        FUN_004cc190(param_1,uVar6);
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2d40);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_108 = 0;
      iStack_10c = iVar5;
      if (0 < iVar5) {
        iStack_30 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_108 = iStack_108 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_30 < iVar5);
      }
      if (iStack_108 == iStack_10c) {
        DAT_01cd0c68 = 0;
        iVar5 = FUN_0040c600(*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),_DAT_02c83694);
        if (iVar5 != 0) {
          FUN_00468950(iVar5 + 0x200ac,"oldhat.kfm");
          FUN_004688e0(iVar5 + 0x200ac);
          FUN_0057d880(0x02C82A60,0,"cheat-1.wav");
        }
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2d8b);
      iStack_100 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_104 = iVar5;
      if (0 < iVar5) {
        iStack_2c = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_100 = iStack_100 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_2c < iVar5);
      }
      if (iStack_100 == iStack_104) {
        DAT_01cd0c68 = 0;
        iVar10 = FUN_005c0f32(0x31c);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = FUN_0040dbc0(iVar10);
        }
        if (iVar5 != 0) {
          FUN_0051bd60(0x01D2C900,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x154))(iVar5);
          *(uint *)(iVar5 + 0x318) = 3;
          FUN_0040ddd0(iVar5,"CGun");
          iVar10 = _DAT_01d06ab4;
          *(uint *)(iVar5 + 0x314) = 500;
          FUN_004f7690(*(int *)(iVar10 * 4 + 0x1d06aa4) + 0x1fae8,iVar5,1);
        }
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2dc6);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_f8 = 0;
      iStack_fc = iVar5;
      if (0 < iVar5) {
        iStack_28 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_f8 = iStack_f8 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_28 < iVar5);
      }
      if (iStack_f8 == iStack_fc) {
        DAT_01cd0c68 = 0;
        iVar10 = FUN_005c0f32(0x31c);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = FUN_0040dbc0(iVar10);
        }
        if (iVar5 != 0) {
          FUN_0051bd60(0x01D2C900,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x154))(iVar5);
          *(uint *)(iVar5 + 0x318) = 7;
          FUN_0040ddd0(iVar5,"CGun");
          iVar10 = _DAT_01d06ab4;
          *(uint *)(iVar5 + 0x314) = 500;
          FUN_004f7690(*(int *)(iVar10 * 4 + 0x1d06aa4) + 0x1fae8,iVar5,1);
        }
      }
      pcVar7 = (char *)FUN_00531110(&DAT_005e2e03);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_f0 = 0;
      iStack_f4 = iVar5;
      if (0 < iVar5) {
        iStack_24 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
          uVar9 = FUN_005c12b0(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_f0 = iStack_f0 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_24 < iVar5);
      }
      if (iStack_f0 == iStack_f4) {
        DAT_01cd0c68 = 0;
        iVar10 = FUN_005c0f32(0x31c);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = FUN_0040dbc0(iVar10);
        }
        if (iVar5 != 0) {
          FUN_0051bd60(0x01D2C900,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x154))(iVar5);
          *(uint *)(iVar5 + 0x318) = 8;
          FUN_0040ddd0(iVar5,"CGun");
          iVar10 = _DAT_01d06ab4;
          *(uint *)(iVar5 + 0x314) = 500;
          FUN_004f7690(*(int *)(iVar10 * 4 + 0x1d06aa4) + 0x1fae8,iVar5,1);
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar7 = (char *)FUN_00531110(&DAT_005e2e41);
        iStack_e8 = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_ec = iVar5;
        if (0 < iVar5) {
          iStack_20 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1cd0c67);
            uVar9 = FUN_005c12b0(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_e8 = iStack_e8 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_20 < iVar5);
        }
        if (iStack_e8 == iStack_ec) {
          DAT_01cd0c68 = 0;
          _DAT_01cd0c48 = (uint)(_DAT_01cd0c48 == 0);
        }
      }
    }
  }
  return;
}
