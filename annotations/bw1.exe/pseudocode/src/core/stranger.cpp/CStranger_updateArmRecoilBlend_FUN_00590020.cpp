// Name: core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_00590020
// Address: 00590020
// Address Range: [[00590020, 00590683]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_00590020(CStranger *this_ptr,float delta_time,int is_weapon_active)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_00590020(CStranger *this_ptr,float delta_time,int is_weapon_active)

{
  CStranger *this_ptr_00;
  float fVar1;
  EDeathState EVar2;
  ECollisionType EVar3;
  byte bVar4;
  float afStackY_110c [994];
  CVector3f *input_local_point;
  float local_15c;
  float local_154;
  float fStack_150;
  SCollisionInfo SStack_14c;
  CVector3f local_124;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  float local_f4;
  float local_f0 [4];
  float local_e0;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  CVector3f local_a0;
  float local_94;
  float local_90 [4];
  uint local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  uint local_5c;
  CVector3f local_58;
  float local_4c;
  float local_48 [4];
  float local_38;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar4 = 0;
  if ((this_ptr->weapon == (CWeapon *)0x0) || (this_ptr->weapon->weapon_type != WEAPON_TYPE_GUN)) {
    is_weapon_active = 0;
  }
  local_154 = 0.0;
  if (is_weapon_active != 0) {
    local_1c = 0;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->character_count; local_20 = local_20 + 1) {
      this_ptr_00 = *(CStranger **)((int)g_CDemonSetPtr->characters + local_1c);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,&(this_ptr_00->base).base.base.location.position,&local_100
                );
      local_7c = local_100.x;
      local_90[(uint)bVar4 * -2 + 6] = *(float *)((int)&local_100 + (uint)bVar4 * -8 + 4);
      local_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           *(float *)((int)&local_100 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      if (((ABS(local_7c) <= (float)_DAT_005f6fc1) && (ABS(local_78) <= (float)_DAT_005f6fc9)) &&
         ((0.0 <= local_74 &&
          ((((int)local_74 < 0x40c00001 && (this_ptr_00 != this_ptr)) &&
           (EVar2 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).getDeathState)
                              ((CCharacter *)this_ptr_00), EVar2 == DEATH_STATE_ALIVE)))))) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0(&SStack_14c);
        EVar3 = (*((this_ptr_00->base).base.base.vtable._ub)->getCollisionType)
                          ((CDemonActor *)this_ptr_00,&SStack_14c);
        if ((EVar3 == COLLISION_TYPE_CYLINDER) &&
           (fStack_150 = 1.0 - ((local_74 - SStack_14c.cylinder_radius) + (float)_DAT_005f6fd1) *
                               (float)_DAT_005f6fb9, local_154 <= fStack_150)) {
          if (fStack_150 < 0.0) {
            fStack_150 = 0.0;
          }
          local_154 = fStack_150;
        }
      }
      local_1c = local_1c + 4;
    }
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
    local_10c.x = 0.0;
    local_10c.y = 0.0;
    local_24 = 3.5;
    local_28 = 1.5;
    local_10c.z = 3.5;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
              ((CDemonActor *)this_ptr,&local_10c,&local_58);
    local_48[2] = local_58.x;
    local_48[(uint)bVar4 * -2 + 3] = *(float *)((int)&local_58 + (uint)bVar4 * -8 + 4);
    local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         *(float *)((int)&local_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&local_b8 != local_48 + 2) {
      local_b8 = local_48[2];
      local_b4 = local_48[3];
      local_b0 = local_38;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (&(this_ptr->base).base.model,_DAT_02c83604,&local_c4);
    local_a0.x = local_c4.x;
    *(uint *)((int)&local_a0 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_c4 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&local_a0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&local_c4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,&local_a0,&local_118);
    local_f0[2] = local_118.x;
    local_f0[(uint)bVar4 * -2 + 3] = *(float *)((int)&local_118 + (uint)bVar4 * -8 + 4);
    local_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         *(float *)((int)&local_118 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (local_90 + 8 != local_f0 + 2) {
      local_70 = local_f0[2];
      local_6c = local_f0[3];
      local_68 = local_e0;
    }
    local_90[0] = local_6c + local_b4;
    local_90[1] = local_68 + local_b0;
    local_94 = local_70 + local_b8;
    local_ac = local_70 + local_b8;
    local_a8[(uint)bVar4 * -2] = local_90[(uint)bVar4 * -2];
    local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&local_64 != &local_ac) {
      local_64 = local_ac;
      local_60 = local_a8[0];
      local_5c = local_a8[1];
    }
    local_18 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr,local_90 + 8,&local_64);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar1 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_154 < fVar1))
    {
      local_154 = fVar1;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (&(this_ptr->base).base.model,_DAT_02c83608,&local_d0);
    input_local_point = &local_dc;
    local_dc.x = local_d0.x;
    *(uint *)((int)&local_dc + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_d0 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&local_dc + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&local_d0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,input_local_point,&local_124);
    local_4c = local_124.x;
    local_48[(uint)bVar4 * -2] = *(float *)((int)&local_124 + (uint)bVar4 * -8 + 4);
    local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&local_124 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (local_90 + 8 != &local_4c) {
      local_70 = local_4c;
      local_6c = local_48[0];
      local_68 = local_48[1];
    }
    local_f0[0] = local_6c + local_b4;
    local_f0[1] = local_68 + local_b0;
    local_f4 = local_70 + local_b8;
    local_90[2] = local_70 + local_b8;
    local_90[(uint)bVar4 * -2 + 3] = local_f0[(uint)bVar4 * -2];
    local_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         local_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&local_64 != local_90 + 2) {
      local_64 = local_90[2];
      local_60 = local_90[3];
      local_5c = local_80;
    }
    local_18 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr,local_90 + 8,&local_64);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar1 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_154 < fVar1))
    {
      local_154 = fVar1;
    }
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  }
  if (1.0 < local_154) {
    local_154 = 1.0;
  }
  local_15c = local_154 - this_ptr->arm_recoil_blend;
  if (0.0 <= local_15c) {
    if ((0.0 < local_15c) && (delta_time / _DAT_0060607c < local_15c)) {
      local_15c = delta_time / _DAT_0060607c;
    }
  }
  else {
    fVar1 = -delta_time * (1.0 / _DAT_00606080);
    if (local_15c < fVar1) {
      local_15c = fVar1;
    }
  }
  this_ptr->arm_recoil_blend = this_ptr->arm_recoil_blend + local_15c;
  return;
}
