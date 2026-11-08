// Name: FUN_0053d270
// Address: 0053d270
// Address Range: [[0053d270, 0053d761]]
// Convention: unknown
// Signature: float FUN_0053d270(int param_1,float param_2,float *param_3,float *param_4,float param_5)

#include "nocturne.h"

float FUN_0053d270(int param_1,float param_2,float *param_3,float *param_4,float param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_10a0 [987];
  float *pfVar6;
  float *pfVar7;
  float fStack_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  int local_f4;
  int local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float fStack_b8;
  float afStack_b4 [4];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float afStack_84 [4];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  float fStack_14;
  
  bVar5 = 0;
  *(uint *)(param_1 + 0x14d148) = 0xffffffff;
  *(uint *)(param_1 + 0x14d14c) = 0xffffffff;
  *(uint *)(param_1 + 0x14d144) = 0;
  if (-1 < *(int *)(param_1 + 0x15f6ac)) {
    if (param_5 <= 0.0) {
      return 0.0;
    }
    if (param_2 < 0.0) {
      param_2 = 0.0;
    }
    local_24 = param_5;
    if (1.0 < param_5) {
      local_24 = 1.0;
    }
    afStack_b4[2] = *param_4 - *param_3;
    afStack_b4[3] = param_4[1] - param_3[1];
    local_a4 = param_4[2] - param_3[2];
    local_94 = afStack_b4[2] * local_24;
    local_90 = afStack_b4[3] * local_24;
    local_8c = local_a4 * local_24;
    if (&local_d0 != param_3) {
      local_d0 = *param_3;
      local_cc = param_3[1];
      local_c8 = param_3[2];
    }
    if (&local_c4 != param_3) {
      local_c4 = *param_3;
      local_c0 = param_3[1];
      local_bc = param_3[2];
    }
    afStack_84[2] = *param_3 + local_94;
    afStack_84[3] = param_3[1] + local_90;
    local_74 = param_3[2] + local_8c;
    local_a0 = afStack_b4[2];
    local_9c = afStack_b4[3];
    local_98 = local_a4;
    local_70 = local_94;
    local_6c = local_90;
    local_68 = local_8c;
    local_64 = afStack_84[2];
    fStack_60 = afStack_84[3];
    fStack_5c = local_74;
    FUN_0041d840(&local_d0,&local_64);
    FUN_0053ed80(&local_114);
    local_114 = *(uint *)(param_1 + 0x15f698);
    local_110 = *(uint *)(param_1 + 0x15f69c);
    local_10c = *(uint *)(param_1 + 0x15f6a0);
    local_108 = *(uint *)(param_1 + 0x15f6a4);
    local_104 = *(uint *)(param_1 + 0x15f6a8);
    local_20 = 0;
    if (0 < *(int *)(param_1 + 0x156db8)) {
      local_18 = (uint *)(param_1 + 0x14d128);
      local_1c = param_1;
      do {
        iVar1 = *(int *)(local_1c + 0x156dbc);
        iVar3 = FUN_0053d770(param_1,iVar1);
        if (iVar3 == 0) {
          local_f4 = iVar3;
          local_f0 = iVar3;
          iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x3c))(iVar1,&local_114);
          if (iVar3 != 0) {
            fStack_118 = (float)FUN_004091b0(iVar1,param_3,&local_70,&uStack_ec,&local_114,iVar3,
                                             &local_d0);
            fStack_14 = fStack_118;
            if (((fStack_118 <= 1.0) &&
                (fVar2 = fStack_118 * local_24, fStack_118 = fVar2, fVar2 < param_5)) &&
               (param_2 < fVar2)) {
              if (&uStack_ec != local_18) {
                *local_18 = uStack_ec;
                local_18[1] = uStack_e8;
                local_18[2] = uStack_e4;
              }
              *(int *)(param_1 + 0x14d144) = iVar1;
              *(uint *)(param_1 + 0x14d148) = uStack_e0;
              *(uint *)(param_1 + 0x14d14c) = uStack_d4;
              local_24 = fVar2;
              afStack_54[2] = *param_4 - *param_3;
              afStack_54[3] = param_4[1] - param_3[1];
              fStack_44 = param_4[2] - param_3[2];
              fStack_34 = *param_4 - *param_3;
              afStack_54[(uint)bVar5 * -2 + 9] = afStack_54[(uint)bVar5 * -2 + 3];
              afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
                   afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
              fStack_b8 = fStack_34 * fVar2;
              afStack_b4[0] = fStack_30 * fVar2;
              afStack_b4[1] = fStack_2c * fVar2;
              fStack_40 = fStack_34 * fVar2;
              afStack_54[(uint)bVar5 * -2 + 6] = afStack_b4[(uint)bVar5 * -2];
              afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
                   afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
              if (&local_70 != afStack_54 + 5) {
                local_70 = fStack_40;
                local_6c = fStack_3c;
                local_68 = fStack_38;
              }
              if (&local_d0 != param_3) {
                local_d0 = *param_3;
                local_cc = param_3[1];
                local_c8 = param_3[2];
              }
              if (&local_c4 != param_3) {
                local_c4 = *param_3;
                local_c0 = param_3[1];
                local_bc = param_3[2];
              }
              pfVar7 = &fStack_88;
              fStack_58 = *param_3 + local_70;
              afStack_54[0] = param_3[1] + local_6c;
              pfVar6 = &local_d0;
              afStack_54[1] = param_3[2] + local_68;
              fStack_88 = *param_3 + local_70;
              afStack_84[(uint)bVar5 * -2] = afStack_54[(uint)bVar5 * -2];
              afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                   afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
              FUN_0041d840(pfVar6,pfVar7);
              param_5 = fVar2;
            }
          }
        }
        local_1c = local_1c + 4;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)(param_1 + 0x156db8));
    }
    iVar1 = *(int *)(param_1 + 0x14d144);
    if (iVar1 != 0) {
      uVar4 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x44))(iVar1);
      *(uint *)(param_1 + 0x14d134) = uVar4;
    }
  }
  return param_5;
}
