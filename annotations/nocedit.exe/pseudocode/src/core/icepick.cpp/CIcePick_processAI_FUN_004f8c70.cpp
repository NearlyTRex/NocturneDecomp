// Name: core_icepick.cpp_CIcePick_processAI_FUN_004f8c70
// Address: 004f8c70
// Address Range: [[004f8c70, 004f9378]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_processAI_FUN_004f8c70(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_icepick_cpp_CIcePick_processAI_FUN_004f8c70(CIcePick *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_01;
  float fVar2;
  CHero *pCVar3;
  int iVar5;
  CHero *pCVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar4;
  SMotion *pSVar8;
  SMotion *pSVar5;
  int iVar6;
  uint uVar9;
  uint uVar7;
  CHero *pCVar10;
  float fStack_98;
  float fStack_8c;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f local_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_28;
  float local_24;
  CPathMap *pCStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fVar4;
  bool bVar3;
  EHeroTask EVar2;
  float fVar1;
  CDeformableModelInstance *this_ptr_00;
  
  bVar3 = false;
  local_1c = 0.25;
  local_24 = 0.7853982;
  pCVar10 = g_HeroActors[g_LocalHeroIndex];
  memset(&(this_ptr->base).player_control,0,0x2c);
  if ((this_ptr->base).ai_task != HERO_TASK_STAND) {
    pCVar3 = g_HeroActors[g_LocalHeroIndex];
    local_6c.x = (this_ptr->base).base.base.location.position.x -
                 (pCVar3->base).base.location.position.x;
    local_6c.y = (this_ptr->base).base.base.location.position.y -
                 (pCVar3->base).base.location.position.y;
    local_6c.z = (this_ptr->base).base.base.location.position.z -
                 (pCVar3->base).base.location.position.z;
    local_30 = SQRT(local_6c.z * local_6c.z + local_6c.x * local_6c.x + local_6c.y * local_6c.y);
    if ((this_ptr->base).ai_task == HERO_TASK_GUARD) {
      local_30 = 0.0;
    }
    local_28 = 20.0;
    iVar5 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uh)->_uh).isWeaponDrawn)
                      (g_HeroActors[g_LocalHeroIndex]);
    if (iVar5 != 0) {
      local_28 = 30.0;
    }
    if ((local_30 < local_28) &&
       ((EVar2 = (this_ptr->base).ai_task, EVar2 == HERO_TASK_KILL || (EVar2 == HERO_TASK_GUARD))))
    {
      fStack_3c = 9999.9;
      pCVar6 = (CHero *)core_hero_cpp_CHero_closestEnemy_FUN_004f3960(&this_ptr->base,&fStack_3c);
      if ((pCVar6 == (CHero *)0x0) || (local_28 <= fStack_3c)) {
        if (this_ptr->guns_drawn != 0) {
          (this_ptr->base).player_control.action_bindings.draw_key = 1;
        }
      }
      else {
        bVar3 = true;
        pCVar10 = pCVar6;
      }
    }
    CStack_78.x = (pCVar10->base).base.location.position.x -
                  (this_ptr->base).base.base.location.position.x;
    CStack_78.y = (pCVar10->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    CStack_78.z = (pCVar10->base).base.location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    if (&local_6c != &CStack_78) {
      local_6c.x = CStack_78.x;
      local_6c.y = CStack_78.y;
      local_6c.z = CStack_78.z;
    }
    fVar2 = SQRT(local_6c.z * local_6c.z + local_6c.x * local_6c.x + local_6c.y * local_6c.y);
    (this_ptr->base).base.turn_angle_accumulator = 0.0;
    fStack_18 = fVar2;
    if ((float)6 <= fVar2) {
      pCStack_20 = (CPathMap *)0x0;
      if (bVar3) {
        (this_ptr->base).base.hero_proximity_timer = 0.0;
      }
      else {
        pCStack_20 = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                               ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
        iVar6 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uh)->_uh).isWeaponDrawn)
                          (g_HeroActors[g_LocalHeroIndex]);
        if ((iVar6 == 0) &&
           (uVar7 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
                              ((CCharacter *)this_ptr,delta_time), uVar7 != 0)) {
          if (uVar7 < 2) {
            (this_ptr->base).player_control.action_bindings.walk_key = 1;
          }
          else if (uVar7 == 2) {
            (this_ptr->base).player_control.action_bindings.run_key = 1;
            (this_ptr->base).player_control.action_bindings.walk_key = 1;
          }
        }
      }
      if (pCStack_20 == (CPathMap *)0x0) {
        pCStack_20 = core_path_cpp_getPathMap_FUN_00548500(&(pCVar10->base).base.location);
      }
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (pCStack_20,&(this_ptr->base).base.base.location.position,&CStack_48,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar6 != 0) {
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (CStack_48.y - (this_ptr->base).base.base.orient.vec.y);
        fVar4 = fStack_14 * (float)0.31830988619288902 * (float)4;
        fStack_38 = -local_1c;
        (this_ptr->base).player_control.turn_speed = fVar4;
        if (fVar4 < fStack_38) {
          (this_ptr->base).player_control.turn_speed = fStack_38;
        }
        if (local_1c < (this_ptr->base).player_control.turn_speed) {
          (this_ptr->base).player_control.turn_speed = local_1c;
        }
        if (((float)10 <= fVar2) || (bVar3)) {
          (this_ptr->base).player_control.action_bindings.run_key = 1;
          (this_ptr->base).player_control.action_bindings.walk_key = 1;
        }
        else {
          (this_ptr->base).player_control.action_bindings.walk_key = 1;
        }
      }
    }
    else {
      this_ptr_01 = &(this_ptr->base).base.model;
      if (bVar3) {
        if (this_ptr->guns_drawn == 0) {
          (this_ptr->base).player_control.action_bindings.draw_key = 1;
        }
        else {
          pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&this_ptr_01->motion_controller);
          if ((pSVar8->state_index != 2) && (pSVar8->state_index != 1)) {
            (this_ptr->base).player_control.action_bindings.fire_key = 1;
          }
        }
        (this_ptr->base).base.hero_proximity_timer = 0.0;
      }
      else {
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&this_ptr_01->motion_controller);
        if ((pSVar5->state_index == 10) && (this_ptr->guns_drawn != 0)) {
          (this_ptr->base).player_control.action_bindings.draw_key = 1;
        }
        iVar6 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uh)->_uh).isWeaponDrawn)
                          (g_HeroActors[g_LocalHeroIndex]);
        if ((iVar6 == 0) &&
           (uVar9 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
                              ((CCharacter *)this_ptr,delta_time), uVar9 != 0)) {
          if (uVar9 < 2) {
            (this_ptr->base).player_control.action_bindings.walk_key = 1;
          }
          else if (uVar9 == 2) {
            (this_ptr->base).player_control.action_bindings.run_key = 1;
            (this_ptr->base).player_control.action_bindings.walk_key = 1;
          }
        }
      }
      if (bVar3) {
        pCVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_54,&local_6c);
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (pCVar7->y - (this_ptr->base).base.base.orient.vec.y);
        fVar2 = fStack_14 * (float)0.31830988619288902 * (float)4;
        fStack_34 = -local_1c;
        (this_ptr->base).player_control.turn_speed = fVar2;
        if (fVar2 < fStack_34) {
          (this_ptr->base).player_control.turn_speed = fStack_34;
        }
        if (local_1c < (this_ptr->base).player_control.turn_speed) {
          (this_ptr->base).player_control.turn_speed = local_1c;
        }
        fVar1 = (this_ptr->base).player_control.turn_speed;
        if ((((float)-0.25 < fVar1) && ((double)fVar1 < 0.25)) &&
           ((this_ptr->base).player_control.action_bindings.fire_key != 0)) {
          (this_ptr->base).player_control.turn_speed = 0.0;
        }
      }
    }
    fVar2 = (this_ptr->base).base.turn_angle_accumulator;
    if (fVar2 <= 0.0) {
      if (fVar2 < 0.0) {
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
        (this_ptr->base).player_control.turn_speed = -local_1c;
      }
    }
    else {
      (this_ptr->base).base.turn_angle_accumulator = 0.0;
      (this_ptr->base).player_control.turn_speed = local_1c;
    }
    CStack_60.x = (pCVar10->base).base.location.position.x -
                  (this_ptr->base).base.base.location.position.x;
    CStack_60.y = (pCVar10->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    CStack_60.z = (pCVar10->base).base.location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    if (&local_6c != &CStack_60) {
      local_6c.x = CStack_60.x;
      local_6c.y = CStack_60.y;
      local_6c.z = CStack_60.z;
    }
    pCVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_84,&local_6c);
    if (&local_6c != pCVar4) {
      local_6c.x = pCVar4->x;
      local_6c.y = pCVar4->y;
      local_6c.z = pCVar4->z;
    }
    fStack_8c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_6c.y - (this_ptr->base).base.base.orient.vec.y);
    if (local_24 < fStack_8c) {
      fStack_8c = local_24;
    }
    if (fStack_8c < -local_24) {
      fStack_8c = -local_24;
    }
    fStack_98 = fStack_8c - (this_ptr->head_look_euler).y;
    if (delta_time * (float)3.1415926535000001 < fStack_98) {
      fStack_98 = delta_time * (float)3.1415926535000001;
    }
    if (fStack_98 < delta_time * (float)-3.1415926535000001) {
      fStack_98 = delta_time * (float)-3.1415926535000001;
    }
    (this_ptr->head_look_euler).y = (this_ptr->head_look_euler).y + fStack_98;
  }
  return;
}
