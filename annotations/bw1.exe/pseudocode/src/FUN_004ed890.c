// Name: FUN_004ed890
// Address: 004ed890
// Address Range: [[004ed890, 004eee70]]
// Convention: unknown
// Signature: void FUN_004ed890(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ed890(int param_1,float param_2)

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
  switch(*(uint *)(param_1 + 0x1fe6c)) {
  case 0:
  case 4:
    *(uint *)(param_1 + 0x2ff8) = 0x42480000;
    *(uint *)(param_1 + 0x2ff4) = 0x41a00000;
    break;
  case 1:
  case 2:
    *(uint *)(param_1 + 0x2ff8) = 0x42960000;
    *(uint *)(param_1 + 0x2ff4) = 0x42200000;
    break;
  case 3:
  case 5:
    *(uint *)(param_1 + 0x2ff8) = 0x47c34f80;
    *(uint *)(param_1 + 0x2ff4) = 0x47c34f80;
  }
  if (*(float *)(param_1 + 0x2538) <= 0.0) {
    *(uint *)(param_1 + 0x2ff8) = 0x47c34f80;
    *(uint *)(param_1 + 0x2ff4) = 0x47c34f80;
  }
  iVar7 = FUN_0042e1a0(param_1,param_2);
  if (iVar7 == 0) {
    return;
  }
  fStack_274 = param_2;
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  iStack_30 = param_1 + 0x158;
  while (0.0 < fStack_274) {
    uVar8 = FUN_00524270(iStack_30,&stack0xfffffd8c);
    if (uVar8 < 0xb) {
      if (uVar8 == 6) {
        if (*(int *)(param_1 + 0x26fc) != 0) {
          FUN_00445430(PTR_DAT_00611100,"%s escaping from %s\n",param_1,
                       *(int *)(param_1 + 0x26fc));
          FUN_0042c010(auStack_270);
          uStack_26c = FUN_0040cc00(0x41200000,0x41700000);
          iStack_23c = param_1;
          iStack_238 = param_1;
          fStack_18 = (float)uStack_26c;
          (**(code **)(*(int *)(*(int *)(param_1 + 0x26fc) + 0x154) + 0x108))
                    (*(int *)(param_1 + 0x26fc),auStack_270);
        }
      }
      else {
        FUN_00434a80(param_1,uVar8);
      }
    }
    else if (uVar8 < 0xc) {
      iStack_2c = 0;
      afStack_1f8[0] = 0.0;
      afStack_1f8[1] = 0.0;
      fStack_28 = 1e+30;
      afStack_1f8[2] = 1.5;
      FUN_00408b40(param_1,afStack_230 + 0xe);
      fStack_f0 = fStack_204;
      afStack_134[(uint)bVar13 * -2 + 0x12] = afStack_230[(uint)bVar13 * -2 + 0xc];
      afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
           afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < *(int *)(0x01E82168 + 0x14d164); iStack_1c = iStack_1c + 1)
      {
        iVar7 = FUN_0040c600(*(uint *)(0x01E82168 + iStack_20 + 0x14d168),_DAT_01b68928);
        if (iVar7 != 0) {
          fStack_120 = *(float *)(iVar7 + 0x20) - fStack_f0;
          fStack_11c = *(float *)(iVar7 + 0x24) - fStack_ec;
          fStack_118 = *(float *)(iVar7 + 0x28) - fStack_e8;
          fStack_90 = fStack_120;
          afStack_134[(uint)bVar13 * -2 + 0x2a] = afStack_134[(uint)bVar13 * -2 + 6];
          afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b] =
               afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
          if (ABS(fStack_8c) <= (float)_DAT_005e4eff) {
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
        FUN_00478820(iStack_2c,0x3dcccccd);
      }
    }
    else if (uVar8 == 0xc) {
      iVar7 = *(int *)(param_1 + 0x2628);
      if (iVar7 != 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
        FUN_004f7690(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,iVar7,1);
      }
    }
    else {
      FUN_00434a80(param_1,uVar8);
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2);
  iStack_3c = 0;
  uStack_38 = 0;
  fStack_18 = (float)FUN_00524a40(iStack_30,10);
  if (0.0 < fStack_18) {
    iStack_3c = 1;
    uStack_38 = 1;
  }
  if (*(float *)(param_1 + 0x2538) <= 0.0) {
    fStack_18 = (float)FUN_00524a40(param_1 + 0x158,5);
    if ((fStack_18 <= 0.0) && (fStack_18 = (float)FUN_00524a40(param_1 + 0x158,8), fStack_18 <= 0.0)
       ) {
      FUN_005247c0(param_1 + 0x158,6,1);
    }
LAB_004edcf2:
    uStack_38 = 1;
  }
  else if (*(int *)(param_1 + 0x26fc) == 0) {
    iVar7 = param_1 + 0x158;
    fStack_18 = (float)FUN_00524a40(iVar7,3);
    if (((0.0 < fStack_18) || (fStack_18 = (float)FUN_00524a40(iVar7,5), 0.0 < fStack_18)) ||
       (fStack_18 = (float)FUN_00524a40(iVar7,8), 0.0 < fStack_18)) goto LAB_004edcf2;
    iVar10 = FUN_00432240(param_1,param_2);
    puVar6 = PTR_DAT_00611100;
    if (iVar10 == 0) {
      switch(*(uint *)(param_1 + 0x1fe6c)) {
      case 0:
        iVar7 = FUN_004eee80(param_1,param_2);
        if (iVar7 == 0) {
          iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
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
          if (((0.0 < *(float *)(param_1 + 0x1fab8)) &&
              (fStack_40 = fStack_1c0 * fStack_1c0 +
                           fStack_1c8 * fStack_1c8 + fStack_1c4 * fStack_1c4,
              *(float *)(param_1 + 0x1fab8) <= SQRT(fStack_40))) ||
             (iVar7 = FUN_004a6c30(0x01C51D80,param_1 + 0x1fabc), puVar6 = PTR_DAT_00611100,
             iVar7 == 0)) goto LAB_004ee2d8;
          *(uint *)(param_1 + 0x1fe6c) = 1;
          FUN_00445430(puVar6,"%s rescued, entering follow mode\n",param_1);
          FUN_004a1b70(0x01C51D80,param_1 + 0x1fb40);
        }
        break;
      case 1:
        iVar7 = *(int *)(param_1 + 0x1fe70);
        if ((iVar7 != 0) &&
           (fVar1 = *(float *)(param_1 + 0x20) - *(float *)(iVar7 + 0x20),
           fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iVar7 + 0x28),
           SQRT(fVar2 * fVar2 + fVar1 * fVar1) < (float)_DAT_005e4ec7)) {
          uVar9 = FUN_005abb80(param_1 + 0x20,iVar7,0);
          *(uint *)(param_1 + 0x1fe78) = uVar9;
        }
        puVar6 = PTR_DAT_00611100;
        if (*(int *)(param_1 + 0x1fe78) == 0) {
          iVar7 = FUN_004eee80(param_1,param_2);
          if (iVar7 == 0) {
            iVar7 = FUN_00434c60(param_1,param_2);
            if (iVar7 == 0) {
              FUN_00431cc0(param_1,*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),0x40a00000,
                           0x41200000,param_1 + 0x1fe64);
            }
            else {
              *(int *)(param_1 + 0x1fe64) = iVar7;
            }
            uVar8 = *(uint *)(param_1 + 0x1fe64);
            iVar7 = param_1 + 0x158;
            if (uVar8 < 2) {
              if (uVar8 != 1) goto LAB_004ee2d8;
              FUN_005247c0(iVar7,1,1);
            }
            else if (uVar8 < 3) {
              FUN_005247c0(iVar7,2,1);
            }
            else {
              if (uVar8 != 3) goto LAB_004ee2d8;
              FUN_005247c0(iVar7,0,1);
              puVar6 = PTR_DAT_00611100;
              *(uint *)(param_1 + 0x1fe6c) = 2;
              FUN_00445430(puVar6,"%s left behind!\n",param_1);
              FUN_004a1b70(0x01C51D80,param_1 + 0x1fba4);
              *(uint *)(param_1 + 0x2fd0) = 0;
            }
          }
        }
        else {
          *(uint *)(param_1 + 0x1fe6c) = 3;
          FUN_00445430(puVar6,"%s was led close enough, going home!\n",param_1);
          FUN_004a1b70(0x01C51D80,param_1 + 0x1fcd0);
          *(uint *)(param_1 + 0x2fd0) = 0;
        }
        break;
      case 2:
        iVar10 = FUN_004eee80(param_1,param_2);
        if (iVar10 == 0) {
          FUN_00431cc0(param_1,*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),0x40800000,0x41200000,
                       param_1 + 0x1fe64);
          uVar8 = *(uint *)(param_1 + 0x1fe64);
          if (uVar8 == 0) {
            uVar9 = 0;
          }
          else if (uVar8 < 2) {
            uVar9 = 1;
          }
          else {
            if (uVar8 != 2) {
              FUN_005247c0(param_1 + 0x158,0,1);
              break;
            }
            uVar9 = 2;
          }
          *(uint *)(param_1 + 0x1fe6c) = 1;
          FUN_005247c0(iVar7,uVar9,1);
          FUN_00445430(PTR_DAT_00611100,"%s was left behind, but now can follow again!\n",param_1);
          FUN_004a1b70(0x01C51D80,param_1 + 0x1fc08);
        }
        break;
      case 3:
        if (*(int *)(param_1 + 0x1fe78) == 0) {
          *(uint *)(param_1 + 0x1fe6c) = 2;
          FUN_00445430(puVar6,"%s doesn't know next waypoint going home.  Help me!\n",param_1);
        }
        else {
          FUN_00431cc0(param_1,*(int *)(param_1 + 0x1fe78),0x3f800000,0xbf800000,param_1 + 0x1fe64);
          switch(*(uint *)(param_1 + 0x1fe64)) {
          case 0:
            FUN_00445430(PTR_DAT_00611100,"%s reached waypoint %s!\n",param_1,
                         *(uint *)(param_1 + 0x1fe78));
            puVar6 = PTR_DAT_00611100;
            if (*(int *)(param_1 + 0x1fe78) == *(int *)(param_1 + 0x1fe70)) {
              *(uint *)(param_1 + 0x1fe6c) = 4;
              FUN_00445430(puVar6,"%s rescued and taken home!\n",param_1);
              *(uint *)(param_1 + 0x1fe78) = 0;
            }
            else {
              uVar9 = FUN_005abb80(param_1 + 0x20,*(int *)(param_1 + 0x1fe70),0);
              *(uint *)(param_1 + 0x1fe78) = uVar9;
            }
            break;
          case 1:
            FUN_005247c0(iVar7,1,1);
            break;
          case 2:
            FUN_005247c0(iVar7,2,1);
            break;
          case 3:
            FUN_005247c0(iVar7,0,1);
            puVar6 = PTR_DAT_00611100;
            *(uint *)(param_1 + 0x1fe6c) = 2;
            FUN_00445430(puVar6,"%s got confused going home.  Help me!\n",param_1);
            FUN_005247c0(iVar7,0,1);
            FUN_004a1b70(0x01C51D80,param_1 + 0x1fd34);
            FUN_004a9870(0x01C51D80,param_1 + 0x1fb20,1);
            *(uint *)(param_1 + 0x1fe6c) = 4;
            *(uint *)(param_1 + 0x1fe78) = 0;
          }
        }
        break;
      case 4:
        iStack_3c = 1;
        if (*(int *)(param_1 + 0x1fe74) != 0) {
          if (*(float *)(param_1 + 0x2524) < param_2 * (float)_DAT_005e4e9f) {
            *(float *)(param_1 + 0x2524) = param_2 * (float)_DAT_005e4e9f;
          }
          FUN_00408bb0(param_1,*(int *)(param_1 + 0x1fe74) + 0x20);
          fStack_180 = afStack_134[2];
          afStack_1e8[(uint)bVar13 * -2 + 0x1b] = afStack_134[(uint)bVar13 * -2 + 3];
          afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
               afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          if ((float *)(param_1 + 0x250c) != afStack_1e8 + 0x1a) {
            *(float *)(param_1 + 0x250c) = fStack_180;
            *(uint *)(param_1 + 0x2510) = uStack_17c;
            *(uint *)(param_1 + 0x2514) = uStack_178;
          }
          pfVar11 = (float *)(param_1 + 0x2510 + (uint)bVar13 * -8);
          fStack_21c = *(float *)(param_1 + 0x250c);
          afStack_230[(uint)bVar13 * -2 + 6] = *pfVar11;
          afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] = pfVar11[(uint)bVar13 * -2 + 1];
          fVar1 = SQRT(fStack_214 * fStack_214 + fStack_21c * fStack_21c);
          uStack_218 = 0;
          if (*(float *)(param_1 + 0x2524) < fVar1) {
            fStack_48 = *(float *)(param_1 + 0x2524) / fVar1;
            *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x250c) * fStack_48;
            *(float *)(param_1 + 0x2510) = *(float *)(param_1 + 0x2510) * fStack_48;
            *(float *)(param_1 + 0x2514) = *(float *)(param_1 + 0x2514) * fStack_48;
          }
          fStack_44 = fVar1;
          FUN_005a7520(param_1 + 0x250c);
          fVar2 = (float)_DAT_005e4ea7;
          uStack_15c = uStack_e4;
          afStack_1e8[(uint)bVar13 * -2 + 0x24] = afStack_134[(uint)bVar13 * -2 + 0x15];
          afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25] =
               afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
          *(uint *)(param_1 + 0x2508) = uStack_158;
          if (fVar1 * fVar2 < 1.0) {
            fStack_18 = (float)FUN_0040cd60(*(float *)(*(int *)(param_1 + 0x1fe74) + 0x34) -
                                            *(float *)(param_1 + 0x34));
            fStack_18 = (float)FUN_0040cd60(fStack_18 - *(float *)(param_1 + 0x2508));
            *(float *)(param_1 + 0x2508) =
                 (1.0 - fVar1 * fVar2) * fStack_18 + *(float *)(param_1 + 0x2508);
          }
          fStack_18 = (float)FUN_0040cd60(*(uint *)(param_1 + 0x2508));
          *(float *)(param_1 + 0x2508) = fStack_18;
          if ((fVar1 < (float)_DAT_005e4eaf) &&
             (ABS(*(float *)(param_1 + 0x2508)) < (float)_DAT_005e4eb7)) {
            if ((*(int *)(param_1 + 0x1fe68) == 0) || (*(int *)(param_1 + 0x1fe68) == 4)) {
              FUN_005247c0(param_1 + 0x158,0,1);
              *(uint *)(param_1 + 0x1fe6c) = 5;
            }
            else {
              FUN_005247c0(param_1 + 0x158,10,1);
            }
            FUN_004a1b70(0x01C51D80,param_1 + 0x1fd34);
            FUN_004a9870(0x01C51D80,param_1 + 0x1fb20,1);
            *(uint *)(param_1 + 0x1fe74) = 0;
          }
          fStack_4c = param_2 * _DAT_005e4ebf;
          fStack_54 = -fStack_4c;
          if (*(float *)(param_1 + 0x2508) < fStack_54) {
            *(float *)(param_1 + 0x2508) = fStack_54;
          }
          if (fStack_4c < *(float *)(param_1 + 0x2508)) {
            *(float *)(param_1 + 0x2508) = fStack_4c;
          }
        }
      }
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x273c);
      if (uVar8 < 2) {
        if (uVar8 == 1) {
          FUN_005247c0(param_1 + 0x158,1,1);
        }
        else {
LAB_004ee2d8:
          FUN_005247c0(param_1 + 0x158,0,1);
        }
      }
      else if (uVar8 < 3) {
        FUN_005247c0(param_1 + 0x158,2,1);
      }
      else {
        if (uVar8 != 3) goto LAB_004ee2d8;
        FUN_005247c0(param_1 + 0x158,0,1);
        FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
      }
    }
  }
  else {
    FUN_00408bb0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
    afStack_c0[0] = afStack_1f8[3];
    afStack_134[(uint)bVar13 * -2 + 0x1e] = afStack_1e8[(uint)bVar13 * -2];
    afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
         afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    FUN_005a7520(afStack_134 + 0x1d);
    uStack_9c = afStack_1e8[2];
    afStack_134[(uint)bVar13 * -2 + 0x27] = afStack_1e8[(uint)bVar13 * -2 + 3];
    afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28] =
         afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    fStack_18 = (float)FUN_0040cd60(uStack_98);
    fStack_34 = fStack_18;
    if (fStack_18 < _DAT_005e4ecf) {
      fStack_34 = fStack_18 + _DAT_005e4ebf;
    }
    if (_DAT_005e4ed3 < fStack_34) {
      fStack_34 = fStack_34 + _DAT_005e4ed7;
    }
    fStack_50 = param_2 * _DAT_005e4ebf;
    fStack_58 = -fStack_50;
    if (fStack_34 < fStack_58) {
      fStack_34 = fStack_58;
    }
    if (fStack_50 < fStack_34) {
      fStack_34 = fStack_50;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_34;
    FUN_004088b0(param_1);
    iStack_7c = *(int *)(param_1 + 0x26fc);
    fStack_18 = *(float *)(iStack_7c + 0x154);
    FUN_00569130(param_1 + 0x158,0);
    fVar1 = fStack_18;
    iVar7 = iStack_7c;
    pfVar11 = afStack_230 + 8;
    afStack_210[0] = (float)uStack_b4;
    afStack_230[(uint)bVar13 * -2 + 9] = afStack_134[(uint)bVar13 * -2 + 0x21];
    iVar10 = param_1;
    afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
         afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
    iVar7 = (**(code **)((int)fVar1 + 0x110))(iVar7,iVar10,pfVar11);
    if (iVar7 == 0) {
      *(uint *)(param_1 + 0x26fc) = 0;
LAB_004ee196:
      FUN_005247c0(param_1 + 0x158,0,1);
    }
    else if (*(int *)(param_1 + 0x26fc) == 0) goto LAB_004ee196;
    iStack_3c = 1;
    *(uint *)(param_1 + 0x24a4) = 0;
    uStack_38 = 1;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  }
  if (((0.0 < *(float *)(param_1 + 0x2538)) && (*(int *)(param_1 + 0x1fe68) == 1)) &&
     (iVar7 = FUN_0040cd00(param_2 * _DAT_005e4edb), iVar7 != 0)) {
    uVar9 = FUN_00569f30(param_1 + 0x158,"Bip01 L Forearm",0);
    iVar7 = FUN_005634f0(uVar9);
    if (-1 < iVar7) {
      FUN_00569040(param_1 + 0x158,iVar7);
      pfVar11 = afStack_1e8 + 0xb;
      afStack_1bc[0] = (float)uStack_234;
      afStack_1e8[(uint)bVar13 * -2 + 0xc] = afStack_230[(uint)bVar13 * -2];
      afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      FUN_00408b40(param_1,pfVar11);
      afStack_114[0] = (float)uStack_a8;
      afStack_134[(uint)bVar13 * -2 + 9] = afStack_134[(uint)bVar13 * -2 + 0x24];
      afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
           afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25];
      afStack_144[0] = 3.0;
      afStack_144[1] = 0.0;
      afStack_144[2] = 0.0;
      FUN_00408ac0(param_1,afStack_1e8 + 0x29);
      uVar14 = 0;
      pfVar11 = afStack_134 + 0x17;
      pfVar12 = afStack_134 + 8;
      afStack_d8[0] = afStack_230[2];
      afStack_134[(uint)bVar13 * -2 + 0x18] = afStack_230[(uint)bVar13 * -2 + 3];
      uVar9 = 0x01CD0E3C;
      afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
           afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      FUN_004e5f40(uVar9,pfVar12,pfVar11,uVar14);
    }
  }
  FUN_0042e160(param_1);
  if (iStack_3c == 0) {
    iVar7 = FUN_00524770(param_1 + 0x158);
    iVar7 = *(int *)(iVar7 + 0x24);
    if ((((iVar7 == 8) || (iVar7 == 0)) || ((iVar7 == 0xd || (iVar7 == 10)))) &&
       (*(int *)(param_1 + 0xdc) == 0)) {
      *(uint *)(param_1 + 0x2fe0) = 0;
      goto LAB_004ede83;
    }
    FUN_0042d700(param_1,param_2);
    fStack_168 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_164 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_160 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_174 = fStack_168;
    afStack_1e8[(uint)bVar13 * -2 + 0x1e] = afStack_1e8[(uint)bVar13 * -2 + 0x21];
    afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
         afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
    fStack_cc = fStack_174 + *(float *)(param_1 + 0x250c);
    fStack_c8 = fStack_170 + *(float *)(param_1 + 0x2510);
    fStack_c4 = fStack_16c + *(float *)(param_1 + 0x2514);
    fStack_18c = fStack_cc;
    afStack_1e8[(uint)bVar13 * -2 + 0x18] = afStack_134[(uint)bVar13 * -2 + 0x1b];
    afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
         afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
    fStack_1b0 = fStack_18c + *(float *)(param_1 + 0x249c);
    fStack_1ac = fStack_188 + *(float *)(param_1 + 0x24a0);
    fStack_1a8 = fStack_184 + *(float *)(param_1 + 0x24a4);
    fStack_fc = fStack_1b0;
    afStack_134[(uint)bVar13 * -2 + 0xf] = afStack_1e8[(uint)bVar13 * -2 + 0xf];
    afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
         afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    pfVar11 = afStack_134 + 0xe;
    pfVar12 = (float *)(param_1 + 0x24 + (uint)bVar13 * -8);
    fStack_1d4 = *(float *)(param_1 + 0x20);
    afStack_1e8[(uint)bVar13 * -2 + 6] = *pfVar12;
    iVar7 = param_1;
    afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] = pfVar12[(uint)bVar13 * -2 + 1];
    FUN_0042d750(iVar7,pfVar11);
    *(float *)(param_1 + 0x2fe0) = *(float *)(param_1 + 0x2fe0) + param_2;
    if ((param_2 * (float)_DAT_005e4edf <=
         SQRT(fStack_f4 * fStack_f4 + fStack_fc * fStack_fc + fStack_f8 * fStack_f8)) &&
       (dVar3 = (double)*(float *)(param_1 + 0x20) - (double)fStack_1d4,
       dVar4 = (double)*(float *)(param_1 + 0x24) - (double)fStack_1d0,
       dVar5 = (double)*(float *)(param_1 + 0x28) - (double)fStack_1cc,
       SQRT(dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3) <= (double)param_2 * _DAT_005e4ee7))
    goto LAB_004ede83;
  }
  else {
    FUN_00408ac0(param_1,param_1 + 0x250c);
    fStack_198 = afStack_144[3];
    afStack_1e8[(uint)bVar13 * -2 + 0x15] = afStack_134[(uint)bVar13 * -2];
    afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
         afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_198;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_194;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_190;
  }
  *(uint *)(param_1 + 0x2fe0) = 0;
