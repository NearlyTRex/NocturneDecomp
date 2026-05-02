// Name: core_gabriela.cpp_CGabriella_processAI_FUN_004d4190
// Address: 004d4190
// MANUAL RECONSTRUCTION
// Address Range: [[004d4190, 004d4833]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_004d4190(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_004d4190(CGabriella *this_ptr,float delta_time)

{
  CHero *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar7;
  SMotion *pSVar3;
  CVector3f *pCVar4;
  float fVar8;
  CBoundingBox3D *pCVar5;
  CBoundingBox3D *pCVar9;
  SMotion *pSVar10;
  int iVar6;
  float fVar7;
  CEnemy *this_ptr_01;
  float local_120;
  float local_11c;
  float fStack_118;
  CBoundingBox3D CStack_114;
  CBoundingBox3D local_fc;
  CVector3f local_e4;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  CVector3f local_c0;
  float local_b4 [3];
  CVector3f CStack_a8;
  float local_9c;
  float local_98;
  float local_94;
  float local_84;
  float local_80;
  float local_7c;
  CVector3f CStack_78;
  CVector3f local_6c;
  CVector3f CStack_48;
  CDemonSet *this_ptr_00;
  EHeroTask EVar2;
  CHero *pCVar1;
  
  memset(&(this_ptr->base).player_input,0,0x2c);
  if ((this_ptr->base).ai_task != HERO_TASK_STAND) {
    pCVar1 = g_HeroActors[g_LocalHeroIndex];
    local_84 = (this_ptr->base).base.base.location.position.x -
               (pCVar1->base).base.location.position.x;
    local_80 = (this_ptr->base).base.base.location.position.y -
               (pCVar1->base).base.location.position.y;
    local_7c = (this_ptr->base).base.base.location.position.z -
               (pCVar1->base).base.location.position.z;
    local_120 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    if ((this_ptr->base).ai_task == HERO_TASK_GUARD) {
      local_120 = 0.0;
    }
    if ((float)4 <= local_120) {
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (&g_HeroActors[g_LocalHeroIndex]->path_map,
                         &(this_ptr->base).base.base.location.position,&local_c0,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar6 != 0) {
        fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_c0.y - (this_ptr->base).base.base.orient.vec.y);
        fVar8 = fVar7 * (float)0.31830988619288902 * (float)4;
        (this_ptr->base).player_input.turn_speed = fVar8;
        if (fVar8 < -0.25) {
          (this_ptr->base).player_input.turn_speed = -0.25;
        }
        if (0.25 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = 0.25;
        }
        iVar7 = g_LocalHeroIndex;
        (this_ptr->base).player_input.action_state.walk = 1;
        pCVar2 = g_HeroActors[iVar7];
        if (&local_9c != local_b4) {
          local_9c = (this_ptr->base).base.base.location.position.x -
                     (pCVar2->base).base.location.position.x;
          local_98 = (this_ptr->base).base.base.location.position.y -
                     (pCVar2->base).base.location.position.y;
          local_94 = (this_ptr->base).base.base.location.position.z -
                     (pCVar2->base).base.location.position.z;
        }
        if ((float)10 <
            SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98)) {
          (this_ptr->base).player_input.action_state.run = 1;
          return;
        }
      }
    }
    else {
      local_11c = 9999.9;
      EVar2 = (this_ptr->base).ai_task;
      this_ptr_01 = (CEnemy *)0x0;
      if ((EVar2 == HERO_TASK_KILL) || (EVar2 == HERO_TASK_GUARD)) {
        this_ptr_01 = core_hero_cpp_CHero_closestEnemy_FUN_004f3960(&this_ptr->base,&local_11c);
      }
      if ((this_ptr_01 == (CEnemy *)0x0) || ((float)30 <= local_11c)) {
        if (this_ptr->weapon_state_flags != 0) {
          pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&(this_ptr->base).base.model.motion_controller);
          if (pSVar10->state_index == 0) {
            (this_ptr->base).player_input.action_state.draw = 1;
            return;
          }
        }
      }
      else {
        if (this_ptr->weapon_state_flags == 0) {
          pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&(this_ptr->base).base.model.motion_controller);
          if (pSVar3->state_index == 0) {
            (this_ptr->base).player_input.action_state.draw = 1;
          }
        }
        local_6c.x = (this_ptr_01->base).base.location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        local_6c.y = (this_ptr_01->base).base.location.position.y -
                     (this_ptr->base).base.base.location.position.y;
        local_6c.z = (this_ptr_01->base).base.location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        pCVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_e4,&local_6c);
        fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar4->y - (this_ptr->base).base.base.orient.vec.y);
        fVar8 = fVar8 * (float)0.31830988619288902 * (float)4;
        (this_ptr->base).player_input.turn_speed = fVar8;
        if (fVar8 < -0.25) {
          (this_ptr->base).player_input.turn_speed = -0.25;
        }
        if (0.25 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = 0.25;
        }
        fVar8 = (this_ptr->base).player_input.turn_speed;
        if (((float)-0.050000000000000003 < fVar8) && ((double)fVar8 < 0.050000000000000003)) {
          pCVar5 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                             ((CDemonActor *)this_ptr,&local_fc);
          CStack_78.x = (this_ptr->base).base.base.location.position.x +
                        ((pCVar5->min).x + (pCVar5->max).x) * 0.5f;
          CStack_78.y = (this_ptr->base).base.base.location.position.y +
                        ((pCVar5->min).y + (pCVar5->max).y) * 0.5f;
          CStack_78.z = (this_ptr->base).base.base.location.position.z +
                        ((pCVar5->min).z + (pCVar5->max).z) * 0.5f;
          pCVar9 = (*((this_ptr_01->base).base.vtable._ub)->getBoundingBox)
                             ((CDemonActor *)this_ptr_01,&CStack_114);
          CStack_48.x = (this_ptr_01->base).base.location.position.x +
                        ((pCVar9->min).x + (pCVar9->max).x) * 0.5f;
          CStack_48.y = (this_ptr_01->base).base.location.position.y +
                        ((pCVar9->min).y + (pCVar9->max).y) * 0.5f;
          fVar8 = CStack_48.x - CStack_78.x;
          fVar3 = CStack_48.y - CStack_78.y;
          CStack_48.z = (this_ptr_01->base).base.location.position.z +
                        ((pCVar9->min).z + (pCVar9->max).z) * 0.5f;
          fVar4 = CStack_48.z - CStack_78.z;
          fStack_118 = SQRT(fVar4 * fVar4 + fVar8 * fVar8 + fVar3 * fVar3);
          if (fStack_118 <= 0.0) {
            fStack_c8 = 0.0;
            fStack_cc = 0.0;
            fStack_c4 = 0.0;
          }
          else {
            fVar5 = 1.0 / fStack_118;
            fStack_cc = fVar8 * fVar5;
            fStack_c8 = fVar3 * fVar5;
            fStack_c4 = fVar4 * fVar5;
          }
          CStack_a8.x = CStack_48.x + fStack_cc * 3.0f;
          CStack_a8.y = CStack_48.y + fStack_c8 * 3.0f;
          CStack_a8.z = CStack_48.z + fStack_c4 * 3.0f;
          if (&CStack_48 != &CStack_a8) {
            CStack_48.x = CStack_a8.x;
            CStack_48.y = CStack_a8.y;
            CStack_48.z = CStack_a8.z;
          }
          core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
          this_ptr_00 = g_CDemonSetPtr;
          g_CDemonSetPtr->collision_actor = (CDemonActor *)0x0;
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(this_ptr_00,&CStack_78,&CStack_48);
          core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
          if (this_ptr_01 == (CEnemy *)g_CDemonSetPtr->collision_actor) {
            (this_ptr->base).player_input.action_state.fire = 1;
            return;
          }
        }
      }
    }
  }
  return;
}
