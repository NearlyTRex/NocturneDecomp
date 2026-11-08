// Name: FUN_005968a0
// Address: 005968a0
// Address Range: [[005968a0, 005976f0]]
// Convention: unknown
// Signature: void FUN_005968a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005968a0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  float afStackY_1144 [997];
  float *pfVar8;
  uint uVar9;
  byte auStack_198 [4];
  uint uStack_194;
  int iStack_164;
  int iStack_160;
  float fStack_15c;
  float afStack_158 [4];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint uStack_138;
  float afStack_134 [5];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  uint uStack_114;
  float fStack_108;
  float fStack_104;
  float afStack_fc [3];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  int iStack_e4;
  int iStack_e0;
  float fStack_dc;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  float afStack_c0 [4];
  float afStack_b0 [5];
  float afStack_9c [3];
  float afStack_90 [3];
  uint uStack_84;
  float afStack_78 [3];
  float afStack_6c [3];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  float *pfStack_30;
  float *pfStack_2c;
  float fStack_28;
  float fStack_24;
  float *pfStack_20;
  int iStack_1c;
  float *pfStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
  if (*(int *)(param_1 + 0xcde4) == 0) {
    iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
    if (iVar2 == 0) {
      FUN_004fc0d0(param_1 + 0x158,0,1);
      return;
    }
    *(uint *)(0x01D2130C + 0x244) = 1;
    *(uint *)(param_1 + 0xcde4) = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  iVar2 = *(int *)(param_1 + 0xcde4);
  if (iVar2 != 0) {
    afStack_158[2] = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
    afStack_158[3] = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
    fStack_148 = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
    fStack_120 = afStack_158[2];
    afStack_134[(uint)bVar7 * -2 + 6] = afStack_158[(uint)bVar7 * -2 + 3];
    afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    if (afStack_158 + 5 != afStack_134 + 5) {
      fStack_144 = fStack_120;
      fStack_140 = fStack_11c;
      fStack_13c = fStack_118;
    }
    fStack_28 = fStack_13c * fStack_13c + fStack_144 * fStack_144 + fStack_140 * fStack_140;
    fStack_24 = (float)(((int)fStack_28 >> 1) + _DAT_01d1a0a4);
    iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
    if (iVar2 != 0) {
      if (0.0 < *(float *)(param_1 + 0xd054)) {
        *(float *)(param_1 + 0xd054) = *(float *)(param_1 + 0xd054) - param_2;
      }
      if (0.0 < *(float *)(param_1 + 0xd080)) {
        *(float *)(param_1 + 0xd080) = *(float *)(param_1 + 0xd080) - param_2;
      }
      fVar1 = *(float *)(param_1 + 0xd064) + param_2;
      *(float *)(param_1 + 0xd064) = fVar1;
      if (*(float *)(param_1 + 0xd06c) <= fVar1) {
        *(uint *)(param_1 + 0xd064) = *(uint *)(param_1 + 0xd06c);
      }
      iStack_1c = param_1 + 0x158;
      fStack_48 = param_2 * *(float *)(param_1 + 0xcdcc);
      pfStack_2c = (float *)(param_1 + 0x2518);
      pfStack_20 = (float *)(param_1 + 0x250c);
      pfStack_18 = (float *)(param_1 + 0x249c);
      pfStack_30 = (float *)(param_1 + 0x20);
      iStack_34 = param_1 + 0xfd8;
      do {
        if (fStack_48 <= 0.0) {
          FUN_0042cd30(param_1);
          FUN_0054c130(iStack_1c);
          FUN_00433350(param_1,param_2);
          return;
        }
        uVar3 = FUN_004fbb70(iStack_1c,afStack_b0 + 0x1a);
        iVar2 = uVar3 * 4 + param_1;
        if (uVar3 < 0x4b4) {
          if (uVar3 < 0x4b1) {
            if (0x44c < uVar3) {
              if (uVar3 < 0x44e) {
                FUN_0053b440(0x01ED78C8,0x42c80000,0,0,0x3f800000);
                if (*(int *)(param_1 + 0xd0b8) != 0) {
                  FUN_00419790(*(int *)(param_1 + 0xd0b8));
                }
              }
              else if ((uVar3 == 0x4b0) &&
                      (iVar2 = FUN_00556700(*(uint *)(param_1 + 0xd084)), iVar2 == 0)) {
                uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                  (param_1,"baal_stand.wav");
                *(uint *)(param_1 + 0xd084) = uVar5;
              }
            }
          }
          else if (uVar3 < 0x4b2) {
            iVar4 = FUN_00556700(*(uint *)(iVar2 + 0xbdc4));
            if (iVar4 == 0) {
              uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"baal_chasewalk.wav");
              *(uint *)(iVar2 + 0xbdc4) = uVar5;
            }
          }
          else if (uVar3 < 0x4b3) {
            iVar4 = FUN_00556700(*(uint *)(iVar2 + 0xbdc4));
            if (iVar4 == 0) {
              uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"baal_chasefast.wav");
              *(uint *)(iVar2 + 0xbdc4) = uVar5;
            }
          }
          else {
            iVar4 = FUN_00556700(*(uint *)(iVar2 + 0xbdc4));
            if (iVar4 == 0) {
              uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"baal_attack.wav");
              *(uint *)(iVar2 + 0xbdc4) = uVar5;
            }
          }
        }
        else if (uVar3 < 0x4b5) {
          iVar4 = FUN_00556700(*(uint *)(iVar2 + 0xbdc4));
          if (iVar4 == 0) {
            uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"baal_attack1.wav");
            *(uint *)(iVar2 + 0xbdc4) = uVar5;
          }
        }
        else if (uVar3 < 0x4b7) {
          if (uVar3 < 0x4b6) {
            iVar4 = FUN_00556700(*(uint *)(iVar2 + 0xbdc4));
            if (iVar4 == 0) {
              uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"baal_attack2.wav");
              *(uint *)(iVar2 + 0xbdc4) = uVar5;
            }
          }
          else {
            iVar4 = FUN_00556700(*(uint *)(iVar2 + 0xbdc4));
            if (iVar4 == 0) {
              uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"baal_attack3.wav");
              *(uint *)(iVar2 + 0xbdc4) = uVar5;
            }
          }
        }
        else if (uVar3 < 0x4b8) {
          iVar4 = FUN_00556700(*(uint *)(iVar2 + 0xbdc4));
          if (iVar4 == 0) {
            uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"baal_pain.wav");
            *(uint *)(iVar2 + 0xbdc4) = uVar5;
          }
        }
        else if (uVar3 < 0x4b9) {
          iVar4 = FUN_00556700(*(uint *)(iVar2 + 0xbdc4));
          if (iVar4 == 0) {
            uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"baal_die.wav")
            ;
            *(uint *)(iVar2 + 0xbdc4) = uVar5;
          }
        }
        else if ((uVar3 == 0x4b9) &&
                (iVar4 = FUN_00556700(*(uint *)(iVar2 + 0xbdc4)), iVar4 == 0)) {
          uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"baal_warning.wav");
          *(uint *)(iVar2 + 0xbdc4) = uVar5;
        }
        fVar1 = (float)_DAT_005d9659;
        *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
        FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc) * fVar1);
        iVar2 = FUN_004fc070(iStack_1c);
        iVar2 = *(int *)(iVar2 + 0x24);
        iVar4 = FUN_00431660(param_1,param_2);
        if (iVar4 != 0) {
          uVar3 = *(uint *)(param_1 + 0x273c);
          if (uVar3 < 2) {
            if (uVar3 == 1) {
LAB_00596aff:
              if (iVar2 != 2) {
                FUN_00597be0(param_1,0);
              }
            }
            else {
LAB_00596f96:
              FUN_004fc0d0(iStack_1c,0,1);
            }
          }
          else {
            if (uVar3 < 3) goto LAB_00596aff;
            if (uVar3 != 3) goto LAB_00596f96;
            FUN_004fc0d0(iStack_1c,0,1);
            FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
          }
          pfStack_18[2] = 0.0;
          pfStack_18[1] = pfStack_18[2];
          *pfStack_18 = pfStack_18[1];
          goto switchD_005976af_caseD_6;
        }
        iVar4 = FUN_004fc070(iStack_1c);
        switch(*(uint *)(iVar4 + 0x24)) {
        case 0:
          iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_d8 = *(float *)(iVar2 + 0x20) - *pfStack_30;
          afStack_d4[0] = *(float *)(iVar2 + 0x24) - pfStack_30[1];
          afStack_d4[1] = *(float *)(iVar2 + 0x28) - pfStack_30[2];
          afStack_fc[0] = fStack_d8;
          afStack_134[(uint)bVar7 * -2 + 0xf] = afStack_d4[(uint)bVar7 * -2];
          afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
               afStack_d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          FUN_00576250(afStack_134 + 0xe);
          fStack_108 = afStack_b0[2];
          afStack_134[(uint)bVar7 * -2 + 0xc] = afStack_b0[(uint)bVar7 * -2 + 3];
          afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
               afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          fStack_44 = (float)FUN_0040cfa0(fStack_104 - *(float *)(param_1 + 0x34));
          fStack_14 = fStack_44;
          fStack_14 = (float)FUN_0040cfa0(fStack_108 - *(float *)(param_1 + 0x30));
          *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_44;
          *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_14;
          FUN_004088f0(param_1);
          if (*(float *)(param_1 + 0xcde0) <= 0.0) {
            if ((float)_DAT_005d9679 < fStack_24) {
              FUN_00597be0(param_1,0);
            }
            iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
            if (iVar2 == 0) {
              fStack_3c = fStack_13c * fStack_13c +
                          fStack_144 * fStack_144 + fStack_140 * fStack_140;
              fStack_38 = (float)(((int)fStack_3c >> 1) + _DAT_01d1a0a4);
              if (0x40A00000 + (float)_DAT_005d9681 < fStack_38) {
                if ((((float)_DAT_005d9659 < fStack_24) || (*(int *)(param_1 + 0xd07c) != 0)) &&
                   ((iVar2 = FUN_0040cea0(0,100), 0x50 < iVar2 || (*(int *)(param_1 + 0xd07c) != 0))
                   )) {
                  iVar2 = 0;
                  for (iVar4 = 0; iVar4 < *(int *)(0x01ED78C8 + 0x14d164); iVar4 = iVar4 + 1) {
                    iVar6 = FUN_0040c840(*(uint *)(iVar2 + 0x14d168 + 0x01ED78C8),
                                         DAT_007e1774);
                    *(int *)(param_1 + 0xd0b8) = iVar6;
                    if (((iVar6 != 0) &&
                        (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6), iVar6 < 1))
                       && (*(int *)(*(int *)(param_1 + 0xd0b8) + 0xd0e4) == 1)) {
                      FUN_004fc0d0(iStack_1c,1,1);
                      *(uint *)(param_1 + 0xd07c) = 1;
                      break;
                    }
                    iVar2 = iVar2 + 4;
                  }
                }
              }
              else {
                FUN_00597700(param_1);
              }
            }
          }
          break;
        case 1:
        case 2:
          FUN_00441ff0(PTR_DAT_005f1690,"Walking...\n");
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          if ((*(int *)(param_1 + 0xcde4) == 0) &&
             (iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
             iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2), iVar2 != 0)) {
            *(uint *)(0x01D2130C + 0x244) = 1;
            *(uint *)(param_1 + 0xcde4) = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          }
          if (*(int *)(param_1 + 0xcde4) == 0) {
            iVar2 = FUN_00489ff0(param_1,param_2);
            if (iVar2 == 0) {
              FUN_004fc0d0(iStack_1c,0,1);
            }
          }
          else {
            if ((((float)_DAT_005d9659 < fStack_24) || (*(int *)(param_1 + 0xd07c) != 0)) &&
               ((iVar2 = FUN_0040cea0(0,100), 0x62 < iVar2 || (*(int *)(param_1 + 0xd07c) != 0)))) {
              iVar2 = 0;
              for (iVar4 = 0; iVar4 < *(int *)(0x01ED78C8 + 0x14d164); iVar4 = iVar4 + 1) {
                iVar6 = FUN_0040c840(*(uint *)(iVar2 + 0x14d168 + 0x01ED78C8),DAT_007e1774);
                *(int *)(param_1 + 0xd0b8) = iVar6;
                if (((iVar6 != 0) &&
                    (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6), iVar6 < 1)) &&
                   (*(int *)(*(int *)(param_1 + 0xd0b8) + 0xd0e4) == 1)) {
                  *(uint *)(param_1 + 0xd07c) = 1;
                  pfStack_18[2] = 0.0;
                  pfStack_18[1] = pfStack_18[2];
                  *pfStack_18 = pfStack_18[1];
                  afStack_c0[0] = 0.0;
                  afStack_c0[1] = 0.0;
                  afStack_c0[2] = 2.0;
                  iVar2 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xd0b8) + 0xd068,0,afStack_d4 + 5,
                                       0x40000000,0x3e32b8c2);
                  if (0 < iVar2) {
                    *(uint *)(param_1 + 0xd07c) = 0;
                    FUN_004fc0d0(iStack_1c,10,1);
                  }
                  break;
                }
                iVar2 = iVar2 + 4;
              }
            }
            iVar2 = *(int *)(param_1 + 0xd07c);
            if (iVar2 == 0) {
              pfStack_18[2] = 0.0;
              pfStack_18[1] = pfStack_18[2];
              *pfStack_18 = pfStack_18[1];
              fStack_dc = 0x40A00000;
              iStack_e4 = iVar2;
              iStack_e0 = iVar2;
              uVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                                (*(int *)(param_1 + 0xcde4),&iStack_e4,0x3e4ccccd,0x3eb2b8c2);
              iVar2 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar5);
              if (iVar2 < 0) {
                FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
                FUN_004fc0d0(iStack_1c,0,1);
              }
              else if (0 < iVar2) {
                FUN_00597700(param_1);
              }
            }
          }
          break;
        case 3:
