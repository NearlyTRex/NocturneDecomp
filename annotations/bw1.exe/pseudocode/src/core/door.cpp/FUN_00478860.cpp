// Name: core_door.cpp_FUN_00478860
// Address: 00478860
// Address Range: [[00478860, 00478ae3]]
// Convention: unknown
// Signature: float * core_door_cpp_FUN_00478860(int param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_door_cpp_FUN_00478860(int param_1,float *param_2,uint param_3)

{
  float *unaff_ESI;
  byte bVar1;
  float afStackY_10a0 [1016];
  float local_b8;
  float local_ac;
  uint local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  uint local_80;
  float local_7c;
  uint local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  uint local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_14;
  
  bVar1 = 0;
  local_58 = *param_2;
  local_54 = param_2[1];
  local_50 = param_2[2];
  if (local_50 < 0.0) {
    local_a0 = -*param_2;
    local_9c = -param_2[1];
    local_98 = -local_50;
    local_34 = local_a0;
    local_30 = local_9c;
    local_2c = local_98;
    if (&stack0xffffffa8 != &stack0xffffffcc) {
      local_58 = local_a0;
      local_54 = local_9c;
      local_50 = local_98;
    }
  }
  switch(*(uint *)(param_1 + 0x2d8)) {
  case 0:
  case 1:
  case 2:
    core_actor_cpp_FUN_00408bb0(param_1,param_3);
    local_4c = local_70;
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff94 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffff98 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if (local_44 <= 0.0) {
      core_actor_cpp_FUN_00408ac0(param_1,&stack0xffffffa8);
      local_64 = local_7c;
      *(uint *)((int)&stack0xffffffa0 + (uint)bVar1 * -8) =
           *(uint *)(&stack0xffffff88 + (uint)bVar1 * -8);
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
           *(uint *)(&stack0xffffff8c + (uint)bVar1 * -8 + (uint)bVar1 * -8);
      local_94 = *(float *)(param_1 + 0x9bc) - local_64;
      local_90 = *(float *)(param_1 + 0x9c0) - local_60;
      local_8c = *(float *)(param_1 + 0x9c4) - local_5c;
      local_1c = local_94;
      *(float *)((int)&stack0xffffffe8 + (uint)bVar1 * 0xfffffffe * 4) =
           (&stack0xffffff70)[(uint)bVar1 * 0xfffffffe];
      *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
           *(uint *)((int)&stack0xffffff74 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
      if (&stack0xffffff78 != &stack0xffffffe4) {
        local_88 = local_1c;
        local_80 = local_14;
      }
    }
    else {
      core_actor_cpp_FUN_00408ac0(param_1,&stack0xffffffa8);
      local_28 = local_b8;
      (&stack0xffffffdc)[(uint)bVar1 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffff4c + (uint)bVar1 * -8);
      *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
           *(uint *)(&stack0xffffff50 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
      local_40 = *(float *)(param_1 + 0x9bc) + local_28;
      local_3c = *(float *)(param_1 + 0x9c0) + local_24;
      local_38 = *(float *)(param_1 + 0x9c4) + local_20;
      local_ac = local_40;
      *(uint *)((int)&stack0xffffff58 + (uint)bVar1 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffc4 + (uint)bVar1 * -8);
      *(uint *)((int)&stack0xffffff5c + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
           *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
      if (&stack0xffffff78 != &stack0xffffff54) {
        local_88 = local_ac;
        local_80 = local_a4;
      }
    }
    break;
  case 3:
    if (&stack0xffffff78 != (float *)(param_1 + 0x9bc)) {
      local_88 = *(float *)(param_1 + 0x9bc);
      local_80 = *(uint *)(param_1 + 0x9c4);
    }
    break;
  default:
    _DAT_01d1d400 = "..\\core\\door.cpp";
    _DAT_01d1d404 = 0x37e;
    core_main_c_FUN_005030e0("CDoor::getOpenStandPos - invalid doorType");
  }
  local_84 = *(float *)(param_1 + 0x24);
  *unaff_ESI = local_88;
  unaff_ESI[(uint)bVar1 * -2 + 1] = (&stack0xffffff7c)[(uint)bVar1 * 0xfffffffe];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(float *)((int)&stack0xffffff80 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return unaff_ESI;
}
