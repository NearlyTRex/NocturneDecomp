// Name: FUN_004d1660
// Address: 004d1660
// Address Range: [[004d1660, 004d2c42]]
// Convention: unknown
// Signature: void FUN_004d1660(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d1660(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  byte bVar13;
  float afStackY_121c [987];
  uint uVar14;
  float fStack_274;
  byte auStack_270 [4];
  uint uStack_26c;
  int iStack_23c;
  int iStack_238;
  uint uStack_234;
  float afStack_230 [5];
  float fStack_21c;
  uint uStack_218;
  float fStack_214;
  float afStack_210 [3];
  float fStack_204;
  float afStack_1f8 [4];
  float afStack_1e8 [5];
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float afStack_1bc [3];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  uint uStack_17c;
  uint uStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  uint uStack_158;
  float fStack_150;
  float afStack_144 [4];
  float afStack_134 [5];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float afStack_114 [3];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  uint uStack_e4;
  float afStack_d8 [3];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float afStack_c0 [3];
  uint uStack_b4;
  uint uStack_a8;
  uint uStack_9c;
  uint uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  int iStack_7c;
  float fStack_6c;
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  uint uStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar13 = 0;
  switch(*(uint *)(param_1 + 0x246fc)) {
  case 0:
  case 4:
    *(uint *)(param_1 + 0x343c) = 0x42480000;
    *(uint *)(param_1 + 0x3438) = 0x41a00000;
    break;
  case 1:
  case 2:
    *(uint *)(param_1 + 0x343c) = 0x42960000;
    *(uint *)(param_1 + 0x3438) = 0x42200000;
    break;
  case 3:
  case 5:
    *(uint *)(param_1 + 0x343c) = 0x47c34f80;
    *(uint *)(param_1 + 0x3438) = 0x47c34f80;
  }
  if (*(float *)(param_1 + 0x25a8) <= 0.0) {
    *(uint *)(param_1 + 0x343c) = 0x47c34f80;
    *(uint *)(param_1 + 0x3438) = 0x47c34f80;
  }
  iVar7 = FUN_004244b0(param_1,param_2);
  if (iVar7 == 0) {
    return;
  }
  fStack_274 = param_2;
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  iStack_30 = param_1 + 0x2b4;
  while (0.0 < fStack_274) {
    uVar8 = FUN_005030c0(iStack_30,&stack0xfffffd8c);
    if (uVar8 < 0xb) {
      if (uVar8 == 6) {
        if (*(int *)(param_1 + 0x276c) != 0) {
          FUN_00436710(PTR_DAT_00609ed0,"%s escaping from %s\n",param_1,
                       *(int *)(param_1 + 0x276c));
          FUN_004222d0(auStack_270);
          uStack_26c = FUN_0040cf60(0x41200000,0x41700000);
          iStack_23c = param_1;
          iStack_238 = param_1;
          fStack_18 = (float)uStack_26c;
          (**(code **)(*(int *)(*(int *)(param_1 + 0x276c) + 0x2b0) + 0x110))
                    (*(int *)(param_1 + 0x276c),auStack_270);
        }
      }
      else {
        FUN_0042aa00(param_1,uVar8);
      }
    }
    else if (uVar8 < 0xc) {
      iStack_2c = 0;
      afStack_1f8[0] = 0.0;
      afStack_1f8[1] = 0.0;
      fStack_28 = 1e+30;
      afStack_1f8[2] = 1.5;
      FUN_00408d70(param_1,afStack_230 + 0xe);
      fStack_f0 = fStack_204;
      afStack_134[(uint)bVar13 * -2 + 0x12] = afStack_230[(uint)bVar13 * -2 + 0xc];
      afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
           afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < *(int *)(0x01E661B8 + 0x14d164); iStack_1c = iStack_1c + 1)
      {
        iVar7 = FUN_0040c8f0(*(uint *)(0x01E661B8 + iStack_20 + 0x14d168),_DAT_01b4d36c);
        if (iVar7 != 0) {
          fStack_120 = *(float *)(iVar7 + 0x20) - fStack_f0;
          fStack_11c = *(float *)(iVar7 + 0x24) - fStack_ec;
          fStack_118 = *(float *)(iVar7 + 0x28) - fStack_e8;
          fStack_90 = fStack_120;
          afStack_134[(uint)bVar13 * -2 + 0x2a] = afStack_134[(uint)bVar13 * -2 + 6];
          afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b] =
               afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
          if (ABS(fStack_8c) <= (float)_DAT_005da39e) {
            fStack_8c = 0.0;
            fStack_24 = SQRT(fStack_88 * fStack_88 + fStack_90 * fStack_90);
            if (fStack_24 < fStack_28) {
              iStack_2c = iVar7;
              fStack_28 = fStack_24;
            }
          }
        }
        iStack_20 = iStack_20 + 4;
      }
      if (iStack_2c != 0) {
        FUN_00460310(iStack_2c,0x3dcccccd);
      }
    }
    else if (uVar8 == 0xc) {
      iVar7 = *(int *)(param_1 + 0x2698);
      if (iVar7 != 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,0);
        FUN_004dadb0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,iVar7,1,0);
      }
    }
    else {
      FUN_0042aa00(param_1,uVar8);
    }
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2);
  iStack_3c = 0;
  uStack_38 = 0;
  fStack_18 = (float)FUN_005038a0(iStack_30,10);
  if (0.0 < fStack_18) {
    iStack_3c = 1;
    uStack_38 = 1;
  }
  if (*(float *)(param_1 + 0x25a8) <= 0.0) {
    fStack_18 = (float)FUN_005038a0(param_1 + 0x2b4,5);
    if ((fStack_18 <= 0.0) && (fStack_18 = (float)FUN_005038a0(param_1 + 0x2b4,8), fStack_18 <= 0.0)
       ) {
      FUN_00503620(param_1 + 0x2b4,6,1);
    }
LAB_004d1ac4:
    uStack_38 = 1;
  }
  else if (*(int *)(param_1 + 0x276c) == 0) {
    iVar7 = param_1 + 0x2b4;
    fStack_18 = (float)FUN_005038a0(iVar7,3);
    if (((0.0 < fStack_18) || (fStack_18 = (float)FUN_005038a0(iVar7,5), 0.0 < fStack_18)) ||
       (fStack_18 = (float)FUN_005038a0(iVar7,8), 0.0 < fStack_18)) goto LAB_004d1ac4;
    iVar10 = FUN_004287f0(param_1,param_2);
    puVar6 = PTR_DAT_00609ed0;
    if (iVar10 == 0) {
      switch(*(uint *)(param_1 + 0x246fc)) {
      case 0:
        iVar7 = FUN_004d2c50(param_1,param_2);
        if (iVar7 == 0) {
          iVar7 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          fStack_108 = *(float *)(iVar7 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_104 = *(float *)(iVar7 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_100 = *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_150 = fStack_108;
          afStack_1e8[(uint)bVar13 * -2 + 0x27] = afStack_134[(uint)bVar13 * -2 + 0xc];
          afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28] =
               afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
          fStack_1a4 = fStack_150;
          afStack_1e8[(uint)bVar13 * -2 + 0x12] = afStack_1e8[(uint)bVar13 * -2 + 0x27];
          afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
               afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28];
          fStack_1c8 = fStack_1a4;
          afStack_1e8[(uint)bVar13 * -2 + 9] = afStack_1e8[(uint)bVar13 * -2 + 0x12];
          afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
               afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
          if (((0.0 < *(float *)(param_1 + 0x24348)) &&
              (fStack_40 = fStack_1c0 * fStack_1c0 +
                           fStack_1c8 * fStack_1c8 + fStack_1c4 * fStack_1c4,
              *(float *)(param_1 + 0x24348) <= SQRT(fStack_40))) ||
             (iVar7 = FUN_0048e340(0x01C38BC0,param_1 + 0x2434c), puVar6 = PTR_DAT_00609ed0,
             iVar7 == 0)) goto LAB_004d20aa;
          *(uint *)(param_1 + 0x246fc) = 1;
          FUN_00436710(puVar6,"%s rescued, entering follow mode\n",param_1);
          FUN_004894f0(0x01C38BC0,param_1 + 0x243d0);
        }
        break;
      case 1:
        iVar7 = *(int *)(param_1 + 0x24700);
        if ((iVar7 != 0) &&
           (fVar1 = *(float *)(param_1 + 0x20) - *(float *)(iVar7 + 0x20),
           fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iVar7 + 0x28),
           SQRT(fVar2 * fVar2 + fVar1 * fVar1) < (float)_DAT_005da366)) {
          uVar9 = FUN_005882d0(param_1 + 0x20,iVar7,0);
          *(uint *)(param_1 + 0x24708) = uVar9;
        }
        puVar6 = PTR_DAT_00609ed0;
        if (*(int *)(param_1 + 0x24708) == 0) {
          iVar7 = FUN_004d2c50(param_1,param_2);
          if (iVar7 == 0) {
            iVar7 = FUN_0042abe0(param_1,param_2);
            if (iVar7 == 0) {
              FUN_00428260(param_1,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),0x40a00000,
                           0x41200000,param_1 + 0x246f4);
            }
            else {
              *(int *)(param_1 + 0x246f4) = iVar7;
            }
            uVar8 = *(uint *)(param_1 + 0x246f4);
            iVar7 = param_1 + 0x2b4;
            if (uVar8 < 2) {
              if (uVar8 != 1) goto LAB_004d20aa;
              FUN_00503620(iVar7,1,1);
            }
            else if (uVar8 < 3) {
              FUN_00503620(iVar7,2,1);
            }
            else {
              if (uVar8 != 3) goto LAB_004d20aa;
              FUN_00503620(iVar7,0,1);
              puVar6 = PTR_DAT_00609ed0;
              *(uint *)(param_1 + 0x246fc) = 2;
              FUN_00436710(puVar6,"%s left behind!\n",param_1);
              FUN_004894f0(0x01C38BC0,param_1 + 0x24434);
              *(uint *)(param_1 + 0x303c) = 0;
            }
          }
        }
        else {
          *(uint *)(param_1 + 0x246fc) = 3;
          FUN_00436710(puVar6,"%s was led close enough, going home!\n",param_1);
          FUN_004894f0(0x01C38BC0,param_1 + 0x24560);
          *(uint *)(param_1 + 0x303c) = 0;
        }
        break;
      case 2:
        iVar10 = FUN_004d2c50(param_1,param_2);
        if (iVar10 == 0) {
          FUN_00428260(param_1,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),0x40800000,0x41200000,
                       param_1 + 0x246f4);
          uVar8 = *(uint *)(param_1 + 0x246f4);
          if (uVar8 == 0) {
            uVar9 = 0;
          }
          else if (uVar8 < 2) {
            uVar9 = 1;
          }
          else {
            if (uVar8 != 2) {
              FUN_00503620(param_1 + 0x2b4,0,1);
              break;
            }
            uVar9 = 2;
          }
          *(uint *)(param_1 + 0x246fc) = 1;
          FUN_00503620(iVar7,uVar9,1);
          FUN_00436710(PTR_DAT_00609ed0,"%s was left behind, but now can follow again!\n",param_1);
          FUN_004894f0(0x01C38BC0,param_1 + 0x24498);
        }
        break;
      case 3:
        if (*(int *)(param_1 + 0x24708) == 0) {
          *(uint *)(param_1 + 0x246fc) = 2;
          FUN_00436710(puVar6,"%s doesn't know next waypoint going home.  Help me!\n",param_1);
        }
        else {
          FUN_00428260(param_1,*(int *)(param_1 + 0x24708),0x3f800000,0xbf800000,param_1 + 0x246f4);
          switch(*(uint *)(param_1 + 0x246f4)) {
          case 0:
            FUN_00436710(PTR_DAT_00609ed0,"%s reached waypoint %s!\n",param_1,
                         *(uint *)(param_1 + 0x24708));
            puVar6 = PTR_DAT_00609ed0;
            if (*(int *)(param_1 + 0x24708) == *(int *)(param_1 + 0x24700)) {
              *(uint *)(param_1 + 0x246fc) = 4;
              FUN_00436710(puVar6,"%s rescued and taken home!\n",param_1);
              *(uint *)(param_1 + 0x24708) = 0;
            }
            else {
              uVar9 = FUN_005882d0(param_1 + 0x20,*(int *)(param_1 + 0x24700),0);
              *(uint *)(param_1 + 0x24708) = uVar9;
            }
            break;
          case 1:
            FUN_00503620(iVar7,1,1);
            break;
          case 2:
            FUN_00503620(iVar7,2,1);
            break;
          case 3:
            FUN_00503620(iVar7,0,1);
            puVar6 = PTR_DAT_00609ed0;
            *(uint *)(param_1 + 0x246fc) = 2;
            FUN_00436710(puVar6,"%s got confused going home.  Help me!\n",param_1);
            FUN_00503620(iVar7,0,1);
            FUN_004894f0(0x01C38BC0,param_1 + 0x245c4);
            FUN_00490f80(0x01C38BC0,param_1 + 0x243b0,1);
            *(uint *)(param_1 + 0x246fc) = 4;
            *(uint *)(param_1 + 0x24708) = 0;
          }
        }
        break;
      case 4:
        iStack_3c = 1;
        if (*(int *)(param_1 + 0x24704) != 0) {
          if (*(float *)(param_1 + 0x2594) < param_2 * (float)_DAT_005da33e) {
            *(float *)(param_1 + 0x2594) = param_2 * (float)_DAT_005da33e;
          }
          FUN_00408de0(param_1,*(int *)(param_1 + 0x24704) + 0x20);
          fStack_180 = afStack_134[2];
          afStack_1e8[(uint)bVar13 * -2 + 0x1b] = afStack_134[(uint)bVar13 * -2 + 3];
          afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
               afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          if ((float *)(param_1 + 0x257c) != afStack_1e8 + 0x1a) {
            *(float *)(param_1 + 0x257c) = fStack_180;
            *(uint *)(param_1 + 0x2580) = uStack_17c;
            *(uint *)(param_1 + 0x2584) = uStack_178;
          }
          pfVar11 = (float *)(param_1 + 0x2580 + (uint)bVar13 * -8);
          fStack_21c = *(float *)(param_1 + 0x257c);
          afStack_230[(uint)bVar13 * -2 + 6] = *pfVar11;
          afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] = pfVar11[(uint)bVar13 * -2 + 1];
          fVar1 = SQRT(fStack_214 * fStack_214 + fStack_21c * fStack_21c);
          uStack_218 = 0;
          if (*(float *)(param_1 + 0x2594) < fVar1) {
            fStack_48 = *(float *)(param_1 + 0x2594) / fVar1;
            *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x257c) * fStack_48;
            *(float *)(param_1 + 0x2580) = *(float *)(param_1 + 0x2580) * fStack_48;
            *(float *)(param_1 + 0x2584) = *(float *)(param_1 + 0x2584) * fStack_48;
          }
          fStack_44 = fVar1;
          FUN_005838f0(param_1 + 0x257c);
          fVar2 = (float)_DAT_005da346;
          uStack_15c = uStack_e4;
          afStack_1e8[(uint)bVar13 * -2 + 0x24] = afStack_134[(uint)bVar13 * -2 + 0x15];
          afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25] =
               afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
          *(uint *)(param_1 + 0x2578) = uStack_158;
          if (fVar1 * fVar2 < 1.0) {
            fStack_18 = (float)FUN_0040d0c0(*(float *)(*(int *)(param_1 + 0x24704) + 0x34) -
                                            *(float *)(param_1 + 0x34));
            fStack_18 = (float)FUN_0040d0c0(fStack_18 - *(float *)(param_1 + 0x2578));
            *(float *)(param_1 + 0x2578) =
                 (1.0 - fVar1 * fVar2) * fStack_18 + *(float *)(param_1 + 0x2578);
          }
          fStack_18 = (float)FUN_0040d0c0(*(uint *)(param_1 + 0x2578));
          *(float *)(param_1 + 0x2578) = fStack_18;
          if ((fVar1 < (float)_DAT_005da34e) &&
             (ABS(*(float *)(param_1 + 0x2578)) < (float)_DAT_005da356)) {
            if ((*(int *)(param_1 + 0x246f8) == 0) || (*(int *)(param_1 + 0x246f8) == 4)) {
              FUN_00503620(param_1 + 0x2b4,0,1);
              *(uint *)(param_1 + 0x246fc) = 5;
            }
            else {
              FUN_00503620(param_1 + 0x2b4,10,1);
            }
            FUN_004894f0(0x01C38BC0,param_1 + 0x245c4);
            FUN_00490f80(0x01C38BC0,param_1 + 0x243b0,1);
            *(uint *)(param_1 + 0x24704) = 0;
          }
          fStack_4c = param_2 * _DAT_005da35e;
          fStack_54 = -fStack_4c;
          if (*(float *)(param_1 + 0x2578) < fStack_54) {
            *(float *)(param_1 + 0x2578) = fStack_54;
          }
          if (fStack_4c < *(float *)(param_1 + 0x2578)) {
            *(float *)(param_1 + 0x2578) = fStack_4c;
          }
        }
      }
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x27ac);
      if (uVar8 < 2) {
        if (uVar8 == 1) {
          FUN_00503620(param_1 + 0x2b4,1,1);
        }
        else {
LAB_004d20aa:
          FUN_00503620(param_1 + 0x2b4,0,1);
        }
      }
      else if (uVar8 < 3) {
        FUN_00503620(param_1 + 0x2b4,2,1);
      }
      else {
        if (uVar8 != 3) goto LAB_004d20aa;
        FUN_00503620(param_1 + 0x2b4,0,1);
        FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
      }
    }
  }
  else {
    FUN_00408de0(param_1,*(int *)(param_1 + 0x276c) + 0x20);
    afStack_c0[0] = afStack_1f8[3];
    afStack_134[(uint)bVar13 * -2 + 0x1e] = afStack_1e8[(uint)bVar13 * -2];
    afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
         afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    FUN_005838f0(afStack_134 + 0x1d);
    uStack_9c = afStack_1e8[2];
    afStack_134[(uint)bVar13 * -2 + 0x27] = afStack_1e8[(uint)bVar13 * -2 + 3];
    afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28] =
         afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    fStack_18 = (float)FUN_0040d0c0(uStack_98);
    fStack_34 = fStack_18;
    if (fStack_18 < _DAT_005da36e) {
      fStack_34 = fStack_18 + _DAT_005da35e;
    }
    if (_DAT_005da372 < fStack_34) {
      fStack_34 = fStack_34 + _DAT_005da376;
    }
    fStack_50 = param_2 * _DAT_005da35e;
    fStack_58 = -fStack_50;
    if (fStack_34 < fStack_58) {
      fStack_34 = fStack_58;
    }
    if (fStack_50 < fStack_34) {
      fStack_34 = fStack_50;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_34;
    FUN_00408ae0(param_1);
    iStack_7c = *(int *)(param_1 + 0x276c);
    fStack_18 = *(float *)(iStack_7c + 0x2b0);
    FUN_00546a90(param_1 + 0x2b4,0);
    fVar1 = fStack_18;
    iVar7 = iStack_7c;
    pfVar11 = afStack_230 + 8;
    afStack_210[0] = (float)uStack_b4;
    afStack_230[(uint)bVar13 * -2 + 9] = afStack_134[(uint)bVar13 * -2 + 0x21];
    iVar10 = param_1;
    afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
         afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
    iVar7 = (**(code **)((int)fVar1 + 0x118))(iVar7,iVar10,pfVar11);
    if (iVar7 == 0) {
      *(uint *)(param_1 + 0x276c) = 0;
LAB_004d1f68:
      FUN_00503620(param_1 + 0x2b4,0,1);
    }
    else if (*(int *)(param_1 + 0x276c) == 0) goto LAB_004d1f68;
    iStack_3c = 1;
    *(uint *)(param_1 + 0x2510) = 0;
    uStack_38 = 1;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  }
  if (((0.0 < *(float *)(param_1 + 0x25a8)) && (*(int *)(param_1 + 0x246f8) == 1)) &&
     (iVar7 = FUN_0040d060(param_2 * _DAT_005da37a), iVar7 != 0)) {
    uVar9 = FUN_00547890(param_1 + 0x2b4,"Bip01 L Forearm",0);
    iVar7 = FUN_00540e80(uVar9);
    if (-1 < iVar7) {
      FUN_005469a0(param_1 + 0x2b4,iVar7);
      pfVar11 = afStack_1e8 + 0xb;
      afStack_1bc[0] = (float)uStack_234;
      afStack_1e8[(uint)bVar13 * -2 + 0xc] = afStack_230[(uint)bVar13 * -2];
      afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      FUN_00408d70(param_1,pfVar11);
      afStack_114[0] = (float)uStack_a8;
      afStack_134[(uint)bVar13 * -2 + 9] = afStack_134[(uint)bVar13 * -2 + 0x24];
      afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
           afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25];
      afStack_144[0] = 3.0;
      afStack_144[1] = 0.0;
      afStack_144[2] = 0.0;
      FUN_00408cf0(param_1,afStack_1e8 + 0x29);
      uVar14 = 0;
      pfVar11 = afStack_134 + 0x17;
      pfVar12 = afStack_134 + 8;
      afStack_d8[0] = afStack_230[2];
      afStack_134[(uint)bVar13 * -2 + 0x18] = afStack_230[(uint)bVar13 * -2 + 3];
      uVar9 = 0x01CB8284;
      afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
           afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      FUN_004c9730(uVar9,pfVar12,pfVar11,uVar14);
    }
  }
  FUN_00424470(param_1);
  if (iStack_3c == 0) {
    iVar7 = FUN_005035c0(param_1 + 0x2b4);
    iVar7 = *(int *)(iVar7 + 0x24);
    if ((((iVar7 == 8) || (iVar7 == 0)) || ((iVar7 == 0xd || (iVar7 == 10)))) &&
       (*(int *)(param_1 + 0xdc) == 0)) {
      *(uint *)(param_1 + 0x304c) = 0;
      goto LAB_004d1c55;
    }
    FUN_00423a10(param_1,param_2);
    fStack_168 = *(float *)(param_1 + 0x2588) * param_2;
    fStack_164 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_160 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_174 = fStack_168;
    afStack_1e8[(uint)bVar13 * -2 + 0x1e] = afStack_1e8[(uint)bVar13 * -2 + 0x21];
    afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
         afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
    fStack_cc = fStack_174 + *(float *)(param_1 + 0x257c);
    fStack_c8 = fStack_170 + *(float *)(param_1 + 0x2580);
    fStack_c4 = fStack_16c + *(float *)(param_1 + 0x2584);
    fStack_18c = fStack_cc;
    afStack_1e8[(uint)bVar13 * -2 + 0x18] = afStack_134[(uint)bVar13 * -2 + 0x1b];
    afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
         afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
    fStack_1b0 = fStack_18c + *(float *)(param_1 + 0x2508);
    fStack_1ac = fStack_188 + *(float *)(param_1 + 0x250c);
    fStack_1a8 = fStack_184 + *(float *)(param_1 + 0x2510);
    fStack_fc = fStack_1b0;
    afStack_134[(uint)bVar13 * -2 + 0xf] = afStack_1e8[(uint)bVar13 * -2 + 0xf];
    afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
         afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    pfVar11 = afStack_134 + 0xe;
    pfVar12 = (float *)(param_1 + 0x24 + (uint)bVar13 * -8);
    fStack_1d4 = *(float *)(param_1 + 0x20);
    afStack_1e8[(uint)bVar13 * -2 + 6] = *pfVar12;
    iVar7 = param_1;
    afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] = pfVar12[(uint)bVar13 * -2 + 1];
    FUN_00423a60(iVar7,pfVar11);
    *(float *)(param_1 + 0x304c) = *(float *)(param_1 + 0x304c) + param_2;
    if ((param_2 * (float)_DAT_005da37e <=
         SQRT(fStack_f4 * fStack_f4 + fStack_fc * fStack_fc + fStack_f8 * fStack_f8)) &&
       (dVar3 = (double)*(float *)(param_1 + 0x20) - (double)fStack_1d4,
       dVar4 = (double)*(float *)(param_1 + 0x24) - (double)fStack_1d0,
       dVar5 = (double)*(float *)(param_1 + 0x28) - (double)fStack_1cc,
       SQRT(dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3) <= (double)param_2 * _DAT_005da386))
    goto LAB_004d1c55;
  }
  else {
    FUN_00408cf0(param_1,param_1 + 0x257c);
    fStack_198 = afStack_144[3];
    afStack_1e8[(uint)bVar13 * -2 + 0x15] = afStack_134[(uint)bVar13 * -2];
    afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
         afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_198;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_194;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_190;
  }
  *(uint *)(param_1 + 0x304c) = 0;
