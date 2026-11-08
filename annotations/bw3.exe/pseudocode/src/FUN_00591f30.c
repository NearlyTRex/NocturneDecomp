// Name: FUN_00591f30
// Address: 00591f30
// Address Range: [[00591f30, 005936f4]]
// Convention: unknown
// Signature: void FUN_00591f30(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00591f30(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  float afStackY_130c [1011];
  uint *puVar9;
  uint uVar10;
  float fStack_324;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  float fStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  uint uStack_2c4;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  uint uStack_2a0;
  uint uStack_294;
  uint uStack_288;
  uint uStack_27c;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  float fStack_248;
  uint uStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  uint uStack_230;
  uint uStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  uint uStack_204;
  float fStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  float fStack_1d4;
  uint uStack_1c8;
  float fStack_1c4;
  float fStack_1bc;
  float fStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  float fStack_198;
  float fStack_194;
  uint uStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  uint uStack_180;
  uint uStack_174;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  uint uStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint uStack_138;
  uint uStack_12c;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  uint uStack_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float afStack_e4 [3];
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  int iStack_c0;
  int iStack_bc;
  float fStack_b8;
  uint uStack_b4;
  uint auStack_b0 [5];
  float afStack_9c [3];
  uint auStack_90 [3];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  int iStack_54;
  float fStack_50;
  float *pfStack_4c;
  uint uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float *pfStack_30;
  float *pfStack_2c;
  float *pfStack_28;
  float *pfStack_24;
  int iStack_20;
  float *pfStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
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
    fStack_14 = (float)(param_1 + 0x158);
    FUN_0054dcc0(fStack_14,*(uint *)(param_1 + 0xd07c));
    puVar9 = &stack0xfffffdf0;
    uStack_210 = uStack_b4;
    *(uint *)((int)&stack0xfffffdf4 + (uint)bVar8 * 0xfffffffe * 4) =
         auStack_b0[(uint)bVar8 * -2];
    *(uint *)(&stack0xfffffdf8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         auStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    FUN_00408b80(param_1,puVar9);
    uStack_1e0 = uStack_2c4;
    *(uint *)((int)&stack0xfffffe24 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffd40 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xfffffe28 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffd44 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)(param_1 + 0xd0d8) = uStack_1e0;
    *(uint *)(param_1 + 0xd0dc) = uStack_1dc;
    *(uint *)(param_1 + 0xd0e0) = uStack_1d8;
    FUN_0054dcc0(fStack_14,*(uint *)(param_1 + 0xd080));
    puVar9 = &stack0xfffffdfc;
    uStack_204 = uStack_180;
    *(uint *)((int)&stack0xfffffe00 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe84 + (uint)bVar8 * -8);
    *(uint *)(&stack0xfffffe04 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffe88 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    FUN_00408b80(param_1,puVar9);
    uStack_24c = uStack_2a0;
    (&stack0xfffffdb8)[(uint)bVar8 * 0xfffffffe] =
         (float)*(uint *)(&stack0xfffffd64 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xfffffdbc + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffd68 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)(param_1 + 0xd37c) = uStack_24c;
    *(float *)(param_1 + 0xd380) = fStack_248;
    *(uint *)(param_1 + 0xd384) = uStack_244;
    FUN_0054dcc0(fStack_14,*(uint *)(param_1 + 0xd088));
    puVar9 = &stack0xfffffe8c;
    uStack_174 = uStack_288;
    *(uint *)((int)&stack0xfffffe90 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffd7c + (uint)bVar8 * -8);
    *(uint *)(&stack0xfffffe94 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffd80 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    FUN_00408b80(param_1,puVar9);
    uStack_1b0 = uStack_27c;
    (&stack0xfffffe54)[(uint)bVar8 * 0xfffffffe] =
         *(uint *)(&stack0xfffffd88 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xfffffe58 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffd8c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)(param_1 + 0xd620) = uStack_1b0;
    *(uint *)(param_1 + 0xd624) = uStack_1ac;
    *(uint *)(param_1 + 0xd628) = uStack_1a8;
    FUN_0054dcc0(fStack_14,*(uint *)(param_1 + 0xd084));
    puVar9 = &stack0xfffffe14;
    uStack_1ec = uStack_15c;
    *(uint *)((int)&stack0xfffffe18 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffea8 + (uint)bVar8 * -8);
    *(uint *)(&stack0xfffffe1c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffeac + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    FUN_00408b80(param_1,puVar9);
    uStack_2e8 = uStack_138;
    *(uint *)((int)&stack0xfffffd1c + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffecc + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xfffffd20 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffed0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    iVar4 = param_1 + 0xd0b8;
    *(uint *)(param_1 + 0xd8c4) = uStack_2e8;
    *(uint *)(param_1 + 0xd8c8) = uStack_2e4;
    *(uint *)(param_1 + 0xd8cc) = uStack_2e0;
    do {
      (**(code **)(*(int *)(iVar4 + 0x154) + 0xc))(iVar4,param_2);
      iVar4 = iVar4 + 0x2a4;
    } while (iVar4 != param_1 + 0xf068);
    if ((*(int *)(param_1 + 0xd0a0) == 0) && (*(int *)(param_1 + 0xd09c) == 0)) {
      *(uint *)(param_1 + 0xd09c) = 1;
      fVar2 = *(float *)(param_1 + 0xcdcc) + _DAT_005d91ab;
      *(uint *)(param_1 + 0xd098) = 1;
      *(float *)(param_1 + 0xcdcc) = fVar2;
    }
    if ((0.0 < *(float *)(param_1 + 0xd090)) && (*(float *)(param_1 + 0xd090) - param_2 <= 0.0)) {
      pfVar1 = (float *)(param_1 + 0x20);
      iVar7 = _DAT_01d5ba14 * 4;
      iVar4 = *(int *)(iVar7 + 0x1d5ba04);
      fStack_f0 = *pfVar1 - *(float *)(iVar4 + 0x20);
      fStack_ec = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
      fStack_e8 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
      fStack_108 = fStack_f0;
      *(uint *)((int)&stack0xfffffefc + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xffffff14 + (uint)bVar8 * -8);
      *(uint *)((int)&stack0xffffff00 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xffffff18 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      fStack_68 = fStack_100 * fStack_100 + fStack_108 * fStack_108 + fStack_104 * fStack_104;
      fStack_84 = (float)(((int)fStack_68 >> 1) + _DAT_01d1a0a4);
      pfStack_4c = pfVar1;
      if (fStack_84 < (float)_DAT_005d91b3) {
        *(uint *)(param_1 + 0xd090) = 0x3f000000;
      }
      else {
        fVar2 = *(float *)(param_1 + 0xcdcc) + _DAT_005d91bb;
        *(uint *)(param_1 + 0xd090) = 0;
        *(float *)(param_1 + 0xcdcc) = fVar2;
        iVar4 = *(int *)(iVar7 + 0x1d5ba04);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
        iStack_54 = param_1 + 0x158;
        if (iVar4 == 0) {
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_144 = *(float *)(iVar4 + 0x20) - *pfStack_4c;
          fStack_140 = *(float *)(iVar4 + 0x24) - pfStack_4c[1];
          fStack_13c = *(float *)(iVar4 + 0x28) - pfStack_4c[2];
          afStack_9c[0] = fStack_144;
          auStack_b0[(uint)bVar8 * -2 + 6] = (&stack0xfffffec0)[(uint)bVar8 * 0xfffffffe];
          auStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               *(uint *)((int)&stack0xfffffec4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          FUN_00576250(auStack_b0 + 5);
          fStack_fc = fStack_324;
          *(uint *)((int)&stack0xffffff08 + (uint)bVar8 * -8) =
               *(uint *)(&stack0xfffffce0 + (uint)bVar8 * -8);
          *(uint *)(&stack0xffffff0c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)(&stack0xfffffce4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          fStack_18 = (float)FUN_0040cfa0(fStack_f8 - *(float *)(param_1 + 0x34));
          fStack_14 = fStack_18;
          fStack_14 = (float)FUN_0040cfa0(fStack_fc - *(float *)(param_1 + 0x30));
          *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_18;
          *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_14;
          FUN_004088f0(param_1);
        }
        FUN_004fc0d0(iStack_54,0xd,1);
      }
    }
    fVar2 = *(float *)(param_1 + 0xd094) - param_2;
    *(float *)(param_1 + 0xd094) = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)(param_1 + 0xd094) = 0;
    }
    fVar2 = *(float *)(param_1 + 0xd090) - param_2;
    *(float *)(param_1 + 0xd090) = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)(param_1 + 0xd08c) = 0;
      *(uint *)(param_1 + 0xd098) = 0;
      if (*(float *)(param_1 + 0xd090) < (float)_DAT_005d91c3) {
        *(uint *)(param_1 + 0xd090) = 0;
        *(uint *)(param_1 + 0xd09c) = 0;
      }
    }
    pfStack_30 = (float *)(param_1 + 0x2518);
    fStack_50 = param_2 * *(float *)(param_1 + 0xcdcc);
    pfStack_2c = (float *)(param_1 + 0x250c);
    pfStack_28 = (float *)(param_1 + 0x249c);
    iStack_20 = param_1 + 0x158;
    pfStack_24 = (float *)(param_1 + 0x20);
    pfStack_1c = (float *)(param_1 + 0xd0ac);
    while (0.0 < fStack_50) {
      uVar5 = FUN_004fbb70(iStack_20,&fStack_50);
      iVar4 = uVar5 * 4 + param_1;
      if (uVar5 < 0x451) {
        if (uVar5 < 0x44d) {
          if (1000 < uVar5) {
            if (uVar5 < 0x3ea) {
              iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x2628),_DAT_02d0c150);
              if (iVar4 != 0) {
                FUN_0053ebe0(0x01ED78C8);
                uStack_48 = *(uint *)(iVar4 + 0x568);
                *(int *)(iVar4 + 0x304) = param_1;
                *(uint *)(iVar4 + 0x568) = 100;
                iVar7 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xe8))(iVar4);
                if (iVar7 != 0) {
                  (**(code **)(*(int *)(iVar4 + 0x154) + 0xe4))(iVar4);
                  iVar7 = FUN_00556700(*(uint *)(param_1 + 0xdf38 + uVar5 * 4));
                  if (iVar7 == 0) {
                    uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                      (param_1,"mann_firestaff.wav");
                    *(uint *)(param_1 + 0xdf38 + uVar5 * 4) = uVar6;
                    *(uint *)(iVar4 + 0x568) = uStack_48;
                    goto LAB_00592354;
                  }
                }
                *(uint *)(iVar4 + 0x568) = uStack_48;
              }
            }
            else if ((uVar5 == 0x44c) &&
                    (iVar4 = FUN_00556700(*(uint *)(param_1 + 0xf068)), iVar4 == 0)) {
              uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"mann_stand.wav");
              *(uint *)(param_1 + 0xf068) = uVar6;
            }
          }
        }
        else if (uVar5 < 0x44e) {
          iVar4 = FUN_00556700(*(uint *)(param_1 + 0xdf38 + uVar5 * 4));
          if (iVar4 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"mann_chasewalk.wav");
            *(uint *)(param_1 + 0xdf38 + uVar5 * 4) = uVar6;
          }
        }
        else if (uVar5 < 0x44f) {
          iVar4 = FUN_00556700(*(uint *)(param_1 + 0xdf38 + uVar5 * 4));
          if (iVar4 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"mann_chasefast.wav");
            *(uint *)(param_1 + 0xdf38 + uVar5 * 4) = uVar6;
          }
        }
        else if (uVar5 < 0x450) {
          iVar4 = FUN_00556700(*(uint *)(iVar4 + 0xdf38));
          if (iVar4 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"mann_attack.wav");
            *(uint *)(param_1 + 0xdf38 + uVar5 * 4) = uVar6;
          }
        }
        else {
          iVar7 = FUN_00556700(*(uint *)(iVar4 + 0xdf38));
          if (iVar7 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"mann_attack1.wav");
            *(uint *)(iVar4 + 0xdf38) = uVar6;
          }
        }
      }
      else if (uVar5 < 0x452) {
        iVar7 = FUN_00556700(*(uint *)(iVar4 + 0xdf38));
        if (iVar7 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"mann_attack2.wav");
          *(uint *)(iVar4 + 0xdf38) = uVar6;
        }
      }
      else if (uVar5 < 0x454) {
        if (uVar5 < 0x453) {
          iVar7 = FUN_00556700(*(uint *)(iVar4 + 0xdf38));
          if (iVar7 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"mann_attack3.wav");
            *(uint *)(iVar4 + 0xdf38) = uVar6;
          }
        }
        else {
          iVar7 = FUN_00556700(*(uint *)(iVar4 + 0xdf38));
          if (iVar7 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"mann_pain.wav");
            *(uint *)(iVar4 + 0xdf38) = uVar6;
          }
        }
      }
      else if (uVar5 < 0x455) {
        iVar7 = FUN_00556700(*(uint *)(iVar4 + 0xdf38));
        if (iVar7 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"mann_die.wav");
          *(uint *)(iVar4 + 0xdf38) = uVar6;
        }
      }
      else if (uVar5 < 0x456) {
        iVar7 = FUN_00556700(*(uint *)(iVar4 + 0xdf38));
        if (iVar7 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"mann_warning.wav");
          *(uint *)(iVar4 + 0xdf38) = uVar6;
        }
      }
      else if (uVar5 < 0x457) {
        iVar7 = FUN_00556700(*(uint *)(iVar4 + 0xdf38));
        if (iVar7 == 0) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"mann_appear.wav");
          *(uint *)(iVar4 + 0xdf38) = uVar6;
        }
      }
      else if ((uVar5 == 0x457) &&
              (iVar7 = FUN_00556700(*(uint *)(iVar4 + 0xdf38)), iVar7 == 0)) {
        uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"mann_disappear.wav");
        *(uint *)(iVar4 + 0xdf38) = uVar6;
      }
