// Name: FUN_00569620
// Address: 00569620
// Address Range: [[00569620, 0056a15a]]
// Convention: unknown
// Signature: undefined4 FUN_00569620(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00569620(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1210 [991];
  char *pcVar7;
  float *pfVar8;
  uint uVar9;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  uint uStack_260;
  uint uStack_25c;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  uint uStack_210;
  uint uStack_204;
  float fStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1d4;
  float fStack_1c8;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_198;
  float afStack_194 [6];
  float afStack_17c [4];
  float fStack_16c;
  uint uStack_168;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint uStack_138;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
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
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  float fStack_cc;
  float afStack_c8 [8];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint auStack_74 [6];
  float afStack_5c [8];
  uint uStack_3c;
  uint uStack_38;
  float local_34;
  int local_30;
  float fStack_2c;
  float fStack_28;
  int local_24;
  float *local_20;
  int local_1c;
  float local_18;
  
  bVar6 = 0;
  if (((((0.0 < *(float *)(param_1 + 0x256ac)) || (*(int *)(param_1 + 0x25608) != 0)) ||
       (local_18 = (float)FUN_0042a5a0(param_1,0), local_18 < (float)_DAT_005eba4d)) ||
      ((local_18 = (float)FUN_005038a0(param_1 + 0x2b4,0), local_18 < 1.0 ||
       (*(int *)(param_1 + 0x2620) != 0)))) || (*(int *)(param_1 + 0x2698) != 0)) {
    return 0;
  }
  local_20 = (float *)&stack0xfffffdcc;
  local_30 = param_1 + 0x20;
  local_34 = 4.0;
  local_24 = 0;
  for (local_1c = 0; local_1c < *(int *)(0x01E661B8 + 0x14d164); local_1c = local_1c + 1) {
    iVar3 = *(int *)(0x01E661B8 + local_24 + 0x14d168);
    iVar2 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x9c))(iVar3);
    if (iVar2 == 0) {
      uStack_38 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x8c))(iVar3,param_1);
      switch(uStack_38) {
      case 1:
        if (*(int *)(param_1 + 0x2620) == 0) {
          FUN_00408de0(iVar3,local_30);
          afStack_c8[2] = fStack_1e0;
          afStack_c8[(uint)bVar6 * 0xfffffffe + 3] =
               (float)*(uint *)(&stack0xfffffe24 + (uint)bVar6 * -8);
          afStack_c8[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4] =
               (float)*(uint *)(&stack0xfffffe28 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          fStack_2c = SQRT(afStack_c8[4] * afStack_c8[4] +
                           afStack_c8[2] * afStack_c8[2] + afStack_c8[3] * afStack_c8[3]);
          if (fStack_2c <= 0.0) {
            afStack_c8[3] = 0.0;
            afStack_c8[2] = 0.0;
            afStack_c8[4] = 0.0;
          }
          else {
            fVar1 = 1.0 / fStack_2c;
            afStack_c8[2] = afStack_c8[2] * fVar1;
            afStack_c8[3] = afStack_c8[3] * fVar1;
            afStack_c8[4] = afStack_c8[4] * fVar1;
          }
          if (afStack_c8[4] <= 0.0) {
            auStack_74[3] = 0x40400000;
            auStack_74[4] = 0x40000000;
            auStack_74[2] = 0;
            if (afStack_194 + 2 != (float *)(auStack_74 + 2)) {
              afStack_194[2] = 0.0;
              afStack_194[3] = 3.0;
              afStack_194[4] = 2.0;
            }
            goto LAB_0056979e;
          }
        }
        break;
      case 2:
        if (*(int *)(param_1 + 0x2698) == 0) {
          uStack_d4 = 0x40400000;
          uStack_d0 = 0x40000000;
          uStack_d8 = 0;
          if (afStack_194 + 2 != afStack_17c + 0x29) {
            afStack_194[3] = 3.0;
            afStack_194[4] = 2.0;
            afStack_194[2] = 0.0;
          }
LAB_0056979e:
          FUN_00408d70(param_1,afStack_194 + 2);
          fStack_1bc = fStack_144;
          *(float *)((int)&stack0xfffffe48 + (uint)bVar6 * -8) =
               afStack_17c[(uint)bVar6 * 0xfffffffe + 0xf];
          *(float *)((int)&stack0xfffffe4c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0x10];
          (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x24))(iVar3);
          puVar4 = (uint *)&stack0xfffffd78;
          puVar5 = &stack0xfffffdc0;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          fStack_f0 = local_240 + *local_20;
          fStack_ec = fStack_23c + local_20[1];
          fStack_e8 = fStack_238 + local_20[2];
          fStack_9c = local_240 + *local_20;
          afStack_c8[(uint)bVar6 * 0xfffffffe + 0xc] = afStack_17c[(uint)bVar6 * 0xfffffffe + 0x24];
          afStack_c8[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0xd] =
               afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0x25];
          pfVar8 = afStack_5c + 2;
          fStack_a8 = fStack_9c * _DAT_005eba55;
          fStack_a4 = fStack_98 * _DAT_005eba55;
          fStack_a0 = fStack_94 * _DAT_005eba55;
          afStack_5c[2] = fStack_9c * _DAT_005eba55;
          afStack_5c[(uint)bVar6 * 0xfffffffe + 3] = afStack_c8[(uint)bVar6 * 0xfffffffe + 9];
          afStack_5c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4] =
               afStack_c8[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 10];
          FUN_00408d70(iVar3,pfVar8);
          afStack_194[5] = afStack_c8[5];
          afStack_17c[(uint)bVar6 * 0xfffffffe] = afStack_c8[(uint)bVar6 * 0xfffffffe + 6];
          afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
               afStack_c8[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 7];
          fStack_150 = afStack_194[5] - fStack_1bc;
          fStack_14c = afStack_17c[0] - fStack_1b8;
          fStack_148 = afStack_17c[1] - fStack_1b4;
          fStack_12c = afStack_194[5] - fStack_1bc;
          afStack_17c[(uint)bVar6 * 0xfffffffe + 0x15] = afStack_17c[(uint)bVar6 * 0xfffffffe + 0xc]
          ;
          afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0x16] =
               afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0xd];
          if (((ABS(fStack_128) <= (float)_DAT_005eba75) &&
              (fStack_28 = fStack_12c * fStack_12c + fStack_124 * fStack_124, fStack_28 <= local_34)
              ) && (iVar2 = FUN_0040c840(iVar3,param_2), iVar2 != 0)) {
            *(int *)(param_1 + 0x25608) = iVar3;
            local_34 = fStack_28;
            uStack_3c = uStack_38;
          }
        }
        break;
      case 3:
      case 4:
        if (*(int *)(param_1 + 0x2698) == 0) {
          iVar2 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x8c))(iVar3,param_1);
          if (iVar2 != 4) {
LAB_00569a2a:
            uStack_1a8 = 0x40000000;
            uStack_1b0 = 0;
            uStack_1ac = 0x40400000;
            if (afStack_194 + 2 != (float *)&stack0xfffffe50) {
              afStack_194[3] = 3.0;
              afStack_194[4] = 2.0;
              afStack_194[2] = 0.0;
            }
            goto LAB_0056979e;
          }
          FUN_00408de0(iVar3,local_30);
          fStack_21c = fStack_cc;
          *(float *)((int)&stack0xfffffde8 + (uint)bVar6 * 0xfffffffe * 4) =
               afStack_c8[(uint)bVar6 * 0xfffffffe];
          *(float *)(&stack0xfffffdec + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               afStack_c8[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1];
          if (ABS(fStack_21c) <= 1.0) {
            FUN_005838f0(&stack0xfffffde4);
            uStack_204 = uStack_e4;
            *(float *)((int)&stack0xfffffe00 + (uint)bVar6 * -8) =
                 afStack_17c[(uint)bVar6 * 0xfffffffe + 0x27];
            *(float *)(&stack0xfffffe04 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0x28];
            if (ABS(fStack_200) <= (float)_DAT_005eba6d) goto LAB_00569a2a;
          }
        }
      }
    }
    local_24 = local_24 + 4;
  }
  iVar3 = *(int *)(param_1 + 0x25608);
  if (iVar3 == 0) {
    return 0;
  }
  (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x24))(iVar3);
  puVar4 = (uint *)&stack0xfffffda8;
  puVar5 = &stack0xfffffd90;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  if ((uint *)(param_1 + 0x25710) != &stack0xfffffd90) {
    *(uint *)(param_1 + 0x25710) = uStack_270;
    *(uint *)(param_1 + 0x25714) = uStack_26c;
    *(uint *)(param_1 + 0x25718) = uStack_268;
  }
  if ((uint *)(param_1 + 0x2571c) != &stack0xfffffd9c) {
    *(uint *)(param_1 + 0x2571c) = uStack_264;
    *(uint *)(param_1 + 0x25720) = uStack_260;
    *(uint *)(param_1 + 0x25724) = uStack_25c;
  }
  fStack_120 = *(float *)(param_1 + 0x25710) + *(float *)(param_1 + 0x2571c);
  fStack_11c = *(float *)(param_1 + 0x25714) + *(float *)(param_1 + 0x25720);
  fStack_118 = *(float *)(param_1 + 0x25718) + *(float *)(param_1 + 0x25724);
  afStack_17c[2] = fStack_120;
  afStack_17c[(uint)bVar6 * 0xfffffffe + 3] = afStack_17c[(uint)bVar6 * 0xfffffffe + 0x18];
  afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4] =
       afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0x19];
  fStack_fc = afStack_17c[2] * _DAT_005eba55;
  fStack_f8 = afStack_17c[3] * _DAT_005eba55;
  fStack_f4 = fStack_16c * _DAT_005eba55;
  fStack_1d4 = afStack_17c[2] * _DAT_005eba55;
  *(float *)((int)&stack0xfffffe30 + (uint)bVar6 * 0xfffffffe * 4) =
       afStack_17c[(uint)bVar6 * 0xfffffffe + 0x21];
  *(float *)(&stack0xfffffe34 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0x22];
  FUN_00408d70(*(uint *)(param_1 + 0x25608),&stack0xfffffe2c);
  puVar4 = &stack0xfffffdf0;
  uStack_210 = auStack_74[5];
  *(float *)((int)&stack0xfffffdf4 + (uint)bVar6 * 0xfffffffe * 4) =
       afStack_5c[(uint)bVar6 * 0xfffffffe];
  *(float *)(&stack0xfffffdf8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       afStack_5c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1];
  FUN_00408de0(param_1,puVar4);
  uStack_198 = uStack_1a4;
  *(uint *)((int)afStack_194 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xfffffe60 + (uint)bVar6 * 0xfffffffe * 4);
  afStack_194[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
       (float)*(uint *)(&stack0xfffffe64 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if ((uint *)(param_1 + 0x25704) != &uStack_198) {
    *(uint *)(param_1 + 0x25704) = uStack_198;
    *(float *)(param_1 + 0x25708) = afStack_194[0];
    *(float *)(param_1 + 0x2570c) = afStack_194[1];
  }
  switch(uStack_3c) {
  case 1:
    FUN_00503620(param_1 + 0x2b4,0x1b,1);
    uVar9 = *(uint *)(param_1 + 0x25608);
    pcVar7 = "Rummaging %s\n";
    break;
  case 2:
  case 3:
  case 4:
    iVar3 = *(int *)(param_1 + 0x25608);
    if ((iVar3 == 0) ||
       (iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x8c))(iVar3,param_1), iVar3 != 4)) {
      iVar3 = param_1 + 0x2b4;
      if (*(float *)(param_1 + 0x25708) <= (float)_DAT_005eba65) {
        FUN_00503620(iVar3,0x13,1);
        uVar9 = *(uint *)(param_1 + 0x25608);
        pcVar7 = "Picking up %s off ground\n";
      }
      else {
        FUN_005469a0(iVar3,_DAT_0264be68);
        fStack_84 = fStack_114;
        afStack_c8[(uint)bVar6 * 0xfffffffe + 0x12] = afStack_17c[(uint)bVar6 * 0xfffffffe + 0x1b];
        uVar9 = _DAT_0264be40;
        afStack_c8[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0x13] =
             afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0x1c];
        FUN_005469a0(iVar3,uVar9);
        fVar1 = fStack_84;
        fStack_1f8 = fStack_1c8;
        *(uint *)((int)&stack0xfffffe0c + (uint)bVar6 * -8) =
             *(uint *)(&stack0xfffffe3c + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xfffffe10 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xfffffe40 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        fStack_228 = fVar1 - fStack_1f8;
        fStack_224 = fStack_80 - fStack_1f4;
        fStack_220 = fStack_7c - fStack_1f0;
        fStack_90 = fVar1 - fStack_1f8;
        afStack_c8[(uint)bVar6 * 0xfffffffe + 0xf] =
             (float)*(uint *)((int)&stack0xfffffddc + (uint)bVar6 * -8);
        afStack_c8[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0x10] =
             (float)*(uint *)((int)&stack0xfffffde0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        fVar1 = fStack_90 * fStack_90;
        fStack_1ec = fStack_1f8 - *(float *)(param_1 + 0x25704);
        fStack_1e8 = fStack_1f4 - *(float *)(param_1 + 0x25708);
        fStack_1e4 = fStack_1f0 - *(float *)(param_1 + 0x2570c);
        fStack_108 = fStack_1ec;
        afStack_17c[(uint)bVar6 * 0xfffffffe + 0x1e] =
             (float)*(uint *)((int)&stack0xfffffe18 + (uint)bVar6 * -8);
        afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0x1f] =
             (float)*(uint *)((int)&stack0xfffffe1c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if ((float)_DAT_005eba65 <
            ABS(SQRT(fStack_88 * fStack_88 + fVar1 + fStack_8c * fStack_8c) -
                SQRT(fStack_100 * fStack_100 + fStack_108 * fStack_108 + fStack_104 * fStack_104)))
        {
          FUN_00436710(PTR_DAT_00609ed0,"%s out of reach - canceling pickup\n",
                       *(uint *)(param_1 + 0x25608));
          *(uint *)(param_1 + 0x25608) = 0;
          return 0;
        }
        FUN_00503620(iVar3,0x15,1);
        uVar9 = *(uint *)(param_1 + 0x25608);
        pcVar7 = "Picking up %s waist level\n";
      }
    }
    else {
      FUN_00408de0(*(uint *)(param_1 + 0x25608),param_1 + 0x20);
      uStack_168 = uStack_15c;
      afStack_17c[(uint)bVar6 * 0xfffffffe + 6] = afStack_17c[(uint)bVar6 * 0xfffffffe + 9];
      afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 7] =
           afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 10];
      *(uint *)(param_1 + 0x256f4) = (uint)(0.0 < fStack_160);
      if (*(float *)(param_1 + 0x25708) <= (float)_DAT_005eba5d) {
        FUN_00503620(param_1 + 0x2b4,0x17,1);
        uVar9 = *(uint *)(param_1 + 0x25608);
        pcVar7 = "Picking up heavy %s crate\n";
      }
      else {
        FUN_00503620(param_1 + 0x2b4,0x18,1);
        FUN_00408de0(param_1,*(int *)(param_1 + 0x25608) + 0x20);
        uStack_78 = uStack_138;
        *(float *)((int)auStack_74 + (uint)bVar6 * -8) =
             afStack_17c[(uint)bVar6 * 0xfffffffe + 0x12];
        auStack_74[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
             afStack_17c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0x13];
        if ((uint *)(param_1 + 0x25704) != &uStack_78) {
          *(uint *)(param_1 + 0x25704) = uStack_78;
          *(uint *)(param_1 + 0x25708) = auStack_74[0];
          *(uint *)(param_1 + 0x2570c) = auStack_74[1];
        }
        uVar9 = *(uint *)(param_1 + 0x25608);
        pcVar7 = ">Picking up heavy %s shelf\n" + 1;
      }
    }
    break;
  default:
    _DAT_01d046a0 = "..\\core\\stranger.cpp";
    _DAT_01d046a4 = 0xd2d;
    FUN_004e4500("Hell froze - invalid pickUpType: %d",uStack_3c);
    goto LAB_00569dc5;
  }
  FUN_00436710(PTR_DAT_00609ed0,pcVar7,uVar9);
LAB_00569dc5:
  *(uint *)(param_1 + 0x256ac) = 0x40800000;
  *(uint *)(param_1 + 0x256a4) = 4;
  return 1;
}