switchD_005976af_caseD_3:
          if ((*(uint *)(param_1 + 0xce5c) & 0x7fffffff) == 0) {
            *(uint *)(param_1 + 0xce5c) = 0x41200000;
          }
          goto LAB_005974b3;
        case 4:
switchD_005976af_caseD_4:
          if ((*(uint *)(param_1 + 0xce5c) & 0x7fffffff) != 0) goto switchD_005976af_caseD_3;
          *(uint *)(param_1 + 0xce5c) = 0x41700000;
          goto LAB_005974b3;
        case 5:
          if ((*(uint *)(param_1 + 0xce5c) & 0x7fffffff) != 0) goto switchD_005976af_caseD_4;
          *(uint *)(param_1 + 0xce5c) = 0x41a00000;
LAB_005974b3:
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          if (*(int *)(param_1 + 0xcde4) == 0) {
            FUN_00597be0(param_1,1);
          }
          else if ((fStack_24 <= 0x40A00000 + (float)_DAT_005d9669) ||
                  (fStack_14 = (float)FUN_004fc930(iStack_1c), fStack_14 <= (float)_DAT_005d9671)) {
            iVar4 = iStack_1c;
            fStack_14 = (float)FUN_004fc930(iStack_1c);
            if ((1.0 < fStack_14) &&
               (fStack_14 = (float)FUN_004fc930(iVar4), fStack_14 < _DAT_005d9661)) {
              FUN_0042abb0(auStack_198);
              uStack_194 = *(uint *)(param_1 + 0xce5c);
              iStack_164 = param_1;
              iStack_160 = param_1;
              if (iVar2 == 5) {
                iVar2 = *(int *)(param_1 + 0x25b0);
                if (iVar2 != 0) {
                  (**(code **)(*(int *)(iVar2 + 0x154) + 0x78))(iVar2,2);
                }
              }
              else {
                FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd078) * 0x30 + iStack_34,0x40200000,
                             auStack_198);
                pfVar8 = afStack_b0 + 5;
                afStack_9c[0] = (float)uStack_114;
                afStack_b0[(uint)bVar7 * -2 + 6] = afStack_134[(uint)bVar7 * -2 + 9];
                afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                     afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
                FUN_00408b80(param_1,pfVar8);
                pfVar8 = afStack_b0 + 8;
                afStack_90[0] = (float)uStack_84;
                afStack_b0[(uint)bVar7 * -2 + 9] = afStack_b0[(uint)bVar7 * -2 + 0xc];
                iVar2 = param_1;
                afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                     afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
                FUN_004893f0(iVar2,pfVar8);
              }
              iVar2 = _DAT_01d5ba14;
              *(uint *)(param_1 + 0xce5c) = 0;
              iVar2 = *(int *)(iVar2 * 4 + 0x1d5ba04);
              iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
              if (iVar2 != 0) {
                FUN_004fc0d0(iStack_1c,0,1);
              }
              *(uint *)(param_1 + 0xcde0) = 0x40000000;
              FUN_004fc0d0(iStack_1c,0,1);
            }
          }
          else {
            FUN_00597be0(param_1,1);
          }
          break;
        case 9:
          if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
            FUN_0054dbd0(iStack_1c,0);
            pfVar8 = afStack_b0 + 0xe;
            afStack_78[0] = (float)uStack_138;
            afStack_b0[(uint)bVar7 * -2 + 0xf] = afStack_134[(uint)bVar7 * -2];
            afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                 afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            FUN_00408b80(param_1,pfVar8);
            uVar9 = 0;
            pfVar8 = afStack_d4 + 8;
            afStack_c0[3] = afStack_134[2];
            afStack_b0[(uint)bVar7 * -2] = afStack_134[(uint)bVar7 * -2 + 3];
            uVar5 = 0x01D22E44;
            afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            FUN_004cec40(uVar5,pfVar8,uVar9);
            *(uint *)(param_1 + 0xcdd0) = 1;
          }
        }
