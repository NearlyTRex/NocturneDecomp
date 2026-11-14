// Name: core_flies.cpp_FUN_004ae380
// Address: 004ae380
// Address Range: [[004ae380, 004ae6b5]]
// Convention: unknown
// Signature: float * core_flies_cpp_FUN_004ae380(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_flies_cpp_FUN_004ae380(int param_1,float *param_2)

{
  float fVar1;
  float *unaff_ESI;
  byte bVar2;
  float afStackY_10c4 [1013];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
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
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  bVar2 = 0;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
  local_c0 = fVar1 * fVar1 * *(float *)(param_1 + 0x15c);
  local_c4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                       (*(float *)(param_1 + 0x158) * (float)_DAT_005c1c81,
                        *(float *)(param_1 + 0x158) * (float)_DAT_005c1c79);
  local_bc = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                       (*(float *)(param_1 + 0x160) * (float)_DAT_005c1c81,
                        *(float *)(param_1 + 0x160) * (float)_DAT_005c1c79);
  if (param_2 != (float *)0x0) {
    local_64 = local_c4 - *param_2;
    local_60 = local_c0 - param_2[1];
    local_5c = local_bc - param_2[2];
    local_34 = local_c4 - *param_2;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffa0 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    fVar1 = SQRT(local_2c * local_2c + local_34 * local_34 + local_30 * local_30);
    if ((float)_DAT_005c1c89 < fVar1) {
      local_4c = local_34 * _DAT_005c1c91;
      local_48 = local_30 * _DAT_005c1c91;
      local_44 = local_2c * _DAT_005c1c91;
      *(uint *)((int)&stack0xffffff28 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffff2c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      fVar1 = 1.0 / fVar1;
      local_88 = local_34 * _DAT_005c1c91 * fVar1;
      local_84 = local_d8 * fVar1;
      local_80 = local_d4 * fVar1;
      local_b8 = local_88;
      *(uint *)((int)&stack0xffffff4c + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff7c + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffff50 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff80 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      local_a0 = *param_2 + local_b8;
      local_9c = param_2[1] + local_b4;
      local_98 = param_2[2] + local_b0;
      local_40 = *param_2 + local_b8;
      (&stack0xffffffc4)[(uint)bVar2 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff64 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff68 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (&stack0xffffff3c != &stack0xffffffc0) {
        local_c4 = local_40;
        local_c0 = local_3c;
        local_bc = (float)local_38;
      }
    }
    else if ((fVar1 < 1.0) && (0.0 < fVar1)) {
      local_94 = local_34;
      local_90 = local_30;
      local_8c = local_2c;
      local_58 = local_34;
      *(uint *)((int)&stack0xffffffac + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff70 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff74 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      fVar1 = 1.0 / fVar1;
      local_7c = local_58 * fVar1;
      local_78 = local_54 * fVar1;
      local_74 = local_50 * fVar1;
      local_d0 = local_58 * fVar1;
      *(uint *)((int)&stack0xffffff34 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff88 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffff38 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff8c + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      local_70 = *param_2 + local_d0;
      local_6c = param_2[1] + local_cc;
      local_68 = param_2[2] + local_c8;
      local_ac = *param_2 + local_d0;
      (&stack0xffffff58)[(uint)bVar2 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff94 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffff5c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff98 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (&stack0xffffff3c != &stack0xffffff54) {
        local_c4 = local_ac;
        local_c0 = local_a8;
        local_bc = (float)local_a4;
      }
    }
  }
  *unaff_ESI = local_c4;
  unaff_ESI[(uint)bVar2 * -2 + 1] = (&stack0xffffff40)[(uint)bVar2 * 0xfffffffe];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       *(float *)((int)&stack0xffffff44 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  return unaff_ESI;
}