LAB_00592354:
      fVar2 = (float)_DAT_005d91cb;
      *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
      FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc) * fVar2);
      iVar4 = FUN_004fc070(iStack_20);
      iVar4 = *(int *)(iVar4 + 0x24);
      FUN_00441ff0(PTR_DAT_005f1690,"State: %d\n",iVar4);
      iVar7 = FUN_00431660(param_1,param_2);
      if (iVar7 == 0) {
        switch(iVar4) {
        case 0:
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_270 = *(float *)(iVar4 + 0x20) - *pfStack_24;
          fStack_26c = *(float *)(iVar4 + 0x24) - pfStack_24[1];
          fStack_268 = *(float *)(iVar4 + 0x28) - pfStack_24[2];
          fStack_318 = fStack_270;
          (&stack0xfffffcec)[(uint)bVar8 * 0xfffffffe] =
               (float)*(uint *)((int)&stack0xfffffd94 + (uint)bVar8 * -8);
          *(uint *)((int)&stack0xfffffcf0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)((int)&stack0xfffffd98 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if (&stack0xfffffde4 != &stack0xfffffce8) {
            fStack_21c = fStack_318;
            fStack_218 = fStack_314;
            fStack_214 = fStack_310;
          }
          if (0.0 < *(float *)(param_1 + 0xcde0)) {
            fStack_80 = fStack_214 * fStack_214 + fStack_21c * fStack_21c + fStack_218 * fStack_218;
            fStack_7c = (float)(((int)fStack_80 >> 1) + _DAT_01d1a0a4);
            if (fStack_7c < 0x40A00000 + 1.0) break;
          }
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
          if (iVar4 == 0) {
            iVar4 = FUN_00489ff0(param_1,param_2);
            if (iVar4 != 0) {
              FUN_00593a90(param_1);
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
              *(uint *)(param_1 + 0xd0a8) = 0;
              FUN_00576250(&stack0xfffffde4);
              uStack_2dc = uStack_294;
              *(uint *)((int)&stack0xfffffd28 + (uint)bVar8 * -8) =
                   *(uint *)(&stack0xfffffd70 + (uint)bVar8 * -8);
              *(uint *)(&stack0xfffffd2c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                   *(uint *)(&stack0xfffffd74 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
              fStack_14 = (float)FUN_0040cfa0(fStack_2d8 - *(float *)(param_1 + 0x34));
              if ((ABS(fStack_14) < (float)_DAT_005d91e3) && (*(float *)(param_1 + 0xcde0) <= 0.0))
              {
                fStack_78 = fStack_214 * fStack_214 +
                            fStack_21c * fStack_21c + fStack_218 * fStack_218;
                fStack_74 = (float)(((int)fStack_78 >> 1) + _DAT_01d1a0a4);
                if (fStack_74 < 0x40A00000 + 1.0) {
                  *(uint *)(param_1 + 0xd0a8) = 1;
                  iVar4 = FUN_0040cea0(0,100);
                  if (iVar4 < 0x4b) {
                    uVar6 = 3;
                  }
                  else if ((iVar4 < 0x4b) || (0x5a < iVar4)) {
                    uVar6 = 5;
                  }
                  else {
                    uVar6 = 4;
                  }
                  FUN_004fc0d0(iStack_20,uVar6,1);
                  *(uint *)(param_1 + 0xcde0) = 0x40400000;
                  break;
                }
              }
              FUN_00593a90(param_1);
            }
          }
          break;
        case 1:
        case 2:
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_264 = *(float *)(iVar4 + 0x20) - *pfStack_24;
          fStack_260 = *(float *)(iVar4 + 0x24) - pfStack_24[1];
          fStack_25c = *(float *)(iVar4 + 0x28) - pfStack_24[2];
          afStack_d4[2] = fStack_264;
          afStack_d4[(uint)bVar8 * 0xfffffffe + 3] =
               (float)*(uint *)((int)&stack0xfffffda0 + (uint)bVar8 * -8);
          auStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -5] =
               *(uint *)((int)&stack0xfffffda4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if (&stack0xfffffdd8 != afStack_d4 + 2) {
            fStack_228 = afStack_d4[2];
            fStack_224 = afStack_d4[3];
            fStack_220 = fStack_c4;
          }
          if (0.0 < *(float *)(param_1 + 0xcde0)) {
            fStack_70 = fStack_220 * fStack_220 + fStack_228 * fStack_228 + fStack_224 * fStack_224;
            fStack_6c = (float)(((int)fStack_70 >> 1) + _DAT_01d1a0a4);
            if ((fStack_6c < 0x40A00000 + 1.0) && (*(int *)(param_1 + 0xd0a8) == 0)) {
              FUN_00441ff0(PTR_DAT_005f1690,"Going to Stand\n");
              FUN_004fc0d0(iStack_20,0,1);
              break;
            }
          }
          iVar4 = *(int *)(param_1 + 0xcde4);
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          if ((*(int *)(param_1 + 0xcde4) == 0) &&
             (iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
             iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x10c))(iVar7), iVar7 != 0)) {
            *(uint *)(0x01D2130C + 0x244) = 1;
            *(uint *)(param_1 + 0xcde4) = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          }
          if (*(int *)(param_1 + 0xcde4) == 0) {
            iVar4 = FUN_00489ff0(param_1,param_2);
            if (iVar4 == 0) {
              FUN_004fc0d0(iStack_20,0,1);
            }
          }
          else if (iVar4 == 0) {
            FUN_00593a90(param_1);
          }
          else {
            pfStack_28[2] = 0.0;
            pfStack_28[1] = pfStack_28[2];
            *pfStack_28 = pfStack_28[1];
            iVar4 = *(int *)(param_1 + 0xd08c);
            if (iVar4 == 0) {
              fStack_b8 = 0x40A00000;
              iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              iStack_c0 = iVar4;
              iStack_bc = iVar4;
              uVar6 = (**(code **)(*(int *)(iVar7 + 0x154) + 0xc4))
                                (iVar7,&iStack_c0,0x3e4ccccd,0x3eb2b8c2);
              iVar4 = FUN_0042b9e0(param_1,*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20,uVar6);
              if (iVar4 < 0) {
                FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
                FUN_004fc0d0(iStack_20,0,1);
              }
              else if (0 < iVar4) {
                iVar4 = *(int *)(param_1 + 0xcde4);
                fStack_18c = *(float *)(iVar4 + 0x20) - *pfStack_24;
                fStack_188 = *(float *)(iVar4 + 0x24) - pfStack_24[1];
                fStack_184 = *(float *)(iVar4 + 0x28) - pfStack_24[2];
                fStack_1d4 = fStack_18c;
                *(uint *)((int)&stack0xfffffe30 + (uint)bVar8 * 0xfffffffe * 4) =
                     *(uint *)((int)&stack0xfffffe78 + (uint)bVar8 * -8);
                *(uint *)(&stack0xfffffe34 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                     *(uint *)((int)&stack0xfffffe7c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
                FUN_00576250(&stack0xfffffe2c);
                uStack_1c8 = uStack_1a4;
                *(uint *)((int)&stack0xfffffe3c + (uint)bVar8 * -8) =
                     *(uint *)(&stack0xfffffe60 + (uint)bVar8 * -8);
                *(uint *)(&stack0xfffffe40 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                     *(uint *)(&stack0xfffffe64 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
                fStack_14 = (float)FUN_0040cfa0(fStack_1c4 - *(float *)(param_1 + 0x34));
                if ((ABS(fStack_14) < (float)_DAT_005d91e3) && (*(float *)(param_1 + 0xcde0) <= 0.0)
                   ) {
                  *(uint *)(param_1 + 0xd0a8) = 1;
                  iVar4 = FUN_0040cea0(0,100);
                  if (iVar4 < 0x4b) {
                    uVar6 = 3;
                  }
                  else if ((iVar4 < 0x4b) || (0x5a < iVar4)) {
                    uVar6 = 5;
                  }
                  else {
                    uVar6 = 4;
                  }
                  FUN_004fc0d0(iStack_20,uVar6,1);
                  *(uint *)(param_1 + 0xcde0) = 0x40400000;
                }
              }
            }
            else {
              if (*(float *)(param_1 + 0xd094) <= 0.0) {
                fStack_60 = (float)FUN_0040ce40(0xc0a00000,0x40a00000);
                afStack_e4[0] = (float)FUN_0040ce40(0xc0a00000,0x40a00000);
                fStack_5c = fStack_60;
                afStack_e4[2] = fStack_60;
                afStack_e4[1] = 0.0;
                if (afStack_e4 != pfStack_1c) {
                  *pfStack_1c = afStack_e4[0];
                  pfStack_1c[1] = 0.0;
                  pfStack_1c[2] = fStack_60;
                }
                fStack_44 = SQRT(pfStack_1c[2] * pfStack_1c[2] +
                                 *pfStack_1c * *pfStack_1c + pfStack_1c[1] * pfStack_1c[1]);
                if (fStack_44 <= 0.0) {
                  pfStack_1c[2] = 0.0;
                  pfStack_1c[1] = pfStack_1c[2];
                  *pfStack_1c = pfStack_1c[1];
                }
                else {
                  fVar2 = 1.0 / fStack_44;
                  *pfStack_1c = *pfStack_1c * fVar2;
                  pfStack_1c[1] = pfStack_1c[1] * fVar2;
                  pfStack_1c[2] = pfStack_1c[2] * fVar2;
                }
                fVar2 = pfStack_1c[1] * _DAT_005d91d7;
                fVar3 = pfStack_1c[2] * _DAT_005d91d7;
                *pfStack_1c = *pfStack_1c * _DAT_005d91d7;
                pfStack_1c[1] = fVar2;
                pfStack_1c[2] = fVar3;
                iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                *pfStack_1c = *(float *)(iVar4 + 0x20) + *pfStack_1c;
                pfStack_1c[1] = *(float *)(iVar4 + 0x24) + pfStack_1c[1];
                pfStack_1c[2] = *(float *)(iVar4 + 0x28) + pfStack_1c[2];
                *(uint *)(param_1 + 0xd094) = 0x3f800000;
                fStack_40 = afStack_e4[0];
                fStack_14 = afStack_e4[0];
              }
              uStack_258 = 0;
              uStack_254 = 0;
              uStack_250 = 0;
              FUN_0042b9e0(param_1,pfStack_1c,0,&stack0xfffffda8,0x3e4ccccd,0);
            }
          }
          break;
        case 3:
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          if (*(int *)(param_1 + 0xcde4) == 0) {
            FUN_00593a90(param_1);
          }
          else {
            iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_2f4 = *pfStack_24 - *(float *)(iVar4 + 0x20);
            fStack_2f0 = pfStack_24[1] - *(float *)(iVar4 + 0x24);
            fStack_2ec = pfStack_24[2] - *(float *)(iVar4 + 0x28);
            fStack_198 = fStack_2f4;
            (&stack0xfffffe6c)[(uint)bVar8 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xfffffd10 + (uint)bVar8 * -8);
            *(uint *)((int)&stack0xfffffe70 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                 *(uint *)((int)&stack0xfffffd14 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            if (&stack0xfffffe44 != &stack0xfffffe68) {
              fStack_1bc = fStack_198;
              fStack_1b8 = fStack_194;
              uStack_1b4 = uStack_190;
            }
            fStack_34 = (float)FUN_004fc930(iStack_20);
            fStack_14 = fStack_34;
            if ((0x3f7fffff < (int)fStack_34) && (fStack_34 <= _DAT_005d91d3)) {
              (**(code **)(*(int *)(*(int *)(param_1 + 0x2628) + 0x154) + 0x78))
                        (*(int *)(param_1 + 0x2628),2);
            }
          }
          break;
        case 4:
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          if (*(int *)(param_1 + 0xcde4) == 0) {
            FUN_00593a90(param_1);
          }
          else {
            iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_240 = *pfStack_24 - *(float *)(iVar4 + 0x20);
            fStack_23c = pfStack_24[1] - *(float *)(iVar4 + 0x24);
            fStack_238 = pfStack_24[2] - *(float *)(iVar4 + 0x28);
            fStack_1f8 = fStack_240;
            (&stack0xfffffe0c)[(uint)bVar8 * 0xfffffffe] =
                 *(uint *)((int)&stack0xfffffdc4 + (uint)bVar8 * -8);
            *(uint *)((int)&stack0xfffffe10 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                 *(uint *)((int)&stack0xfffffdc8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            if (&stack0xfffffdcc != &stack0xfffffe08) {
              fStack_234 = fStack_1f8;
              uStack_230 = uStack_1f4;
              uStack_22c = uStack_1f0;
            }
            fStack_3c = (float)FUN_004fc930(iStack_20);
            fStack_14 = fStack_3c;
            if ((0x403fffff < (int)fStack_3c) && ((int)fStack_3c < 0x40800001)) {
              (**(code **)(*(int *)(*(int *)(param_1 + 0x2628) + 0x154) + 0x78))
                        (*(int *)(param_1 + 0x2628),2);
            }
          }
          break;
        case 5:
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          if (*(int *)(param_1 + 0xcde4) == 0) {
            FUN_00593a90(param_1);
          }
          else {
            iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_30c = *pfStack_24 - *(float *)(iVar4 + 0x20);
            fStack_308 = pfStack_24[1] - *(float *)(iVar4 + 0x24);
            fStack_304 = pfStack_24[2] - *(float *)(iVar4 + 0x28);
            fStack_120 = fStack_30c;
            (&stack0xfffffee4)[(uint)bVar8 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xfffffcf8 + (uint)bVar8 * -8);
            *(uint *)((int)&stack0xfffffee8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                 *(uint *)((int)&stack0xfffffcfc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            if (&stack0xfffffeb0 != &stack0xfffffee0) {
              fStack_150 = fStack_120;
              fStack_14c = fStack_11c;
              uStack_148 = uStack_118;
            }
            fStack_38 = (float)FUN_004fc930(iStack_20);
            fStack_14 = fStack_38;
            if ((0x403fffff < (int)fStack_38) && ((int)fStack_38 < 0x40800001)) {
              (**(code **)(*(int *)(*(int *)(param_1 + 0x2628) + 0x154) + 0x78))
                        (*(int *)(param_1 + 0x2628),2);
            }
          }
          break;
        case 6:
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          if (*(int *)(param_1 + 0xcde4) == 0) {
            FUN_00593a90(param_1);
          }
          break;
        case 9:
          if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
            FUN_0054dbd0(iStack_20,0);
            puVar9 = &stack0xfffffed4;
            uStack_12c = auStack_b0[2];
            *(uint *)((int)&stack0xfffffed8 + (uint)bVar8 * 0xfffffffe * 4) =
                 auStack_b0[(uint)bVar8 * -2 + 3];
            *(uint *)(&stack0xfffffedc + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                 auStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            FUN_00408b80(param_1,puVar9);
            uVar10 = 0;
            puVar9 = auStack_b0 + 8;
            auStack_90[0] = uStack_114;
            auStack_b0[(uint)bVar8 * -2 + 9] = *(uint *)(&stack0xfffffef0 + (uint)bVar8 * -8);
            uVar6 = 0x01D22E44;
            auStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
                 *(uint *)(&stack0xfffffef4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            FUN_004cec40(uVar6,puVar9,uVar10);
            *(uint *)(param_1 + 0xcdd0) = 1;
          }
          break;
        case 0xd:
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
          if (iVar4 == 0) goto switchD_00593661_caseD_e;
          fStack_14 = (float)FUN_004fc930(iStack_20);
          if ((float)_DAT_005d91db < fStack_14) {
            FUN_004fc3f0(iStack_20,"stand",0);
          }
          break;
        case 0xe:
switchD_00593661_caseD_e:
          if (*(int *)(param_1 + 0xd068) == 0) {
            *(uint *)(param_1 + 0xd068) = 1;
            *(uint *)(param_1 + 0xd064) = 0;
            FUN_0042fbd0(param_1,pfStack_24,0,0,0x42480000,0,0x40000000);
          }
          break;
        case 0xf:
          if (*(int *)(param_1 + 0xd068) == 1) {
            *(uint *)(param_1 + 0xd064) = 0;
            *(uint *)(param_1 + 0xd068) = 0;
            FUN_0042fbd0(param_1,pfStack_24,0,0,0x42480000,0,0x40000000);
            *(uint *)(param_1 + 0xd090) = 0x40800000;
            *(uint *)(param_1 + 0xd08c) = 1;
          }
        }
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x273c);
        if (uVar5 < 2) {
          if (uVar5 == 1) {
LAB_005923d6:
            if (iVar4 != 2) {
              FUN_00593a90(param_1);
            }
          }
          else {
LAB_00592a8c:
            FUN_004fc0d0(iStack_20,0,1);
          }
        }
        else {
          if (uVar5 < 3) goto LAB_005923d6;
          if (uVar5 != 3) goto LAB_00592a8c;
          FUN_004fc0d0(iStack_20,0,1);
          FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
        }
        pfStack_28[2] = 0.0;
        pfStack_28[1] = pfStack_28[2];
        *pfStack_28 = pfStack_28[1];
      }
      if (0.0 < *(float *)(param_1 + 0xcde0)) {
        *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
      }
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
      if ((iVar4 != 0) && (*(int *)(param_1 + 0xd0a4) == 0)) {
        FUN_004fc0d0(iStack_20,0xd,1);
        *(uint *)(param_1 + 0xd0a4) = 1;
      }
      FUN_0042c1e0(param_1,param_2);
      fStack_300 = *pfStack_30 * param_2;
      fStack_2fc = pfStack_30[1] * param_2;
      fStack_2f8 = pfStack_30[2] * param_2;
      fStack_2b8 = *pfStack_30 * param_2;
      *(uint *)((int)&stack0xfffffd4c + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xfffffd04 + (uint)bVar8 * -8);
      *(uint *)((int)&stack0xfffffd50 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xfffffd08 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      fStack_2d0 = fStack_2b8 + *pfStack_2c;
      fStack_2cc = fStack_2b4 + pfStack_2c[1];
      fStack_2c8 = fStack_2b0 + pfStack_2c[2];
      fStack_168 = fStack_2b8 + *pfStack_2c;
      *(uint *)((int)&stack0xfffffe9c + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xfffffd34 + (uint)bVar8 * -8);
      pfVar1 = pfStack_2c;
      *(uint *)((int)&stack0xfffffea0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xfffffd38 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      fStack_d8 = fStack_168 + *pfStack_28;
      afStack_d4[0] = fStack_164 + pfStack_28[1];
      afStack_d4[1] = fStack_160 + pfStack_28[2];
      fStack_2ac = fStack_168 + *pfStack_28;
      *(float *)((int)&stack0xfffffd58 + (uint)bVar8 * 0xfffffffe * 4) =
           afStack_d4[(uint)bVar8 * 0xfffffffe];
      *(uint *)(&stack0xfffffd5c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           auStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -8];
      pfVar1[2] = 0.0;
      pfVar1[1] = pfVar1[2];
      *pfVar1 = pfVar1[1];
      pfStack_28[2] = 0.0;
      pfStack_28[1] = pfStack_28[2];
      *pfStack_28 = pfStack_28[1];
      FUN_0042c230(param_1,&stack0xfffffd54);
    }
    FUN_0042cd30(param_1);
    FUN_0054c130(iStack_20);
    FUN_00433350(param_1,param_2);
    iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x2628),_DAT_02d0c150);
    if (iVar4 != 0) {
      (**(code **)(*(int *)(iVar4 + 0x154) + 0xc))(iVar4,param_2);
      return;
    }
  }
  return;
}
