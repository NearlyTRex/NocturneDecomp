// Name: FUN_0058f660
// Address: 0058f660
// Address Range: [[0058f660, 0058fca5]]
// Convention: unknown
// Signature: void FUN_0058f660(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f660(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_112c [1000];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  float fStack_150;
  float fStack_144;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_fc;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_24;
  float *pfStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x20004) == 0) {
    _DAT_01d1d400 = "..\\core\\stranger.cpp";
    _DAT_01d1d404 = 0x1125;
    FUN_005030e0("CStranger::aimLeftPistol - no weapon?");
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x20004) + 0x154) + 0xe0))(*(int *)(param_1 + 0x20004));
  pfStack_20 = (float *)(param_1 + 0x1ffe0);
  uStack_2c = _DAT_02c8360c;
  fStack_120 = local_6c;
  (&stack0xfffffee4)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffff98 + (uint)bVar4 * -8);
  *(uint *)(&stack0xfffffee8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_30 = 0.5235988;
  fStack_34 = -1.3089969;
  FUN_00408b40(*(uint *)(param_1 + 0x20004),&stack0xfffffee0);
  fStack_f0 = fStack_9c;
  (&stack0xffffff14)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffff68 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffff18 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff6c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0x447a0000;
  FUN_00408ac0(*(uint *)(param_1 + 0x20004),&stack0xfffffed4);
  fVar3 = fStack_e8;
  fVar1 = fStack_ec;
  fVar2 = fStack_f0;
  fStack_54 = fStack_144;
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xfffffec0 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xfffffec4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0xff;
  fStack_48 = fVar2 + fStack_54;
  fStack_44 = fVar1 + fStack_50;
  uVar7 = 1;
  fStack_40 = fVar3 + fStack_4c;
  fStack_60 = fVar2 + fStack_54;
  (&stack0xffffffa4)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8);
  uVar6 = 0x01E82168;
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  FUN_00559310(uVar6,uVar7,uVar8,uVar9,uVar10);
  FUN_00559250(0x01E82168,*(uint *)(param_1 + 0x20004));
  FUN_00559250(0x01E82168,param_1);
  fStack_150 = (float)FUN_00557300(0x01E82168,&stack0xffffff10,&stack0xffffffa0);
  fStack_18 = fStack_150;
  FUN_00559220(0x01E82168);
  fVar2 = fStack_f0;
  if ((fStack_150 < 0.0) || (1.0 < fStack_150)) {
    fStack_150 = 1.0;
  }
  fStack_a8 = fStack_54 * fStack_150;
  fStack_a4 = fStack_50 * fStack_150;
  fStack_a0 = fStack_4c * fStack_150;
  fStack_138 = fStack_54 * fStack_150;
  *(uint *)((int)&stack0xfffffecc + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffff5c + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xfffffed0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffff60 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_78 = fVar2 + fStack_138;
  fStack_74 = fStack_ec + fStack_134;
  fStack_70 = fStack_e8 + fStack_130;
  fStack_e4 = fVar2 + fStack_138;
  (&stack0xffffff20)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff8c + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffff24 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffff90 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&stack0xffffffa0 != &stack0xffffff1c) {
    fStack_60 = fStack_e4;
    fStack_5c = fStack_e0;
    uStack_58 = uStack_dc;
  }
  FUN_00569040(param_1 + 0x158,uStack_2c);
  pfVar11 = &stack0xffffffa0;
  fStack_114 = fStack_d8;
  *(uint *)((int)&stack0xfffffef0 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff2c + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xfffffef4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff30 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  FUN_00408bb0(param_1,pfVar11);
  fStack_b4 = fStack_c0;
  *(uint *)((int)&stack0xffffff50 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff44 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffff54 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff48 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_84 = fStack_b4 - fStack_114;
  fStack_80 = fStack_b0 - fStack_110;
  fStack_7c = fStack_ac - fStack_10c;
  fStack_cc = fStack_b4 - fStack_114;
  (&stack0xffffff38)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff80 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffff3c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffff84 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  FUN_005a7520(&stack0xffffff34);
  fVar2 = SQRT(fStack_c4 * fStack_c4 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8);
  fStack_90 = fStack_fc;
  *(uint *)((int)&stack0xffffff74 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff08 + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffff78 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff0c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if ((float)_DAT_005f6f59 < fVar2) {
    fStack_28 = -fStack_120;
    if ((((float)_DAT_005f6f59 <= fVar2) &&
        (fVar1 = SQRT(fVar2 * fVar2 - fStack_28 * fStack_28) / fVar2, fVar1 < 1.0)) &&
       (0.0 <= fVar1)) {
      fVar5 = (float10)fVar1;
      FUN_005c1d04();
      fStack_38 = (float)fVar5;
      if (0.0 <= fStack_28) {
        fStack_8c = fStack_8c + fStack_38;
      }
      else {
        fStack_8c = fStack_8c - fStack_38;
      }
      fStack_18 = (float)FUN_0040cd60(fStack_8c);
      fStack_8c = fStack_18;
    }
    if ((((float)_DAT_005f6f59 <= fVar2) &&
        (fVar2 = SQRT(fVar2 * fVar2 - fStack_11c * fStack_11c) / fVar2, fVar2 < 1.0)) &&
       (0.0 <= fVar2)) {
      fVar5 = (float10)fVar2;
      FUN_005c1d04();
      fStack_3c = (float)fVar5;
      if (0.0 <= fStack_11c) {
        fStack_90 = fStack_90 + fStack_3c;
      }
      else {
        fStack_90 = fStack_90 - fStack_3c;
      }
      fStack_18 = (float)FUN_0040cd60(fStack_90);
      fStack_90 = fStack_18;
    }
  }
  fStack_108 = fStack_90;
  *(uint *)((int)&stack0xfffffefc + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffff74 + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffff00 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff78 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_1c = fStack_104;
  fStack_24 = fStack_108;
  if (fStack_108 < 0xBF860A92) {
    fStack_24 = 0xBF860A92;
  }
  if (0x3F9C61AA < fStack_24) {
    fStack_24 = 0x3F9C61AA;
  }
  if (fStack_104 < fStack_34) {
    fStack_1c = fStack_34;
  }
  if (fStack_30 < fStack_1c) {
    fStack_1c = fStack_30;
  }
  pfStack_20[5] = 1.0;
  pfStack_20[3] = fStack_1c;
  pfStack_20[2] = fStack_24;
  pfStack_20[1] = fStack_1c;
  *pfStack_20 = fStack_24;
  return;
}
