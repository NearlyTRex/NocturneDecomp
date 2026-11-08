// Name: FUN_00590010
// Address: 00590010
// Address Range: [[00590010, 0059166d]]
// Convention: unknown
// Signature: void FUN_00590010(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00590010(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_12bc [965];
  uint *puVar10;
  float *pfVar11;
  uint uVar12;
  byte auStack_388 [4];
  uint uStack_384;
  int iStack_354;
  int iStack_350;
  byte auStack_34c [4];
  uint uStack_348;
  int iStack_318;
  int iStack_314;
  byte auStack_310 [4];
  uint uStack_30c;
  int iStack_2dc;
  int iStack_2d8;
  float fStack_2d4;
  float afStack_2d0 [4];
  float fStack_2c0;
  float afStack_2bc [3];
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float afStack_298 [3];
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  int iStack_280;
  int iStack_27c;
  float fStack_278;
  uint uStack_274;
  float afStack_270 [4];
  float fStack_260;
  float afStack_25c [4];
  float afStack_24c [4];
  float fStack_23c;
  float fStack_238;
  float afStack_234 [5];
  float afStack_220 [3];
  float afStack_214 [3];
  float fStack_208;
  float afStack_204 [5];
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  uint uStack_1e4;
  float afStack_1e0 [5];
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float afStack_1bc [4];
  float fStack_1ac;
  float fStack_1a8;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  uint uStack_184;
  float afStack_178 [3];
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  uint uStack_160;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float afStack_144 [5];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float afStack_124 [3];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float afStack_10c [3];
  float fStack_100;
  float fStack_fc;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float afStack_b8 [3];
  float afStack_ac [5];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_5c;
  float fStack_58;
  float *pfStack_54;
  int iStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float *pfStack_40;
  float *pfStack_3c;
  float *pfStack_38;
  int iStack_34;
  float fStack_30;
  float *pfStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar4 != 0) {
    if (0.0 < *(float *)(param_1 + 0xd054)) {
      *(float *)(param_1 + 0xd054) = *(float *)(param_1 + 0xd054) - param_2;
    }
    fVar2 = *(float *)(param_1 + 0xd064) + param_2;
    *(float *)(param_1 + 0xd064) = fVar2;
    if (*(float *)(param_1 + 0xd06c) <= fVar2) {
      *(uint *)(param_1 + 0xd064) = *(uint *)(param_1 + 0xd06c);
    }
    if (*(int *)(param_1 + 0xd094) == 0) {
      if ((*(int *)(param_1 + 0xd08c) == 0) && (*(int *)(param_1 + 0xd088) == 0)) {
        *(uint *)(param_1 + 0xd088) = 1;
        fVar2 = *(float *)(param_1 + 0xcdcc) + _DAT_005d8e54;
        *(uint *)(param_1 + 0xd084) = 1;
        *(float *)(param_1 + 0xcdcc) = fVar2;
      }
      if ((0.0 < *(float *)(param_1 + 0xd07c)) && (*(float *)(param_1 + 0xd07c) - param_2 <= 0.0)) {
        iVar4 = *(int *)(param_1 + 0xcde4);
        fStack_f4 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
        fStack_f0 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
        fStack_ec = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
        fStack_2a4 = fStack_f4;
        afStack_2d0[(uint)bVar7 * -2 + 0xc] = afStack_144[(uint)bVar7 * -2 + 0x15];
        afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
             afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
        fStack_84 = fStack_29c * fStack_29c + fStack_2a4 * fStack_2a4 + fStack_2a0 * fStack_2a0;
        fStack_94 = (float)(((int)fStack_84 >> 1) + _DAT_01d1a0a4);
        if (fStack_94 < (float)_DAT_005d8e5c) {
          *(uint *)(param_1 + 0xd07c) = 0x3f000000;
        }
        else {
          *(uint *)(param_1 + 0xd07c) = 0;
          iVar4 = _DAT_01d5ba14;
          *(float *)(param_1 + 0xcdcc) = *(float *)(param_1 + 0xcdcc) + _DAT_005d8e64;
          iVar4 = *(int *)(iVar4 * 4 + 0x1d5ba04);
          fStack_118 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_114 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_110 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_2d4 = fStack_118;
          afStack_2d0[(uint)bVar7 * -2] = afStack_144[(uint)bVar7 * -2 + 0xc];
          afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
          FUN_00576250(&fStack_2d4);
          fStack_c4 = afStack_234[2];
          afStack_144[(uint)bVar7 * -2 + 0x21] = afStack_234[(uint)bVar7 * -2 + 3];
          afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22] =
               afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          fStack_8c = (float)FUN_0040cfa0(fStack_c0 - *(float *)(param_1 + 0x34));
          fStack_14 = fStack_8c;
          fStack_14 = (float)FUN_0040cfa0(fStack_c4 - *(float *)(param_1 + 0x30));
          *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_8c;
          *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_14;
          FUN_004088f0(param_1);
          FUN_004fc0d0(param_1 + 0x158,0xd,1);
        }
      }
      fVar2 = *(float *)(param_1 + 0xd080) - param_2;
      *(float *)(param_1 + 0xd080) = fVar2;
      if (fVar2 < 0.0) {
        *(uint *)(param_1 + 0xd080) = 0;
      }
      fVar2 = *(float *)(param_1 + 0xd07c) - param_2;
      *(float *)(param_1 + 0xd07c) = fVar2;
      if (fVar2 < 0.0) {
        *(uint *)(param_1 + 0xd078) = 0;
        *(uint *)(param_1 + 0xd084) = 0;
        if (*(float *)(param_1 + 0xd07c) < (float)_DAT_005d8e6c) {
          *(uint *)(param_1 + 0xd07c) = 0;
          *(uint *)(param_1 + 0xd088) = 0;
        }
      }
    }
    pfStack_54 = (float *)(param_1 + 0x2518);
    fStack_90 = param_2 * *(float *)(param_1 + 0xcdcc);
    pfStack_40 = (float *)(param_1 + 0x250c);
    pfStack_38 = (float *)(param_1 + 0x249c);
    iStack_34 = param_1 + 0x158;
    pfStack_2c = (float *)(param_1 + 0xd098);
    iStack_50 = param_1 + 0xfd8;
    pfStack_3c = (float *)(param_1 + 0x20);
    while (0.0 < fStack_90) {
      iVar4 = FUN_004fbb70(iStack_34,&fStack_90);
      switch(iVar4) {
      case 0x514:
        iVar4 = param_1 + iVar4 * 4;
        iVar5 = FUN_00556700(*(uint *)(iVar4 + 0xbc54));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"keddem_stand.wav");
          *(uint *)(iVar4 + 0xbc54) = uVar6;
        }
        break;
      case 0x515:
        iVar4 = param_1 + iVar4 * 4;
        iVar5 = FUN_00556700(*(uint *)(iVar4 + 0xbc54));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"keddem_chasewalk.wav");
          *(uint *)(iVar4 + 0xbc54) = uVar6;
        }
        break;
      case 0x516:
        iVar4 = param_1 + iVar4 * 4;
        iVar5 = FUN_00556700(*(uint *)(iVar4 + 0xbc54));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"keddem_chasefast.wav");
          *(uint *)(iVar4 + 0xbc54) = uVar6;
        }
        break;
      case 0x517:
        iVar4 = param_1 + iVar4 * 4;
        iVar5 = FUN_00556700(*(uint *)(iVar4 + 0xbc54));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"keddem_attack1.wav");
          *(uint *)(iVar4 + 0xbc54) = uVar6;
        }
        break;
      case 0x518:
        iVar4 = param_1 + iVar4 * 4;
        iVar5 = FUN_00556700(*(uint *)(iVar4 + 0xbc54));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"keddem_attack2.wav");
          *(uint *)(iVar4 + 0xbc54) = uVar6;
        }
        break;
      case 0x519:
        iVar4 = param_1 + iVar4 * 4;
        iVar5 = FUN_00556700(*(uint *)(iVar4 + 0xbc54));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"keddem_attack3.wav");
          *(uint *)(iVar4 + 0xbc54) = uVar6;
        }
        break;
      case 0x51a:
        iVar4 = param_1 + iVar4 * 4;
        iVar5 = FUN_00556700(*(uint *)(iVar4 + 0xbc54));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"keddem_pain.wav");
          *(uint *)(iVar4 + 0xbc54) = uVar6;
        }
        break;
      case 0x51b:
        iVar4 = param_1 + iVar4 * 4;
        iVar5 = FUN_00556700(*(uint *)(iVar4 + 0xbc54));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"keddem_die.wav")
          ;
          *(uint *)(iVar4 + 0xbc54) = uVar6;
        }
        break;
      case 0x51c:
        iVar4 = param_1 + iVar4 * 4;
        iVar5 = FUN_00556700(*(uint *)(iVar4 + 0xbc54));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"keddem_warning.wav");
          *(uint *)(iVar4 + 0xbc54) = uVar6;
        }
        break;
      case 0x51d:
        iVar4 = param_1 + iVar4 * 4;
        iVar5 = FUN_00556700(*(uint *)(iVar4 + 0xbc54));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"keddem_appear.wav");
          *(uint *)(iVar4 + 0xbc54) = uVar6;
        }
        break;
      case 0x51e:
        iVar4 = param_1 + iVar4 * 4;
        iVar5 = FUN_00556700(*(uint *)(iVar4 + 0xbc54));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"keddem_disappear.wav");
          *(uint *)(iVar4 + 0xbc54) = uVar6;
        }
      }
      *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
      FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
      iVar4 = FUN_004fc070(iStack_34);
      uVar6 = *(uint *)(iVar4 + 0x24);
      FUN_00441ff0(PTR_DAT_005f1690,"State: %d\n",uVar6);
      iVar4 = FUN_00431660(param_1,param_2);
      if (iVar4 == 0) {
        switch(uVar6) {
        case 0:
          if ((*(int *)(param_1 + 0xd094) == 0) &&
             (iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
             iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 == 0)) {
            iVar4 = FUN_00489ff0(param_1,param_2);
            if (iVar4 != 0) {
              FUN_005919a0(param_1);
            }
            (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
            if (*(int *)(param_1 + 0xcde4) == 0) {
              iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
              if (iVar4 == 0) break;
              *(uint *)(0x01D2130C + 0x244) = 1;
              *(uint *)(param_1 + 0xcde4) = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            }
            if (*(int *)(param_1 + 0xcde4) != 0) {
              FUN_005919a0(param_1);
            }
          }
          break;
        case 1:
        case 2:
          if ((*(int *)(param_1 + 0xd068) == 0) && (*(int *)(param_1 + 0xd094) != 0)) {
            FUN_004fc0d0(iStack_34,0,1);
          }
          else {
            iVar4 = *(int *)(param_1 + 0xcde4);
            (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
            if ((*(int *)(param_1 + 0xcde4) == 0) &&
               (iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
               iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), iVar5 != 0)) {
              *(uint *)(0x01D2130C + 0x244) = 1;
              *(uint *)(param_1 + 0xcde4) = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            }
            if (*(int *)(param_1 + 0xcde4) == 0) {
              iVar4 = FUN_00489ff0(param_1,param_2);
              if (iVar4 == 0) {
                FUN_004fc0d0(iStack_34,0,1);
              }
            }
            else if (iVar4 == 0) {
              FUN_005919a0(param_1);
            }
            else {
              pfStack_38[2] = 0.0;
              pfStack_38[1] = pfStack_38[2];
              *pfStack_38 = pfStack_38[1];
              iVar4 = *(int *)(param_1 + 0xd078);
              if (iVar4 == 0) {
                fStack_278 = 0x40733333;
                iStack_280 = iVar4;
                iStack_27c = iVar4;
                uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                                  (*(int *)(param_1 + 0xcde4),&iStack_280,0x3f8ccccd,0x3eb2b8c2);
                iVar4 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar6);
                if (iVar4 < 0) {
                  FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
                  FUN_004fc0d0(iStack_34,0,1);
                }
                else if (0 < iVar4) {
                  iVar4 = FUN_0040cea0(0,100);
                  if (iVar4 < 0x4b) {
                    uVar6 = 3;
                  }
                  else {
                    uVar6 = 4;
                  }
                  FUN_004fc0d0(iStack_34,uVar6,1);
                  *(uint *)(param_1 + 0xcde0) = 0x3f4ccccd;
                }
              }
              else {
                if (*(float *)(param_1 + 0xd080) <= 0.0) {
                  fStack_1c = (float)FUN_0040ce40(0xc0a00000,0x40a00000);
                  afStack_214[0] = (float)FUN_0040ce40(0xc0a00000,0x40a00000);
                  fStack_18 = fStack_1c;
                  afStack_214[1] = 0.0;
                  afStack_214[2] = fStack_1c;
                  if (afStack_234 + 8 != pfStack_2c) {
                    *pfStack_2c = afStack_214[0];
                    pfStack_2c[1] = 0.0;
                    pfStack_2c[2] = fStack_1c;
                  }
                  fStack_5c = SQRT(pfStack_2c[2] * pfStack_2c[2] +
                                   *pfStack_2c * *pfStack_2c + pfStack_2c[1] * pfStack_2c[1]);
                  if (fStack_5c <= 0.0) {
                    pfStack_2c[2] = 0.0;
                    pfStack_2c[1] = pfStack_2c[2];
                    *pfStack_2c = pfStack_2c[1];
                  }
                  else {
                    fVar2 = 1.0 / fStack_5c;
                    *pfStack_2c = *pfStack_2c * fVar2;
                    pfStack_2c[1] = pfStack_2c[1] * fVar2;
                    pfStack_2c[2] = pfStack_2c[2] * fVar2;
                  }
                  fVar2 = pfStack_2c[1] * _DAT_005d8e74;
                  fVar3 = pfStack_2c[2] * _DAT_005d8e74;
                  *pfStack_2c = *pfStack_2c * _DAT_005d8e74;
                  pfStack_2c[1] = fVar2;
                  pfStack_2c[2] = fVar3;
                  iVar4 = *(int *)(param_1 + 0xcde4);
                  *pfStack_2c = *(float *)(iVar4 + 0x20) + *pfStack_2c;
                  pfStack_2c[1] = *(float *)(iVar4 + 0x24) + pfStack_2c[1];
                  pfStack_2c[2] = *(float *)(iVar4 + 0x28) + pfStack_2c[2];
                  *(uint *)(param_1 + 0xd080) = 0x3f800000;
                  fStack_58 = afStack_214[0];
                  fStack_14 = afStack_214[0];
                }
                afStack_25c[0] = 0.0;
                afStack_25c[1] = 0.0;
                afStack_25c[2] = 0.0;
                FUN_0042b9e0(param_1,pfStack_2c,0,afStack_270 + 5,0x3f800000,0);
              }
            }
          }
          break;
        case 3:
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          iVar4 = *(int *)(param_1 + 0xcde4);
          if (iVar4 == 0) {
            FUN_005919a0(param_1);
          }
          else {
            fStack_28c = *pfStack_3c - *(float *)(iVar4 + 0x20);
            fStack_288 = pfStack_3c[1] - *(float *)(iVar4 + 0x24);
            fStack_284 = pfStack_3c[2] - *(float *)(iVar4 + 0x28);
            fStack_d0 = fStack_28c;
            afStack_144[(uint)bVar7 * -2 + 0x1e] = afStack_2d0[(uint)bVar7 * -2 + 0x12];
            afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f] =
                 afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
            if (afStack_1e0 + 5 != afStack_144 + 0x1d) {
              fStack_1cc = fStack_d0;
              fStack_1c8 = fStack_cc;
              fStack_1c4 = fStack_c8;
            }
            fStack_48 = (float)FUN_004fc930(iStack_34);
            fStack_70 = fStack_1c4 * fStack_1c4 + fStack_1cc * fStack_1cc + fStack_1c8 * fStack_1c8;
            fStack_6c = (float)(((int)fStack_70 >> 1) + _DAT_01d1a0a4);
            fStack_14 = fStack_48;
            if ((fStack_6c <= 0x40733333) || (fStack_48 <= (float)_DAT_005d8eac)) {
              if ((0x3f7fffff < (int)fStack_48) && ((int)fStack_48 < 0x40000001)) {
                FUN_0042abb0(auStack_34c);
                uStack_348 = 0x41200000;
                iStack_318 = param_1;
                iStack_314 = param_1;
                FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd074) * 0x30 + iStack_50,0x40000000,
                             auStack_34c);
                pfVar11 = afStack_2d0 + 0xe;
                afStack_298[0] = (float)uStack_274;
                afStack_2d0[(uint)bVar7 * -2 + 0xf] = afStack_270[(uint)bVar7 * -2];
                afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                     afStack_270[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
                FUN_00408b80(param_1,pfVar11);
                pfVar11 = afStack_1bc + 0x11;
                afStack_178[0] = afStack_25c[3];
                afStack_1bc[(uint)bVar7 * -2 + 0x12] = afStack_24c[(uint)bVar7 * -2];
                iVar4 = param_1;
                afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
                     afStack_24c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
                FUN_004893f0(iVar4,pfVar11);
              }
            }
            else {
              FUN_005919a0(param_1);
            }
          }
          break;
        case 4:
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          iVar4 = *(int *)(param_1 + 0xcde4);
          if (iVar4 == 0) {
            FUN_005919a0(param_1);
          }
          else {
            afStack_1bc[2] = *pfStack_3c - *(float *)(iVar4 + 0x20);
            afStack_1bc[3] = pfStack_3c[1] - *(float *)(iVar4 + 0x24);
            fStack_1ac = pfStack_3c[2] - *(float *)(iVar4 + 0x28);
            fStack_148 = afStack_1bc[2];
            afStack_144[(uint)bVar7 * -2] = afStack_1bc[(uint)bVar7 * -2 + 3];
            afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            if (afStack_1bc + 0x1a != &fStack_148) {
              fStack_154 = fStack_148;
              fStack_150 = afStack_144[0];
              fStack_14c = afStack_144[1];
            }
            fStack_4c = (float)FUN_004fc930(iStack_34);
            fStack_78 = fStack_14c * fStack_14c + fStack_154 * fStack_154 + fStack_150 * fStack_150;
            fStack_74 = (float)(((int)fStack_78 >> 1) + _DAT_01d1a0a4);
            fStack_14 = fStack_4c;
            if ((fStack_74 <= 0x40733333 + 1.0) || (fStack_4c <= (float)_DAT_005d8ea4)) {
              if ((0x3f7fffff < (int)fStack_4c) && ((int)fStack_4c < 0x40000001)) {
                FUN_0042abb0(auStack_310);
                uStack_30c = 0x41a00000;
                iStack_2dc = param_1;
                iStack_2d8 = param_1;
                FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd074) * 0x30 + iStack_50,0x40000000,
                             auStack_310);
                pfVar11 = afStack_234 + 5;
                afStack_220[0] = (float)uStack_1e4;
                afStack_234[(uint)bVar7 * -2 + 6] = afStack_1e0[(uint)bVar7 * -2];
                afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                     afStack_1e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
                FUN_00408b80(param_1,pfVar11);
                pfVar11 = afStack_144 + 0x26;
                afStack_ac[0] = afStack_1e0[2];
                afStack_144[(uint)bVar7 * -2 + 0x27] = afStack_1e0[(uint)bVar7 * -2 + 3];
                iVar4 = param_1;
                afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x28] =
                     afStack_1e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
                FUN_004893f0(iVar4,pfVar11);
              }
            }
            else {
              FUN_005919a0(param_1);
            }
          }
          break;
        case 5:
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          iVar4 = *(int *)(param_1 + 0xcde4);
          if (iVar4 == 0) {
            FUN_005919a0(param_1);
          }
          else {
            fStack_208 = *pfStack_3c - *(float *)(iVar4 + 0x20);
            afStack_204[0] = pfStack_3c[1] - *(float *)(iVar4 + 0x24);
            afStack_204[1] = pfStack_3c[2] - *(float *)(iVar4 + 0x28);
            afStack_2d0[2] = fStack_208;
            afStack_2d0[(uint)bVar7 * -2 + 3] = afStack_204[(uint)bVar7 * -2];
            afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_204[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            if (afStack_204 + 5 != afStack_2d0 + 2) {
              fStack_1f0 = afStack_2d0[2];
              fStack_1ec = afStack_2d0[3];
              fStack_1e8 = fStack_2c0;
            }
            fStack_44 = (float)FUN_004fc930(iStack_34);
            fStack_80 = fStack_1e8 * fStack_1e8 + fStack_1f0 * fStack_1f0 + fStack_1ec * fStack_1ec;
            fStack_68 = (float)(((int)fStack_80 >> 1) + _DAT_01d1a0a4);
            fStack_14 = fStack_44;
            if ((fStack_68 <= 0x40733333) || (fStack_44 <= (float)_DAT_005d8ea4)) {
              if ((0x3f7fffff < (int)fStack_44) && ((int)fStack_44 < 0x40000001)) {
                FUN_0042abb0(auStack_388);
                uStack_384 = 0x41f00000;
                iStack_354 = param_1;
                iStack_350 = param_1;
                FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd074) * 0x30 + iStack_50,0x40000000,
                             auStack_388);
                puVar10 = &uStack_1c0;
                uStack_1c0 = afStack_144[2];
                afStack_1bc[(uint)bVar7 * -2] = afStack_144[(uint)bVar7 * -2 + 3];
                afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                     afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
                FUN_00408b80(param_1,puVar10);
                pfVar11 = afStack_2d0 + 5;
                afStack_2bc[0] = (float)uStack_184;
                afStack_2d0[(uint)bVar7 * -2 + 6] = afStack_1bc[(uint)bVar7 * -2 + 0xf];
                iVar4 = param_1;
                afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                     afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
                FUN_004893f0(iVar4,pfVar11);
              }
            }
            else {
              FUN_005919a0(param_1);
            }
          }
          break;
        case 8:
          if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
            FUN_0054dbd0(iStack_34,0);
            pfVar11 = afStack_144 + 0x23;
            afStack_b8[0] = (float)uStack_160;
            afStack_144[(uint)bVar7 * -2 + 0x24] = afStack_1bc[(uint)bVar7 * -2 + 0x18];
            afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25] =
                 afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
            FUN_00408b80(param_1,pfVar11);
            uVar6 = 0;
            afStack_10c[0] = (float)uStack_dc;
            afStack_144[(uint)bVar7 * -2 + 0xf] = afStack_144[(uint)bVar7 * -2 + 0x1b];
            afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                 afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
            FUN_004cec40(0x01D22E44,afStack_144 + 0xe,uVar6);
            *(uint *)(param_1 + 0xcdd0) = 1;
          }
          break;
        case 10:
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          iVar4 = *(int *)(param_1 + 0xcde4);
          if (iVar4 != 0) {
            fStack_e8 = *pfStack_3c - *(float *)(iVar4 + 0x20);
            fStack_e4 = pfStack_3c[1] - *(float *)(iVar4 + 0x24);
            fStack_e0 = pfStack_3c[2] - *(float *)(iVar4 + 0x28);
            fStack_19c = fStack_e8;
            afStack_1bc[(uint)bVar7 * -2 + 9] = afStack_144[(uint)bVar7 * -2 + 0x18];
            afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                 afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
            if (afStack_24c + 2 != afStack_1bc + 8) {
              afStack_24c[2] = fStack_19c;
              afStack_24c[3] = fStack_198;
              fStack_23c = fStack_194;
            }
            fStack_28 = fStack_23c * fStack_23c +
                        afStack_24c[2] * afStack_24c[2] + afStack_24c[3] * afStack_24c[3];
            fStack_24 = (float)(((int)fStack_28 >> 1) + _DAT_01d1a0a4);
            if (fStack_24 <= (float)_DAT_005d8e94) {
              fStack_30 = *(float *)(param_1 + 0x3280);
              if (fStack_30 < *(float *)(param_1 + 0x327c)) {
                fStack_30 = *(float *)(param_1 + 0x2490);
              }
              if (fStack_30 < *(float *)(param_1 + 0x327c)) {
                fStack_30 = *(float *)(param_1 + 0x327c) + (float)_DAT_005d8e9c;
              }
              iVar4 = 0;
              do {
                fStack_20 = (float)iVar4 * _DAT_005d8e78 * _DAT_005d8e7c;
                fStack_14 = (float)iVar4;
                FUN_0053ebe0(0x01ED78C8);
                FUN_0053ec10(0x01ED78C8,param_1);
                fVar8 = (float10)fcos((float10)fStack_20);
                fVar9 = (float10)fsin((float10)fStack_20);
                fStack_98 = (float)FUN_0053de10(0x01ED78C8,*(uint *)(param_1 + 0x20),
                                                *(uint *)(param_1 + 0x28),
                                                (float)(fVar9 * (float10)_DAT_005d8e84),
                                                (float)(fVar8 * (float10)_DAT_005d8e84),
                                                *(uint *)(param_1 + 0x3270),
                                                *(float *)(param_1 + 0x24) +
                                                *(float *)(param_1 + 0x327c),
                                                *(float *)(param_1 + 0x24) + fStack_30);
                fStack_14 = fStack_98;
                FUN_0053ebe0(0x01ED78C8);
                if (fStack_98 < 1.0) break;
                iVar4 = iVar4 + 1;
              } while (iVar4 < 4);
              if (iVar4 < 4) {
                *(uint *)(param_1 + 0xcde4) = 0;
              }
              else {
                FUN_004fc0d0(iStack_34,0,1);
              }
            }
          }
          break;
        case 0xc:
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
          if (iVar4 == 0) {
            iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_2b0 = *(float *)(iVar4 + 0x20) - *pfStack_3c;
            fStack_2ac = *(float *)(iVar4 + 0x24) - pfStack_3c[1];
            fStack_2a8 = *(float *)(iVar4 + 0x28) - pfStack_3c[2];
            afStack_204[2] = fStack_2b0;
            afStack_204[(uint)bVar7 * -2 + 3] = afStack_2d0[(uint)bVar7 * -2 + 9];
            afStack_204[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
            FUN_00576250(afStack_204 + 2);
            fStack_100 = fStack_1a8;
            afStack_144[(uint)bVar7 * -2 + 0x12] = afStack_1bc[(uint)bVar7 * -2 + 6];
            afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
                 afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            fStack_64 = (float)FUN_0040cfa0(fStack_fc - *(float *)(param_1 + 0x34));
            fStack_14 = fStack_64;
            fStack_14 = (float)FUN_0040cfa0(fStack_100 - *(float *)(param_1 + 0x30));
            *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_64;
            *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_14;
            FUN_004088f0(param_1);
          }
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
          if ((iVar4 != 0) &&
             (fStack_14 = (float)FUN_004fc930(iStack_34), (float)_DAT_005d8e8c < fStack_14)) {
            FUN_004fc0d0(iStack_34,0,1);
          }
          break;
        case 0xd:
        case 0xf:
        case 0x10:
          if (*(int *)(param_1 + 0xd068) == 0) {
            *(uint *)(param_1 + 0xd068) = 1;
            *(uint *)(param_1 + 0xd064) = 0;
          }
          break;
        case 0xe:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
          if (*(int *)(param_1 + 0xd068) == 1) {
            *(uint *)(param_1 + 0xd068) = 0;
            *(uint *)(param_1 + 0xd064) = 0;
            if (*(int *)(param_1 + 0xd094) == 0) {
              *(uint *)(param_1 + 0xd07c) = 0x40800000;
              *(uint *)(param_1 + 0xd078) = 1;
            }
          }
        }
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x273c);
        if (uVar1 < 2) {
          if (uVar1 == 1) {
LAB_005901a2:
            uVar12 = 1;
          }
          else {
LAB_00590865:
            uVar12 = 0;
          }
          FUN_004fc0d0(iStack_34,uVar12,1);
        }
        else {
          if (uVar1 < 3) goto LAB_005901a2;
          if (uVar1 != 3) goto LAB_00590865;
          FUN_004fc0d0(iStack_34,0,1);
          FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
        }
        switch(uVar6) {
        case 0xd:
        case 0xf:
        case 0x10:
          if (*(int *)(param_1 + 0xd068) == 0) {
            *(uint *)(param_1 + 0xd068) = 1;
            *(uint *)(param_1 + 0xd064) = 0;
          }
          break;
        case 0xe:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
          if (*(int *)(param_1 + 0xd068) == 1) {
            *(uint *)(param_1 + 0xd068) = 0;
            *(uint *)(param_1 + 0xd064) = 0;
            if (*(int *)(param_1 + 0xd094) == 0) {
              *(uint *)(param_1 + 0xd07c) = 0x40800000;
              *(uint *)(param_1 + 0xd078) = 1;
            }
          }
        }
        pfStack_38[2] = 0.0;
        pfStack_38[1] = pfStack_38[2];
        *pfStack_38 = pfStack_38[1];
      }
      if (0.0 < *(float *)(param_1 + 0xcde0)) {
        *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
      }
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
      if (iVar4 != 0) {
        FUN_004fc0d0(iStack_34,0xc,1);
      }
      FUN_0042c1e0(param_1,param_2);
      afStack_270[2] = *pfStack_54 * param_2;
      afStack_270[3] = pfStack_54[1] * param_2;
      fStack_260 = pfStack_54[2] * param_2;
      fStack_16c = *pfStack_54 * param_2;
      afStack_1bc[(uint)bVar7 * -2 + 0x15] = afStack_270[(uint)bVar7 * -2 + 3];
      afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
           afStack_270[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      fStack_190 = fStack_16c + *pfStack_40;
      fStack_18c = fStack_168 + pfStack_40[1];
      fStack_188 = fStack_164 + pfStack_40[2];
      fStack_130 = fStack_16c + *pfStack_40;
      afStack_144[(uint)bVar7 * -2 + 6] = afStack_1bc[(uint)bVar7 * -2 + 0xc];
      pfVar11 = pfStack_40;
      afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
      fStack_238 = fStack_130 + *pfStack_38;
      afStack_234[0] = fStack_12c + pfStack_38[1];
      afStack_234[1] = fStack_128 + pfStack_38[2];
      afStack_124[0] = fStack_130 + *pfStack_38;
      afStack_144[(uint)bVar7 * -2 + 9] = afStack_234[(uint)bVar7 * -2];
      afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      pfVar11[2] = 0.0;
      pfVar11[1] = pfVar11[2];
      *pfVar11 = pfVar11[1];
      pfStack_38[2] = 0.0;
      pfStack_38[1] = pfStack_38[2];
      *pfStack_38 = pfStack_38[1];
      FUN_0042c230(param_1,afStack_144 + 8);
    }
    FUN_0042cd30(param_1);
    FUN_0054c130(iStack_34);
    FUN_00433350(param_1,param_2);
  }
  return;
}
