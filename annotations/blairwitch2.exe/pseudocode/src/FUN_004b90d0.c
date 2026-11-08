// Name: FUN_004b90d0
// Address: 004b90d0
// Address Range: [[004b90d0, 004bb047]]
// Convention: unknown
// Signature: void FUN_004b90d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b90d0(int param_1)

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
  float afStackY_11b0 [907];
  char *pcVar13;
  byte local_368 [256];
  char acStack_268 [100];
  byte auStack_204 [4];
  uint uStack_200;
  float fStack_1c8;
  float afStack_1c4 [4];
  float fStack_1b4;
  double local_1b0;
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
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
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
  int iStack_134;
  int iStack_130;
  int local_12c;
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
  float fStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  float fStack_dc;
  int iStack_d8;
  int iStack_d4;
  float fStack_d0;
  int iStack_cc;
  int iStack_c8;
  float fStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
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
  uint local_18;
  
  bVar12 = 0;
  if (_DAT_01cb7788 == 0) {
    iVar4 = FUN_0048e340(0x01C38BC0,"headOfHorror");
    if ((iVar4 != 0) && (*(int *)(0x01CB6900 + 0x230) != 0x29a)) {
      *(uint *)(0x01CB6900 + 0x230) = 0x29a;
      uVar5 = FUN_0050fe80("The horror has been unleashed.",0x40a00000);
      FUN_004b31a0(param_1,uVar5);
    }
    if ((*(int *)(param_1 + 0x1f8) == 0) &&
       (iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x44), iVar4 != 0)) {
      uVar5 = FUN_0050fe80("Enter cheat code",acStack_268,100,0);
      iVar4 = FUN_0047db10(0x01C25594,uVar5);
      if (iVar4 != 0) {
        iVar4 = 0;
        while (acStack_268[0] != '\0') {
          FUN_0058eb70(acStack_268[iVar4]);
          iVar9 = iVar4 + 1;
          iVar4 = iVar4 + 1;
          acStack_268[0] = acStack_268[iVar9];
        }
      }
    }
    local_12c = param_1 + 0x208;
    while( true ) {
      iVar4 = FUN_0058eb40();
      if (iVar4 == 0) break;
      DAT_01cb80f8 = FUN_004dfea0(0x01D02F84);
      iVar4 = 0x13;
      do {
        iVar9 = iVar4 + -1;
        (&DAT_01cb80f8)[iVar4] = *(byte *)(iVar4 + 0x1cb80f7);
        iVar4 = iVar9;
      } while (0 < iVar9);
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d7a93);
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
      local_1a8 = iVar9;
      if (0 < iVar9) {
        local_a8 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (local_a8 < iVar9);
      }
      if (iVar4 == local_1a8) {
LAB_004b9228:
        DAT_01cb80f8 = 0;
        uVar5 = FUN_0050fe80(&DAT_005d7b01,0x40a00000);
        FUN_004b31a0(param_1,uVar5);
        *(uint *)(param_1 + 0x22c) = (uint)(*(int *)(param_1 + 0x22c) == 0);
      }
      else {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d7ac7);
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        local_1a0 = 0;
        local_1a4 = iVar4;
        if (0 < iVar4) {
          local_a4 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              local_1a0 = local_1a0 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_a4 < iVar4);
        }
        if (local_1a0 == local_1a4) goto LAB_004b9228;
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d7b05);
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
      local_19c = iVar9;
      if (0 < iVar9) {
        local_a0 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (local_a0 < iVar9);
      }
      if (iVar4 == local_19c) {
        DAT_01cb80f8 = 0;
        if (*(int *)(param_1 + 0x224) == 0) {
          uVar5 = FUN_0058e9e0();
          *(uint *)(param_1 + 0x224) = 1;
          *(uint *)(param_1 + 0x288) = uVar5;
          *(uint *)(param_1 + 0x28c) = 0;
        }
        else {
          iVar4 = FUN_0058e9e0();
          local_18 = iVar4 - *(int *)(param_1 + 0x288);
          dVar3 = (double)(int)local_18 * _DAT_005d83d3;
          *(uint *)(param_1 + 0x224) = 0;
          local_1b0 = (double)*(int *)(param_1 + 0x28c) / (dVar3 * _DAT_005d83db);
          FUN_005b7790(local_368,"FPS: %3.2lf",local_1b0);
          FUN_004b31a0(param_1,local_368,0x40a00000);
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d7b45);
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        local_194 = 0;
        local_198 = iVar4;
        if (0 < iVar4) {
          local_9c = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              local_194 = local_194 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_9c < iVar4);
        }
        if (local_194 == local_198) {
          iVar4 = *(int *)(param_1 + 0x228) + 1;
          DAT_01cb80f8 = 0;
          *(int *)(param_1 + 0x228) = iVar4;
          if (2 < iVar4) {
            *(uint *)(param_1 + 0x228) = 0;
          }
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d7b7a);
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
          local_98 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              local_18c = local_18c + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_98 < iVar4);
        }
        if (local_18c == local_190) {
          DAT_01cb80f8 = 0;
          uVar8 = (uint)(*(int *)(param_1 + 500) == 0);
          *(uint *)(param_1 + 500) = uVar8;
          if (uVar8 == 0) {
            pcVar13 = "Event debug off";
          }
          else {
            pcVar13 = "Event debug on";
          }
          uVar5 = FUN_0050fe80(pcVar13,0x40a00000);
          FUN_004b31a0(param_1,uVar5);
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d7bcc);
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
          local_94 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              local_184 = local_184 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_94 < iVar4);
        }
        if (local_184 == local_188) {
          DAT_01cb80f8 = (byte)local_184 ^ (byte)local_188;
          uVar8 = (uint)(*(int *)(param_1 + 0x1f8) == 0);
          *(uint *)(param_1 + 0x1f8) = uVar8;
          if (uVar8 == 0) {
            uVar5 = FUN_0050fe80("Script debug off",0x40a00000);
            FUN_004b31a0(param_1,uVar5);
            iVar4 = 0x01E661B8;
            uVar5 = DAT_006141bc;
            *(uint *)(param_1 + 0x298) = 0;
          }
          else {
            uVar5 = FUN_0050fe80("Script debug on",0x40a00000);
            FUN_004b31a0(param_1,uVar5);
            iVar4 = 0x01E661B8;
            uVar5 = 0xf0;
            *(uint *)(param_1 + 0x298) = 1;
          }
          FUN_0052e910(iVar4,0,0,uVar5);
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d7c21);
        local_17c = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        local_180 = iVar4;
        if (0 < iVar4) {
          local_90 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              local_17c = local_17c + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_90 < iVar4);
        }
        if (local_17c == local_180) {
          DAT_01cb80f8 = (byte)((uint)local_17c >> 8) ^ (byte)((uint)local_180 >> 8);
          uVar8 = (uint)(*(int *)(param_1 + 0x214) == 0);
          *(uint *)(param_1 + 0x214) = uVar8;
          if (uVar8 == 0) {
            pcVar13 = "Memory debugging off";
          }
          else {
            pcVar13 = "Memory debugging on";
          }
          uVar5 = FUN_0050fe80(pcVar13,0x40a00000);
          FUN_004b31a0(param_1,uVar5);
        }
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d7c7e);
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
      local_178 = iVar9;
      if (0 < iVar9) {
        local_8c = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (local_8c < iVar9);
      }
      if (iVar4 == local_178) {
        DAT_01cb80f8 = 0;
        *(uint *)(param_1 + 0xd8) = 2;
        uVar5 = FUN_0050fe80("Manual aim enabled",0x40a00000);
        FUN_004b31a0(param_1,uVar5);
        *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24378) =
             *(uint *)(param_1 + 0xd8);
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d7cc5);
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
      local_174 = iVar9;
      if (0 < iVar9) {
        local_88 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (local_88 < iVar9);
      }
      if (iVar4 == local_174) {
        DAT_01cb80f8 = 0;
        *(uint *)(param_1 + 0xd8) = 0;
        uVar5 = FUN_0050fe80("Auto aim enabled",0x40a00000);
        FUN_004b31a0(param_1,uVar5);
        *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24378) =
             *(uint *)(param_1 + 0xd8);
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d7d08);
        local_16c = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        local_170 = iVar4;
        if (0 < iVar4) {
          local_84 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              local_16c = local_16c + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_84 < iVar4);
        }
        if (local_16c == local_170) {
          DAT_01cb80f8 = 0;
          _DAT_01cb80d4 = 0;
          _DAT_01cb80dc = 0;
          iVar4 = FUN_0047d800(0x01C25594,"?Enter Movie FPS" + 1,&DAT_006164a0,1,
                               0x3e800000,0x43700000,1);
          if ((((iVar4 != 0) &&
               (iVar4 = FUN_0047d730(0x01C25594,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",&DAT_01cb80d8,
                                     1,0,99999,1), iVar4 != 0)) &&
              (iVar4 = FUN_0047d730(0x01C25594,"Enter image width",&DAT_006164a4,1,1,9999
                                    ,1), iVar4 != 0)) &&
             (iVar4 = FUN_0047d730(0x01C25594,"Enter image height",&DAT_006164a8,1,1,9999
                                   ,1), iVar4 != 0)) {
            FUN_0047bda0(0x01C25594,"Press CTRL+V to begin recording.");
            _DAT_01cb80d0 = 1;
          }
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d7d3b);
        local_164 = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        local_168 = iVar4;
        if (0 < iVar4) {
          local_80 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              local_164 = local_164 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (local_80 < iVar4);
        }
        if (local_164 == local_168) {
          DAT_01cb80f8 = 0;
          *(uint *)(param_1 + 0x238) = (uint)(*(int *)(param_1 + 0x238) == 0);
        }
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d7d72);
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
      local_160 = iVar9;
      if (0 < iVar9) {
        local_7c = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (local_7c < iVar9);
      }
      if (iVar4 == local_160) {
        DAT_01cb80f8 = 0;
        iVar4 = FUN_004db830(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,
                             "Skeleton_key");
        if (iVar4 == 0) {
          pcVar6 = (char *)FUN_0040c5a0("CKeyActor");
          pcVar11 = "Skeleton_key";
          (**(code **)(*(int *)(pcVar6 + 0x2b0) + 8))(pcVar6);
          pcVar6[0x430] = -1;
          pcVar6[0x431] = -1;
          pcVar6[0x432] = -1;
          pcVar6[0x433] = -1;
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
          FUN_004dadb0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,pcVar6,1,0);
          uVar5 = FUN_0050fe80("You have the skeleton key",0x40a00000);
          FUN_004b31a0(param_1,uVar5);
        }
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d7de9);
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
      iStack_15c = iVar9;
      if (0 < iVar9) {
        iStack_78 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_78 < iVar9);
      }
      if (iVar4 == iStack_15c) {
        DAT_01cb80f8 = 0;
        uVar8 = (uint)(*(int *)(param_1 + 0x1ec) == 0);
        *(uint *)(param_1 + 0x1ec) = uVar8;
        if (uVar8 == 0) {
          uVar5 = FUN_0050fe80("God mode disabled",0x40a00000);
          FUN_004b31a0(param_1,uVar5);
        }
        else {
          uVar5 = FUN_0050fe80("God mode enabled",0x40a00000);
          FUN_004b31a0(param_1,uVar5);
          *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x25a8) = 0x42c80000;
        }
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d7e42);
      iStack_154 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      iStack_158 = iVar4;
      if (0 < iVar4) {
        iStack_74 = 0;
        do {
          bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (bVar2 == uVar8) {
            iStack_154 = iStack_154 + 1;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_74 < iVar4);
      }
      if (iStack_154 == iStack_158) {
        DAT_01cb80f8 = (byte)iStack_154 ^ (byte)iStack_158;
        uVar8 = (uint)(*(int *)(param_1 + 0x1f0) == 0);
        *(uint *)(param_1 + 0x1f0) = uVar8;
        if (uVar8 == 0) {
          pcVar13 = "Enemies thawed";
        }
        else {
          pcVar13 = "Enemies frozen";
        }
        uVar5 = FUN_0050fe80(pcVar13,0x40a00000);
        FUN_004b31a0(param_1,uVar5);
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d7e95);
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
        iStack_70 = 0;
        do {
          bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (bVar2 == uVar8) {
            iStack_14c = iStack_14c + 1;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_70 < iVar4);
      }
      if (iStack_14c == iStack_150) {
        DAT_01cb80f8 = (byte)((uint)iStack_14c >> 8) ^ (byte)((uint)iStack_150 >> 8);
        FUN_004b8e10(&DAT_005d7ecb,0);
        FUN_004b8e10("CMelee",0);
        FUN_004b8e10("CMeleeAxe",0);
        FUN_004b8e10("CCross",0);
        FUN_004b8e10("CBoxActor","Lantern");
        iVar4 = FUN_005b8be2(0x47c);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_0040ddb0(iVar4);
        }
        if (iVar4 != 0) {
          FUN_004fcda0(0x01D182F0,iVar4);
          (**(code **)(*(int *)(iVar4 + 0x2b0) + 8))(iVar4);
          *(uint *)(iVar4 + 0x474) = 0;
          FUN_0040e240(iVar4,&DAT_005d7efa);
          iVar9 = _DAT_01cedef4;
          *(uint *)(iVar4 + 0x470) = 500;
          FUN_004dadb0(*(int *)(iVar9 * 4 + 0x1cedee4) + 0x2437c,iVar4,1,0);
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d7eff);
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
          iStack_6c = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_144 = iStack_144 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_6c < iVar4);
        }
        if (iStack_144 == iStack_148) {
          DAT_01cb80f8 = 0;
        }
        else {
          iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
          if ((iVar4 == 0) ||
             (iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x13), iVar4 == 0))
          goto LAB_004ba142;
        }
        while (iVar4 = FUN_0047dae0(0x01C25594,"Raise an event",&DAT_00616430,100,1),
              iVar4 != 0) {
          iVar4 = FUN_0048e3e0(0x01C38BC0,&DAT_00616430);
          if (iVar4 == 0) {
            FUN_004894f0(0x01C38BC0,&DAT_00616430);
            break;
          }
          FUN_0047be40(0x01C25594,iVar4);
        }
      }
