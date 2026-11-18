// Name: core_scat.cpp_CScat_updateAI_FUN_005415c0
// Address: 005415c0
// Address Range: [[005415c0, 00541ae6]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateAI_FUN_005415c0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_scat_cpp_CScat_updateAI_FUN_005415c0(CScat *this_ptr,float delta_time)

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
  CVector3f local_b4;
  float local_a4;
  CVector3f local_9c;
  CVector3f local_90;
  float local_84;
  float local_80 [2];
  CVector3f local_78;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f CStack_54;
  CVector3f local_48;
  float local_3c [4];
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  CHero *local_1c;
  float local_14;
  
  bVar7 = 0;
  local_24 = 0.25;
  local_1c = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
  local_28 = 0.7853982;
  if ((this_ptr->base).ai_task == HERO_TASK_STAND) {
    return;
  }
  memset(&(this_ptr->base).player_input,0,0x30);
  pCVar4 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
  local_60 = (this_ptr->base).base.base.location.position.x -
             (pCVar4->base).base.location.position.x;
  local_5c = (this_ptr->base).base.base.location.position.y -
             (pCVar4->base).base.location.position.y;
  local_58 = (this_ptr->base).base.base.location.position.z -
             (pCVar4->base).base.location.position.z;
  local_9c.x = local_60;
  *(float *)((int)&local_9c + (uint)bVar7 * -8 + 4) = local_80[(uint)bVar7 * -2 + 9];
  *(float *)((int)&local_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       local_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  EVar1 = (this_ptr->base).ai_task;
  local_2c = 0;
  if ((((EVar1 == HERO_TASK_KILL) || (EVar1 == HERO_TASK_GUARD)) &&
      (pCVar2 = (this_ptr->base).inventory.selected_weapon, pCVar2 != (CWeapon *)0x0)) &&
     (0 < pCVar2->ammo_count)) {
    local_3c[0] = 9999.9;
    pCVar4 = (CHero *)core_hero_cpp_CHero_closestEnemy_FUN_004ec350(&this_ptr->base,local_3c);
    if ((pCVar4 != (CHero *)0x0) && ((int)local_3c[0] < 0x41f00000)) {
      local_1c = pCVar4;
      local_2c = 1;
    }
  }
  if (local_2c != this_ptr->guns_drawn) {
    (this_ptr->base).player_input.action_state.draw = 1;
  }
  local_6c = (local_1c->base).base.location.position.x -
             (this_ptr->base).base.base.location.position.x;
  local_68 = (local_1c->base).base.location.position.y -
             (this_ptr->base).base.base.location.position.y;
  local_64 = (local_1c->base).base.location.position.z -
             (this_ptr->base).base.base.location.position.z;
  local_b4.x = local_6c;
  *(float *)((int)&local_b4 + (uint)bVar7 * -8 + 4) = local_80[(uint)bVar7 * -2 + 6];
  *(float *)((int)&local_b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       local_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  if (&local_9c != &local_b4) {
    local_9c.x = local_b4.x;
    local_9c.y = local_b4.y;
    local_9c.z = local_b4.z;
  }
  local_b8 = SQRT(local_9c.z * local_9c.z + local_9c.x * local_9c.x + local_9c.y * local_9c.y);
  if ((this_ptr->base).ai_task == HERO_TASK_GUARD) {
    local_b8 = 0.0;
  }
  if (this_ptr->weapon_actor != (CWeapon *)0x0) {
    if (this_ptr->weapon_actor->weapon_type == WEAPON_TYPE_BARON) {
      if (local_b8 < (float)8) {
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           (&(this_ptr->base).base.model.base);
        if ((pSVar5->state_index == 7) && (this_ptr->guns_drawn != 0)) {
          (this_ptr->base).player_input.action_state.fire = 1;
        }
        goto LAB_005418bc;
      }
    }
    else if (local_b8 < (float)15) {
      if ((this_ptr->guns_drawn != 0) && (local_2c != 0)) {
        if (((float)0.90000000000000002 < (this_ptr->base).base.layer_action_t) &&
           (this_ptr->aim_converged != 0)) {
          (this_ptr->base).player_input.action_state.fire = 1;
        }
        core_charactr_cpp_CCharacter_turnTowardPoint_FUN_0042d540
                  ((CCharacter *)this_ptr,&(local_1c->base).base.location.position);
      }
      (this_ptr->base).player_input.action_state.run = 0;
      (this_ptr->base).player_input.action_state.walk = 0;
      goto LAB_005418bc;
    }
    this_ptr_00 = (*((local_1c->base).base.vtable._ub)->getPathMap)((CDemonActor *)local_1c);
    if (this_ptr_00 == (CPathMap *)0x0) {
      this_ptr_00 = core_path_cpp_getPathMap_FUN_005351f0(&(local_1c->base).base.location);
    }
    iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                      (this_ptr_00,&(this_ptr->base).base.base.location.position,&CStack_54,
                       (this_ptr->base).base.base.direction_hint);
    if (iVar6 != 0) {
      local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                           (CStack_54.y - (this_ptr->base).base.base.orient.vec.y);
      fVar3 = local_14 * 0.3183099f * (float)4;
      local_3c[2] = -local_24;
      (this_ptr->base).player_input.turn_speed = fVar3;
      if (fVar3 < local_3c[2]) {
        (this_ptr->base).player_input.turn_speed = local_3c[2];
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
LAB_005418bc:
  local_84 = (local_1c->base).base.location.position.x -
             (this_ptr->base).base.base.location.position.x;
  local_80[0] = (local_1c->base).base.location.position.y -
                (this_ptr->base).base.base.location.position.y;
  local_80[1] = (local_1c->base).base.location.position.z -
                (this_ptr->base).base.base.location.position.z;
  local_90.x = local_84;
  *(float *)((int)&local_90 + (uint)bVar7 * -8 + 4) = local_80[(uint)bVar7 * -2];
  *(float *)((int)&local_90 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       local_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (&local_9c != &local_90) {
    local_9c.x = local_90.x;
    local_9c.y = local_90.y;
    local_9c.z = local_90.z;
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_9c,&local_48);
  local_78.x = local_48.x;
  local_80[(uint)bVar7 * -2 + 3] = local_3c[(uint)bVar7 * -2 + -2];
  local_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       local_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -1];
  if (&local_9c != (CVector3f *)(local_80 + 2)) {
    local_9c.x = local_78.x;
    local_9c.y = local_78.y;
    local_9c.z = local_78.z;
  }
  local_a4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                       (local_9c.y - (this_ptr->base).base.base.orient.vec.y);
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