LAB_004ede83:
  FUN_005675a0(param_1 + 0x158);
  if (*(int *)(param_1 + 0x1fe68) == 1) {
    fStack_5c = 0.5;
    fStack_68 = 0.75;
    iVar7 = FUN_0040c600(*(uint *)(param_1 + 0x2628),_DAT_02c99770);
    if ((iVar7 == 0) || (fStack_18 = (float)FUN_00524a40(param_1 + 0x158,0x10), 0.0 < fStack_18)) {
      fVar1 = *(float *)(param_1 + 0x1fe94) - param_2 / fStack_5c;
    }
    else {
      fVar1 = param_2 / fStack_5c + *(float *)(param_1 + 0x1fe94);
    }
    *(float *)(param_1 + 0x1fe94) = fVar1;
    if (0.0 < *(float *)(param_1 + 0x1fe94)) {
      if (1.0 < *(float *)(param_1 + 0x1fe94)) {
        *(uint *)(param_1 + 0x1fe94) = 0x3f800000;
      }
      iVar7 = param_1 + 0x158;
      fStack_6c = (float)FUN_00525110(iVar7,_DAT_01d06b8c,
                                      *(float *)(param_1 + 0x1fe90) * (float)_DAT_005e4eef +
                                      (float)_DAT_005e4ef7);
      fStack_18 = fStack_6c;
      FUN_00568100(iVar7,_DAT_01d06b8c,fStack_6c,*(uint *)(param_1 + 0x1fe94),
                   *(uint *)(param_1 + 0x1fe7c),&LAB_00567360);
      FUN_00568100(iVar7,_DAT_01d06b8c,fStack_6c,*(uint *)(param_1 + 0x1fe94),
                   *(uint *)(param_1 + 0x1fe80),&LAB_00567360);
      if (((1.0 <= *(float *)(param_1 + 0x1fe94)) && (0.0 < *(float *)(param_1 + 0x1fe90))) &&
         (fVar1 = param_2 / fStack_68 + *(float *)(param_1 + 0x1fe90),
         *(float *)(param_1 + 0x1fe90) = fVar1, 1.0 < fVar1)) {
        *(uint *)(param_1 + 0x1fe90) = 0x3f800000;
      }
    }
    else {
      *(uint *)(param_1 + 0x1fe90) = 0;
      *(uint *)(param_1 + 0x1fe94) = 0;
    }
  }
  FUN_00432f10(param_1,param_2,uStack_38);
  FUN_00433e80(param_1,param_2);
  if ((1.0 <= *(float *)(param_1 + 0x1fe90)) &&
     (iVar7 = FUN_0040c600(*(uint *)(param_1 + 0x2628),_DAT_02c99770), iVar7 != 0)) {
    uVar9 = *(uint *)(iVar7 + 0x56c);
    *(uint *)(iVar7 + 0x56c) = 6;
    (**(code **)(*(int *)(iVar7 + 0x154) + 0xe4))(iVar7);
    *(uint *)(iVar7 + 0x56c) = uVar9;
    FUN_005247c0(param_1 + 0x158,0xc,1);
    *(uint *)(param_1 + 0x1fe94) = 0;
    *(uint *)(param_1 + 0x1fe90) = 0;
  }
  if (((*(int *)(param_1 + 0x1fe68) == 1) &&
      (iVar7 = FUN_0040c600(*(uint *)(param_1 + 0x2628),_DAT_02c99770), iVar7 != 0)) &&
     (iVar7 = FUN_004a6c30(0x01C51D80,"deputeFireShotgun"), iVar7 != 0)) {
    *(uint *)(param_1 + 0x1fe90) = 0x3c23d70a;
    return;
  }
  return;
}
