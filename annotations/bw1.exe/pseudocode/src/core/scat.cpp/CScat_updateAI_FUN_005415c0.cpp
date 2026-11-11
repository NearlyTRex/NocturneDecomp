// Name: core_scat.cpp_CScat_updateAI_FUN_005415c0
// Address: 005415c0
// Address Range: [[005415c0, 00541ae6]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateAI_FUN_005415c0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_updateAI_FUN_005415c0(CScat *this_ptr,float delta_time)

{
  EHeroTask EVar1;
  CWeapon *pCVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  CPathMap *this_ptr_00;
  byte bVar6;
  float afStackY_109c [1013];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a4;
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
  CVector3f CStack_54;
  float local_48;
  float afStack_44 [2];
  float local_3c [2];
  float fStack_34;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_14;
  
  bVar6 = 0;
  local_24 = 0.25;
  local_1c = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_28 = 0.7853982;
  if ((this_ptr->base).ai_task == HERO_TASK_STAND) {
    return;
  }
  memset(&(this_ptr->base).player_input,0,0x30);
  iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_60 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar4 + 0x20);
  local_5c = (this_ptr->base).base.base.location.position.y - *(float *)(iVar4 + 0x24);
  local_58 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar4 + 0x28);
  local_9c = local_60;
  (&stack0xffffff68)[(uint)bVar6 * -2] = afStack_44[(uint)bVar6 * -2 + -6];
  (&stack0xffffff68)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -5];
  EVar1 = (this_ptr->base).ai_task;
  local_2c = 0;
  if ((((EVar1 == HERO_TASK_KILL) || (EVar1 == HERO_TASK_GUARD)) &&
      (pCVar2 = (this_ptr->base).inventory.selected_weapon, pCVar2 != (CWeapon *)0x0)) &&
     (0 < pCVar2->ammo_count)) {
    local_3c[0] = 9999.9;
    iVar4 = core_hero_cpp_FUN_004ec350(this_ptr,afStack_44 + 2);
    if ((iVar4 != 0) && ((int)local_3c[0] < 0x41f00000)) {
      local_1c = iVar4;
      local_2c = 1;
    }
  }
  if (local_2c != this_ptr->guns_drawn) {
    (this_ptr->base).player_input.action_state.draw = 1;
  }
  local_6c = *(float *)(local_1c + 0x20) - (this_ptr->base).base.base.location.position.x;
  local_68 = *(float *)(local_1c + 0x24) - (this_ptr->base).base.base.location.position.y;
  local_64 = *(float *)(local_1c + 0x28) - (this_ptr->base).base.base.location.position.z;
  local_b4 = local_6c;
  (&stack0xffffff50)[(uint)bVar6 * -2] = (&stack0xffffff68)[(uint)bVar6 * 0xfffffffe + 0xc];
  (&stack0xffffff50)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8];
  if (&stack0xffffff64 != &stack0xffffff4c) {
    local_9c = local_b4;
    local_98 = local_b0;
    local_94 = local_ac;
  }
  local_b8 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
  if ((this_ptr->base).ai_task == HERO_TASK_GUARD) {
    local_b8 = 0.0;
  }
  if (this_ptr->weapon_actor != (CWeapon *)0x0) {
    if (this_ptr->weapon_actor->weapon_type == WEAPON_TYPE_BARON) {
      if (local_b8 < (float)_DAT_005ede6f) {
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           (&(this_ptr->base).base.model.base);
        if ((pSVar5->state_index == 7) && (this_ptr->guns_drawn != 0)) {
          (this_ptr->base).player_input.action_state.fire = 1;
        }
        goto LAB_005418bc;
      }
    }
    else if (local_b8 < (float)_DAT_005ede5f) {
      if ((this_ptr->guns_drawn != 0) && (local_2c != 0)) {
        if (((float)_DAT_005ede67 < (this_ptr->base).base.layer_action_t) &&
           (this_ptr->aim_converged != 0)) {
          (this_ptr->base).player_input.action_state.fire = 1;
        }
        core_charactr_cpp_CCharacter_turnTowardPoint_FUN_0042d540
                  ((CCharacter *)this_ptr,(CVector3f *)(local_1c + 0x20));
      }
      (this_ptr->base).player_input.action_state.run = 0;
      (this_ptr->base).player_input.action_state.walk = 0;
      goto LAB_005418bc;
    }
    this_ptr_00 = (CPathMap *)(**(code **)(*(int *)(local_1c + 0x154) + 0xc4))(local_1c);
    if (this_ptr_00 == (CPathMap *)0x0) {
      this_ptr_00 = core_path_cpp_getPathMap_FUN_005351f0((CLocation *)(local_1c + 0x20));
    }
    iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                      (this_ptr_00,&(this_ptr->base).base.base.location.position,&CStack_54,
                       (this_ptr->base).base.base.direction_hint);
    if (iVar4 != 0) {
      local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                  (CStack_54.y - (this_ptr->base).base.base.orient.vec.y);
      fVar3 = local_14 * _DAT_005ede77 * (float)_DAT_005ede7f;
      fStack_34 = -local_24;
      (this_ptr->base).player_input.turn_speed = fVar3;
      if (fVar3 < fStack_34) {
        (this_ptr->base).player_input.turn_speed = fStack_34;
      }
      if (local_24 < (this_ptr->base).player_input.turn_speed) {
        (this_ptr->base).player_input.turn_speed = local_24;
      }
      if ((float)_DAT_005ede87 <= local_b8) {
        (this_ptr->base).player_input.action_state.run = 1;
      }
      (this_ptr->base).player_input.action_state.walk = 1;
    }
  }
LAB_005418bc:
  local_84 = *(float *)(local_1c + 0x20) - (this_ptr->base).base.base.location.position.x;
  local_80 = *(float *)(local_1c + 0x24) - (this_ptr->base).base.base.location.position.y;
  local_7c = *(float *)(local_1c + 0x28) - (this_ptr->base).base.base.location.position.z;
  local_90 = local_84;
  (&stack0xffffff68)[(uint)bVar6 * 0xfffffffe + 3] =
       (&stack0xffffff68)[(uint)bVar6 * 0xfffffffe + 6];
  (&stack0xffffff68)[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4] =
       (&stack0xffffff68)[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 7];
  if (&stack0xffffff64 != &stack0xffffff70) {
    local_9c = local_90;
    local_98 = local_8c;
    local_94 = local_88;
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff64);
  local_78 = local_48;
  (&stack0xffffff68)[(uint)bVar6 * 0xfffffffe + 9] = afStack_44[(uint)bVar6 * -2];
  (&stack0xffffff68)[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 10] =
       afStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (&stack0xffffff64 != &stack0xffffff88) {
    local_9c = local_78;
    local_98 = local_74;
    local_94 = local_70;
  }
  local_a4 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                              (local_98 - (this_ptr->base).base.base.orient.vec.y);
  if (local_28 < local_a4) {
    local_a4 = local_28;
  }
  if (local_a4 < -local_28) {
    local_a4 = -local_28;
  }
  local_20 = local_a4 - (this_ptr->head_euler_angles).y;
  if (delta_time * _DAT_005ede8f < local_20) {
    local_20 = delta_time * _DAT_005ede8f;
  }
  if (local_20 < delta_time * _DAT_005ede93) {
    local_20 = delta_time * _DAT_005ede93;
  }
  (this_ptr->head_euler_angles).y = (this_ptr->head_euler_angles).y + local_20;
  return;
}
