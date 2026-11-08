// Name: FUN_005267c0
// Address: 005267c0
// Address Range: [[005267c0, 00526ce8]]
// Convention: unknown
// Signature: undefined4 FUN_005267c0(int param_1,int param_2,int param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005267c0(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1110 [1004];
  float *pfVar7;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint uStack_128;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint uStack_f8;
  float fStack_ec;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  float fStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  float fStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_8c;
  float fStack_80;
  uint uStack_7c;
  uint uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_50;
  uint uStack_44;
  uint uStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar6 = 0;
  iVar4 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(0x01D81080 + 0x1018); iVar2 = iVar2 + 1) {
    if (param_2 == *(int *)(iVar4 + 0x101c + 0x01D81080)) {
      return 0;
    }
    iVar4 = iVar4 + 4;
  }
  switch(param_3) {
  case 1:
    if (*(int *)(param_1 + 0x25b0) != 0) {
      return 0;
    }
    FUN_00408bf0(param_2,param_1 + 0x20);
    fStack_2c = fStack_ec;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff18 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff1c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_20 = SQRT(fStack_24 * fStack_24 + fStack_2c * fStack_2c + fStack_28 * fStack_28);
    if (fStack_20 <= 0.0) {
      fStack_28 = 0.0;
      fStack_2c = 0.0;
      fStack_24 = 0.0;
    }
    else {
      fVar1 = 1.0 / fStack_20;
      fStack_2c = fStack_2c * fVar1;
      fStack_28 = fStack_28 * fVar1;
      fStack_24 = fStack_24 * fVar1;
    }
    if (0.0 < fStack_24) {
      return 0;
    }
    uStack_ac = 0x40400000;
    uStack_a8 = 0x40000000;
    fStack_b0 = 0.0;
    if (&stack0xffffff5c != &stack0xffffff50) {
      fStack_9c = 2.0;
      fStack_a4 = 0.0;
      fStack_a0 = 3.0;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x2628) != 0) {
      return 0;
    }
    uStack_b8 = 0x40400000;
    uStack_b4 = 0x40000000;
    fStack_bc = 0.0;
    if (&stack0xffffff5c != &stack0xffffff44) {
      fStack_9c = 2.0;
      fStack_a0 = 3.0;
      fStack_a4 = 0.0;
    }
    break;
  case 3:
  case 4:
    if (*(int *)(param_1 + 0x2628) != 0) {
      return 0;
    }
    if ((param_2 != 0) &&
       (iVar2 = (**(code **)(*(int *)(param_2 + 0x154) + 0x84))(param_2,param_1), iVar2 == 4)) {
      FUN_00408bf0(param_2,param_1 + 0x20);
      uStack_44 = uStack_f8;
      *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff0c + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff10 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_00576250(&stack0xffffffbc);
      uStack_38 = uStack_128;
      *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffedc + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffee0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if ((float)_DAT_005cd98f < ABS(fStack_34)) {
        return 0;
      }
    }
    fStack_80 = 0.0;
    uStack_7c = 0x40400000;
    uStack_78 = 0x40000000;
    if (&stack0xffffff5c != &stack0xffffff80) {
      fStack_a0 = 3.0;
      fStack_9c = 2.0;
      fStack_a4 = 0.0;
    }
    break;
  case 5:
    uStack_c4 = 0;
    uStack_c0 = 0;
    fStack_c8 = 0.0;
    if (&stack0xffffff5c != &stack0xffffff38) {
      fStack_a0 = 0.0;
      fStack_9c = 0.0;
      fStack_a4 = 0.0;
    }
    break;
  default:
    goto switchD_00526cc8_default;
  }
  uStack_d0 = 0;
  uStack_cc = 0;
  fStack_d4 = 0.0;
  if (&stack0xffffff5c != &stack0xffffff2c) {
    fStack_a0 = 0.0;
    fStack_9c = 0.0;
    fStack_a4 = 0.0;
  }
  (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
  puVar3 = (uint *)&stack0xfffffec0;
  puVar5 = &stack0xfffffea8;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fStack_74 = fStack_158 + fStack_14c;
  fStack_70 = fStack_154 + fStack_148;
  fStack_6c = fStack_150 + fStack_144;
  fStack_110 = fStack_158 + fStack_14c;
  *(float *)((int)&stack0xfffffef4 + (uint)bVar6 * -8) =
       (&stack0xffffff90)[(uint)bVar6 * 0xfffffffe];
  *(uint *)((int)&stack0xfffffef8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  pfVar7 = &stack0xffffff68;
  fStack_11c = fStack_110 * _DAT_005cd997;
  fStack_118 = fStack_10c * _DAT_005cd997;
  fStack_114 = fStack_108 * _DAT_005cd997;
  fStack_98 = fStack_110 * _DAT_005cd997;
  *(uint *)((int)&stack0xffffff6c + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xfffffee8 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff70 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xfffffeec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  FUN_00408b80(param_2,pfVar7);
  uStack_8c = uStack_50;
  *(uint *)((int)&stack0xffffff78 + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff7c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  FUN_00408bf0(param_1,&stack0xffffff74);
  fStack_68 = fStack_5c;
  *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_104 = fStack_68 - fStack_a4;
  fStack_100 = fStack_64 - fStack_a0;
  fStack_fc = fStack_60 - fStack_9c;
  fStack_e0 = fStack_68 - fStack_a4;
  *(uint *)((int)&stack0xffffff24 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffff00 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffff28 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffff04 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if ((ABS(fStack_dc) <= (float)_DAT_005cd99f) &&
     (((fVar1 = SQRT(fStack_e0 * fStack_e0 + fStack_d8 * fStack_d8), param_3 == 5 ||
       (fVar1 <= _DAT_005cd9a7)) && (0.0 <= fStack_d8)))) {
    if (*param_4 < fVar1) {
      return 0;
    }
    *param_4 = fVar1;
    return 1;
  }
switchD_00526cc8_default:
  return 0;
}
