// Name: FUN_00509f30
// Address: 00509f30
// Address Range: [[00509f30, 0050a3a3]]
// Convention: unknown
// Signature: void FUN_00509f30(float *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00509f30(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float afStackY_110c [1010];
  byte *puVar6;
  uint *puVar7;
  uint local_124;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  uint local_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [4];
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float local_9c [4];
  float local_8c;
  float local_88;
  float local_84 [4];
  float local_74;
  float fStack_70;
  float afStack_6c [4];
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float *local_20;
  float local_1c;
  float local_18;
  
  bVar5 = 0;
  if (0.0 < param_1[9]) {
    if (param_1 + 0xb != param_1) {
      param_1[0xb] = *param_1;
      param_1[0xc] = param_1[1];
      param_1[0xd] = param_1[2];
    }
    param_1[0xe] = param_1[10];
    local_28 = *(float *)(0x01D2130C + 0x314);
    local_100 = param_1[6] * local_28;
    local_fc = param_1[7] * local_28;
    local_f8 = param_1[8] * local_28;
    local_10c = param_1[3] + local_100;
    param_1[3] = local_10c;
    local_10c = local_10c * local_28;
    fVar3 = param_1[5];
    fVar2 = param_1[4];
    param_1[4] = fVar2 + local_fc;
    local_108 = (fVar2 + local_fc) * local_28;
    param_1[5] = fVar3 + local_f8;
    local_104 = (fVar3 + local_f8) * local_28;
    *param_1 = *param_1 + local_10c;
    param_1[1] = param_1[1] + local_108;
    param_1[2] = param_1[2] + local_104;
    local_9c[2] = local_10c;
    local_9c[3] = local_108;
    local_8c = local_104;
    local_34 = local_100;
    local_30 = local_fc;
    local_2c = local_f8;
    local_1c = local_28;
    FUN_00477ac0(&DAT_0203b37c,param_1);
    puVar7 = &stack0xfffffedc;
    puVar6 = &DAT_0203b37c;
    local_124 = local_e8;
    *(uint *)((int)&stack0xfffffee0 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff1c + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffee4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffff20 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fVar3 = (float)FUN_00477bc0(puVar6,puVar7);
    param_1[10] = fVar3;
    if ((fVar3 != 0.0) || (param_1[0xe] != 0.0)) {
      local_20 = param_1 + 0xb;
      fVar3 = (float)FUN_00473cd0(&DAT_0203b37c,local_20,param_1,afStack_cc + 8,0);
      pfVar1 = local_20;
      local_18 = fVar3;
      if ((0.0 <= fVar3) && (fVar3 < 1.0)) {
        local_b8 = *param_1 - *local_20;
        local_b4 = param_1[1] - local_20[1];
        local_b0 = param_1[2] - local_20[2];
        local_4c = *param_1 - *local_20;
        afStack_6c[(uint)bVar5 * 0xfffffffe + 9] = afStack_cc[(uint)bVar5 * 0xfffffffe + 6];
        afStack_6c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 10] =
             afStack_cc[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 7];
        local_a0 = local_4c * fVar3;
        local_9c[0] = local_48 * fVar3;
        local_9c[1] = local_44 * fVar3;
        afStack_cc[2] = local_4c * fVar3;
        afStack_cc[(uint)bVar5 * 0xfffffffe + 3] = local_9c[(uint)bVar5 * 0xfffffffe];
        afStack_cc[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 4] =
             local_9c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
        local_84[2] = afStack_cc[2] * _DAT_005cb65d;
        local_84[3] = afStack_cc[3] * _DAT_005cb65d;
        local_74 = local_bc * _DAT_005cb65d;
        local_f4 = afStack_cc[2] * _DAT_005cb65d;
        (&stack0xffffff10)[(uint)bVar5 * 0xfffffffe] = local_84[(uint)bVar5 * 0xfffffffe + 3];
        *(float *)((int)&stack0xffffff14 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             local_84[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 4];
        local_58 = *pfVar1 + local_f4;
        local_54 = pfVar1[1] + local_f0;
        local_50 = pfVar1[2] + local_ec;
        local_88 = *pfVar1 + local_f4;
        local_84[(uint)bVar5 * 0xfffffffe] = afStack_6c[(uint)bVar5 * 0xfffffffe + 6];
        local_84[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1] =
             afStack_6c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 7];
        if (param_1 != &local_88) {
          *param_1 = local_88;
          param_1[1] = local_84[0];
          param_1[2] = local_84[1];
        }
        iVar4 = (**(code **)((int)param_1[0xf] + 0xc))(param_1,afStack_cc + 8);
        if (iVar4 == 0) {
          pfVar1 = param_1 + 3;
          fStack_24 = (fStack_a4 * param_1[5] + local_ac * *pfVar1 + fStack_a8 * param_1[4]) *
                      _DAT_005cb661;
          afStack_6c[2] = local_ac * fStack_24;
          afStack_6c[3] = fStack_a8 * fStack_24;
          fStack_5c = fStack_a4 * fStack_24;
          fStack_dc = local_ac * fStack_24;
          *(float *)((int)&stack0xffffff28 + (uint)bVar5 * -8) =
               afStack_6c[(uint)bVar5 * 0xfffffffe + 3];
          *(float *)((int)&stack0xffffff2c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               afStack_6c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 4];
          fStack_40 = fStack_dc - *pfVar1;
          fStack_3c = fStack_d8 - param_1[4];
          fStack_38 = fStack_d4 - param_1[5];
          fStack_70 = fStack_dc - *pfVar1;
          *(float *)((int)afStack_6c + (uint)bVar5 * -8) =
               afStack_6c[(uint)bVar5 * 0xfffffffe + 0xc];
          afStack_6c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1] =
               afStack_6c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd];
          if (pfVar1 != &fStack_70) {
            *pfVar1 = fStack_70;
            param_1[4] = afStack_6c[0];
            param_1[5] = afStack_6c[1];
          }
          pfVar1 = param_1 + 3;
          fStack_118 = *pfVar1 * _DAT_005cb665;
          fStack_114 = param_1[4] * _DAT_005cb665;
          fStack_110 = param_1[5] * _DAT_005cb665;
          fStack_d0 = *pfVar1 * _DAT_005cb665;
          *(uint *)((int)afStack_cc + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xfffffeec + (uint)bVar5 * -8);
          afStack_cc[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1] =
               (float)*(uint *)((int)&stack0xfffffef0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          if (pfVar1 != &fStack_d0) {
            *pfVar1 = fStack_d0;
            param_1[4] = afStack_cc[0];
            param_1[5] = afStack_cc[1];
          }
        }
        else {
          param_1[9] = 0.0;
        }
      }
    }
    fVar3 = param_1[9];
    param_1[9] = fVar3 - local_1c;
    if (fVar3 - local_1c < 0.0) {
      param_1[9] = 0.0;
      return;
    }
  }
  return;
}