LAB_004d1c55:
  FUN_00544f00(param_1 + 0x2b4);
  if (*(int *)(param_1 + 0x246f8) == 1) {
    fStack_5c = 0.5;
    fStack_68 = 0.75;
    iVar7 = FUN_0040c8f0(*(uint *)(param_1 + 0x2698),_DAT_02661f38);
    if ((iVar7 == 0) || (fStack_18 = (float)FUN_005038a0(param_1 + 0x2b4,0x10), 0.0 < fStack_18)) {
      fVar1 = *(float *)(param_1 + 0x24724) - param_2 / fStack_5c;
    }
    else {
      fVar1 = param_2 / fStack_5c + *(float *)(param_1 + 0x24724);
    }
    *(float *)(param_1 + 0x24724) = fVar1;
    if (0.0 < *(float *)(param_1 + 0x24724)) {
      if (1.0 < *(float *)(param_1 + 0x24724)) {
        *(uint *)(param_1 + 0x24724) = 0x3f800000;
      }
      iVar7 = param_1 + 0x2b4;
      fStack_6c = (float)FUN_00503f50(iVar7,_DAT_01cedfcc,
                                      *(float *)(param_1 + 0x24720) * (float)_DAT_005da38e +
                                      (float)_DAT_005da396);
      fStack_18 = fStack_6c;
      FUN_00545a60(iVar7,_DAT_01cedfcc,fStack_6c,*(uint *)(param_1 + 0x24724),
                   *(uint *)(param_1 + 0x2470c),&LAB_00544cc0);
      FUN_00545a60(iVar7,_DAT_01cedfcc,fStack_6c,*(uint *)(param_1 + 0x24724),
                   *(uint *)(param_1 + 0x24710),&LAB_00544cc0);
      if (((1.0 <= *(float *)(param_1 + 0x24724)) && (0.0 < *(float *)(param_1 + 0x24720))) &&
         (fVar1 = param_2 / fStack_68 + *(float *)(param_1 + 0x24720),
         *(float *)(param_1 + 0x24720) = fVar1, 1.0 < fVar1)) {
        *(uint *)(param_1 + 0x24720) = 0x3f800000;
      }
    }
    else {
      *(uint *)(param_1 + 0x24720) = 0;
      *(uint *)(param_1 + 0x24724) = 0;
    }
  }
  FUN_00429420(param_1,param_2,uStack_38);
  FUN_00429e90(param_1,param_2);
  if ((1.0 <= *(float *)(param_1 + 0x24720)) &&
     (iVar7 = FUN_0040c8f0(*(uint *)(param_1 + 0x2698),_DAT_02661f38), iVar7 != 0)) {
    uVar9 = *(uint *)(iVar7 + 0x6c8);
    *(uint *)(iVar7 + 0x6c8) = 6;
    (**(code **)(*(int *)(iVar7 + 0x2b0) + 0xec))(iVar7);
    *(uint *)(iVar7 + 0x6c8) = uVar9;
    FUN_00503620(param_1 + 0x2b4,0xc,1);
    *(uint *)(param_1 + 0x24724) = 0;
    *(uint *)(param_1 + 0x24720) = 0;
  }
  if (((*(int *)(param_1 + 0x246f8) == 1) &&
      (iVar7 = FUN_0040c8f0(*(uint *)(param_1 + 0x2698),_DAT_02661f38), iVar7 != 0)) &&
     (iVar7 = FUN_0048e340(0x01C38BC0,"deputeFireShotgun"), iVar7 != 0)) {
    *(uint *)(param_1 + 0x24720) = 0x3c23d70a;
    return;
  }
  return;
}
