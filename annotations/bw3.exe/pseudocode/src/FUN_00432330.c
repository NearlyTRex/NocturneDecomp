// Name: FUN_00432330
// Address: 00432330
// Address Range: [[00432330, 00432ffc]]
// Convention: unknown
// Signature: void FUN_00432330(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432330(int param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  byte bVar6;
  float afStackY_1228 [1013];
  float *pfVar7;
  uint *puVar8;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_1f8;
  uint uStack_1ec;
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  uint uStack_18c;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  uint uStack_174;
  float fStack_168;
  float fStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  uint uStack_144;
  float fStack_138;
  float fStack_134;
  uint uStack_130;
  float fStack_12c;
  uint uStack_120;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint uStack_108;
  float fStack_fc;
  float fStack_f0;
  uint uStack_e4;
  uint uStack_d8;
  float fStack_cc;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  float fStack_a8;
  uint uStack_9c;
  float fStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint uStack_54;
  uint uStack_48;
  float fStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar1 != 0) {
    param_3 = 1;
  }
  uStack_30 = FUN_0054eac0(param_1 + 0x158);
  iVar1 = FUN_00548090(uStack_30,"Bip01 head",0);
  if (iVar1 == -1) {
    param_3 = 1;
  }
  iStack_24 = 0;
  iVar1 = iStack_24;
  if ((param_3 == 0) && (iVar1 = *(int *)(param_1 + 0x2764), *(int *)(param_1 + 0x2764) == 0)) {
    if (*(float *)(param_1 + 0x2778) <= 0.0) {
      iVar1 = FUN_00548090(uStack_30,"Bip01 head",0);
      if (iVar1 == -1) {
        uStack_bc = 0x40b00000;
        uStack_c0 = 0;
        uStack_b8 = 0;
        FUN_00408b80(param_1,&stack0xffffff40);
        fStack_1bc = fStack_12c;
        (&stack0xfffffe48)[(uint)bVar6 * 0xfffffffe] =
             (float)*(uint *)(&stack0xfffffed8 + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xfffffe4c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xfffffedc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0xfffffe80 != &stack0xfffffe44) {
          fStack_180 = fStack_1bc;
          fStack_17c = fStack_1b8;
          fStack_178 = fStack_1b4;
        }
      }
      else {
        FUN_0054dcc0(param_1 + 0x158,iVar1);
        puVar8 = &stack0xfffffee0;
        uStack_120 = uStack_d8;
        *(uint *)((int)&stack0xfffffee4 + (uint)bVar6 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff2c + (uint)bVar6 * -8);
        *(uint *)(&stack0xfffffee8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffff30 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        FUN_00408b80(param_1,puVar8);
        fStack_60 = fStack_15c;
        (&stack0xffffffa4)[(uint)bVar6 * 0xfffffffe] =
             (float)*(uint *)(&stack0xfffffea8 + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xfffffeac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0xfffffe80 != &stack0xffffffa0) {
          fStack_180 = fStack_60;
          fStack_17c = fStack_5c;
          fStack_178 = fStack_58;
        }
      }
      iStack_28 = FUN_00491aa0(0x01C6E360,"heroCanSee");
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < *(int *)(0x01ED78C8 + 0x14f0a8); iStack_1c = iStack_1c + 1)
      {
        iVar1 = *(int *)(0x01ED78C8 + iStack_20 + 0x14f0ac);
        if (((iVar1 != param_1) &&
            (((((*(int *)(iVar1 + 0x27a8) == 0 || (iStack_28 != 0)) &&
               (iVar3 = FUN_0040c840(iVar1,DAT_007e2a14), iVar3 == 0)) &&
              ((iVar3 = FUN_0040c840(iVar1,_DAT_02cfd8fc), iVar3 == 0 &&
               (iVar3 = FUN_0040c840(iVar1,_DAT_01ed37c0), iVar3 == 0)))) &&
             (iVar3 = FUN_0040c840(iVar1,_DAT_02d24bd0), iVar3 == 0)))) &&
           ((((iVar3 = FUN_0040c840(iVar1,_DAT_02d24c48), iVar3 == 0 &&
              (iVar3 = FUN_0040c840(iVar1,_DAT_02d24c0c), iVar3 == 0)) &&
             (iVar3 = FUN_0040c840(iVar1,_DAT_02d24cf0), iVar3 == 0)) &&
            ((((iVar3 = FUN_0040c840(iVar1,_DAT_02d24d40), iVar3 == 0 &&
               (iVar3 = FUN_0040c840(iVar1,_DAT_02d24b58), iVar3 == 0)) &&
              (iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x70))(iVar1), iVar3 == 0)) &&
             (iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1), iVar3 == 0)))))) {
          iVar3 = -1;
          if (*(char *)(iVar1 + 0x24a8) != '\0') {
            uVar4 = FUN_0054eac0(iVar1 + 0x158,"Bip01 head",0);
            iVar3 = FUN_00548090(uVar4);
          }
          if (iVar3 < 0) {
            if (&stack0xfffffeb0 != (float *)(iVar1 + 0x20)) {
              fStack_150 = *(float *)(iVar1 + 0x20);
              fStack_14c = *(float *)(iVar1 + 0x24);
              fStack_148 = *(float *)(iVar1 + 0x28);
            }
            fStack_14c = fStack_14c + _DAT_005b8696;
          }
          else {
            FUN_0054dcc0(iVar1 + 0x158,iVar3);
            puVar8 = &stack0xfffffef8;
            uStack_108 = uStack_6c;
            *(uint *)((int)&stack0xfffffefc + (uint)bVar6 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xffffff98 + (uint)bVar6 * -8);
            *(uint *)(&stack0xffffff00 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            FUN_00408b80(iVar1,puVar8);
            fStack_21c = fStack_cc;
            (&stack0xfffffde8)[(uint)bVar6 * 0xfffffffe] =
                 (float)*(uint *)(&stack0xffffff38 + (uint)bVar6 * -8);
            *(uint *)((int)&stack0xfffffdec + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xffffff3c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            if (&stack0xfffffeb0 != &stack0xfffffde4) {
              fStack_150 = fStack_21c;
              fStack_14c = fStack_218;
              fStack_148 = fStack_214;
            }
          }
          pfVar7 = &stack0xffffff10;
          fStack_228 = fStack_150 - fStack_180;
          fStack_224 = fStack_14c - fStack_17c;
          fStack_220 = fStack_148 - fStack_178;
          fStack_f0 = fStack_150 - fStack_180;
          *(uint *)((int)&stack0xffffff14 + (uint)bVar6 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xfffffddc + (uint)bVar6 * -8);
          *(uint *)(&stack0xffffff18 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xfffffde0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          FUN_00408b40(param_1,pfVar7);
          fStack_1d4 = fStack_240;
          (&stack0xfffffe30)[(uint)bVar6 * 0xfffffffe] =
               (float)*(uint *)(&stack0xfffffdc4 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xfffffe34 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xfffffdc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          if ((0.0 <= fStack_1cc) &&
             (fStack_248 = fStack_1cc * fStack_1cc +
                           fStack_1d4 * fStack_1d4 + fStack_1d0 * fStack_1d0, fStack_34 = fStack_248
             , (int)fStack_248 < 0x44610001)) {
            FUN_00576250(&stack0xfffffe2c);
            fStack_1e0 = fStack_1f8;
            (&stack0xfffffe24)[(uint)bVar6 * 0xfffffffe] =
                 (float)*(uint *)(&stack0xfffffe0c + (uint)bVar6 * -8);
            *(uint *)((int)&stack0xfffffe28 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xfffffe10 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            if ((ABS(fStack_1dc) <= (float)_DAT_005b86be) &&
               (ABS(fStack_1e0) <= (float)_DAT_005b86c6)) {
              fStack_244 = 10.0;
              iVar3 = FUN_0040c840(iVar1,_DAT_01c5bc48);
              if ((iVar3 != 0) && (fStack_244 = 30.0, *(int *)(iVar3 + 0xcde4) == param_1)) {
                fStack_244 = 40.0;
              }
              if ((fStack_244 < (float)_DAT_005b86ce) &&
                 (iVar2 = FUN_0040c790(iVar1,"CHero"), iVar2 != 0)) {
                fStack_244 = 15.0;
              }
              fStack_244 = ((float)_DAT_005b86d6 / (SQRT(fStack_248) + (float)_DAT_005b86d6)) *
                           fStack_244;
              if (iVar1 == *(int *)(param_1 + 0x2760)) {
                fStack_244 = fStack_244 * (float)_DAT_005b868e;
              }
              if (((iVar3 != 0) && (*(int *)(iVar3 + 0xcdd0) == 1)) || (_DAT_005b86de <= fStack_244)
                 ) {
                FUN_0053ebe0(0x01ED78C8);
                FUN_0053ec10(0x01ED78C8,param_1);
                FUN_0053ec10(0x01ED78C8,iVar1);
                FUN_0053ec90(0x01ED78C8,2);
                iVar3 = FUN_0053cbf0(0x01ED78C8,&stack0xfffffe80,&stack0xfffffeb0);
                if ((iVar3 == 0) && (iStack_24 = iVar1, &stack0xfffffe38 != &stack0xfffffe20)) {
                  fStack_1c8 = fStack_1e0;
                  fStack_1c4 = fStack_1dc;
                  uStack_1c0 = uStack_1d8;
                }
              }
            }
          }
        }
        iStack_20 = iStack_20 + 4;
      }
      FUN_0053ebe0(0x01ED78C8);
      fStack_18 = (float)FUN_0040ce40(0x3f800000,0x40000000);
      *(float *)(param_1 + 0x2778) = fStack_18;
    }
    else {
      iStack_24 = *(int *)(param_1 + 0x2760);
      *(float *)(param_1 + 0x2778) = *(float *)(param_1 + 0x2778) - param_2;
    }
  }
  else {
    iStack_24 = iVar1;
    *(uint *)(param_1 + 0x2778) = 0;
  }
  *(int *)(param_1 + 0x2760) = iStack_24;
  if (iStack_24 != 0) {
    iVar1 = FUN_00548090(uStack_30,"Bip01 head",0);
    if (iVar1 == -1) {
      uStack_b4 = 0;
      uStack_b0 = 0x40b00000;
      uStack_ac = 0;
      FUN_00408b80(param_1,&stack0xffffff4c);
      fStack_210 = fStack_204;
      (&stack0xfffffdf4)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)(&stack0xfffffe00 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xfffffdf8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffe04 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (&stack0xfffffe50 != &stack0xfffffdf0) {
        fStack_1b0 = fStack_210;
        fStack_1ac = fStack_20c;
        fStack_1a8 = fStack_208;
      }
    }
    else {
      FUN_0054dcc0(param_1 + 0x158,iVar1);
      puVar8 = &stack0xffffffb8;
      uStack_48 = uStack_e4;
      *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff20 + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff24 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_00408b80(param_1,puVar8);
      fStack_114 = fStack_a8;
      (&stack0xfffffef0)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff5c + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xfffffef4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff60 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (&stack0xfffffe50 != &stack0xfffffeec) {
        fStack_1b0 = fStack_114;
        fStack_1ac = fStack_110;
        fStack_1a8 = fStack_10c;
      }
    }
    iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x2760),DAT_007e2cec);
    iStack_2c = iVar1;
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x2760);
      if (&stack0xfffffe68 != (float *)(iVar1 + 0x20)) {
        fStack_198 = *(float *)(iVar1 + 0x20);
        fStack_194 = *(float *)(iVar1 + 0x24);
        fStack_22c = *(float *)(iVar1 + 0x28);
LAB_00432bcb:
        fStack_190 = fStack_22c;
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
      if ((iVar3 == 0) || (*(char *)(iVar1 + 0x24a8) == '\0')) {
        iVar3 = iStack_2c + 0x158;
        uVar4 = FUN_0054eac0(iVar3,"Bip01 head",0);
        iVar1 = FUN_00548090(uVar4);
        if (iVar1 == -1) {
          if (&stack0xfffffe68 != (float *)(iStack_2c + 0x20)) {
            fStack_198 = *(float *)(iStack_2c + 0x20);
            fStack_194 = *(float *)(iStack_2c + 0x24);
            fStack_190 = *(float *)(iStack_2c + 0x28);
          }
          fStack_194 = fStack_194 + _DAT_005b8696;
        }
        else {
          FUN_0054dcc0(iVar3,iVar1);
          uStack_144 = uStack_18c;
          *(uint *)((int)&stack0xfffffec0 + (uint)bVar6 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xfffffe78 + (uint)bVar6 * 0xfffffffe * 4);
          *(uint *)(&stack0xfffffec4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xfffffe7c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          FUN_00408b80(iStack_2c,&stack0xfffffebc);
          fStack_234 = fStack_78;
          (&stack0xfffffdd0)[(uint)bVar6 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff8c + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xfffffdd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          if (&stack0xfffffe68 != &stack0xfffffdcc) {
            fStack_198 = fStack_234;
            fStack_194 = fStack_230;
            goto LAB_00432bcb;
          }
        }
      }
      else {
        FUN_0054dcc0(iVar1 + 0x158,0);
        puVar8 = &stack0xfffffe14;
        uStack_1ec = uStack_54;
        *(uint *)((int)&stack0xfffffe18 + (uint)bVar6 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffb0 + (uint)bVar6 * -8);
        *(uint *)(&stack0xfffffe1c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        FUN_00408b80(iVar1,puVar8);
        fStack_84 = fStack_fc;
        (&stack0xffffff80)[(uint)bVar6 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffff08 + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffff0c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0xfffffe68 != &stack0xffffff7c) {
          fStack_198 = fStack_84;
          fStack_194 = fStack_80;
          fStack_22c = fStack_7c;
          goto LAB_00432bcb;
        }
      }
    }
    fStack_1a4 = fStack_198 - fStack_1b0;
    fStack_1a0 = fStack_194 - fStack_1ac;
    fStack_19c = fStack_190 - fStack_1a8;
    fStack_168 = fStack_198 - fStack_1b0;
    *(float *)((int)&stack0xfffffe9c + (uint)bVar6 * 0xfffffffe * 4) =
         (&stack0xfffffe60)[(uint)bVar6 * 0xfffffffe];
    *(uint *)(&stack0xfffffea0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xfffffe64 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    FUN_00408b40(param_1,&stack0xfffffe98);
    uStack_174 = uStack_9c;
    *(uint *)((int)&stack0xfffffe90 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff68 + (uint)bVar6 * -8);
    *(uint *)(&stack0xfffffe94 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    FUN_00576250(&stack0xfffffe8c);
    fStack_138 = fStack_90;
    (&stack0xfffffecc)[(uint)bVar6 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffff74 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xfffffed0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff78 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    if (&stack0xfffffe38 != &stack0xfffffec8) {
      fStack_1c8 = fStack_138;
      fStack_1c4 = fStack_134;
      uStack_1c0 = uStack_130;
    }
    if ((float)_DAT_005b869e < ABS(fStack_1c4)) {
      *(uint *)(param_1 + 0x2760) = 0;
    }
    if ((float)_DAT_005b86a6 < ABS(fStack_1c8)) {
      *(uint *)(param_1 + 0x2760) = 0;
      goto LAB_004323d1;
    }
  }
  if (*(int *)(param_1 + 0x2760) != 0) {
    fVar5 = param_2 / _DAT_005b86ae + *(float *)(param_1 + 0x2770);
    *(float *)(param_1 + 0x2770) = fVar5;
    if (1.0 < fVar5) {
      *(uint *)(param_1 + 0x2770) = 0x3f800000;
    }
    fStack_18 = (float)FUN_0040cfa0(fStack_1c4 - *(float *)(param_1 + 0x2768));
    *(float *)(param_1 + 0x2768) = fStack_18 * (float)_DAT_005b86b6 + *(float *)(param_1 + 0x2768);
    fVar5 = (float)FUN_0040cfa0(fStack_1c8 - *(float *)(param_1 + 0x276c));
    *(float *)(param_1 + 0x276c) = fVar5 * (float)_DAT_005b86b6 + *(float *)(param_1 + 0x276c);
    return;
  }
LAB_004323d1:
  fVar5 = *(float *)(param_1 + 0x2770) - param_2 / _DAT_005b86ae;
  *(float *)(param_1 + 0x2770) = fVar5;
  if (fVar5 < 0.0) {
    *(uint *)(param_1 + 0x276c) = 0;
    *(uint *)(param_1 + 0x2770) = 0;
    *(uint *)(param_1 + 0x2768) = 0;
    return;
  }
  return;
}
