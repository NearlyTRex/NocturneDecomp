// Name: FUN_00429420
// Address: 00429420
// Address Range: [[00429420, 00429b30]]
// Convention: unknown
// Signature: void FUN_00429420(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429420(int param_1,float param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float afStackY_118c [1012];
  uint *puVar6;
  float *pfVar7;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  uint uStack_1a4;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  float fStack_18c;
  float fStack_188;
  uint uStack_184;
  float fStack_180;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_fc;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint uStack_c0;
  uint uStack_b4;
  float fStack_a8;
  uint uStack_9c;
  uint uStack_90;
  uint uStack_84;
  float fStack_78;
  float fStack_6c;
  float fStack_60;
  uint uStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
  if (iVar1 != 0) {
    param_3 = 1;
  }
  uStack_28 = FUN_00547890(param_1 + 0x2b4);
  iVar1 = FUN_00540e80(uStack_28,"Bip01 head",0);
  if (iVar1 == -1) {
    param_3 = 1;
  }
  iStack_24 = 0;
  iVar1 = iStack_24;
  if ((param_3 == 0) && (iVar1 = *(int *)(param_1 + 0x27d0), *(int *)(param_1 + 0x27d0) == 0)) {
    if (*(float *)(param_1 + 0x27e4) <= 0.0) {
      iVar1 = FUN_00540e80(uStack_28,"Bip01 head",0);
      if (iVar1 == -1) {
        uStack_134 = 0x40b00000;
        uStack_138 = 0;
        uStack_130 = 0;
        FUN_00408d70(param_1,&stack0xfffffec8);
        uStack_198 = uStack_90;
        (&stack0xfffffe6c)[(uint)bVar5 * 0xfffffffe] =
             *(uint *)(&stack0xffffff74 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xfffffe70 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffff78 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        if (&stack0xfffffeec != &stack0xfffffe68) {
          uStack_114 = uStack_198;
          uStack_110 = uStack_194;
          uStack_10c = uStack_190;
        }
      }
      else {
        FUN_00546a90(param_1 + 0x2b4,iVar1);
        puVar6 = &stack0xffffff04;
        uStack_fc = uStack_15c;
        *(uint *)((int)&stack0xffffff08 + (uint)bVar5 * 0xfffffffe * 4) =
             *(uint *)(&stack0xfffffea8 + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffff0c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xfffffeac + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        FUN_00408d70(param_1,puVar6);
        uStack_12c = uStack_d8;
        (&stack0xfffffed8)[(uint)bVar5 * 0xfffffffe] =
             *(uint *)(&stack0xffffff2c + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xfffffedc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffff30 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        if (&stack0xfffffeec != &stack0xfffffed4) {
          uStack_114 = uStack_12c;
          uStack_110 = uStack_128;
          uStack_10c = uStack_124;
        }
      }
      for (iVar1 = 0; iVar1 < *(int *)(0x01E661B8 + 0x14f0a8); iVar1 = iVar1 + 1) {
      }
      FUN_00537e00(0x01E661B8);
      fStack_18 = (float)FUN_0040cf60(0x3f800000,0x40000000);
      *(float *)(param_1 + 0x27e4) = fStack_18;
    }
    else {
      iStack_24 = *(int *)(param_1 + 0x27cc);
      *(float *)(param_1 + 0x27e4) = *(float *)(param_1 + 0x27e4) - param_2;
    }
  }
  else {
    iStack_24 = iVar1;
    *(uint *)(param_1 + 0x27e4) = 0;
  }
  *(int *)(param_1 + 0x27cc) = iStack_24;
  if (iStack_24 != 0) {
    iVar1 = FUN_00540e80(uStack_28,"Bip01 head",0);
    if (iVar1 == -1) {
      uStack_3c = 0;
      uStack_34 = 0;
      uStack_38 = 0x40b00000;
      FUN_00408d70(param_1,&stack0xffffffc4);
      fStack_168 = fStack_144;
      (&stack0xfffffe9c)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xfffffec0 + (uint)bVar5 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xfffffea0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xfffffec4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (&stack0xfffffeb0 != &stack0xfffffe98) {
        fStack_150 = fStack_168;
        fStack_14c = fStack_164;
        fStack_148 = fStack_160;
      }
    }
    else {
      FUN_00546a90(param_1 + 0x2b4,iVar1);
      puVar6 = &stack0xfffffee0;
      uStack_120 = uStack_1a4;
      *(uint *)((int)&stack0xfffffee4 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xfffffe60 + (uint)bVar5 * 0xfffffffe * 4);
      *(uint *)(&stack0xfffffee8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xfffffe64 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      FUN_00408d70(param_1,puVar6);
      fStack_cc = fStack_180;
      (&stack0xffffff38)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xfffffe84 + (uint)bVar5 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffff3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xfffffe88 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (&stack0xfffffeb0 != &stack0xffffff34) {
        fStack_150 = fStack_cc;
        fStack_14c = fStack_c8;
        fStack_148 = fStack_c4;
      }
    }
    iStack_1c = FUN_0040c8f0(*(uint *)(param_1 + 0x27cc),DAT_007bdc94);
    iStack_20 = iStack_1c;
    if (iStack_1c == 0) {
      iVar1 = *(int *)(param_1 + 0x27cc);
      if (&stack0xfffffe50 != (float *)(iVar1 + 0x20)) {
        fStack_1b0 = *(float *)(iVar1 + 0x20);
        fStack_1ac = *(float *)(iVar1 + 0x24);
        fStack_e8 = *(float *)(iVar1 + 0x28);
LAB_00429762:
        fStack_1a8 = fStack_e8;
      }
    }
    else {
      iVar1 = (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0x114))(iStack_1c);
      if ((iVar1 == 0) || (*(char *)(iStack_1c + 0x2514) == '\0')) {
        iVar4 = iStack_20 + 0x2b4;
        uVar2 = FUN_00547890(iVar4,"Bip01 head",0);
        iVar1 = FUN_00540e80(uVar2);
        if (iVar1 == -1) {
          if (&stack0xfffffe50 != (float *)(iStack_20 + 0x20)) {
            fStack_1b0 = *(float *)(iStack_20 + 0x20);
            fStack_1ac = *(float *)(iStack_20 + 0x24);
            fStack_1a8 = *(float *)(iStack_20 + 0x28);
          }
          fStack_1ac = fStack_1ac + _DAT_005cd0ba;
        }
        else {
          FUN_00546a90(iVar4,iVar1);
          uStack_54 = uStack_c0;
          *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffff44 + (uint)bVar5 * -8);
          *(uint *)(&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffff48 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          FUN_00408d70(iStack_20,&stack0xffffffac);
          fStack_f0 = fStack_78;
          (&stack0xffffff14)[(uint)bVar5 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff8c + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffff18 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          if (&stack0xfffffe50 != &stack0xffffff10) {
            fStack_1b0 = fStack_f0;
            fStack_1ac = fStack_ec;
            goto LAB_00429762;
          }
        }
      }
      else {
        FUN_00546a90(iStack_1c + 0x2b4,0);
        iVar1 = iStack_1c;
        puVar6 = &stack0xffffff4c;
        uStack_b4 = uStack_9c;
        *(uint *)((int)&stack0xffffff50 + (uint)bVar5 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff68 + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffff54 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffff6c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        FUN_00408d70(iVar1,puVar6);
        fStack_48 = fStack_60;
        (&stack0xffffffbc)[(uint)bVar5 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffffa4 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        if (&stack0xfffffe50 != &stack0xffffffb8) {
          fStack_1b0 = fStack_48;
          fStack_1ac = fStack_44;
          fStack_e8 = fStack_40;
          goto LAB_00429762;
        }
      }
    }
    pfVar7 = &stack0xffffff94;
    fStack_e4 = fStack_1b0 - fStack_150;
    fStack_e0 = fStack_1ac - fStack_14c;
    fStack_dc = fStack_1a8 - fStack_148;
    fStack_6c = fStack_1b0 - fStack_150;
    *(uint *)((int)&stack0xffffff98 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffff20 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff24 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_00408d30(param_1,pfVar7);
    uStack_108 = uStack_84;
    *(uint *)((int)&stack0xfffffefc + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff80 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffff00 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_005838f0(&stack0xfffffef8);
    fStack_174 = fStack_a8;
    (&stack0xfffffe90)[(uint)bVar5 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffff5c + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xfffffe94 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffff60 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    if (&stack0xfffffe74 != &stack0xfffffe8c) {
      fStack_18c = fStack_174;
      fStack_188 = fStack_170;
      uStack_184 = uStack_16c;
    }
    if ((float)_DAT_005cd0be < ABS(fStack_188)) {
      *(uint *)(param_1 + 0x27cc) = 0;
    }
    if ((float)_DAT_005cd0c6 < ABS(fStack_18c)) {
      *(uint *)(param_1 + 0x27cc) = 0;
      goto LAB_004294b3;
    }
  }
  if (*(int *)(param_1 + 0x27cc) != 0) {
    fVar3 = param_2 / _DAT_005cd0ce + *(float *)(param_1 + 0x27dc);
    *(float *)(param_1 + 0x27dc) = fVar3;
    if (1.0 < fVar3) {
      *(uint *)(param_1 + 0x27dc) = 0x3f800000;
    }
    fStack_18 = (float)FUN_0040d0c0(fStack_188 - *(float *)(param_1 + 0x27d4));
    *(float *)(param_1 + 0x27d4) = fStack_18 * (float)_DAT_005cd0d6 + *(float *)(param_1 + 0x27d4);
    fVar3 = (float)FUN_0040d0c0(fStack_18c - *(float *)(param_1 + 0x27d8));
    *(float *)(param_1 + 0x27d8) = fVar3 * (float)_DAT_005cd0d6 + *(float *)(param_1 + 0x27d8);
    return;
  }
LAB_004294b3:
  fVar3 = *(float *)(param_1 + 0x27dc) - param_2 / _DAT_005cd0ce;
  *(float *)(param_1 + 0x27dc) = fVar3;
  if (fVar3 < 0.0) {
    *(uint *)(param_1 + 0x27d8) = 0;
    *(uint *)(param_1 + 0x27dc) = 0;
    *(uint *)(param_1 + 0x27d4) = 0;
    return;
  }
  return;
}
