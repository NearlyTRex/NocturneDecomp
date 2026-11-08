// Name: FUN_004bb100
// Address: 004bb100
// Address Range: [[004bb100, 004bd42d]]
// Convention: unknown
// Signature: void FUN_004bb100(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb100(int param_1)

{
  char cVar1;
  byte bVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  byte bVar12;
  float afStackY_11d0 [907];
  char *pcVar13;
  byte local_388 [256];
  char acStack_288 [100];
  byte auStack_224 [4];
  uint uStack_220;
  float fStack_1e8;
  float afStack_1e4 [4];
  float fStack_1d4;
  double local_1d0;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int local_134;
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
  float fStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  float fStack_e8;
  int iStack_e4;
  int iStack_e0;
  float fStack_dc;
  int iStack_d8;
  int iStack_d4;
  float fStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
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
  uint local_14;
  
  bVar12 = 0;
  if (_DAT_01d22200 == 0) {
    iVar4 = FUN_00491aa0(0x01C6E360,"headOfHorror");
    if ((iVar4 != 0) && (*(int *)(0x01D2130C + 0x238) != 0x29a)) {
      *(uint *)(0x01D2130C + 0x238) = 0x29a;
      uVar5 = FUN_00508960("The horror has been unleashed.",0x40a00000);
      FUN_004b46b0(param_1,uVar5);
      FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
    }
    if ((*(int *)(param_1 + 0x200) == 0) &&
       (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x44), iVar4 != 0)) {
      uVar5 = FUN_00508960("Enter cheat code",acStack_288,100,0);
      iVar4 = FUN_0047ed20(0x01C5B0E4,uVar5);
      if (iVar4 != 0) {
        iVar4 = 0;
        while (acStack_288[0] != '\0') {
          FUN_00580830(acStack_288[iVar4]);
          iVar9 = iVar4 + 1;
          iVar4 = iVar4 + 1;
          acStack_288[0] = acStack_288[iVar9];
        }
      }
    }
    local_134 = param_1 + 0x210;
    while( true ) {
      iVar4 = FUN_00580800();
      if (iVar4 == 0) break;
      DAT_01d22c70 = FUN_004df590(0x01D70A78);
      iVar4 = 0x13;
      do {
        iVar9 = iVar4 + -1;
        (&DAT_01d22c70)[iVar4] = *(byte *)(iVar4 + 0x1d22c6f);
        iVar4 = iVar9;
      } while (0 < iVar9);
      pcVar6 = (char *)FUN_005089e0(&DAT_005c29a8);
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      local_1c4 = 0;
      local_1c8 = iVar4;
      if (0 < iVar4) {
        local_b0 = 0;
        do {
          bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (bVar2 == uVar8) {
            local_1c4 = local_1c4 + 1;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (local_b0 < iVar4);
      }
      if (local_1c4 == local_1c8) {
        DAT_01d22c70 = 0;
        uVar8 = (uint)(*(int *)(param_1 + 0x234) == 0);
        *(uint *)(param_1 + 0x234) = uVar8;
        if (uVar8 == 0) {
          pcVar13 = "Cheats turned off";
        }
        else {
          pcVar13 = "Cheats turned on";
        }
        uVar5 = FUN_00508960(pcVar13,0x40a00000);
        FUN_004b46b0(param_1,uVar5);
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c2a01);
      local_1bc = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      local_1c0 = iVar4;
      if (0 < iVar4) {
        local_ac = 0;
        do {
          bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (bVar2 == uVar8) {
            local_1bc = local_1bc + 1;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (local_ac < iVar4);
      }
      if (local_1bc == local_1c0) {
        DAT_01d22c70 = 0;
        if (*(int *)(param_1 + 0x22c) == 0) {
          uVar5 = FUN_005806a0();
          *(uint *)(param_1 + 0x22c) = 1;
          *(uint *)(param_1 + 0x318) = uVar5;
          *(uint *)(param_1 + 0x31c) = 0;
        }
        else {
          iVar4 = FUN_005806a0();
          local_14 = iVar4 - *(int *)(param_1 + 0x318);
          dVar3 = (double)(int)local_14 * _DAT_005c3528;
          *(uint *)(param_1 + 0x22c) = 0;
          local_1d0 = (double)*(int *)(param_1 + 0x31c) / (dVar3 * _DAT_005c3530);
          FUN_005a28c0(local_388,"FPS: %3.2lf",local_1d0);
          FUN_004b46b0(param_1,local_388,0x40a00000);
        }
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c2a41);
        local_1b4 = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        local_1b8 = iVar4;
        if (0 < iVar4) {
          local_a8 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              local_1b4 = local_1b4 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_a8 < iVar4);
        }
        if (local_1b4 == local_1b8) {
          DAT_01d22c70 = 0;
          iVar4 = *(int *)(param_1 + 0x230) + 1;
          *(int *)(param_1 + 0x230) = iVar4;
          if (2 < iVar4) {
            *(uint *)(param_1 + 0x230) = 0;
          }
        }
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c2a76);
        local_1ac = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        local_1b0 = iVar4;
        if (0 < iVar4) {
          local_a4 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              local_1ac = local_1ac + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_a4 < iVar4);
        }
        if (local_1ac == local_1b0) {
          DAT_01d22c70 = 0;
          uVar8 = (uint)(*(int *)(param_1 + 0x1fc) == 0);
          *(uint *)(param_1 + 0x1fc) = uVar8;
          if (uVar8 == 0) {
            pcVar13 = "Event debug off";
          }
          else {
            pcVar13 = "Event debug on";
          }
          uVar5 = FUN_00508960(pcVar13,0x40a00000);
          FUN_004b46b0(param_1,uVar5);
          FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
        }
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c2ad4);
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        local_1a4 = 0;
        local_1a8 = iVar4;
        if (0 < iVar4) {
          local_a0 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              local_1a4 = local_1a4 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_a0 < iVar4);
        }
        if (local_1a4 == local_1a8) {
          DAT_01d22c70 = 0;
          uVar8 = (uint)(*(int *)(param_1 + 0x200) == 0);
          *(uint *)(param_1 + 0x200) = uVar8;
          if (uVar8 == 0) {
            uVar5 = FUN_00508960("Script debug off",0x40a00000);
            FUN_004b46b0(param_1,uVar5);
            iVar4 = 0x01ED78C8;
            uVar5 = DAT_005fba1c;
            *(uint *)(param_1 + 0x328) = 0;
          }
          else {
            uVar5 = FUN_00508960("Script debug on",0x40a00000);
            FUN_004b46b0(param_1,uVar5);
            iVar4 = 0x01ED78C8;
            uVar5 = 0xf0;
            *(uint *)(param_1 + 0x328) = 1;
          }
          FUN_005353b0(iVar4,0,0,uVar5);
          FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
        }
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c2b35);
        local_19c = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        local_1a0 = iVar4;
        if (0 < iVar4) {
          local_9c = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              local_19c = local_19c + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_9c < iVar4);
        }
        if (local_19c == local_1a0) {
          DAT_01d22c70 = (byte)local_19c ^ (byte)local_1a0;
          uVar8 = (uint)(*(int *)(param_1 + 0x21c) == 0);
          *(uint *)(param_1 + 0x21c) = uVar8;
          if (uVar8 == 0) {
            pcVar13 = "Memory debugging off";
          }
          else {
            pcVar13 = "Memory debugging on";
          }
          uVar5 = FUN_00508960(pcVar13,0x40a00000);
          FUN_004b46b0(param_1,uVar5);
          FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
        }
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c2b9e);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      local_198 = iVar9;
      if (0 < iVar9) {
        local_98 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (local_98 < iVar9);
      }
      if (iVar4 == local_198) {
        DAT_01d22c70 = 0;
        *(uint *)(param_1 + 0xdc) = 2;
        uVar5 = FUN_00508960("Manual aim enabled",0x40a00000);
        FUN_004b46b0(param_1,uVar5);
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e4) =
             *(uint *)(param_1 + 0xdc);
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c2bf1);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      local_194 = iVar9;
      if (0 < iVar9) {
        local_94 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (local_94 < iVar9);
      }
      if (iVar4 == local_194) {
        DAT_01d22c70 = 0;
        *(uint *)(param_1 + 0xdc) = 0;
        uVar5 = FUN_00508960("Auto aim enabled",0x40a00000);
        FUN_004b46b0(param_1,uVar5);
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e4) =
             *(uint *)(param_1 + 0xdc);
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c2c40);
        local_18c = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        local_190 = iVar4;
        if (0 < iVar4) {
          local_90 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              local_18c = local_18c + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_90 < iVar4);
        }
        if (local_18c == local_190) {
          DAT_01d22c70 = 0;
          _DAT_01d22c44 = 0;
          _DAT_01d22c4c = 0;
          iVar4 = FUN_0047ea10(0x01C5B0E4,"?Enter Movie FPS" + 1,&DAT_005fe9e8,1,
                               0x3e800000,0x43700000,1);
          if ((((iVar4 != 0) &&
               (iVar4 = FUN_0047e940(0x01C5B0E4,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",&DAT_01d22c48,
                                     1,0,99999,1), iVar4 != 0)) &&
              (iVar4 = FUN_0047e940(0x01C5B0E4,"Enter image width",&DAT_005fe9ec,1,1,9999
                                    ,1), iVar4 != 0)) &&
             (iVar4 = FUN_0047e940(0x01C5B0E4,"Enter image height",&DAT_005fe9f0,1,1,9999
                                   ,1), iVar4 != 0)) {
            FUN_0047ce80(0x01C5B0E4,"Press CTRL+V to begin recording.");
            _DAT_01d22c40 = 1;
          }
        }
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c2c73);
        local_184 = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        local_188 = iVar4;
        if (0 < iVar4) {
          local_8c = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              local_184 = local_184 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_8c < iVar4);
        }
        if (local_184 == local_188) {
          DAT_01d22c70 = 0;
          *(uint *)(param_1 + 0x240) = (uint)(*(int *)(param_1 + 0x240) == 0);
        }
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c2caa);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      local_180 = iVar9;
      if (0 < iVar9) {
        local_88 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (local_88 < iVar9);
      }
      if (iVar4 == local_180) {
        DAT_01d22c70 = (byte)((uint)iVar4 >> 8) ^ (byte)((uint)local_180 >> 8);
        iVar4 = FUN_004db990(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,
                             "Skeleton_key");
        if (iVar4 == 0) {
          pcVar6 = (char *)FUN_0040c4f0("CKeyActor");
          pcVar11 = "Skeleton_key";
          (*(code *)**(uint **)(pcVar6 + 0x154))(pcVar6);
          pcVar6[0x2d4] = -1;
          pcVar6[0x2d5] = -1;
          pcVar6[0x2d6] = -1;
          pcVar6[0x2d7] = -1;
          pcVar13 = pcVar6;
          do {
            cVar1 = *pcVar11;
            *pcVar13 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar13[1] = cVar1;
            pcVar13 = pcVar13 + 2;
          } while (cVar1 != '\0');
          FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
          FUN_004da880(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,pcVar6,1);
          uVar5 = FUN_00508960("You have the skeleton key",0x40a00000);
          FUN_004b46b0(param_1,uVar5);
        }
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c2d2d);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      iStack_17c = iVar9;
      if (0 < iVar9) {
        iStack_84 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_84 < iVar9);
      }
      if (iVar4 == iStack_17c) {
LAB_004bbc61:
        DAT_01d22c70 = 0;
        uVar8 = (uint)(*(int *)(param_1 + 500) == 0);
        *(uint *)(param_1 + 500) = uVar8;
        if (uVar8 == 0) {
          uVar5 = FUN_00508960("God mode disabled",0x40a00000);
          FUN_004b46b0(param_1,uVar5);
        }
        else {
          uVar5 = FUN_00508960("God mode enabled",0x40a00000);
          FUN_004b46b0(param_1,uVar5);
          *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538) = 0x42c80000;
        }
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
      }
      else {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c2d63);
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_174 = 0;
        iStack_178 = iVar4;
        if (0 < iVar4) {
          iStack_80 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_174 = iStack_174 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_80 < iVar4);
        }
        if (iStack_174 == iStack_178) goto LAB_004bbc61;
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c2dc3);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      iStack_170 = iVar9;
      if (0 < iVar9) {
        iStack_7c = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_7c < iVar9);
      }
      if (iVar4 == iStack_170) {
        DAT_01d22c70 = 0;
        uVar8 = (uint)(*(int *)(param_1 + 0x1f8) == 0);
        *(uint *)(param_1 + 0x1f8) = uVar8;
        if (uVar8 == 0) {
          pcVar13 = "Enemies thawed";
        }
        else {
          pcVar13 = "Enemies frozen";
        }
        uVar5 = FUN_00508960(pcVar13,0x40a00000);
        FUN_004b46b0(param_1,uVar5);
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c2e22);
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      iStack_168 = 0;
      iStack_16c = iVar4;
      if (0 < iVar4) {
        iStack_78 = 0;
        do {
          bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (bVar2 == uVar8) {
            iStack_168 = iStack_168 + 1;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_78 < iVar4);
      }
      if (iStack_168 == iStack_16c) {
LAB_004bbe1c:
        DAT_01d22c70 = 0;
        FUN_004bafd0("CFlintlock");
        FUN_004bafd0("CBlunderbus");
        FUN_004bafd0("CFirestaff");
        FUN_004bafd0("CBurncross");
        FUN_004bafd0("CExorcism");
        FUN_004bafd0("CStorm");
        FUN_004bafd0("CBindEvil");
        FUN_004bafd0("CDisease");
        FUN_004bafd0("CHeal");
        FUN_004bafd0("CLightStaff");
        FUN_004bafd0("CHolycross");
        FUN_004bafd0(&DAT_005c2efb);
        uVar5 = FUN_00508960("You've got all the weapons",0x40a00000);
        FUN_004b46b0(param_1,uVar5);
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
      }
      else {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c2e58);
        iStack_160 = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_164 = iVar4;
        if (0 < iVar4) {
          iStack_74 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_160 = iStack_160 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_74 < iVar4);
        }
        if (iStack_160 == iStack_164) goto LAB_004bbe1c;
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c2f27);
      iStack_158 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      iStack_15c = iVar4;
      if (0 < iVar4) {
        iStack_70 = 0;
        do {
          bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (bVar2 == uVar8) {
            iStack_158 = iStack_158 + 1;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_70 < iVar4);
      }
      iVar4 = _DAT_01d5ba14;
      if (iStack_158 == iStack_15c) {
        DAT_01d22c70 = 0;
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538) = 0x42c80000;
        *(uint *)(*(int *)(iVar4 * 4 + 0x1d5ba04) + 0x20b80) = 100;
        *(uint *)(*(int *)(iVar4 * 4 + 0x1d5ba04) + 0x20b84) = 0x32;
        uVar5 = FUN_00508960("You just got more bullets, mana, and health",0x40a00000);
        FUN_004b46b0(param_1,uVar5);
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c2f87);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      iStack_154 = iVar9;
      if (0 < iVar9) {
        iStack_6c = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_6c < iVar9);
      }
      if (iVar4 == iStack_154) {
        DAT_01d22c70 = 0;
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b84) = 0x32;
        uVar5 = FUN_00508960("You just got more bullets",0x40a00000);
        FUN_004b46b0(param_1,uVar5);
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c2fe3);
        iStack_14c = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_150 = iVar4;
        if (0 < iVar4) {
          iStack_68 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_14c = iStack_14c + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_68 < iVar4);
        }
        if (iStack_14c == iStack_150) {
          DAT_01d22c70 = 0;
        }
        else {
          iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
          if ((iVar4 == 0) ||
             (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x13), iVar4 == 0))
          goto LAB_004bc479;
        }
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
        while (iVar4 = FUN_0047ecf0(0x01C5B0E4,"Raise an event",&DAT_005fe970,100,1),
              iVar4 != 0) {
          iVar4 = FUN_00491b40(0x01C6E360,&DAT_005fe970);
          if (iVar4 == 0) {
            FUN_0048c150(0x01C6E360,&DAT_005fe970);
            break;
          }
          FUN_0047cf40(0x01C5B0E4,iVar4);
        }
      }