switchD_005976af_caseD_6:
        if (0.0 < *(float *)(param_1 + 0xcde0)) {
          *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
        }
        if (*(float *)(param_1 + 0xcde0) < 0.0) {
          *(uint *)(param_1 + 0xcde0) = 0xbf800000;
        }
        FUN_004fc070(iStack_1c);
        FUN_0042c1e0(param_1,param_2);
        fStack_f0 = *pfStack_2c * param_2;
        fStack_ec = pfStack_2c[1] * param_2;
        fStack_e8 = pfStack_2c[2] * param_2;
        fStack_54 = *pfStack_2c * param_2;
        afStack_b0[(uint)bVar7 * -2 + 0x18] = afStack_134[(uint)bVar7 * -2 + 0x12];
        afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
             afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
        afStack_d4[2] = fStack_54 + *pfStack_20;
        afStack_d4[3] = fStack_50 + pfStack_20[1];
        fStack_c4 = fStack_4c + pfStack_20[2];
        fStack_15c = fStack_54 + *pfStack_20;
        afStack_158[(uint)bVar7 * -2] = afStack_d4[(uint)bVar7 * -2 + 3];
        pfVar8 = pfStack_20;
        afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        fStack_60 = fStack_15c + *pfStack_18;
        fStack_5c = afStack_158[0] + pfStack_18[1];
        fStack_58 = afStack_158[1] + pfStack_18[2];
        afStack_6c[0] = fStack_15c + *pfStack_18;
        afStack_b0[(uint)bVar7 * -2 + 0x12] = afStack_b0[(uint)bVar7 * -2 + 0x15];
        afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
             afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
        pfVar8[2] = 0.0;
        pfVar8[1] = pfVar8[2];
        *pfVar8 = pfVar8[1];
        pfStack_18[2] = 0.0;
        pfStack_18[1] = pfStack_18[2];
        *pfStack_18 = pfStack_18[1];
        FUN_0042c230(param_1,afStack_b0 + 0x11);
      } while( true );
    }
  }
  return;
}