LAB_004ba142:
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d7f41);
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      iStack_13c = 0;
      iStack_140 = iVar4;
      if (0 < iVar4) {
        iStack_68 = 0;
        do {
          bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (bVar2 == uVar8) {
            iStack_13c = iStack_13c + 1;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_68 < iVar4);
      }
      if (iStack_13c == iStack_140) {
        DAT_01cb80f8 = 0;
        iStack_64 = 0;
        for (iStack_1c = 0; iStack_1c < *(int *)(0x01E661B8 + 0x150fec); iStack_1c = iStack_1c + 1
            ) {
          iVar4 = *(int *)(0x01E661B8 + iStack_64 + 0x150ff0);
          iVar9 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          fStack_1c8 = *(float *)(iVar9 + 0x20) - *(float *)(iVar4 + 0x20);
          afStack_1c4[0] = *(float *)(iVar9 + 0x24) - *(float *)(iVar4 + 0x24);
          afStack_1c4[1] = *(float *)(iVar9 + 0x28) - *(float *)(iVar4 + 0x28);
          afStack_1c4[2] = fStack_1c8;
          afStack_1c4[(uint)bVar12 * -2 + 3] = afStack_1c4[(uint)bVar12 * -2];
          afStack_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
               afStack_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          if (SQRT(fStack_1b4 * fStack_1b4 +
                   afStack_1c4[2] * afStack_1c4[2] + afStack_1c4[3] * afStack_1c4[3]) <=
              (float)_DAT_005d83e3) {
            FUN_004222d0(auStack_204);
            uStack_200 = 0x42c80000;
            (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x110))(iVar4,auStack_204);
          }
          iStack_64 = iStack_64 + 4;
        }
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d7f76);
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
      iStack_138 = iVar9;
      if (0 < iVar9) {
        iStack_60 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_60 < iVar9);
      }
      if (iVar4 == iStack_138) {
        DAT_01cb80f8 = 0;
        uVar8 = (uint)(*(int *)(param_1 + 0x1fc) == 0);
        *(uint *)(param_1 + 0x1fc) = uVar8;
        if (uVar8 == 0) {
          pcVar13 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar13 = "Gratuitous dismemberment enabled";
        }
        uVar5 = FUN_0050fe80(pcVar13,0x40a00000);
        FUN_004b31a0(param_1,uVar5);
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d7fef);
        iStack_130 = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_134 = iVar4;
        if (0 < iVar4) {
          iStack_5c = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_130 = iStack_130 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_5c < iVar4);
        }
        if (iStack_130 == iStack_134) {
          DAT_01cb80f8 = 0;
          FUN_0047d800(0x01C25594,"Enter time factor",local_12c,1,0x3c23d70a,0x40800000,1
                      );
        }
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d8033);
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
        iStack_58 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_58 < iVar9);
      }
      if (iVar4 == iStack_128) {
        DAT_01cb80f8 = 0;
        *(uint *)(param_1 + 0x20c) = (uint)(*(int *)(param_1 + 0x20c) == 0);
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d8066);
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
      iStack_124 = iVar9;
      if (0 < iVar9) {
        iStack_54 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_54 < iVar9);
      }
      if (iVar4 == iStack_124) {
        DAT_01cb80f8 = 0;
        *(uint *)(param_1 + 0x210) = (uint)(*(int *)(param_1 + 0x210) == 0);
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d8099);
      iStack_11c = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      iStack_120 = iVar4;
      if (0 < iVar4) {
        iStack_50 = 0;
        do {
          bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (bVar2 == uVar8) {
            iStack_11c = iStack_11c + 1;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_50 < iVar4);
      }
      if (iStack_11c == iStack_120) {
        DAT_01cb80f8 = (byte)iStack_11c ^ (byte)iStack_120;
        iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        iVar4 = *(int *)(iVar4 + 0x2498c + *(int *)(iVar4 + 0x247e4) * 4);
        if (iVar4 != 0) {
          if (*(int *)(iVar4 + 0x6c8) == 5) {
            *(uint *)(iVar4 + 0x6c8) = 0;
            uVar5 = FUN_0050fe80("Flaming ammo disabled",0x40a00000);
          }
          else {
            iVar9 = FUN_0040c840(iVar4,"CCrossbow");
            if (iVar9 == 0) {
              uVar5 = FUN_0050fe80("You can only use flaming ammo on the crossbow.",0x40a00000);
            }
            else {
              *(uint *)(iVar4 + 0x6c8) = 5;
              uVar5 = FUN_0050fe80("Flaming ammo enabled.",0x40a00000);
            }
          }
          FUN_004b31a0(param_1,uVar5);
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d8138);
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_114 = 0;
        iStack_118 = iVar4;
        if (0 < iVar4) {
          iStack_4c = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_114 = iStack_114 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_4c < iVar4);
        }
        if (iStack_114 == iStack_118) {
          DAT_01cb80f8 = (byte)((uint)iStack_114 >> 8) ^ (byte)((uint)iStack_118 >> 8);
          FUN_00443240(0x1fc7838,0xff00ff);
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d816b);
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_10c = 0;
        iStack_110 = iVar4;
        if (0 < iVar4) {
          iStack_48 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_10c = iStack_10c + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_48 < iVar4);
        }
        if (iStack_10c == iStack_110) {
          DAT_01cb80f8 = 0;
          *(uint *)(0x01E661B8 + 0x14d150) = 0;
          FUN_00441e80(0x1fc7838,0);
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d819d);
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_104 = 0;
        iStack_108 = iVar4;
        if (0 < iVar4) {
          iStack_44 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_104 = iStack_104 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_44 < iVar4);
        }
        if (iStack_104 == iStack_108) {
          DAT_01cb80f8 = 0;
          uVar8 = (uint)(*(int *)(param_1 + 0x21c) == 0);
          *(uint *)(param_1 + 0x21c) = uVar8;
          if (uVar8 == 0) {
            pcVar13 = "Single step disabled";
          }
          else {
            pcVar13 = "Single step enabled";
          }
          uVar5 = FUN_0050fe80(pcVar13,0x40a00000);
          FUN_004b31a0(param_1,uVar5);
        }
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d81f8);
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
      iStack_100 = iVar9;
      if (0 < iVar9) {
        iStack_40 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_40 < iVar9);
      }
      if (iVar4 == iStack_100) {
        DAT_01cb80f8 = 0;
        *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c) = 0x42c80000;
        uVar5 = FUN_0050fe80("Flashlight battery restored",0x40a00000);
        FUN_004b31a0(param_1,uVar5);
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d824a);
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
      iStack_fc = iVar9;
      if (0 < iVar9) {
        iStack_3c = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_3c < iVar9);
      }
      if (iVar4 == iStack_fc) {
        DAT_01cb80f8 = 0;
        FUN_0058b470(0x02661F80,1);
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d8284);
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
      iStack_f8 = iVar9;
      if (0 < iVar9) {
        iStack_38 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_38 < iVar9);
      }
      if (iVar4 == iStack_f8) {
        DAT_01cb80f8 = 0;
        FUN_0058b470(0x02661F80,2);
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d82bb);
      iStack_f0 = 0;
      uVar8 = 0xffffffff;
      pcVar13 = pcVar6;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      iStack_f4 = iVar4;
      if (0 < iVar4) {
        iStack_34 = 0;
        do {
          bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (bVar2 == uVar8) {
            iStack_f0 = iStack_f0 + 1;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_34 < iVar4);
      }
      if (iStack_f0 == iStack_f4) {
        DAT_01cb80f8 = 0;
        uVar8 = (uint)(*(int *)(param_1 + 0x220) == 0);
        fStack_ec = 0.25;
        *(uint *)(param_1 + 0x220) = uVar8;
        if (uVar8 == 0) {
          pcVar13 = "burp1.wav";
        }
        else {
          pcVar13 = "burp2.wav";
          fStack_ec = 4.0;
        }
        FUN_0055ae30(0x0264B290,0,pcVar13);
        iStack_30 = 0;
        for (iStack_20 = 0; iStack_20 < *(int *)(0x01E661B8 + 0x14f0a8); iStack_20 = iStack_20 + 1
            ) {
          iVar4 = *(int *)(0x01E661B8 + iStack_30 + 0x14f0ac);
          iStack_e8 = iVar4 + 0x2b4;
          if (*(char *)(iVar4 + 0x2514) != '\0') {
            iVar4 = FUN_00547890(iStack_e8);
            iStack_e4 = iVar4;
            iVar9 = FUN_00540e80(iVar4,"Bip01 head",0);
            if (iVar9 != -1) {
              iVar7 = iVar9 * 4 + iStack_e8;
              iStack_e0 = iStack_e8;
              fStack_dc = fStack_ec;
              *(float *)(iVar7 + 0x514) = *(float *)(iVar7 + 0x514) * fStack_ec;
              iVar10 = 0;
              iVar7 = iVar4;
              iStack_d8 = iVar9;
              if (0 < *(int *)(iVar4 + 0x1d1f8)) {
                do {
                  if (iStack_d8 == *(int *)(iVar7 + 0x1d21c)) {
                    FUN_004b9060(iStack_e0,iVar4,fStack_dc,iVar10);
                  }
                  iVar10 = iVar10 + 1;
                  iVar7 = iVar7 + 0x24;
                } while (iVar10 < *(int *)(iVar4 + 0x1d1f8));
              }
            }
            iVar9 = FUN_00540e80(iStack_e4,"bipltit02",0);
            iVar4 = iStack_e4;
            if (iVar9 != -1) {
              iVar7 = iVar9 * 4 + iStack_e8;
              iStack_d4 = iStack_e8;
              fStack_d0 = fStack_ec;
              *(float *)(iVar7 + 0x514) = *(float *)(iVar7 + 0x514) * fStack_ec;
              iVar10 = 0;
              iVar7 = iStack_e4;
              iStack_cc = iVar9;
              if (0 < *(int *)(iStack_e4 + 0x1d1f8)) {
                do {
                  if (iStack_cc == *(int *)(iVar7 + 0x1d21c)) {
                    FUN_004b9060(iStack_d4,iVar4,fStack_d0,iVar10);
                  }
                  iVar10 = iVar10 + 1;
                  iVar7 = iVar7 + 0x24;
                } while (iVar10 < *(int *)(iVar4 + 0x1d1f8));
              }
            }
            iVar9 = FUN_00540e80(iStack_e4,"biprtit02",0);
            iVar4 = iStack_e4;
            if (iVar9 != -1) {
              iVar7 = iVar9 * 4 + iStack_e8;
              iStack_c8 = iStack_e8;
              fStack_c4 = fStack_ec;
              *(float *)(iVar7 + 0x514) = *(float *)(iVar7 + 0x514) * fStack_ec;
              iVar10 = 0;
              iVar7 = iStack_e4;
              iStack_c0 = iVar9;
              if (0 < *(int *)(iStack_e4 + 0x1d1f8)) {
                do {
                  if (iStack_c0 == *(int *)(iVar7 + 0x1d21c)) {
                    FUN_004b9060(iStack_c8,iVar4,fStack_c4,iVar10);
                  }
                  iVar10 = iVar10 + 1;
                  iVar7 = iVar7 + 0x24;
                } while (iVar10 < *(int *)(iVar4 + 0x1d1f8));
              }
            }
          }
          iStack_30 = iStack_30 + 4;
        }
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d8323);
        iStack_b8 = 0;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_bc = iVar4;
        if (0 < iVar4) {
          iStack_2c = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_b8 = iStack_b8 + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_2c < iVar4);
        }
        if (iStack_b8 == iStack_bc) {
          DAT_01cb80f8 = 0;
          *(uint *)(param_1 + 0x234) = (uint)(*(int *)(param_1 + 0x234) == 0);
        }
      }
      pcVar6 = (char *)FUN_0050ff00(&DAT_005d8357);
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
      iStack_b4 = iVar9;
      if (0 < iVar9) {
        iStack_28 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar9 + 0x1cb80f7);
          uVar8 = FUN_005b8e40(*pcVar6);
          if (uVar8 == local_18) {
            iVar4 = iVar4 + 1;
          }
          iVar9 = iVar9 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iStack_28 < iVar9);
      }
      if (iVar4 == iStack_b4) {
        DAT_01cb80f8 = 0;
        *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x25a8) = 0x42c80000;
        uVar5 = FUN_0050fe80("Health restored.",0x40a00000);
        FUN_004b31a0(param_1,uVar5);
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        pcVar6 = (char *)FUN_0050ff00(&DAT_005d839c);
        uVar8 = 0xffffffff;
        pcVar13 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        iStack_ac = 0;
        iStack_b0 = iVar4;
        if (0 < iVar4) {
          iStack_24 = 0;
          do {
            bVar2 = *(byte *)(iVar4 + 0x1cb80f7);
            uVar8 = FUN_005b8e40(*pcVar6);
            if (bVar2 == uVar8) {
              iStack_ac = iStack_ac + 1;
            }
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
          } while (iStack_24 < iVar4);
        }
        if (iStack_ac == iStack_b0) {
          DAT_01cb80f8 = 0;
          _DAT_01cb80e4 = (uint)(_DAT_01cb80e4 == 0);
        }
      }
    }
  }
  return;
}
