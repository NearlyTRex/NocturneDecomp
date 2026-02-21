// Name: core_svetlana.cpp_CSvetlana_FUN_005d9260
// Address: 005d9260
// Address Range: [[005d9260, 005d9968]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9260(CSvetlana *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9260(CSvetlana *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  CHero *pCVar5;
  CVector3f *pCVar6;
  SMotion *pSVar7;
  uint uVar8;
  CHero *pCVar9;
  float in_stack_00000008;
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
  
  bVar2 = false;
  local_1c = 0.25;
  local_24 = 0.7853982;
  pCVar9 = g_HeroActors[g_LocalHeroIndex];
  memset(&(this_ptr->base).player_control,0,0x2c);
  if ((this_ptr->base).ai_task != 0) {
    pCVar5 = g_HeroActors[g_LocalHeroIndex];
    local_6c.x = (this_ptr->base).base.base.location.position.x -
                 (pCVar5->base).base.location.position.x;
    local_6c.y = (this_ptr->base).base.base.location.position.y -
                 (pCVar5->base).base.location.position.y;
    local_6c.z = (this_ptr->base).base.base.location.position.z -
                 (pCVar5->base).base.location.position.z;
    local_30 = SQRT(local_6c.z * local_6c.z + local_6c.x * local_6c.x + local_6c.y * local_6c.y);
    if ((this_ptr->base).ai_task == 3) {
      local_30 = 0.0;
    }
    local_28 = 20.0;
    iVar4 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ue)->_ue).randomize)
                      ((CEnemy *)g_HeroActors[g_LocalHeroIndex]);
    if (iVar4 != 0) {
      local_28 = 30.0;
    }
    if ((local_30 < local_28) && ((iVar4 = (this_ptr->base).ai_task, iVar4 == 2 || (iVar4 == 3)))) {
      fStack_3c = 9999.9;
      pCVar5 = (CHero *)core_hero_cpp_CHero_FUN_004f3960(&this_ptr->base);
      if ((pCVar5 == (CHero *)0x0) || (local_28 <= fStack_3c)) {
        if (this_ptr->blades_drawn != 0) {
          (this_ptr->base).player_control.action_states[6] = 1;
        }
      }
      else {
        bVar2 = true;
        pCVar9 = pCVar5;
      }
    }
    CStack_78.x = (pCVar9->base).base.location.position.x -
                  (this_ptr->base).base.base.location.position.x;
    CStack_78.y = (pCVar9->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    CStack_78.z = (pCVar9->base).base.location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    if (&local_6c != &CStack_78) {
      local_6c.x = CStack_78.x;
      local_6c.y = CStack_78.y;
      local_6c.z = CStack_78.z;
    }
    fVar1 = SQRT(local_6c.z * local_6c.z + local_6c.x * local_6c.x + local_6c.y * local_6c.y);
    (this_ptr->base).base.turn_angle_accumulator = 0.0;
    fStack_18 = fVar1;
    if ((float)6 <= fVar1) {
      pCStack_20 = (CPathMap *)0x0;
      if (bVar2) {
        (this_ptr->base).base.hero_proximity_timer = 0.0;
      }
      else {
        pCStack_20 = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                               ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
        iVar4 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ue)->_ue).randomize)
                          ((CEnemy *)g_HeroActors[g_LocalHeroIndex]);
        if ((iVar4 == 0) &&
           (uVar8 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
                              ((CCharacter *)this_ptr,in_stack_00000008), uVar8 != 0)) {
          if (uVar8 < 2) {
            (this_ptr->base).player_control.action_states[0] = 1;
          }
          else if (uVar8 == 2) {
            (this_ptr->base).player_control.action_states[2] = 1;
            (this_ptr->base).player_control.action_states[0] = 1;
          }
        }
      }
      if (pCStack_20 == (CPathMap *)0x0) {
        pCStack_20 = core_path_cpp_FUN_00548500(&(pCVar9->base).base.location);
      }
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (pCStack_20,&(this_ptr->base).base.base.location.position,&CStack_48,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar4 != 0) {
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (CStack_48.y - (this_ptr->base).base.base.orient.vec.y);
        fVar3 = fStack_14 * (float)0.31830988619288902 * (float)4;
        fStack_38 = -local_1c;
        (this_ptr->base).player_control.turn_speed = fVar3;
        if (fVar3 < fStack_38) {
          (this_ptr->base).player_control.turn_speed = fStack_38;
        }
        if (local_1c < (this_ptr->base).player_control.turn_speed) {
          (this_ptr->base).player_control.turn_speed = local_1c;
        }
        if (((float)10 <= fVar1) || (bVar2)) {
          (this_ptr->base).player_control.action_states[2] = 1;
          (this_ptr->base).player_control.action_states[0] = 1;
        }
        else {
          (this_ptr->base).player_control.action_states[0] = 1;
        }
      }
    }
    else {
      this_ptr_00 = &(this_ptr->base).base.model;
      if (bVar2) {
        if (this_ptr->blades_drawn == 0) {
          (this_ptr->base).player_control.action_states[6] = 1;
        }
        else {
          pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&this_ptr_00->motion_controller);
          if ((pSVar7->state_index != 2) && (pSVar7->state_index != 1)) {
            (this_ptr->base).player_control.action_states[3] = 1;
          }
        }
        (this_ptr->base).base.hero_proximity_timer = 0.0;
      }
      else {
        pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&this_ptr_00->motion_controller);
        if ((pSVar7->state_index == 10) && (this_ptr->blades_drawn != 0)) {
          (this_ptr->base).player_control.action_states[6] = 1;
        }
        iVar4 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ue)->_ue).randomize)
                          ((CEnemy *)g_HeroActors[g_LocalHeroIndex]);
        if ((iVar4 == 0) &&
           (uVar8 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
                              ((CCharacter *)this_ptr,in_stack_00000008), uVar8 != 0)) {
          if (uVar8 < 2) {
            (this_ptr->base).player_control.action_states[0] = 1;
          }
          else if (uVar8 == 2) {
            (this_ptr->base).player_control.action_states[2] = 1;
            (this_ptr->base).player_control.action_states[0] = 1;
          }
        }
      }
      if (bVar2) {
        pCVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_54,&local_6c);
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (pCVar6->y - (this_ptr->base).base.base.orient.vec.y);
        fVar1 = fStack_14 * (float)0.31830988619288902 * (float)4;
        fStack_34 = -local_1c;
        (this_ptr->base).player_control.turn_speed = fVar1;
        if (fVar1 < fStack_34) {
          (this_ptr->base).player_control.turn_speed = fStack_34;
        }
        if (local_1c < (this_ptr->base).player_control.turn_speed) {
          (this_ptr->base).player_control.turn_speed = local_1c;
        }
        fVar1 = (this_ptr->base).player_control.turn_speed;
        if ((((float)-0.25 < fVar1) && ((double)fVar1 < 0.25)) &&
           ((this_ptr->base).player_control.action_states[3] != 0)) {
          (this_ptr->base).player_control.turn_speed = 0.0;
        }
      }
    }
    fVar1 = (this_ptr->base).base.turn_angle_accumulator;
    if (fVar1 <= 0.0) {
      if (fVar1 < 0.0) {
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
        (this_ptr->base).player_control.turn_speed = -local_1c;
      }
    }
    else {
      (this_ptr->base).base.turn_angle_accumulator = 0.0;
      (this_ptr->base).player_control.turn_speed = local_1c;
    }
    CStack_60.x = (pCVar9->base).base.location.position.x -
                  (this_ptr->base).base.base.location.position.x;
    CStack_60.y = (pCVar9->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    CStack_60.z = (pCVar9->base).base.location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    if (&local_6c != &CStack_60) {
      local_6c.x = CStack_60.x;
      local_6c.y = CStack_60.y;
      local_6c.z = CStack_60.z;
    }
    pCVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_84,&local_6c);
    if (&local_6c != pCVar6) {
      local_6c.x = pCVar6->x;
      local_6c.y = pCVar6->y;
      local_6c.z = pCVar6->z;
    }
    fStack_8c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_6c.y - (this_ptr->base).base.base.orient.vec.y);
    if (local_24 < fStack_8c) {
      fStack_8c = local_24;
    }
    if (fStack_8c < -local_24) {
      fStack_8c = -local_24;
    }
    fStack_98 = fStack_8c - (this_ptr->head_euler_angles).y;
    if (in_stack_00000008 * (float)3.1415926535000001 < fStack_98) {
      fStack_98 = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (fStack_98 < in_stack_00000008 * (float)-3.1415926535000001) {
      fStack_98 = in_stack_00000008 * (float)-3.1415926535000001;
    }
    (this_ptr->head_euler_angles).y = (this_ptr->head_euler_angles).y + fStack_98;
  }
  return;
}
