// Name: core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_00590020
// Address: 00590020
// Address Range: [[00590020, 00590683]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_00590020(CStranger *this_ptr,float delta_time,int is_weapon_active)

#include "nocturne.h"

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
  float local_f0 [2];
  CVector3f local_e8;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  CVector3f local_ac;
  CVector3f local_a0;
  float local_94;
  float local_90 [2];
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  float local_40;
  float local_3c [5];
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
      if (((ABS(local_7c) <= (float)1.5) &&
          (ABS(local_78) <= (float)4)) &&
         ((0.0 <= local_74 &&
          ((((int)local_74 < 0x40c00001 && (this_ptr_00 != this_ptr)) &&
           (EVar2 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).getDeathState)
                              ((CCharacter *)this_ptr_00), EVar2 == DEATH_STATE_ALIVE)))))) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0(&SStack_14c);
        EVar3 = (*((this_ptr_00->base).base.base.vtable._ub)->getCollisionType)
                          ((CDemonActor *)this_ptr_00,&SStack_14c);
        if ((EVar3 == COLLISION_TYPE_CYLINDER) &&
           (fStack_150 = 1.0 - ((local_74 - SStack_14c.cylinder_radius) + (float)-1.5)
                               * (float)0.40000000000000002, local_154 <= fStack_150)) {
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
    local_40 = local_58.x;
    local_3c[(uint)bVar4 * -2] = *(float *)((int)&local_58 + (uint)bVar4 * -8 + 4);
    local_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&local_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&local_b8 != &local_40) {
      local_b8 = local_40;
      local_b4 = local_3c[0];
      local_b0 = local_3c[1];
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (&(this_ptr->base).base.model,g_INT_ARRAY_02c83600[1],&local_c4);
    local_a0.x = local_c4.x;
    *(uint *)((int)&local_a0 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_c4 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&local_a0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&local_c4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,&local_a0,&local_118);
    local_e8.x = local_118.x;
    local_f0[(uint)bVar4 * -2 + 3] = *(float *)((int)&local_118 + (uint)bVar4 * -8 + 4);
    local_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         *(float *)((int)&local_118 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&local_70 != (CVector3f *)(local_f0 + 2)) {
      local_70.x = local_e8.x;
      local_70.y = local_e8.y;
      local_70.z = local_e8.z;
    }
    local_90[0] = local_70.y + local_b4;
    local_90[1] = local_70.z + local_b0;
    local_94 = local_70.x + local_b8;
    local_ac.x = local_70.x + local_b8;
    *(float *)((int)&local_ac + (uint)bVar4 * -8 + 4) = local_90[(uint)bVar4 * -2];
    *(float *)((int)&local_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         local_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&local_64 != &local_ac) {
      local_64.x = local_ac.x;
      local_64.y = local_ac.y;
      local_64.z = local_ac.z;
    }
    local_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00557300(g_CDemonSetPtr,&local_70,&local_64);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar1 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_154 < fVar1))
    {
      local_154 = fVar1;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (&(this_ptr->base).base.model,g_INT_ARRAY_02c83600[2],&local_d0);
    input_local_point = &local_dc;
    local_dc.x = local_d0.x;
    *(uint *)((int)&local_dc + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_d0 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&local_dc + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&local_d0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,input_local_point,&local_124);
    local_4c.x = local_124.x;
    *(uint *)((int)&local_4c + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_124 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&local_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&local_124 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&local_70 != &local_4c) {
      local_70.x = local_4c.x;
      local_70.y = local_4c.y;
      local_70.z = local_4c.z;
    }
    local_f0[0] = local_70.y + local_b4;
    local_f0[1] = local_70.z + local_b0;
    local_f4 = local_70.x + local_b8;
    local_88.x = local_70.x + local_b8;
    local_90[(uint)bVar4 * -2 + 3] = local_f0[(uint)bVar4 * -2];
    local_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         local_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&local_64 != (CVector3f *)(local_90 + 2)) {
      local_64.x = local_88.x;
      local_64.y = local_88.y;
      local_64.z = local_88.z;
    }
    local_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00557300(g_CDemonSetPtr,&local_70,&local_64);
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
    if ((0.0 < local_15c) && (delta_time / 0.05f < local_15c)) {
      local_15c = delta_time / 0.05f;
    }
  }
  else {
    fVar1 = -delta_time * (1.0 / 0.5f);
    if (local_15c < fVar1) {
      local_15c = fVar1;
    }
  }
  this_ptr->arm_recoil_blend = this_ptr->arm_recoil_blend + local_15c;
  return;
}
