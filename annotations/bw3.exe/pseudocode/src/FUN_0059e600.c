// Name: FUN_0059e600
// Address: 0059e600
// Address Range: [[0059e600, 005a014d]]
// Convention: unknown
// Signature: void FUN_0059e600(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059e600(int param_1,float param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  float *pfVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  float afStackY_1318 [997];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  byte auStack_36c [4];
  uint uStack_368;
  int iStack_338;
  int iStack_334;
  float fStack_330;
  float afStack_32c [5];
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float afStack_30c [3];
  float afStack_300 [3];
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  uint uStack_2e8;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  uint uStack_2d0;
  float fStack_2c4;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float afStack_29c [5];
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float afStack_27c [3];
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  uint uStack_258;
  float afStack_24c [4];
  float afStack_23c [6];
  float afStack_224 [4];
  uint uStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  uint uStack_204;
  float fStack_1f8;
  float fStack_1f4;
  float afStack_1ec [4];
  float afStack_1dc [5];
  uint uStack_1c8;
  uint uStack_1bc;
  uint uStack_1b0;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_180;
  uint uStack_174;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  float fStack_15c;
  float fStack_158;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_12c;
  float afStack_120 [3];
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [3];
  float afStack_fc [3];
  float afStack_f0 [3];
  uint uStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  float afStack_cc [3];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float afStack_b4 [3];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [3];
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  char *pcStack_70;
  char *pcStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  float *pfStack_50;
  float fStack_48;
  float fStack_40;
  float fStack_38;
  int iStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  int iStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  float fStack_14;
  
  bVar11 = 0;
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xdca0) == 0) {
    iVar4 = FUN_0040c4f0("CExorcism");
    *(int *)(param_1 + 0xdd14) = iVar4;
    (*(code *)**(uint **)(iVar4 + 0x154))(iVar4);
    pcVar8 = "Bible";
    pcVar10 = *(char **)(param_1 + 0xdd14);
    do {
      cVar1 = *pcVar8;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    FUN_004f6930(0x01D81080,*(uint *)(param_1 + 0xdd14));
    if (*(int *)(param_1 + 0xdd14) != 0) {
      *(uint *)(*(int *)(param_1 + 0xdd14) + 0xfc) = 1;
      *(uint *)(*(int *)(param_1 + 0xdd14) + 0xf8) = 0;
    }
    FUN_0054dbd0(param_1 + 0x158,*(uint *)(param_1 + 0x25a8));
    pfVar9 = afStack_e0 + 0x11;
    afStack_9c[0] = (float)uStack_1c8;
    afStack_e0[(uint)bVar11 * -2 + 0x12] = afStack_1dc[(uint)bVar11 * -2 + 6];
    afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
         afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    FUN_00408b80(param_1,pfVar9);
    uStack_150 = uStack_1bc;
    afStack_1dc[(uint)bVar11 * -2 + 0x24] = afStack_1dc[(uint)bVar11 * -2 + 9];
    afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25] =
         afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    iVar4 = *(int *)(param_1 + 0xdd14);
    *(uint *)(iVar4 + 0x20) = uStack_150;
    *(uint *)(iVar4 + 0x24) = uStack_14c;
    *(uint *)(iVar4 + 0x28) = uStack_148;
    iVar4 = *(int *)(param_1 + 0xdd14);
    if ((uint *)(iVar4 + 0x30) != (uint *)(param_1 + 0x30)) {
      *(uint *)(iVar4 + 0x30) = *(uint *)(param_1 + 0x30);
      *(uint *)(iVar4 + 0x34) = *(uint *)(param_1 + 0x34);
      *(uint *)(iVar4 + 0x38) = *(uint *)(param_1 + 0x38);
    }
    FUN_004088f0(*(uint *)(param_1 + 0xdd14));
    FUN_004319d0(param_1,0,*(uint *)(param_1 + 0xdd14),0,0);
    *(uint *)(param_1 + 0xdca0) = 1;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
  if (*(int *)(param_1 + 0xcde4) == 0) {
    iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
    if (iVar4 == 0) {
      FUN_004fc0d0(param_1 + 0x158,0,1);
      return;
    }
    *(uint *)(0x01D2130C + 0x244) = 1;
    *(uint *)(param_1 + 0xcde4) = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  iVar4 = *(int *)(param_1 + 0xcde4);
  if (iVar4 == 0) {
    return;
  }
  fStack_288 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
  fStack_284 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
  fStack_280 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
  afStack_e0[2] = fStack_288;
  afStack_e0[(uint)bVar11 * -2 + 3] = afStack_29c[(uint)bVar11 * -2 + 6];
  afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
  if (afStack_32c + 0x20 != afStack_e0 + 2) {
    fStack_2ac = afStack_e0[2];
    fStack_2a8 = afStack_e0[3];
    fStack_2a4 = fStack_d0;
  }
  fStack_64 = fStack_2a4 * fStack_2a4 + fStack_2ac * fStack_2ac + fStack_2a8 * fStack_2a8;
  fStack_24 = (float)(((int)fStack_64 >> 1) + _DAT_01d1a0a4);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  pcStack_1c = (char *)(param_1 + 0x30);
  fStack_68 = param_2 * *(float *)(param_1 + 0xcdcc);
  iStack_20 = param_1 + 0x158;
  while (0.0 < fStack_68) {
    uVar5 = FUN_004fbb70(iStack_20,&fStack_68);
    if (uVar5 < 0x583) {
      if (uVar5 < 0x57b) {
        if (uVar5 < 0x4b5) {
          if (uVar5 < 0x4b2) {
            FUN_00433fb0(param_1,uVar5);
          }
          else if (uVar5 < 0x4b3) {
            *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3254) = 0x41700000;
            *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3258) = 4;
          }
          else if (uVar5 == 0x4b3) {
            pcVar8 = &DAT_005da226;
            pcStack_18 = (char *)FUN_0040c4f0("CZombie");
            pcVar10 = pcStack_18;
            do {
              cVar1 = *pcVar8;
              *pcVar10 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar8[1];
              pcVar8 = pcVar8 + 2;
              pcVar10[1] = cVar1;
              pcVar10 = pcVar10 + 2;
            } while (cVar1 != '\0');
            afStack_1ec[2] = 3.0;
            afStack_1ec[0] = 0.0;
            afStack_1ec[1] = 0.0;
            FUN_00408b80(param_1,afStack_224 + 0xe);
            pcVar10 = pcStack_18;
            uStack_270 = uStack_2e8;
            afStack_29c[(uint)bVar11 * -2 + 0xc] = afStack_32c[(uint)bVar11 * -2 + 0x12];
            afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
                 afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
            *(uint *)(pcVar10 + 0x20) = uStack_270;
            *(uint *)(pcVar10 + 0x24) = uStack_26c;
            *(uint *)(pcVar10 + 0x28) = uStack_268;
            if (pcVar10 + 0x30 != pcStack_1c) {
              *(uint *)(pcVar10 + 0x30) = *(uint *)pcStack_1c;
              *(uint *)(pcVar10 + 0x34) = *(uint *)(pcStack_1c + 4);
              *(uint *)(pcVar10 + 0x38) = *(uint *)(pcStack_1c + 8);
            }
            pcVar10 = pcStack_18 + 0x158;
            FUN_0054eae0(pcVar10,"newzomb1.dfm");
            pcStack_18[0x27b8] = '\0';
            pcStack_18[0x27b9] = '\0';
            pcStack_18[0x27ba] = -0x80;
            pcStack_18[0x27bb] = '?';
            (*(code *)**(uint **)(pcStack_18 + 0x154))(pcStack_18);
            uVar6 = FUN_004fc310(pcVar10,"stand",1);
            uVar6 = FUN_004fb9c0(uVar6);
            FUN_004fc420(pcVar10,uVar6,0);
            uVar6 = 0x01D81080;
            pcStack_18[0x2538] = '\0';
            pcStack_18[0x2539] = '\0';
            pcStack_18[0x253a] = ' ';
            pcStack_18[0x253b] = 'A';
            FUN_004f6930(uVar6,pcStack_18);
            pcVar8 = &DAT_005da249;
            pcStack_70 = (char *)FUN_0040c4f0("CZombie");
            pcVar10 = pcStack_70;
            do {
              cVar1 = *pcVar8;
              *pcVar10 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar8[1];
              pcVar8 = pcVar8 + 2;
              pcVar10[1] = cVar1;
              pcVar10 = pcVar10 + 2;
            } while (cVar1 != '\0');
            afStack_24c[0] = 3.0;
            afStack_24c[2] = 3.0;
            afStack_24c[1] = 0.0;
            pcStack_18 = pcStack_70;
            FUN_00408b80(param_1,afStack_29c + 0x14);
            afStack_224[2] = (float)uStack_1b0;
            afStack_224[(uint)bVar11 * -2 + 3] = afStack_1dc[(uint)bVar11 * -2 + 0xc];
            afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
            *(float *)(pcStack_70 + 0x20) = afStack_224[2];
            *(float *)(pcStack_70 + 0x24) = afStack_224[3];
            *(uint *)(pcStack_70 + 0x28) = uStack_214;
            if (pcStack_70 + 0x30 != pcStack_1c) {
              *(uint *)(pcStack_70 + 0x30) = *(uint *)pcStack_1c;
              *(uint *)(pcStack_70 + 0x34) = *(uint *)(pcStack_1c + 4);
              *(uint *)(pcStack_70 + 0x38) = *(uint *)(pcStack_1c + 8);
            }
            pcVar8 = pcStack_18 + 0x158;
            FUN_0054eae0(pcVar8,"newzomb1.dfm");
            pcVar10 = pcStack_18;
            pcVar10[0x27b8] = '\0';
            pcVar10[0x27b9] = '\0';
            pcVar10[0x27ba] = -0x80;
            pcVar10[0x27bb] = '?';
            (*(code *)**(uint **)(pcStack_18 + 0x154))(pcStack_18);
            uVar6 = FUN_004fc310(pcVar8,"stand",1);
            uVar6 = FUN_004fb9c0(uVar6);
            FUN_004fc420(pcVar8,uVar6,0);
            uVar6 = 0x01D81080;
            pcVar10[0x2538] = '\0';
            pcVar10[0x2539] = '\0';
            pcVar10[0x253a] = ' ';
            pcVar10[0x253b] = 'A';
            FUN_004f6930(uVar6,pcVar10);
            pcVar8 = &DAT_005da26c;
            pcStack_6c = (char *)FUN_0040c4f0("CZombie");
            pcVar10 = pcStack_6c;
            do {
              cVar1 = *pcVar8;
              *pcVar10 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar8[1];
              pcVar8 = pcVar8 + 2;
              pcVar10[1] = cVar1;
              pcVar10 = pcVar10 + 2;
            } while (cVar1 != '\0');
            afStack_23c[2] = -3.0;
            afStack_23c[3] = 0.0;
            afStack_23c[4] = 3.0;
            pcStack_18 = pcStack_6c;
            FUN_00408b80(param_1,afStack_23c + 2);
            uStack_168 = uStack_174;
            afStack_1dc[(uint)bVar11 * -2 + 0x1e] = afStack_1dc[(uint)bVar11 * -2 + 0x1b];
            afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
                 afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c];
            *(uint *)(pcStack_6c + 0x20) = uStack_168;
            *(uint *)(pcStack_6c + 0x24) = uStack_164;
            *(uint *)(pcStack_6c + 0x28) = uStack_160;
            if (pcStack_6c + 0x30 != pcStack_1c) {
              *(uint *)(pcStack_6c + 0x30) = *(uint *)pcStack_1c;
              *(uint *)(pcStack_6c + 0x34) = *(uint *)(pcStack_1c + 4);
              *(uint *)(pcStack_6c + 0x38) = *(uint *)(pcStack_1c + 8);
            }
            pcVar10 = pcStack_18 + 0x158;
            FUN_0054eae0(pcVar10,"newzomb1.dfm");
            pcStack_18[0x27b8] = '\0';
            pcStack_18[0x27b9] = '\0';
            pcStack_18[0x27ba] = -0x80;
            pcStack_18[0x27bb] = '?';
            (*(code *)**(uint **)(pcStack_18 + 0x154))(pcStack_18);
            uVar6 = FUN_004fc310(pcVar10,"stand",1);
            uVar6 = FUN_004fb9c0(uVar6);
            FUN_004fc420(pcVar10,uVar6,0);
            uVar6 = 0x01D81080;
            pcStack_18[0x2538] = '\0';
            pcStack_18[0x2539] = '\0';
            pcStack_18[0x253a] = ' ';
            pcStack_18[0x253b] = 'A';
            FUN_004f6930(uVar6,pcStack_18);
          }
          else {
            FUN_00433fb0(param_1,uVar5);
          }
        }
        else if (uVar5 < 0x4b6) {
          uVar15 = 2;
          uVar14 = 0;
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          uVar13 = 0;
          uVar6 = 0x40800000;
          pfVar9 = (float *)(iVar4 + 0x24 + (uint)bVar11 * -8);
          fStack_15c = *(float *)(iVar4 + 0x20);
          afStack_1dc[(uint)bVar11 * -2 + 0x21] = *pfVar9;
          afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22] = pfVar9[(uint)bVar11 * -2 + 1];
          fStack_158 = fStack_158 + _DAT_005da4f6;
          FUN_004a36e0(0x01C73654,afStack_1dc + 0x20,uVar6,uVar13,uVar14,uVar15);
          *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3254) = 0x40a00000;
          *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3258) = 3;
        }
        else if (uVar5 < 0x579) {
          if (uVar5 == 0x578) {
            iVar4 = FUN_00556700(*(uint *)(param_1 + 0xdca4));
            if (iVar4 == 0) {
              uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"stydem_stand.wav");
              *(uint *)(param_1 + 0xdca4) = uVar6;
            }
          }
          else {
            FUN_00433fb0(param_1,uVar5);
          }
        }
        else if (uVar5 < 0x57a) {
          iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
          if (iVar4 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"stydem_walk.wav");
            *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
          }
        }
        else {
          iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
          if (iVar4 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"stydem_run.wav");
            *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
          }
        }
      }
      else if (uVar5 < 0x57c) {
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stydem_attack.wav");
          *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
        }
      }
      else if (uVar5 < 0x57f) {
        if (uVar5 < 0x57d) {
          iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
          if (iVar4 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"stydem_damage.wav");
            *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
          }
        }
        else if (uVar5 < 0x57e) {
          iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
          if (iVar4 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"stydem_die.wav");
            *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
          }
        }
        else {
          iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
          if (iVar4 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"stydem_stand_fly.wav");
            *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
          }
        }
      }
      else if (uVar5 < 0x580) {
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stydem_walk_fly.wav");
          *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
        }
      }
      else if (uVar5 < 0x581) {
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stydem_run_fly.wav");
          *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
        }
      }
      else if (uVar5 < 0x582) {
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stydem_attack_fly.wav");
          *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
        }
      }
      else {
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stydem_warning_fly_spell.wav");
          *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
        }
      }
    }
    else if (uVar5 < 0x584) {
      iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
      if (iVar4 == 0) {
        uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"stydem_fly_spell.wav");
        *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
      }
    }
    else if (uVar5 < 0x58a) {
      if (uVar5 < 0x586) {
        if (uVar5 < 0x585) {
          iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
          if (iVar4 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"stydem_damage_fly.wav");
            *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
          }
        }
        else {
          iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
          if (iVar4 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"stydem_die_fly.wav");
            *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
          }
        }
      }
      else if (uVar5 < 0x587) {
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stydem_takeoff.wav");
          *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
        }
      }
      else if (uVar5 < 0x588) {
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stydem_land.wav");
          *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
        }
      }
      else if (uVar5 < 0x589) {
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stydem_warning_spell_1.wav");
          *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
        }
      }
      else {
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stydem_spell_1.wav");
          *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
        }
      }
    }
    else if (uVar5 < 0x58b) {
      iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
      if (iVar4 == 0) {
        uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"stydem_warning_spell_2.wav");
        *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
      }
    }
    else if (uVar5 < 0x58e) {
      if (uVar5 < 0x58c) {
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stydem_spell_2.wav");
          *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
        }
      }
      else if (uVar5 < 0x58d) {
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stydem_warning_spell_3.wav");
          *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
        }
      }
      else {
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stydem_spell_3.wav");
          *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
        }
      }
    }
    else if (uVar5 < 0x58f) {
      iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
      if (iVar4 == 0) {
        uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"stydem_raise_zombie.wav");
        *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
      }
    }
    else if (uVar5 < 0x590) {
      iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
      if (iVar4 == 0) {
        uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"stydem_transforming.wav");
        *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
      }
    }
    else if (uVar5 < 0x591) {
      iVar4 = FUN_00556700(*(uint *)(param_1 + 0xc6c4 + uVar5 * 4));
      if (iVar4 == 0) {
        uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"stydem_taunt1.wav");
        *(uint *)(param_1 + 0xc6c4 + uVar5 * 4) = uVar6;
      }
    }
    else if (uVar5 == 0x591) {
      iVar4 = FUN_00556700(*(uint *)(param_1 + 0xdd08));
      if (iVar4 == 0) {
        uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"stydem_taunt2.wav");
        *(uint *)(param_1 + 0xdd08) = uVar6;
      }
    }
    else {
      FUN_00433fb0(param_1,uVar5);
    }
  }
  fVar2 = (float)_DAT_005da4c6;
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc) * fVar2);
  iStack_28 = param_1 + 0x158;
  iVar4 = FUN_004fc070(iStack_28);
  iVar4 = *(int *)(iVar4 + 0x24);
  iVar7 = FUN_00431660(param_1,param_2);
  if (iVar7 == 0) {
    switch(iVar4) {
    case 0:
    case 7:
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
      if (iVar4 == 0) {
        fVar12 = (float10)fStack_24;
        FUN_005a3120();
        fStack_14 = (float)(int)ROUND(fVar12);
        iVar4 = FUN_005a0480(param_1,fStack_14);
        if ((iVar4 == 0) &&
           (((_DAT_005e84dc < fStack_24 || (*(float *)(param_1 + 0xcde0) <= 0.0)) &&
            (fStack_24 < *(float *)(param_1 + 0xcddc))))) {
          if (_DAT_005e84e8 <= fStack_24) {
            FUN_004fc0d0(param_1 + 0x158,8,1);
          }
          else {
            FUN_004fc0d0(param_1 + 0x158,1,1);
          }
        }
      }
      break;
    case 1:
    case 2:
    case 8:
    case 9:
      if (*(int *)(param_1 + 0xcde4) != 0) {
        fVar12 = (float10)fStack_24;
        FUN_005a3120();
        fStack_14 = (float)(int)ROUND(fVar12);
        iVar7 = FUN_005a0480(param_1,fStack_14);
        if (iVar7 == 0) {
          if (fStack_24 <= _DAT_005e84dc + (float)_DAT_005da4e6) {
            FUN_004fc0d0(param_1 + 0x158,0,1);
            *(uint *)(param_1 + 0xcde0) = 0;
          }
          else if ((0.0 < *(float *)(param_1 + 0xdc94)) ||
                  (iVar7 = FUN_0040cea0(0,100), iVar7 < 0x56)) {
            afStack_f0[2] = _DAT_005e84dc + (float)_DAT_005da4ee;
            *(uint *)(param_1 + 0x24a4) = 0;
            *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
            *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
            afStack_f0[0] = 0.0;
            afStack_f0[1] = 0.0;
            fStack_14 = afStack_f0[2];
            uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                              (*(int *)(param_1 + 0xcde4),afStack_1dc + 0x3b,0x3e4ccccd,0x3e32b8c2);
            iVar7 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar6);
            if (-1 < iVar7) {
              if ((_DAT_005e84e8 < fStack_24) && (iVar4 != 8)) {
                FUN_004fc0d0(param_1 + 0x158,8,1);
              }
              if (*(float *)(param_1 + 0xcddc) < fStack_24) {
                if (iVar4 == 8) {
                  FUN_004fc0d0(param_1 + 0x158,7,1);
                }
                else {
                  FUN_004fc0d0(param_1 + 0x158,0,1);
                }
              }
            }
          }
          else {
            FUN_004fc0d0(param_1 + 0x158,0x19,1);
            *(uint *)(param_1 + 0xdc94) = 0x41700000;
          }
        }
      }
      break;
    case 0xb:
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_114 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
      fStack_110 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
      fStack_10c = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
      afStack_108[0] = fStack_114;
      afStack_1dc[(uint)bVar11 * -2 + 0x36] = afStack_1dc[(uint)bVar11 * -2 + 0x33];
      afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x37] =
           afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x34];
      FUN_00576250(afStack_1dc + 0x35);
      fStack_1a4 = fStack_12c;
      afStack_1dc[(uint)bVar11 * -2 + 0xf] = afStack_1dc[(uint)bVar11 * -2 + 0x2d];
      afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
           afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e];
      fStack_60 = (float)FUN_0040cfa0(fStack_1a0 - *(float *)(param_1 + 0x34));
      fStack_14 = fStack_60;
      fStack_14 = (float)FUN_0040cfa0(fStack_1a4 - *(float *)(param_1 + 0x30));
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_60;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_14;
      FUN_004088f0(param_1);
      *(uint *)(param_1 + 0xcde0) = 0x40a00000;
      break;
    case 0xc:
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      pfStack_50 = (float *)(param_1 + 0x20);
      fStack_210 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
      fStack_20c = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
      fStack_208 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
      afStack_cc[0] = fStack_210;
      afStack_e0[(uint)bVar11 * -2 + 6] = afStack_224[(uint)bVar11 * -2 + 6];
      afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
      FUN_00576250(afStack_e0 + 5);
      fStack_18c = fStack_2c4;
      afStack_1dc[(uint)bVar11 * -2 + 0x15] = afStack_32c[(uint)bVar11 * -2 + 0x1b];
      afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
           afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c];
      fStack_58 = (float)FUN_0040cfa0(fStack_188 - *(float *)(param_1 + 0x34));
      fStack_14 = fStack_58;
      fStack_14 = (float)FUN_0040cfa0(fStack_18c - *(float *)(param_1 + 0x30));
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_58;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_14;
      FUN_004088f0(param_1);
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_2f4 = *(float *)(iVar4 + 0x20) - *pfStack_50;
      fStack_2f0 = *(float *)(iVar4 + 0x24) - pfStack_50[1];
      fStack_2ec = *(float *)(iVar4 + 0x28) - pfStack_50[2];
      fStack_318 = fStack_2f4;
      afStack_32c[(uint)bVar11 * -2 + 6] = afStack_32c[(uint)bVar11 * -2 + 0xf];
      afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
      FUN_0054dcc0(iStack_28,_DAT_02d24cf4);
      pfVar9 = afStack_32c + 0xb;
      afStack_300[0] = (float)uStack_264;
      afStack_32c[(uint)bVar11 * -2 + 0xc] = afStack_29c[(uint)bVar11 * -2 + 0xf];
      afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
           afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
      FUN_00408b80(param_1,pfVar9);
      fVar2 = SQRT(fStack_310 * fStack_310 + fStack_318 * fStack_318 + fStack_314 * fStack_314);
      afStack_30c[0] = (float)uStack_258;
      afStack_32c[(uint)bVar11 * -2 + 9] = afStack_29c[(uint)bVar11 * -2 + 0x12];
      afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
           afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
      if (0.0 < fVar2) {
        fVar3 = 1.0 / fVar2;
        fStack_318 = fStack_318 * fVar3;
        fStack_314 = fStack_314 * fVar3;
        fStack_310 = fStack_310 * fVar3;
      }
      else {
        fStack_314 = 0.0;
        fStack_318 = 0.0;
        fStack_310 = 0.0;
      }
      fStack_318 = fStack_318 * _DAT_005da4de;
      fStack_314 = fStack_314 * _DAT_005da4de;
      fStack_310 = fStack_310 * _DAT_005da4de;
      fStack_2c = fVar2;
      FUN_004a3af0(0x01C73654,afStack_32c + 8,afStack_32c + 5,1,2,0);
      break;
    case 0xd:
      iVar4 = FUN_0040cea0(0,100);
      fStack_14 = (float)FUN_004fc930(iStack_28);
      if ((float)_DAT_005da4d6 < fStack_14) {
        if (iVar4 < 0x32) {
          uVar6 = 0x1c;
        }
        else {
          if (99 < iVar4) goto switchD_005a0147_caseD_3;
          uVar6 = 0x1d;
        }
        FUN_004fc0d0(iStack_28,uVar6,1);
      }
    case 3:
    case 10:
