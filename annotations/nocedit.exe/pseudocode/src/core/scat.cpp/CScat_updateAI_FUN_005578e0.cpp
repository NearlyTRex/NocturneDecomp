// Name: core_scat.cpp_CScat_updateAI_FUN_005578e0
// Address: 005578e0
// Address Range: [[005578e0, 00557d1a]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateAI_FUN_005578e0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_scat_cpp_CScat_updateAI_FUN_005578e0(CScat *this_ptr,float delta_time)

{
  CHero *pCVar1;
  CHero *pCVar4;
  SMotion *pSVar5;
  CPathMap *this_ptr_00;
  int iVar2;
  CVector3f *pCVar6;
  CHero *this_ptr_01;
  int iVar7;
  float fStack_80;
  float local_7c;
  CVector3f local_78;
  CVector3f CStack_6c;
  CVector3f local_60;
  CVector3f CStack_54;
  float fStack_44;
  CVector3f local_3c;
  float local_30;
  int local_2c;
  float fStack_24;
  float local_20;
  float local_1c;
  float fStack_18;
  EHeroTask EVar1;
  CWeapon *pCVar2;
  float fVar3;
  
  local_20 = 0.25;
  local_1c = 0.7853982;
  this_ptr_01 = g_HeroActors[g_LocalHeroIndex];
  if ((this_ptr->base).ai_task == HERO_TASK_STAND) {
    return;
  }
  memset(&(this_ptr->base).player_input,0,0x2c);
  pCVar1 = g_HeroActors[g_LocalHeroIndex];
  local_3c.x = (this_ptr->base).base.base.location.position.x -
               (pCVar1->base).base.location.position.x;
  local_3c.y = (this_ptr->base).base.base.location.position.y -
               (pCVar1->base).base.location.position.y;
  local_3c.z = (this_ptr->base).base.base.location.position.z -
               (pCVar1->base).base.location.position.z;
  EVar1 = (this_ptr->base).ai_task;
  iVar7 = 0;
  if ((((EVar1 == HERO_TASK_KILL) || (EVar1 == HERO_TASK_GUARD)) &&
      (pCVar2 = (this_ptr->base).inventory.selected_weapon, pCVar2 != (CWeapon *)0x0)) &&
     (0 < pCVar2->ammo_count)) {
    local_30 = 9999.9;
    pCVar4 = (CHero *)core_hero_cpp_CHero_closestEnemy_FUN_004f3960(&this_ptr->base,&local_30);
    if ((pCVar4 != (CHero *)0x0) && ((int)local_30 < 0x41f00000)) {
      iVar7 = 1;
      this_ptr_01 = pCVar4;
    }
  }
  if (iVar7 != this_ptr->guns_drawn) {
    (this_ptr->base).player_input.action_state.draw = 1;
  }
  local_60.x = (this_ptr_01->base).base.location.position.x -
               (this_ptr->base).base.base.location.position.x;
  local_60.y = (this_ptr_01->base).base.location.position.y -
               (this_ptr->base).base.base.location.position.y;
  local_60.z = (this_ptr_01->base).base.location.position.z -
               (this_ptr->base).base.base.location.position.z;
  if (&local_3c != &local_60) {
    local_3c.x = local_60.x;
    local_3c.y = local_60.y;
    local_3c.z = local_60.z;
  }
  local_7c = SQRT(local_3c.z * local_3c.z + local_3c.x * local_3c.x + local_3c.y * local_3c.y);
  if ((this_ptr->base).ai_task == HERO_TASK_GUARD) {
    local_7c = 0.0;
  }
  if (this_ptr->weapon_actor == (CWeapon *)0x0) goto LAB_00557b63;
  local_2c = 0;
  if (this_ptr->weapon_actor->weapon_type == WEAPON_TYPE_BARON) {
    if (local_7c < (float)8) {
      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller);
      if ((pSVar5->state_index == 7) && (this_ptr->guns_drawn != 0)) {
        (this_ptr->base).player_input.action_state.fire = 1;
      }
LAB_00557a94:
      if (local_2c == 0) goto LAB_00557b63;
    }
  }
  else if (local_7c < (float)15) {
    if ((this_ptr->guns_drawn != 0) && (iVar7 != 0)) {
      if (((float)0.90000000000000002 < (this_ptr->base).base.layer_action_t) &&
         (this_ptr->aim_converged != 0)) {
        (this_ptr->base).player_input.action_state.fire = 1;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00428d80
                ((CCharacter *)this_ptr,&(this_ptr_01->base).base.location.position);
    }
    (this_ptr->base).player_input.action_state.run = 0;
    (this_ptr->base).player_input.action_state.walk = 0;
    goto LAB_00557a94;
  }
  this_ptr_00 = (*((this_ptr_01->base).base.vtable._ub)->getPathMap)((CDemonActor *)this_ptr_01);
  if (this_ptr_00 == (CPathMap *)0x0) {
    this_ptr_00 = core_path_cpp_getPathMap_FUN_00548500(&(this_ptr_01->base).base.location);
  }
  iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                    (this_ptr_00,&(this_ptr->base).base.base.location.position,&CStack_54,
                     (this_ptr->base).base.base.direction_hint);
  if (iVar2 != 0) {
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_54.y - (this_ptr->base).base.base.orient.vec.y);
    fVar3 = fStack_18 * (float)0.31830988619288902 * (float)4;
    fStack_24 = -local_20;
    (this_ptr->base).player_input.turn_speed = fVar3;
    if (fVar3 < fStack_24) {
      (this_ptr->base).player_input.turn_speed = fStack_24;
    }
    if (local_20 < (this_ptr->base).player_input.turn_speed) {
      (this_ptr->base).player_input.turn_speed = local_20;
    }
    if ((float)10 <= local_7c) {
      (this_ptr->base).player_input.action_state.run = 1;
    }
    (this_ptr->base).player_input.action_state.walk = 1;
  }
LAB_00557b63:
  local_78.x = (this_ptr_01->base).base.location.position.x -
               (this_ptr->base).base.base.location.position.x;
  local_78.y = (this_ptr_01->base).base.location.position.y -
               (this_ptr->base).base.base.location.position.y;
  local_78.z = (this_ptr_01->base).base.location.position.z -
               (this_ptr->base).base.base.location.position.z;
  if (&local_3c != &local_78) {
    local_3c.x = local_78.x;
    local_3c.y = local_78.y;
    local_3c.z = local_78.z;
  }
  pCVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_6c,&local_3c);
  if (&local_3c != pCVar6) {
    local_3c.x = pCVar6->x;
    local_3c.y = pCVar6->y;
    local_3c.z = pCVar6->z;
  }
  fStack_44 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (local_3c.y - (this_ptr->base).base.base.orient.vec.y);
  if (local_1c < fStack_44) {
    fStack_44 = local_1c;
  }
  if (fStack_44 < -local_1c) {
    fStack_44 = -local_1c;
  }
  fStack_80 = fStack_44 - (this_ptr->head_euler_angles).y;
  if (delta_time * (float)3.1415926535000001 < fStack_80) {
    fStack_80 = delta_time * (float)3.1415926535000001;
  }
  if (fStack_80 < delta_time * (float)-3.1415926535000001) {
    fStack_80 = delta_time * (float)-3.1415926535000001;
  }
  (this_ptr->head_euler_angles).y = (this_ptr->head_euler_angles).y + fStack_80;
  return;
}
