// Name: FUN_0057c2e0
// Address: 0057c2e0
// Address Range: [[0057c2e0, 0057c83f]]
// Convention: unknown
// Signature: void FUN_0057c2e0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057c2e0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_10a8 [975];
  uint uVar7;
  float local_158;
  byte auStack_154 [4];
  uint uStack_150;
  uint uStack_12c;
  uint uStack_124;
  byte local_118 [40];
  uint auStack_f0 [6];
  uint auStack_d8 [6];
  float local_c0;
  float local_bc [4];
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  uint local_80;
  float local_7c;
  float fStack_78;
  float afStack_74 [5];
  float local_60;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  
  bVar6 = 0;
  if (*param_1 == 5) {
    local_18 = FUN_0040ce40(0x3f000000,0x3f400000);
    iVar1 = param_1[0xd];
    uVar7 = 0x3f000000;
  }
  else {
    local_18 = FUN_0040ce40(0x41200000,0x41a00000);
    iVar1 = param_1[0xd];
    uVar7 = 0x40000000;
  }
  param_1[8] = local_18;
  local_18 = FUN_0040ce40(uVar7,iVar1);
  param_1[0xb] = local_18;
  param_1[9] = 1;
  local_3c = 0;
  param_1[10] = param_2;
  if (*param_1 == 5) {
    local_2c = 0;
    for (local_28 = 0; local_28 < *(int *)(0x01ED78C8 + 0x14d164); local_28 = local_28 + 1) {
      iVar1 = FUN_0040c840(*(uint *)(0x01ED78C8 + local_2c + 0x14d168),_DAT_01c5bc48);
      local_24 = iVar1;
      local_20 = iVar1;
      if ((iVar1 != 0) &&
         (iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1), iVar2 == 0)) {
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1,0);
        puVar4 = auStack_f0;
        puVar5 = auStack_d8;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        iVar1 = FUN_0041daf0(auStack_d8);
        if (iVar1 != 0) {
          iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          if (iVar1 != 0) {
            fStack_90 = *(float *)(iVar1 + 0x20) - *(float *)(local_24 + 0x20);
            fStack_8c = *(float *)(iVar1 + 0x24) - *(float *)(local_24 + 0x24);
            fStack_88 = *(float *)(iVar1 + 0x28) - *(float *)(local_24 + 0x28);
            fStack_78 = fStack_90;
            afStack_74[(uint)bVar6 * -2] = local_bc[(uint)bVar6 * -2 + 0xc];
            afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 local_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
            if (_DAT_005d7977 <
                SQRT(afStack_74[1] * afStack_74[1] +
                     fStack_78 * fStack_78 + afStack_74[0] * afStack_74[0])) goto LAB_0057c3b7;
          }
          iVar1 = 0;
          piVar3 = param_1;
          if (param_1[0x19] < 1) {
code_r0x0057c51b:
            FUN_0042abb0(auStack_154);
            iVar1 = local_20;
            uStack_150 = 0x41c80000;
            uStack_12c = 10;
            uStack_124 = 0x6a;
            (**(code **)(*(int *)(local_20 + 0x154) + 0x108))(local_20,auStack_154);
            FUN_004a3bd0(0x01C73654,iVar1 + 0x20,0x41f00000,1,0);
            FUN_005609d0(0x02CF5680,param_1,"light?.wav",iVar1 + 0x20);
            param_1[param_1[0x19] + 0xf] = local_20;
            param_1[0x19] = param_1[0x19] + 1;
            goto LAB_0057c5a8;
          }
          while (local_20 != piVar3[0xf]) {
            iVar1 = iVar1 + 1;
            piVar3 = piVar3 + 1;
            if (param_1[0x19] <= iVar1) goto code_r0x0057c51b;
          }
        }
      }
LAB_0057c3b7:
      local_2c = local_2c + 4;
    }
  }
  if (local_3c == 0) {
    FUN_00477d90(&DAT_0203b37c);
    local_54 = afStack_74[2];
    afStack_74[(uint)bVar6 * -2 + 9] = afStack_74[(uint)bVar6 * -2 + 3];
    afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    FUN_00477db0(&DAT_0203b37c);
    local_c0 = local_60;
    local_bc[(uint)bVar6 * -2] = afStack_74[(uint)bVar6 * -2 + 6];
    local_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    local_1c = (local_c0 - local_54) * (float)_DAT_005d796b;
    local_30 = 0.0;
    if (0.0 < local_1c) {
      local_30 = local_1c;
    }
    local_34 = local_bc[0] - local_50;
    if (local_30 < local_34) {
      local_30 = local_34;
    }
    local_38 = (local_bc[1] - local_4c) * (float)_DAT_005d796b;
    if (local_30 < local_38) {
      local_30 = local_38;
    }
    FUN_0045b550(local_118,param_1 + 5);
    local_7c = local_30;
    local_84 = 0.0;
    local_80 = 0;
    FUN_0045b800(local_118,local_bc + 0xe);
    local_a8 = local_9c;
    local_bc[(uint)bVar6 * -2 + 6] = local_bc[(uint)bVar6 * -2 + 9];
    local_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         local_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    local_48 = local_a8 + (float)param_1[2];
    local_44 = local_a4 + (float)param_1[3];
    local_40 = local_a0 + (float)param_1[4];
    local_bc[2] = local_a8 + (float)param_1[2];
    local_bc[(uint)bVar6 * -2 + 3] = afStack_74[(uint)bVar6 * -2 + 0xc];
    local_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    if (local_bc + 0xe != local_bc + 2) {
      local_84 = local_bc[2];
      local_80 = local_bc[3];
      local_7c = local_ac;
    }
    if (param_3 != 0) {
      FUN_004a3bd0(0x01C73654,local_bc + 0xe,local_30,0,0);
      FUN_005609d0(0x02CF5680,param_1,"light?.wav",local_bc + 0xe);
    }
  }
LAB_0057c5a8:
  local_18 = FUN_0057c2c0();
  uVar7 = 0x01C6E360;
  param_1[0xc] = local_18;
  local_158 = (float)param_1[0xc];
  iVar1 = FUN_00491aa0(uVar7,"noLightningFlash");
  if (iVar1 == 0) {
    local_158 = local_158 + _DAT_005d7973;
    if (1.0 < local_158) {
      local_158 = 1.0;
    }
    FUN_0044f680(0x2038f4c,local_158);
  }
  return;
}
