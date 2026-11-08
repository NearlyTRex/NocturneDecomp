// Name: FUN_0049ad20
// Address: 0049ad20
// Address Range: [[0049ad20, 0049b026]]
// Convention: unknown
// Signature: void FUN_0049ad20(float *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049ad20(float *param_1)

{
  float fVar1;
  int iVar2;
  int extraout_EDX;
  byte bVar3;
  float10 fVar4;
  float afStackY_10ac [1009];
  uint uVar5;
  float *pfVar6;
  float local_d8;
  float local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  uint local_94;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  float local_1c;
  int local_18;
  
  bVar3 = 0;
  local_88 = param_1[3] - *param_1;
  local_84 = param_1[4] - param_1[1];
  local_80 = param_1[5] - param_1[2];
  local_b8 = local_88;
  local_b4 = local_84;
  local_b0 = local_80;
  fVar1 = param_1[6];
  local_70 = *(float *)((int)fVar1 + 0x344) - *(float *)((int)fVar1 + 0x338);
  local_6c = *(float *)((int)fVar1 + 0x348) - *(float *)((int)fVar1 + 0x33c);
  local_68 = *(float *)((int)fVar1 + 0x34c) - *(float *)((int)fVar1 + 0x340);
  local_a0 = local_70;
  fStack_9c = local_6c;
  local_98 = local_68;
  local_d8 = SQRT(local_80 * local_80 + local_88 * local_88 + local_84 * local_84) - local_68;
  if (0.0 < local_d8) {
    local_28 = 2;
    if (0.0 < param_1[7]) {
      fVar4 = (float10)local_d8 / (float10)param_1[7];
      FUN_005a3120();
      local_28 = (int)ROUND(fVar4);
      if (local_28 < extraout_EDX) {
        local_28 = extraout_EDX;
      }
      else if (100 < local_28) {
        local_28 = 100;
      }
    }
    local_18 = local_28;
    local_24 = (float)local_28;
    fVar1 = 1.0 / (float)local_28;
    local_ac = local_b8 * fVar1;
    local_a8 = local_b4 * fVar1;
    local_a4 = local_b0 * fVar1;
    local_58 = local_b8 * fVar1;
    *(float *)((int)&stack0xffffffac + (uint)bVar3 * -8) =
         (&stack0xffffff58)[(uint)bVar3 * 0xfffffffe];
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffff5c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    FUN_00576250(&stack0xffffff48);
    iVar2 = local_28;
    local_20 = 0;
    local_94 = local_c4;
    *(uint *)((int)&stack0xffffff70 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffff40 + (uint)bVar3 * 0xfffffffe * 4);
    *(uint *)(&stack0xffffff74 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff44 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (0 < iVar2) {
      local_2c = iVar2 + -1;
      do {
        local_1c = (float)local_20;
        local_18 = local_2c;
        local_d4 = ((float)local_20 * _DAT_005c05d8) / (float)local_2c;
        if ((float)_DAT_005c05e0 < local_d4) {
          pfVar6 = &stack0xffffff9c;
          local_4c = local_58 * local_1c;
          local_48 = local_54 * local_1c;
          local_44 = local_50 * local_1c;
          local_40 = local_58 * local_1c;
          *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
               *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8);
          *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          local_7c = *param_1 + local_40;
          local_78 = param_1[1] + local_3c;
          local_74 = param_1[2] + local_38;
          local_64 = *param_1 + local_40;
          *(float *)((int)&stack0xffffffa0 + (uint)bVar3 * 0xfffffffe * 4) =
               (&stack0xffffff88)[(uint)bVar3 * 0xfffffffe];
          uVar5 = DAT_005f2afc;
          *(uint *)(&stack0xffffffa4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)((int)&stack0xffffff8c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          FUN_0046ce90(uVar5,pfVar6);
          local_d0 = 0;
          local_cc = 0;
          local_c8 = 0;
          FUN_0046cf30(DAT_005f2afc,&stack0xffffff6c,&stack0xffffff30);
          fVar4 = (float10)local_d4;
          FUN_005a3120();
          local_18 = (int)ROUND(fVar4);
          FUN_00460f20(param_1[6],0,0,local_18);
          thunk_FUN_004e5ef0(DAT_005f2afc);
        }
        local_20 = local_20 + 1;
      } while (local_20 < local_28);
    }
  }
  return;
}
