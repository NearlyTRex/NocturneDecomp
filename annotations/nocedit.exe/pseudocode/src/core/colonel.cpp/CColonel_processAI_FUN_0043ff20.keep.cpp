// Name: core_colonel.cpp_CColonel_processAI_FUN_0043ff20
// Address: 0043ff20
// MANUAL RECONSTRUCTION
// Address Range: [[0043ff20, 00440423]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_processAI_FUN_0043ff20(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_colonel_cpp_CColonel_processAI_FUN_0043ff20(CColonel *this_ptr,float delta_time)

{
  CHero *sim_leader;
  CDeformableModelInstance *this_ptr_02;
  CHero *pCVar1;
  CHero *pCVar5;
  CVector3f *pCVar6;
  float fVar2;
  CVector3f *pCVar3;
  SMotion *pSVar7;
  CPathMap *this_ptr_01;
  int iVar8;
  float fVar5;
  CHero *pCVar9;
  float local_8c;
  float local_88;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  float local_44;
  CVector3f local_3c;
  float fVar1;
  float fVar4;
  EHeroTask EVar2;
  bool bVar3;

#if NOCTURNE_AUTHENTIC_NETPLAY
  sim_leader = g_HeroActors[g_LocalHeroIndex];
#else
  sim_leader = nocturne_net_sim_leader_hero();
#endif
  bVar3 = false;
  pCVar9 = sim_leader;
  memset(&(this_ptr->base).player_input,0,0x2c);
  if ((this_ptr->base).ai_task != HERO_TASK_STAND) {
    pCVar1 = sim_leader;
    local_54.x = (this_ptr->base).base.base.location.position.x -
                 (pCVar1->base).base.location.position.x;
    local_54.y = (this_ptr->base).base.base.location.position.y -
                 (pCVar1->base).base.location.position.y;
    local_54.z = (this_ptr->base).base.base.location.position.z -
                 (pCVar1->base).base.location.position.z;
    if (((((this_ptr->base).ai_task == HERO_TASK_GUARD) ||
         (SQRT(local_54.z * local_54.z + local_54.x * local_54.x + local_54.y * local_54.y) <
          20.0f)) &&
        ((EVar2 = (this_ptr->base).ai_task, EVar2 == HERO_TASK_KILL || (EVar2 == HERO_TASK_GUARD))))
       && ((pCVar5 = (CHero *)core_hero_cpp_CHero_closestEnemy_FUN_004f3960
                                        (&this_ptr->base,&local_88), pCVar5 != (CHero *)0x0 &&
           (local_88 < (float)20)))) {
      bVar3 = true;
      pCVar9 = pCVar5;
    }
    local_60.x = (pCVar9->base).base.location.position.x -
                 (this_ptr->base).base.base.location.position.x;
    local_60.y = (pCVar9->base).base.location.position.y -
                 (this_ptr->base).base.base.location.position.y;
    local_60.z = (pCVar9->base).base.location.position.z -
                 (this_ptr->base).base.base.location.position.z;
    local_54 = local_60;
    fVar2 = SQRT(local_54.z * local_54.z + local_54.x * local_54.x + local_54.y * local_54.y);
    if ((float)6 <= fVar2) {
      this_ptr_01 = (CPathMap *)0x0;
      if (!bVar3) {
        this_ptr_01 = (*((sim_leader->base).base.vtable._ub)->getPathMap)
                                ((CDemonActor *)sim_leader);
      }
      if (this_ptr_01 == (CPathMap *)0x0) {
        this_ptr_01 = core_path_cpp_getPathMap_FUN_00548500(&(pCVar9->base).base.location);
      }
      iVar8 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr_01,&(this_ptr->base).base.base.location.position,&local_84,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar8 != 0) {
        fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_84.y - (this_ptr->base).base.base.orient.vec.y);
        fVar4 = fVar5 * (float)0.31830988619288902 * (float)4;
        (this_ptr->base).player_input.turn_speed = fVar4;
        if (fVar4 < -0.25) {
          (this_ptr->base).player_input.turn_speed = -0.25;
        }
        if (0.25 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = 0.25;
        }
        if (((float)10 <= fVar2) || (bVar3)) {
          (this_ptr->base).player_input.action_state.run = 1;
          (this_ptr->base).player_input.action_state.walk = 1;
        }
        else {
          (this_ptr->base).player_input.action_state.walk = 1;
        }
      }
    }
    else {
      this_ptr_02 = &(this_ptr->base).base.model;
      if (bVar3) {
        if (this_ptr->guns_drawn == 0) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
        else {
          pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&this_ptr_02->motion_controller);
          if ((pSVar7->state_index != 2) && (pSVar7->state_index != 1)) {
            (this_ptr->base).player_input.action_state.fire = 1;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                  (&this_ptr_02->motion_controller);
      }
      if (bVar3) {
        pCVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_3c,&local_54);
        fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar6->y - (this_ptr->base).base.base.orient.vec.y);
        fVar2 = fVar2 * (float)0.31830988619288902 * (float)4;
        (this_ptr->base).player_input.turn_speed = fVar2;
        if (fVar2 < -0.25) {
          (this_ptr->base).player_input.turn_speed = -0.25;
        }
        if (0.25 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = 0.25;
        }
        fVar1 = (this_ptr->base).player_input.turn_speed;
        if ((((float)-0.25 < fVar1) && ((double)fVar1 < 0.25)) &&
           ((this_ptr->base).player_input.action_state.fire != 0)) {
          (this_ptr->base).player_input.turn_speed = 0.0;
        }
      }
    }
    local_78.x = (pCVar9->base).base.location.position.x -
                 (this_ptr->base).base.base.location.position.x;
    local_78.y = (pCVar9->base).base.location.position.y -
                 (this_ptr->base).base.base.location.position.y;
    local_78.z = (pCVar9->base).base.location.position.z -
                 (this_ptr->base).base.base.location.position.z;
    local_54 = local_78;
    pCVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_6c,&local_54);
    if (&local_54 != pCVar3) {
      local_54 = *pCVar3;
    }
    local_44 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (local_54.y - (this_ptr->base).base.base.orient.vec.y);
    if (0.7853982 < local_44) {
      local_44 = 0.7853982;
    }
    if (local_44 < -0.7853982) {
      local_44 = -0.7853982;
    }
    local_8c = local_44 - (this_ptr->head_look_euler).y;
    if (delta_time * (float)3.1415926535000001 < local_8c) {
      local_8c = delta_time * (float)3.1415926535000001;
    }
    if (local_8c < delta_time * (float)-3.1415926535000001) {
      local_8c = delta_time * (float)-3.1415926535000001;
    }
    (this_ptr->head_look_euler).y = (this_ptr->head_look_euler).y + local_8c;
  }
  return;
}
