// Name: core_gabriela.cpp_CGabriella_processAI_FUN_00496d10
// Address: 00496d10
// Address Range: [[00496d10, 004973b3]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_00496d10(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_00496d10(CGabriella *this_ptr,float delta_time)

{
  CHero *pCVar1;
  EHeroTask EVar2;
  CDemonSet *this_ptr_00;
  SMotion *pSVar3;
  CVector3f *pCVar4;
  CBoundingBox3D *pCVar5;
  int iVar6;
  float fVar7;
  CEnemy *this_ptr_01;
  float local_120;
  float local_11c;
  float fStack_118;
  CBoundingBox3D CStack_114;
  CBoundingBox3D local_fc;
  CVector3f local_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
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
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_1c;
  float local_18;
  
  local_1c = 0.25;
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
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                        (&g_HeroActors[g_LocalHeroIndex]->path_map,
                         &(this_ptr->base).base.base.location.position,&local_c0,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar6 != 0) {
        fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                          (local_c0.y - (this_ptr->base).base.base.orient.vec.y);
        fVar7 = fVar7 * (float)0.31830988619288902 * (float)4;
        (this_ptr->base).player_input.turn_speed = fVar7;
        if (fVar7 < -local_1c) {
          (this_ptr->base).player_input.turn_speed = -local_1c;
        }
        if (local_1c < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_1c;
        }
        iVar6 = g_LocalHeroIndex;
        (this_ptr->base).player_input.action_state.walk = 1;
        pCVar1 = g_HeroActors[iVar6];
        if (&local_9c != local_b4) {
          local_9c = (this_ptr->base).base.base.location.position.x -
                     (pCVar1->base).base.location.position.x;
          local_98 = (this_ptr->base).base.base.location.position.y -
                     (pCVar1->base).base.location.position.y;
          local_94 = (this_ptr->base).base.base.location.position.z -
                     (pCVar1->base).base.location.position.z;
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
        this_ptr_01 = core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(&this_ptr->base,&local_11c);
      }
      if ((this_ptr_01 == (CEnemy *)0x0) || ((float)30 <= local_11c)) {
        if (this_ptr->weapon_state_flags != 0) {
          pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                             (&(this_ptr->base).base.model.motion_controller);
          if (pSVar3->state_index == 0) {
            (this_ptr->base).player_input.action_state.draw = 1;
            return;
          }
        }
      }
      else {
        if (this_ptr->weapon_state_flags == 0) {
          pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
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
        pCVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                           (&local_e4,&local_6c);
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                             (pCVar4->y - (this_ptr->base).base.base.orient.vec.y);
        fVar7 = local_18 * (float)0.31830988619288902 * (float)4;
        local_24 = -local_1c;
        (this_ptr->base).player_input.turn_speed = fVar7;
        if (fVar7 < local_24) {
          (this_ptr->base).player_input.turn_speed = local_24;
        }
        if (local_1c < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_1c;
        }
        fVar7 = (this_ptr->base).player_input.turn_speed;
        if (((float)-0.050000000000000003 < fVar7) && ((double)fVar7 < 0.050000000000000003)) {
          pCVar5 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                             ((CDemonActor *)this_ptr,&local_fc);
          fStack_d8 = (pCVar5->min).x + (pCVar5->max).x;
          fStack_d4 = (pCVar5->min).y + (pCVar5->max).y;
          fStack_54 = fStack_d8 * 0.5f;
          fStack_d0 = (pCVar5->min).z + (pCVar5->max).z;
          fStack_50 = fStack_d4 * 0.5f;
          fStack_4c = fStack_d0 * 0.5f;
          CStack_78.x = (this_ptr->base).base.base.location.position.x + fStack_54;
          CStack_78.y = (this_ptr->base).base.base.location.position.y + fStack_50;
          CStack_78.z = (this_ptr->base).base.base.location.position.z + fStack_4c;
          pCVar5 = (*((this_ptr_01->base).base.vtable._ub)->getBoundingBox)
                             ((CDemonActor *)this_ptr_01,&CStack_114);
          fStack_30 = (pCVar5->min).x + (pCVar5->max).x;
          fStack_2c = (pCVar5->min).y + (pCVar5->max).y;
          fStack_60 = fStack_30 * 0.5f;
          fStack_28 = (pCVar5->min).z + (pCVar5->max).z;
          fStack_5c = fStack_2c * 0.5f;
          fStack_58 = fStack_28 * 0.5f;
          CStack_48.x = (this_ptr_01->base).base.location.position.x + fStack_60;
          CStack_48.y = (this_ptr_01->base).base.location.position.y + fStack_5c;
          fStack_cc = CStack_48.x - CStack_78.x;
          fStack_c8 = CStack_48.y - CStack_78.y;
          CStack_48.z = (this_ptr_01->base).base.location.position.z + fStack_58;
          fStack_c4 = CStack_48.z - CStack_78.z;
          fStack_118 = SQRT(fStack_c4 * fStack_c4 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8);
          if (fStack_118 <= 0.0) {
            fStack_c8 = 0.0;
            fStack_cc = 0.0;
            fStack_c4 = 0.0;
          }
          else {
            fVar7 = 1.0 / fStack_118;
            fStack_cc = fStack_cc * fVar7;
            fStack_c8 = fStack_c8 * fVar7;
            fStack_c4 = fStack_c4 * fVar7;
          }
          fStack_3c = fStack_cc * 3.0f;
          fStack_38 = fStack_c8 * 3.0f;
          fStack_34 = fStack_c4 * 3.0f;
          CStack_a8.x = CStack_48.x + fStack_3c;
          CStack_a8.y = CStack_48.y + fStack_38;
          CStack_a8.z = CStack_48.z + fStack_34;
          if (&CStack_48 != &CStack_a8) {
            CStack_48.x = CStack_a8.x;
            CStack_48.y = CStack_a8.y;
            CStack_48.z = CStack_a8.z;
          }
          core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(g_CDemonSet_PTR_005be368,1);
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (g_CDemonSet_PTR_005be368,(CDemonActor *)this_ptr);
          this_ptr_00 = g_CDemonSet_PTR_005be368;
          g_CDemonSet_PTR_005be368->collision_actor = (CDemonActor *)0x0;
          core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(this_ptr_00,&CStack_78,&CStack_48);
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
          if (this_ptr_01 == (CEnemy *)g_CDemonSet_PTR_005be368->collision_actor) {
            (this_ptr->base).player_input.action_state.fire = 1;
            return;
          }
        }
      }
    }
  }
  return;
}
