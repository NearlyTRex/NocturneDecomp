// Name: core_flies.cpp_CFlies_generateRandomPoint_FUN_004c0630
// Address: 004c0630
// Address Range: [[004c0630, 004c0965]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_flies_cpp_CFlies_generateRandomPoint_FUN_004c0630(CFlies *this_ptr,CVector3f *reference_point,CVector3f *out_point)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CVector3f * __stack2_esi core_flies_cpp_CFlies_generateRandomPoint_FUN_004c0630(CFlies *this_ptr,CVector3f *reference_point,CVector3f *out_point)

{
  float fVar1;
  uint *puVar2;
  byte bVar3;
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
  CVector3f *local_1c;
  float local_14;
  
  bVar3 = 0;
  local_1c = out_point;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
  local_c0 = local_14 * local_14 * (this_ptr->box_size).y;
  fVar1 = (this_ptr->box_size).x;
  local_c4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                       (fVar1 * (float)-0.5,fVar1 * (float)0.5);
  fVar1 = (this_ptr->box_size).z;
  local_14 = local_c4;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                       (fVar1 * (float)-0.5,fVar1 * (float)0.5);
  local_bc = local_14;
  if (reference_point != (CVector3f *)0x0) {
    local_64 = local_c4 - reference_point->x;
    local_60 = local_c0 - reference_point->y;
    local_5c = local_14 - reference_point->z;
    local_34 = local_64;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffa0 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fVar1 = SQRT(local_2c * local_2c + local_34 * local_34 + local_30 * local_30);
    if ((float)4 < fVar1) {
      local_4c = local_34 * 4.0f;
      local_48 = local_30 * 4.0f;
      local_44 = local_2c * 4.0f;
      *(uint *)((int)&stack0xffffff28 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffff2c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fVar1 = 1.0 / fVar1;
      local_88 = local_34 * 4.0f * fVar1;
      local_84 = local_d8 * fVar1;
      local_80 = local_d4 * fVar1;
      local_b8 = local_88;
      *(uint *)((int)&stack0xffffff4c + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff7c + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffff50 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff80 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      local_a0 = reference_point->x + local_b8;
      local_9c = reference_point->y + local_b4;
      local_98 = reference_point->z + local_b0;
      local_40 = local_a0;
      (&stack0xffffffc4)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff64 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff68 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
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
      *(uint *)((int)&stack0xffffffac + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff70 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff74 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fVar1 = 1.0 / fVar1;
      local_7c = local_58 * fVar1;
      local_78 = local_54 * fVar1;
      local_74 = local_50 * fVar1;
      local_d0 = local_58 * fVar1;
      *(uint *)((int)&stack0xffffff34 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff88 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffff38 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff8c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      local_70 = reference_point->x + local_d0;
      local_6c = reference_point->y + local_cc;
      local_68 = reference_point->z + local_c8;
      local_ac = local_70;
      (&stack0xffffff58)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff94 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffff5c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff98 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (&stack0xffffff3c != &stack0xffffff54) {
        local_c4 = local_ac;
        local_c0 = local_a8;
        local_bc = (float)local_a4;
      }
    }
  }
  puVar2 = (uint *)((int)local_1c + (uint)bVar3 * -8 + 4);
  local_1c->x = local_c4;
  *puVar2 = (&stack0xffffff40)[(uint)bVar3 * 0xfffffffe];
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)((int)&stack0xffffff44 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  return local_1c;
}