LAB_004bc479:
      pcVar6 = (char *)FUN_005089e0(&DAT_005c3031);
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      iStack_144 = 0;
      iStack_148 = iVar4;
      if (0 < iVar4) {
        iStack_64 = 0;
        do {
          bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (bVar2 == uVar8) {
            iStack_144 = iStack_144 + 1;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_64 < iVar4);
      }
      if (iStack_144 == iStack_148) {
        DAT_01d22c70 = 0;
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
        iStack_60 = 0;
        for (iStack_18 = 0; iStack_18 < *(int *)(0x01ED78C8 + 0x150fec); iStack_18 = iStack_18 + 1
            ) {
          iVar4 = *(int *)(0x01ED78C8 + iStack_60 + 0x150ff0);
          iVar9 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          afStack_1e4[2] = *(float *)(iVar9 + 0x20) - *(float *)(iVar4 + 0x20);
          afStack_1e4[3] = *(float *)(iVar9 + 0x24) - *(float *)(iVar4 + 0x24);
          fStack_1d4 = *(float *)(iVar9 + 0x28) - *(float *)(iVar4 + 0x28);
          fStack_1e8 = afStack_1e4[2];
          afStack_1e4[(uint)bVar12 * -2] = afStack_1e4[(uint)bVar12 * -2 + 3];
          afStack_1e4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_1e4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          if (SQRT(afStack_1e4[1] * afStack_1e4[1] +
                   fStack_1e8 * fStack_1e8 + afStack_1e4[0] * afStack_1e4[0]) <=
              (float)_DAT_005c3538) {
            FUN_0042abb0(auStack_224);
            uStack_220 = 0x42c80000;
            (**(code **)(*(int *)(iVar4 + 0x154) + 0x108))(iVar4,auStack_224);
          }
          iStack_60 = iStack_60 + 4;
        }
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c3072);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      iStack_140 = iVar9;
      if (0 < iVar9) {
        iStack_5c = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_5c < iVar9);
      }
      if (iVar4 == iStack_140) {
        DAT_01d22c70 = 0;
        uVar8 = (uint)(*(int *)(param_1 + 0x204) == 0);
        *(uint *)(param_1 + 0x204) = uVar8;
        if (uVar8 == 0) {
          pcVar13 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar13 = "Gratuitous dismemberment enabled";
        }
        uVar5 = FUN_00508960(pcVar13,0x40a00000);
        FUN_004b46b0(param_1,uVar5);
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c30f7);
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_138 = 0;
        iStack_13c = iVar4;
        if (0 < iVar4) {
          iStack_58 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_138 = iStack_138 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_58 < iVar4);
        }
        if (iStack_138 == iStack_13c) {
          DAT_01d22c70 = (byte)iStack_138 ^ (byte)iStack_13c;
          FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
          *(uint *)(param_1 + 0x288) = 2;
          FUN_0047ea10(0x01C5B0E4,"Enter time factor",local_134,1,0x3c23d70a,0x40800000,1
                      );
        }
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c3147);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      iStack_130 = iVar9;
      if (0 < iVar9) {
        iStack_54 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_54 < iVar9);
      }
      if (iVar4 == iStack_130) {
        DAT_01d22c70 = 0;
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
        *(uint *)(param_1 + 0x214) = (uint)(*(int *)(param_1 + 0x214) == 0);
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c3186);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      iStack_12c = iVar9;
      if (0 < iVar9) {
        iStack_50 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_50 < iVar9);
      }
      if (iVar4 == iStack_12c) {
        DAT_01d22c70 = 0;
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
        *(uint *)(param_1 + 0x218) = (uint)(*(int *)(param_1 + 0x218) == 0);
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c31c5);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      iStack_128 = iVar9;
      if (0 < iVar9) {
        iStack_4c = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_4c < iVar9);
      }
      if (iVar4 == iStack_128) {
        iVar4 = *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20a20);
        DAT_01d22c70 = 0;
        if (iVar4 != 0) {
          if (*(int *)(iVar4 + 0x56c) == 5) {
            *(uint *)(iVar4 + 0x56c) = 0;
            uVar5 = FUN_00508960("Flaming ammo disabled",0x40a00000);
          }
          else {
            iVar9 = FUN_0040c790(iVar4,"CCrossbow");
            if (iVar9 == 0) {
              uVar5 = FUN_00508960("You can only use flaming ammo on the crossbow.",0x40a00000);
            }
            else {
              *(uint *)(iVar4 + 0x56c) = 5;
              uVar5 = FUN_00508960("Flaming ammo enabled.",0x40a00000);
            }
          }
          FUN_004b46b0(param_1,uVar5);
        }
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c3270);
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_120 = 0;
        iStack_124 = iVar4;
        if (0 < iVar4) {
          iStack_48 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_120 = iStack_120 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_48 < iVar4);
        }
        if (iStack_120 == iStack_124) {
          DAT_01d22c70 = 0;
          FUN_00450a40(0x2038f4c,0xff00ff);
          FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
        }
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c32af);
        iStack_118 = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_11c = iVar4;
        if (0 < iVar4) {
          iStack_44 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_118 = iStack_118 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_44 < iVar4);
        }
        if (iStack_118 == iStack_11c) {
          DAT_01d22c70 = 0;
          *(uint *)(0x01ED78C8 + 0x14d150) = 0;
          FUN_0044f680(0x2038f4c,0);
        }
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c32e1);
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_110 = 0;
        iStack_114 = iVar4;
        if (0 < iVar4) {
          iStack_40 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_110 = iStack_110 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_40 < iVar4);
        }
        if (iStack_110 == iStack_114) {
          DAT_01d22c70 = 0;
          uVar8 = (uint)(*(int *)(param_1 + 0x224) == 0);
          *(uint *)(param_1 + 0x224) = uVar8;
          if (uVar8 == 0) {
            pcVar13 = "Single step disabled";
          }
          else {
            pcVar13 = "Single step enabled";
          }
          uVar5 = FUN_00508960(pcVar13,0x40a00000);
          FUN_004b46b0(param_1,uVar5);
        }
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c333c);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      iStack_10c = iVar9;
      if (0 < iVar9) {
        iStack_3c = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_3c < iVar9);
      }
      if (iVar4 == iStack_10c) {
        DAT_01d22c70 = 0;
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8) = 0x42c80000;
        uVar5 = FUN_00508960("Flashlight battery restored",0x40a00000);
        FUN_004b46b0(param_1,uVar5);
        FUN_005609b0(0x02CF5680,0,"cheat-1.wav");
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c339a);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      iStack_108 = iVar9;
      if (0 < iVar9) {
        iStack_38 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_38 < iVar9);
      }
      if (iVar4 == iStack_108) {
        DAT_01d22c70 = 0;
        FUN_0057d050(0x02D0C1A0,1);
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c33d4);
      iVar4 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar9 = ~uVar8 - 1;
      iStack_104 = iVar9;
      if (0 < iVar9) {
        iStack_34 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar9 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (uVar8 == local_14) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_34 < iVar9);
      }
      if (iVar4 == iStack_104) {
        DAT_01d22c70 = 0;
        FUN_0057d050(0x02D0C1A0,2);
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c340b);
      iStack_fc = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      iStack_100 = iVar4;
      if (0 < iVar4) {
        iStack_30 = 0;
        do {
          bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (bVar2 == uVar8) {
            iStack_fc = iStack_fc + 1;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_30 < iVar4);
      }
      if (iStack_fc == iStack_100) {
        DAT_01d22c70 = 0;
        uVar8 = (uint)(*(int *)(param_1 + 0x228) == 0);
        fStack_f8 = 0.25;
        *(uint *)(param_1 + 0x228) = uVar8;
        if (uVar8 == 0) {
          pcVar13 = "burp1.wav";
        }
        else {
          pcVar13 = "burp2.wav";
          fStack_f8 = 4.0;
        }
        FUN_005609b0(0x02CF5680,0,pcVar13);
        iStack_2c = 0;
        for (iStack_1c = 0; iStack_1c < *(int *)(0x01ED78C8 + 0x14f0a8); iStack_1c = iStack_1c + 1
            ) {
          iVar4 = *(int *)(0x01ED78C8 + iStack_2c + 0x14f0ac);
          iStack_f4 = iVar4 + 0x158;
          if (*(char *)(iVar4 + 0x24a8) != '\0') {
            iVar4 = FUN_0054eac0(iStack_f4);
            iStack_f0 = iVar4;
            iVar9 = FUN_00548090(iVar4,"Bip01 head",0);
            if (iVar9 != -1) {
              iVar7 = iVar9 * 4 + iStack_f4;
              iStack_ec = iStack_f4;
              fStack_e8 = fStack_f8;
              *(float *)(iVar7 + 0x514) = *(float *)(iVar7 + 0x514) * fStack_f8;
              iVar10 = 0;
              iVar7 = iVar4;
              iStack_e4 = iVar9;
              if (0 < *(int *)(iVar4 + 0x1de78)) {
                do {
                  if (iStack_e4 == *(int *)(iVar7 + 0x1de9c)) {
                    FUN_004bb090(iStack_ec,iVar4,fStack_e8,iVar10);
                  }
                  iVar10 = iVar10 + 1;
                  iVar7 = iVar7 + 0x24;
                } while (iVar10 < *(int *)(iVar4 + 0x1de78));
              }
            }
            iVar9 = FUN_00548090(iStack_f0,"bipltit02",0);
            iVar4 = iStack_f0;
            if (iVar9 != -1) {
              iVar7 = iVar9 * 4 + iStack_f4;
              iStack_e0 = iStack_f4;
              fStack_dc = fStack_f8;
              *(float *)(iVar7 + 0x514) = *(float *)(iVar7 + 0x514) * fStack_f8;
              iVar10 = 0;
              iVar7 = iStack_f0;
              iStack_d8 = iVar9;
              if (0 < *(int *)(iStack_f0 + 0x1de78)) {
                do {
                  if (iStack_d8 == *(int *)(iVar7 + 0x1de9c)) {
                    FUN_004bb090(iStack_e0,iVar4,fStack_dc,iVar10);
                  }
                  iVar10 = iVar10 + 1;
                  iVar7 = iVar7 + 0x24;
                } while (iVar10 < *(int *)(iVar4 + 0x1de78));
              }
            }
            iVar9 = FUN_00548090(iStack_f0,"biprtit02",0);
            iVar4 = iStack_f0;
            if (iVar9 != -1) {
              iVar7 = iVar9 * 4 + iStack_f4;
              iStack_d4 = iStack_f4;
              fStack_d0 = fStack_f8;
              *(float *)(iVar7 + 0x514) = *(float *)(iVar7 + 0x514) * fStack_f8;
              iVar10 = 0;
              iVar7 = iStack_f0;
              iStack_cc = iVar9;
              if (0 < *(int *)(iStack_f0 + 0x1de78)) {
                do {
                  if (iStack_cc == *(int *)(iVar7 + 0x1de9c)) {
                    FUN_004bb090(iStack_d4,iVar4,fStack_d0,iVar10);
                  }
                  iVar10 = iVar10 + 1;
                  iVar7 = iVar7 + 0x24;
                } while (iVar10 < *(int *)(iVar4 + 0x1de78));
              }
            }
          }
          iStack_2c = iStack_2c + 4;
        }
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c3473);
        iStack_c4 = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_c8 = iVar4;
        if (0 < iVar4) {
          iStack_28 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_c4 = iStack_c4 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_28 < iVar4);
        }
        if (iStack_c4 == iStack_c8) {
          DAT_01d22c70 = 0;
          *(uint *)(param_1 + 0x23c) = (uint)(*(int *)(param_1 + 0x23c) == 0);
        }
      }
      pcVar6 = (char *)FUN_005089e0(&DAT_005c34a7);
      iStack_bc = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      iStack_c0 = iVar4;
      if (0 < iVar4) {
        iStack_24 = 0;
        do {
          bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
          uVar8 = FUN_005a4120(*pcVar6);
          if (bVar2 == uVar8) {
            iStack_bc = iStack_bc + 1;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_24 < iVar4);
      }
      if (iStack_bc == iStack_c0) {
        DAT_01d22c70 = 0;
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538) = 0x42c80000;
        uVar5 = FUN_00508960("Health restored.",0x40a00000);
        FUN_004b46b0(param_1,uVar5);
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        pcVar6 = (char *)FUN_005089e0(&DAT_005c34ec);
        iStack_b4 = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_b8 = iVar4;
        if (0 < iVar4) {
          iStack_20 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1d22c6f);
            uVar8 = FUN_005a4120(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_b4 = iStack_b4 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_20 < iVar4);
        }
        if (iStack_b4 == iStack_b8) {
          DAT_01d22c70 = 0;
          _DAT_01d22c50 = (uint)(_DAT_01d22c50 == 0);
        }
      }
    }
  }
  return;
}