switchD_005a0147_caseD_3:
      FUN_004fc930(param_1 + 0x158);
      FUN_0042abb0(auStack_36c);
      uStack_368 = *(uint *)(param_1 + 0xce5c);
      iStack_338 = param_1;
      iStack_334 = param_1;
      FUN_00583260(&DAT_02cfd900,param_1 + 0xfd8 + _DAT_02d24cf4 * 0x30,0x3f19999a,auStack_36c);
      pfVar9 = afStack_e0 + 0xb;
      afStack_b4[0] = afStack_24c[3];
      afStack_e0[(uint)bVar11 * -2 + 0xc] = afStack_23c[(uint)bVar11 * -2];
      afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
           afStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      FUN_00408b80(param_1,pfVar9);
      pfVar9 = afStack_224 + 0x11;
      afStack_1ec[3] = (float)uStack_2d0;
      afStack_1dc[(uint)bVar11 * -2] = afStack_32c[(uint)bVar11 * -2 + 0x18];
      iVar4 = param_1;
      afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
      FUN_004893f0(iVar4,pfVar9);
      *(uint *)(param_1 + 0xcde0) = 0x40000000;
      break;
    case 0x12:
      *(uint *)(param_1 + 0xcde0) = 0x41800000;
      break;
    case 0x14:
      *(uint *)(param_1 + 0xcde0) = 0x40c00000;
      break;
    case 0x16:
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_144 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
      fStack_140 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
      fStack_13c = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
      afStack_1dc[2] = fStack_144;
      afStack_1dc[(uint)bVar11 * -2 + 3] = afStack_1dc[(uint)bVar11 * -2 + 0x27];
      afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28];
      FUN_00576250(afStack_1dc + 2);
      fStack_1f8 = fStack_180;
      afStack_224[(uint)bVar11 * -2 + 0xc] = afStack_1dc[(uint)bVar11 * -2 + 0x18];
      afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
           afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
      fStack_48 = (float)FUN_0040cfa0(fStack_1f4 - *(float *)(param_1 + 0x34));
      fStack_14 = fStack_48;
      fStack_14 = (float)FUN_0040cfa0(fStack_1f8 - *(float *)(param_1 + 0x30));
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_48;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_14;
      FUN_004088f0(param_1);
      *(uint *)(param_1 + 0xcde0) = 0x40c00000;
      break;
    case 0x17:
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_2a0 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
      afStack_29c[0] = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
      afStack_29c[1] = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
      afStack_120[0] = fStack_2a0;
      afStack_1dc[(uint)bVar11 * -2 + 0x30] = afStack_29c[(uint)bVar11 * -2];
      afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x31] =
           afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      FUN_00576250(afStack_1dc + 0x2f);
      fStack_138 = afStack_23c[5];
      afStack_1dc[(uint)bVar11 * -2 + 0x2a] = afStack_224[(uint)bVar11 * -2];
      afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b] =
           afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      fStack_40 = (float)FUN_0040cfa0(fStack_134 - *(float *)(param_1 + 0x34));
      fStack_14 = fStack_40;
      fStack_14 = (float)FUN_0040cfa0(fStack_138 - *(float *)(param_1 + 0x30));
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_40;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_14;
      FUN_004088f0(param_1);
      fStack_14 = (float)FUN_0040ce40(0x40400000,0x40a00000);
      *(float *)(param_1 + 0xdc9c) = fStack_14;
      break;
    case 0x18:
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
      if (iVar4 == 0) {
        iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        fStack_84 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_80 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_7c = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        afStack_fc[0] = fStack_84;
        afStack_1dc[(uint)bVar11 * -2 + 0x39] = afStack_e0[(uint)bVar11 * -2 + 0x18];
        afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3a] =
             afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
        FUN_00576250(afStack_1dc + 0x38);
        fStack_330 = afStack_29c[2];
        afStack_32c[(uint)bVar11 * -2] = afStack_29c[(uint)bVar11 * -2 + 3];
        afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        fStack_38 = (float)FUN_0040cfa0(afStack_32c[0] - *(float *)(param_1 + 0x34));
        fStack_14 = fStack_38;
        fStack_14 = (float)FUN_0040cfa0(fStack_330 - *(float *)(param_1 + 0x30));
        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_38;
        *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_14;
        FUN_004088f0(param_1);
        iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x25b0),_DAT_02d0c150);
        iStack_30 = iVar4;
        if (iVar4 != 0) {
          FUN_0053ebe0(0x01ED78C8);
          *(int *)(iVar4 + 0x304) = param_1;
          uVar6 = *(uint *)(iVar4 + 0x568);
          *(uint *)(iVar4 + 0x568) = 100;
          iVar7 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xe8))(iVar4);
          if (iVar7 != 0) {
            (**(code **)(*(int *)(iVar4 + 0x154) + 0xe4))(iVar4);
          }
          *(uint *)(iStack_30 + 0x568) = uVar6;
        }
        fVar2 = *(float *)(param_1 + 0xdc9c) - param_2;
        *(float *)(param_1 + 0xdc9c) = fVar2;
        if (fVar2 <= 0.0) {
          *(uint *)(param_1 + 0xdc9c) = 0;
          FUN_004fc0d0(param_1 + 0x158,7,1);
        }
      }
      else {
        FUN_004fc0d0(iStack_28,7,1);
      }
      break;
    case 0x1b:
      iVar4 = *(int *)(param_1 + 0xd060);
      *(uint *)(iVar4 + 0x20) = *(uint *)(param_1 + 0x20);
      *(uint *)(iVar4 + 0x24) = *(uint *)(param_1 + 0x24);
      *(uint *)(iVar4 + 0x28) = *(uint *)(param_1 + 0x28);
      *(uint *)(iVar4 + 0x2c) = *(uint *)(param_1 + 0x2c);
      iVar4 = *(int *)(param_1 + 0xd060);
      if ((uint *)(iVar4 + 0x30) != (uint *)(param_1 + 0x30)) {
        *(uint *)(iVar4 + 0x30) = *(uint *)(param_1 + 0x30);
        *(uint *)(iVar4 + 0x34) = *(uint *)(param_1 + 0x34);
        *(uint *)(iVar4 + 0x38) = *(uint *)(param_1 + 0x38);
      }
      fVar2 = param_2 * (float)_DAT_005da4ce + *(float *)(param_1 + 0xdc98);
      *(float *)(param_1 + 0xdc98) = fVar2;
      if ((1.0 <= fVar2) && (*(int *)(param_1 + 0xd060) != 0)) {
        FUN_004f6930(0x01D81080,*(int *)(param_1 + 0xd060));
        uVar6 = 0x01D81080;
        *(uint *)(param_1 + 0xd060) = 0;
        FUN_004f6f10(uVar6,param_1,1);
      }
    case 6:
    case 0xf:
      if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_0054dbd0(param_1 + 0x158,0);
        puVar16 = &uStack_e4;
        uStack_e4 = uStack_90;
        afStack_e0[(uint)bVar11 * -2] = afStack_e0[(uint)bVar11 * -2 + 0x15];
        afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
        FUN_00408b80(param_1,puVar16);
        uVar13 = 0;
        pfVar9 = afStack_32c + 2;
        afStack_32c[2] = (float)uStack_204;
        afStack_32c[(uint)bVar11 * -2 + 3] = afStack_224[(uint)bVar11 * -2 + 9];
        uVar6 = 0x01D22E44;
        afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
        FUN_004cec40(uVar6,pfVar9,uVar13);
        *(uint *)(param_1 + 0xcdd0) = 1;
      }
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x273c);
    if (uVar5 < 2) {
      if (uVar5 == 1) {
LAB_0059f45b:
        uVar6 = 1;
      }
      else {
LAB_0059f642:
        uVar6 = 0;
      }
      FUN_004fc0d0(param_1 + 0x158,uVar6,1);
    }
    else {
      if (uVar5 < 3) goto LAB_0059f45b;
      if (uVar5 != 3) goto LAB_0059f642;
      FUN_004fc0d0(param_1 + 0x158,0,1);
      FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  }
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  if (0.0 < *(float *)(param_1 + 0xdc94)) {
    *(float *)(param_1 + 0xdc94) = *(float *)(param_1 + 0xdc94) - param_2;
  }
  iVar4 = FUN_0042ccf0(param_1);
  if (iVar4 != 0) {
    FUN_0042c1e0(param_1,param_2);
    fStack_a8 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_a4 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_a0 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_c0 = fStack_a8;
    afStack_e0[(uint)bVar11 * -2 + 9] = afStack_e0[(uint)bVar11 * -2 + 0xf];
    afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    fStack_2dc = fStack_c0 + *(float *)(param_1 + 0x250c);
    fStack_2d8 = fStack_bc + *(float *)(param_1 + 0x2510);
    fStack_2d4 = fStack_b8 + *(float *)(param_1 + 0x2514);
    fStack_2b8 = fStack_2dc;
    afStack_32c[(uint)bVar11 * -2 + 0x1e] = afStack_32c[(uint)bVar11 * -2 + 0x15];
    afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
         afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
    fStack_198 = fStack_2b8 + *(float *)(param_1 + 0x249c);
    fStack_194 = fStack_2b4 + *(float *)(param_1 + 0x24a0);
    fStack_190 = fStack_2b0 + *(float *)(param_1 + 0x24a4);
    afStack_27c[0] = fStack_198;
    afStack_29c[(uint)bVar11 * -2 + 9] = afStack_1dc[(uint)bVar11 * -2 + 0x12];
    afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042c230(param_1,afStack_29c + 8);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
