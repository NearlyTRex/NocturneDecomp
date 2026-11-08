// Name: FUN_00432f10
// Address: 00432f10
// Address Range: [[00432f10, 00433b27]]
// Convention: unknown
// Signature: void FUN_00432f10(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432f10(int param_1,float param_2,int param_3)

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
  uint uStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  uint uStack_204;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  uint uStack_1ec;
  uint uStack_1e0;
  float fStack_1d4;
  float fStack_1d0;
  uint uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float fStack_1bc;
  float fStack_1b0;
  uint uStack_1a4;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  uint uStack_174;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_114;
  float fStack_108;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  float fStack_f0;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  float fStack_cc;
  uint uStack_c0;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float fStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_54;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar1 != 0) {
    param_3 = 1;
  }
  uStack_34 = FUN_00569f30(param_1 + 0x158);
  iVar1 = FUN_005634f0(uStack_34,"Bip01 head",0);
  if (iVar1 == -1) {
    param_3 = 1;
  }
  iStack_28 = 0;
  iVar1 = iStack_28;
  if ((param_3 == 0) && (iVar1 = *(int *)(param_1 + 0x2764), *(int *)(param_1 + 0x2764) == 0)) {
    if (*(float *)(param_1 + 0x2778) <= 0.0) {
      iVar1 = FUN_005634f0(uStack_34,"Bip01 head",0);
      if (iVar1 == -1) {
        uStack_f8 = 0x40b00000;
        uStack_fc = 0;
        uStack_f4 = 0;
        FUN_00408b40(param_1,&stack0xffffff04);
        fStack_18c = fStack_78;
        (&stack0xfffffe78)[(uint)bVar6 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffff8c + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xfffffe7c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0xfffffed4 != &stack0xfffffe74) {
          fStack_12c = fStack_18c;
          fStack_128 = fStack_188;
          fStack_124 = fStack_184;
        }
      }
      else {
        FUN_00569130(param_1 + 0x158,iVar1);
        puVar8 = &stack0xfffffe5c;
        uStack_1a4 = uStack_d8;
        *(uint *)((int)&stack0xfffffe60 + (uint)bVar6 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff2c + (uint)bVar6 * -8);
        *(uint *)(&stack0xfffffe64 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffff30 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        FUN_00408b40(param_1,puVar8);
        fStack_198 = fStack_cc;
        (&stack0xfffffe6c)[(uint)bVar6 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffff38 + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xfffffe70 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffff3c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0xfffffed4 != &stack0xfffffe68) {
          fStack_12c = fStack_198;
          fStack_128 = fStack_194;
          fStack_124 = fStack_190;
        }
      }
      iStack_2c = FUN_004a6c30(0x01C51D80,"heroCanSee");
      iStack_24 = 0;
      for (iStack_20 = 0; iStack_20 < *(int *)(0x01E82168 + 0x14f0a8); iStack_20 = iStack_20 + 1)
      {
        iVar1 = *(int *)(0x01E82168 + iStack_24 + 0x14f0ac);
        if ((((iVar1 != param_1) && (iVar3 = FUN_0040c600(iVar1,_DAT_02c8aee8), iVar3 == 0)) &&
            ((*(int *)(iVar1 + 0x27a8) == 0 || (iStack_2c != 0)))) &&
           ((iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x70))(iVar1), iVar3 == 0 &&
            (iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1), iVar3 == 0)))) {
          iVar3 = -1;
          if (*(char *)(iVar1 + 0x24a8) != '\0') {
            uVar4 = FUN_00569f30(iVar1 + 0x158,"Bip01 head",0);
            iVar3 = FUN_005634f0(uVar4);
          }
          if (iVar3 < 0) {
            if (&stack0xfffffebc != (float *)(iVar1 + 0x20)) {
              fStack_144 = *(float *)(iVar1 + 0x20);
              fStack_140 = *(float *)(iVar1 + 0x24);
              fStack_13c = *(float *)(iVar1 + 0x28);
            }
            fStack_140 = fStack_140 + _DAT_005d5d4f;
          }
          else {
            FUN_00569130(iVar1 + 0x158,iVar3);
            puVar8 = &stack0xfffffe14;
            uStack_1ec = uStack_114;
            *(uint *)((int)&stack0xfffffe18 + (uint)bVar6 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xfffffef0 + (uint)bVar6 * -8);
            *(uint *)(&stack0xfffffe1c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xfffffef4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            FUN_00408b40(iVar1,puVar8);
            fStack_138 = fStack_108;
            (&stack0xfffffecc)[(uint)bVar6 * 0xfffffffe] =
                 (float)*(uint *)(&stack0xfffffefc + (uint)bVar6 * -8);
            *(uint *)((int)&stack0xfffffed0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xffffff00 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            if (&stack0xfffffebc != &stack0xfffffec8) {
              fStack_144 = fStack_138;
              fStack_140 = fStack_134;
              fStack_13c = fStack_130;
            }
          }
          pfVar7 = &stack0xffffff10;
          fStack_21c = fStack_144 - fStack_12c;
          fStack_218 = fStack_140 - fStack_128;
          fStack_214 = fStack_13c - fStack_124;
          fStack_f0 = fStack_144 - fStack_12c;
          *(uint *)((int)&stack0xffffff14 + (uint)bVar6 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xfffffde8 + (uint)bVar6 * -8);
          *(uint *)(&stack0xffffff18 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xfffffdec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          FUN_00408b00(param_1,pfVar7);
          fStack_234 = fStack_180;
          (&stack0xfffffdd0)[(uint)bVar6 * 0xfffffffe] =
               (float)*(uint *)(&stack0xfffffe84 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xfffffdd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xfffffe88 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          if ((0.0 <= fStack_22c) &&
             (fStack_244 = fStack_22c * fStack_22c +
                           fStack_234 * fStack_234 + fStack_230 * fStack_230, fStack_1c = fStack_244
             , (int)fStack_244 < 0x44610001)) {
            FUN_005a7520(&stack0xfffffdcc);
            fStack_b4 = fStack_1bc;
            (&stack0xffffff50)[(uint)bVar6 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xfffffe48 + (uint)bVar6 * 0xfffffffe * 4);
            *(uint *)((int)&stack0xffffff54 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xfffffe4c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            if ((ABS(fStack_b0) <= (float)_DAT_005d5d77) && (ABS(fStack_b4) <= (float)_DAT_005d5d7f)
               ) {
              fStack_248 = 10.0;
              iVar3 = FUN_0040c600(iVar1,_DAT_01c3f6a0);
              if ((iVar3 != 0) && (fStack_248 = 30.0, *(int *)(iVar3 + 0xc1e8) == param_1)) {
                fStack_248 = 40.0;
              }
              if ((fStack_248 < (float)_DAT_005d5d87) &&
                 (iVar2 = FUN_0040c550(iVar1,"CHero"), iVar2 != 0)) {
                fStack_248 = 15.0;
              }
              fStack_248 = ((float)_DAT_005d5d8f / (SQRT(fStack_244) + (float)_DAT_005d5d8f)) *
                           fStack_248;
              if (iVar1 == *(int *)(param_1 + 0x2760)) {
                fStack_248 = fStack_248 * (float)_DAT_005d5d47;
              }
              if (((iVar3 != 0) && (*(int *)(iVar3 + 0xc1d4) == 1)) || (_DAT_005d5d97 <= fStack_248)
                 ) {
                FUN_00559220(0x01E82168);
                FUN_00559250(0x01E82168,param_1);
                FUN_00559250(0x01E82168,iVar1);
                FUN_005592d0(0x01E82168,2);
                iVar3 = FUN_00557230(0x01E82168,&stack0xfffffed4,&stack0xfffffebc);
                if ((iVar3 == 0) && (iStack_28 = iVar1, &stack0xfffffe38 != &stack0xffffff4c)) {
                  fStack_1c8 = fStack_b4;
                  fStack_1c4 = fStack_b0;
                  uStack_1c0 = uStack_ac;
                }
              }
            }
          }
        }
        iStack_24 = iStack_24 + 4;
      }
      FUN_00559220(0x01E82168);
      fStack_18 = (float)FUN_0040cc00(0x3f800000,0x40000000);
      *(float *)(param_1 + 0x2778) = fStack_18;
    }
    else {
      iStack_28 = *(int *)(param_1 + 0x2760);
      *(float *)(param_1 + 0x2778) = *(float *)(param_1 + 0x2778) - param_2;
    }
  }
  else {
    iStack_28 = iVar1;
    *(uint *)(param_1 + 0x2778) = 0;
  }
  *(int *)(param_1 + 0x2760) = iStack_28;
  if (iStack_28 != 0) {
    iVar1 = FUN_005634f0(uStack_34,"Bip01 head",0);
    if (iVar1 == -1) {
      uStack_48 = 0;
      uStack_44 = 0x40b00000;
      uStack_40 = 0;
      FUN_00408b40(param_1,&stack0xffffffb8);
      fStack_e4 = fStack_240;
      (&stack0xffffff20)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)(&stack0xfffffdc4 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffff24 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffdc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (&stack0xffffff64 != &stack0xffffff1c) {
        fStack_9c = fStack_e4;
        fStack_98 = fStack_e0;
        fStack_94 = fStack_dc;
      }
    }
    else {
      FUN_00569130(param_1 + 0x158,iVar1);
      puVar8 = &stack0xfffffe8c;
      uStack_174 = uStack_90;
      *(uint *)((int)&stack0xfffffe90 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffff74 + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)(&stack0xfffffe94 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff78 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_00408b40(param_1,puVar8);
      fStack_168 = fStack_84;
      (&stack0xfffffe9c)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffff80 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xfffffea0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (&stack0xffffff64 != &stack0xfffffe98) {
        fStack_9c = fStack_168;
        fStack_98 = fStack_164;
        fStack_94 = fStack_160;
      }
    }
    iVar1 = FUN_0040c600(*(uint *)(param_1 + 0x2760),DAT_007c637c);
    iStack_30 = iVar1;
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x2760);
      if (&stack0xffffff94 != (float *)(iVar1 + 0x20)) {
        fStack_6c = *(float *)(iVar1 + 0x20);
        fStack_68 = *(float *)(iVar1 + 0x24);
        fStack_154 = *(float *)(iVar1 + 0x28);
LAB_0043370e:
        fStack_64 = fStack_154;
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
      if ((iVar3 == 0) || (*(char *)(iVar1 + 0x24a8) == '\0')) {
        iVar3 = iStack_30 + 0x158;
        uVar4 = FUN_00569f30(iVar3,"Bip01 head",0);
        iVar1 = FUN_005634f0(uVar4);
        if (iVar1 == -1) {
          if (&stack0xffffff94 != (float *)(iStack_30 + 0x20)) {
            fStack_6c = *(float *)(iStack_30 + 0x20);
            fStack_68 = *(float *)(iStack_30 + 0x24);
            fStack_64 = *(float *)(iStack_30 + 0x28);
          }
          fStack_68 = fStack_68 + _DAT_005d5d4f;
        }
        else {
          FUN_00569130(iVar3,iVar1);
          uStack_204 = uStack_228;
          *(uint *)((int)&stack0xfffffe00 + (uint)bVar6 * 0xfffffffe * 4) =
               *(uint *)(&stack0xfffffddc + (uint)bVar6 * -8);
          *(uint *)(&stack0xfffffe04 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xfffffde0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          FUN_00408b40(iStack_30,&stack0xfffffdfc);
          fStack_15c = fStack_120;
          (&stack0xfffffea8)[(uint)bVar6 * 0xfffffffe] =
               (float)*(uint *)((int)&stack0xfffffee4 + (uint)bVar6 * 0xfffffffe * 4);
          *(uint *)((int)&stack0xfffffeac + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xfffffee8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          if (&stack0xffffff94 != &stack0xfffffea4) {
            fStack_6c = fStack_15c;
            fStack_68 = fStack_158;
            goto LAB_0043370e;
          }
        }
      }
      else {
        FUN_00569130(iVar1 + 0x158,0);
        puVar8 = &stack0xfffffe20;
        uStack_1e0 = uStack_54;
        *(uint *)((int)&stack0xfffffe24 + (uint)bVar6 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffb0 + (uint)bVar6 * -8);
        *(uint *)(&stack0xfffffe28 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        FUN_00408b40(iVar1,puVar8);
        fStack_210 = fStack_60;
        (&stack0xfffffdf4)[(uint)bVar6 * 0xfffffffe] =
             (float)*(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * 0xfffffffe * 4);
        *(uint *)((int)&stack0xfffffdf8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0xffffff94 != &stack0xfffffdf0) {
          fStack_6c = fStack_210;
          fStack_68 = fStack_20c;
          fStack_154 = fStack_208;
          goto LAB_0043370e;
        }
      }
    }
    fStack_1f8 = fStack_6c - fStack_9c;
    fStack_1f4 = fStack_68 - fStack_98;
    fStack_1f0 = fStack_64 - fStack_94;
    fStack_1b0 = fStack_6c - fStack_9c;
    *(uint *)((int)&stack0xfffffe54 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xfffffe0c + (uint)bVar6 * -8);
    *(uint *)(&stack0xfffffe58 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xfffffe10 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    FUN_00408b00(param_1,&stack0xfffffe50);
    uStack_a8 = uStack_c0;
    *(uint *)((int)&stack0xffffff5c + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff44 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff60 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    FUN_005a7520(&stack0xffffff58);
    fStack_1d4 = fStack_150;
    (&stack0xfffffe30)[(uint)bVar6 * 0xfffffffe] =
         (float)*(uint *)(&stack0xfffffeb4 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xfffffe34 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xfffffeb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    if (&stack0xfffffe38 != &stack0xfffffe2c) {
      fStack_1c8 = fStack_1d4;
      fStack_1c4 = fStack_1d0;
      uStack_1c0 = uStack_1cc;
    }
    if ((float)_DAT_005d5d57 < ABS(fStack_1c4)) {
      *(uint *)(param_1 + 0x2760) = 0;
    }
    if ((float)_DAT_005d5d5f < ABS(fStack_1c8)) {
      *(uint *)(param_1 + 0x2760) = 0;
      goto LAB_00432fb1;
    }
  }
  if (*(int *)(param_1 + 0x2760) != 0) {
    fVar5 = param_2 / _DAT_005d5d67 + *(float *)(param_1 + 0x2770);
    *(float *)(param_1 + 0x2770) = fVar5;
    if (1.0 < fVar5) {
      *(uint *)(param_1 + 0x2770) = 0x3f800000;
    }
    fStack_18 = (float)FUN_0040cd60(fStack_1c4 - *(float *)(param_1 + 0x2768));
    *(float *)(param_1 + 0x2768) = fStack_18 * (float)_DAT_005d5d6f + *(float *)(param_1 + 0x2768);
    fVar5 = (float)FUN_0040cd60(fStack_1c8 - *(float *)(param_1 + 0x276c));
    *(float *)(param_1 + 0x276c) = fVar5 * (float)_DAT_005d5d6f + *(float *)(param_1 + 0x276c);
    return;
  }
LAB_00432fb1:
  fVar5 = *(float *)(param_1 + 0x2770) - param_2 / _DAT_005d5d67;
  *(float *)(param_1 + 0x2770) = fVar5;
  if (fVar5 < 0.0) {
    *(uint *)(param_1 + 0x276c) = 0;
    *(uint *)(param_1 + 0x2770) = 0;
    *(uint *)(param_1 + 0x2768) = 0;
    return;
  }
  return;
}
