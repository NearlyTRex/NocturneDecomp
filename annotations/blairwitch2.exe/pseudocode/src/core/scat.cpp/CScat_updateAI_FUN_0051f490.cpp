// Name: core_scat.cpp_CScat_updateAI_FUN_0051f490
// Address: 0051f490
// Address Range: [[0051f490, 0051f9bb]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateAI_FUN_0051f490(CScat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_scat_cpp_CScat_updateAI_FUN_0051f490(CScat *this_ptr,float delta_time)

{
  EHeroTask EVar1;
  CWeapon *pCVar2;
  float fVar3;
  CHero *pCVar4;
  SMotion *pSVar5;
  CPathMap *this_ptr_00;
  int iVar6;
  byte bVar7;
  float afStackY_109c [1013];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  float local_60;
  float local_5c [2];
  CVector3f local_54;
  CVector3f aCStack_48 [2];
  float fStack_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  CHero *local_1c;
  float local_18;
  float local_14;
  
  bVar7 = 0;
  local_24 = 0.25;
  local_1c = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
  local_28 = 0.7853982;
  if ((this_ptr->base).ai_task == HERO_TASK_STAND) {
    return;
  }
  memset(&(this_ptr->base).player_input,0,0x34);
  pCVar4 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
  local_9c = (this_ptr->base).base.base.location.position.x -
             (pCVar4->base).base.location.position.x;
  local_98 = (this_ptr->base).base.base.location.position.y -
             (pCVar4->base).base.location.position.y;
  local_94 = (this_ptr->base).base.base.location.position.z -
             (pCVar4->base).base.location.position.z;
  local_54.x = local_9c;
  *(uint *)((int)aCStack_48 + (uint)bVar7 * -8 + -8) =
       *(uint *)((int)&stack0xffffff68 + (uint)bVar7 * -8);
  *(uint *)((int)aCStack_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4) =
       *(uint *)((int)&stack0xffffff6c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  EVar1 = (this_ptr->base).ai_task;
  local_2c = 0;
  if ((((EVar1 == HERO_TASK_KILL) || (EVar1 == HERO_TASK_GUARD)) &&
      (pCVar2 = (this_ptr->base).inventories[0].selected_weapons
                [(this_ptr->base).inventories[0].current_group], pCVar2 != (CWeapon *)0x0)) &&
     (0 < pCVar2->ammo_count)) {
    local_18 = 9999.9;
    pCVar4 = (CHero *)core_hero_cpp_CHero_closestEnemy_FUN_004d00c0(&this_ptr->base,&local_18);
    if ((pCVar4 != (CHero *)0x0) && ((int)local_18 < 0x41f00000)) {
      local_1c = pCVar4;
      local_2c = 1;
    }
  }
  if (local_2c != this_ptr->guns_drawn) {
    (this_ptr->base).player_input.action_state.draw = 1;
  }
  local_60 = (local_1c->base).base.location.position.x -
             (this_ptr->base).base.base.location.position.x;
  local_5c[0] = (local_1c->base).base.location.position.y -
                (this_ptr->base).base.base.location.position.y;
  local_5c[1] = (local_1c->base).base.location.position.z -
                (this_ptr->base).base.base.location.position.z;
  local_84.x = local_60;
  *(float *)((int)&local_84 + (uint)bVar7 * -8 + 4) = local_5c[(uint)bVar7 * -2];
  *(float *)((int)&local_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       local_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (&local_54 != &local_84) {
    local_54.x = local_84.x;
    local_54.y = local_84.y;
    local_54.z = local_84.z;
  }
  local_b8 = SQRT(local_54.z * local_54.z + local_54.x * local_54.x + local_54.y * local_54.y);
  if ((this_ptr->base).ai_task == HERO_TASK_GUARD) {
    local_b8 = 0.0;
  }
  if (this_ptr->weapon_actor != (CWeapon *)0x0) {
    if (this_ptr->weapon_actor->weapon_type == (WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN)) {
      if (local_b8 < (float)8) {
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                           (&(this_ptr->base).base.model.base);
        if ((pSVar5->state_index == 7) && (this_ptr->guns_drawn != 0)) {
          (this_ptr->base).player_input.action_state.fire = 1;
        }
        goto LAB_0051f79a;
      }
    }
    else if (local_b8 < (float)15) {
      if ((this_ptr->guns_drawn != 0) && (local_2c != 0)) {
        if (((float)0.90000000000000002 < (this_ptr->base).base.layer_action_t) &&
           (this_ptr->aim_converged != 0)) {
          (this_ptr->base).player_input.action_state.fire = 1;
        }
        core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                  ((CCharacter *)this_ptr,&(local_1c->base).base.location.position);
      }
      (this_ptr->base).player_input.action_state.run = 0;
      (this_ptr->base).player_input.action_state.walk = 0;
      goto LAB_0051f79a;
    }
    this_ptr_00 = (*((local_1c->base).base.vtable._ub)->getPathMap)((CDemonActor *)local_1c);
    if (this_ptr_00 == (CPathMap *)0x0) {
      this_ptr_00 = core_path_cpp_getPathMap_FUN_00513ea0(&(local_1c->base).base.location);
    }
    iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                      (this_ptr_00,&(this_ptr->base).base.base.location.position,aCStack_48,
                       (this_ptr->base).base.base.direction_hint);
    if (iVar6 != 0) {
      local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                           (aCStack_48[0].y - (this_ptr->base).base.base.orient.vec.y);
      fVar3 = local_14 * 0.3183099f * (float)4;
      fStack_30 = -local_24;
      (this_ptr->base).player_input.turn_speed = fVar3;
      if (fVar3 < fStack_30) {
        (this_ptr->base).player_input.turn_speed = fStack_30;
      }
      if (local_24 < (this_ptr->base).player_input.turn_speed) {
        (this_ptr->base).player_input.turn_speed = local_24;
      }
      if ((float)10 <= local_b8) {
        (this_ptr->base).player_input.action_state.run = 1;
      }
      (this_ptr->base).player_input.action_state.walk = 1;
    }
  }
LAB_0051f79a:
  local_b4 = (local_1c->base).base.location.position.x -
             (this_ptr->base).base.base.location.position.x;
  local_b0 = (local_1c->base).base.location.position.y -
             (this_ptr->base).base.base.location.position.y;
  local_ac = (local_1c->base).base.location.position.z -
             (this_ptr->base).base.base.location.position.z;
  local_90.x = local_b4;
  *(uint *)((int)&local_90 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&stack0xffffff50 + (uint)bVar7 * -8);
  *(uint *)((int)&local_90 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&stack0xffffff54 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (&local_54 != &local_90) {
    local_54.x = local_90.x;
    local_54.y = local_90.y;
    local_54.z = local_90.z;
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_54,&local_6c);
  local_78.x = local_6c.x;
  *(uint *)((int)&local_78 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_6c + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&local_78 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&local_6c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  if (&local_54 != &local_78) {
    local_54.x = local_78.x;
    local_54.y = local_78.y;
    local_54.z = local_78.z;
  }
  local_a4 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                       (local_54.y - (this_ptr->base).base.base.orient.vec.y);
  if (local_28 < local_a4) {
    local_a4 = local_28;
  }
  if (local_a4 < -local_28) {
    local_a4 = -local_28;
  }
  local_20 = local_a4 - (this_ptr->head_euler_angles).y;
  if (delta_time * 3.141593f < local_20) {
    local_20 = delta_time * 3.141593f;
  }
  if (local_20 < delta_time * -3.141593f) {
    local_20 = delta_time * -3.141593f;
  }
  (this_ptr->head_euler_angles).y = (this_ptr->head_euler_angles).y + local_20;
  return;
}
