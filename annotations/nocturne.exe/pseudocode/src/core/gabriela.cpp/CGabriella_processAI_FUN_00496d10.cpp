// Name: core_gabriela.cpp_CGabriella_processAI_FUN_00496d10
// Address: 00496d10
// Address Range: [[00496d10, 004973b3]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_00496d10(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_00496d10(CGabriella *this_ptr,float delta_time)

{
  EHeroTask EVar1;
  char (*pacVar2) [40];
  CDemonSet *pCVar3;
  SMotion *pSVar4;
  int iVar5;
  CBoundingBox3D *pCVar6;
  float *pfVar7;
  float fVar8;
  int iVar9;
  float local_120;
  float local_11c;
  float fStack_118;
  byte auStack_114 [24];
  CBoundingBox3D local_fc;
  byte local_e4 [12];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  CVector3f local_c0;
  float local_b4 [3];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
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
    iVar9 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    local_84 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar9 + 0x20);
    local_80 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar9 + 0x24);
    local_7c = (this_ptr->base).base.base.location.position.z - *(float *)(iVar9 + 0x28);
    local_120 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    if ((this_ptr->base).ai_task == HERO_TASK_GUARD) {
      local_120 = 0.0;
    }
    if ((float)4 <= local_120) {
      iVar9 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                        ((CPathMap *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0xbcc0),
                         &(this_ptr->base).base.base.location.position,&local_c0,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar9 != 0) {
        fVar8 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_c0.y - (this_ptr->base).base.base.orient.vec.y);
        fVar8 = fVar8 * (float)0.31830988619288902 * (float)4;
        (this_ptr->base).player_input.turn_speed = fVar8;
        if (fVar8 < -local_1c) {
          (this_ptr->base).player_input.turn_speed = -local_1c;
        }
        if (local_1c < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_1c;
        }
        iVar9 = _DAT_01cae0e8;
        (this_ptr->base).player_input.action_state.walk = 1;
        iVar9 = *(int *)(iVar9 * 4 + 0x1cae0d8);
        if (&local_9c != local_b4) {
          local_9c = (this_ptr->base).base.base.location.position.x - *(float *)(iVar9 + 0x20);
          local_98 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar9 + 0x24);
          local_94 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar9 + 0x28);
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
      EVar1 = (this_ptr->base).ai_task;
      iVar9 = 0;
      if ((EVar1 == HERO_TASK_KILL) || (EVar1 == HERO_TASK_GUARD)) {
        iVar9 = core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(this_ptr,&local_11c);
      }
      if ((iVar9 == 0) || ((float)30 <= local_11c)) {
        if (this_ptr->weapon_state_flags != 0) {
          pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                             (&(this_ptr->base).base.model.motion_controller);
          if (pSVar4->state_index == 0) {
            (this_ptr->base).player_input.action_state.draw = 1;
            return;
          }
        }
      }
      else {
        if (this_ptr->weapon_state_flags == 0) {
          pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                             (&(this_ptr->base).base.model.motion_controller);
          if (pSVar4->state_index == 0) {
            (this_ptr->base).player_input.action_state.draw = 1;
          }
        }
        local_6c = *(float *)(iVar9 + 0x20) - (this_ptr->base).base.base.location.position.x;
        local_68 = *(float *)(iVar9 + 0x24) - (this_ptr->base).base.base.location.position.y;
        local_64 = *(float *)(iVar9 + 0x28) - (this_ptr->base).base.base.location.position.z;
        iVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_e4,&local_6c)
        ;
        local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                    (*(float *)(iVar5 + 4) - (this_ptr->base).base.base.orient.vec.y
                                    );
        fVar8 = local_18 * (float)0.31830988619288902 * (float)4;
        local_24 = -local_1c;
        (this_ptr->base).player_input.turn_speed = fVar8;
        if (fVar8 < local_24) {
          (this_ptr->base).player_input.turn_speed = local_24;
        }
        if (local_1c < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_1c;
        }
        fVar8 = (this_ptr->base).player_input.turn_speed;
        if (((float)-0.050000000000000003 < fVar8) && ((double)fVar8 < 0.050000000000000003)) {
          pCVar6 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                             ((CDemonActor *)this_ptr,&local_fc);
          fStack_d8 = (pCVar6->min).x + (pCVar6->max).x;
          fStack_d4 = (pCVar6->min).y + (pCVar6->max).y;
          fStack_54 = fStack_d8 * 0.5f;
          fStack_d0 = (pCVar6->min).z + (pCVar6->max).z;
          fStack_50 = fStack_d4 * 0.5f;
          fStack_4c = fStack_d0 * 0.5f;
          fStack_78 = (this_ptr->base).base.base.location.position.x + fStack_54;
          fStack_74 = (this_ptr->base).base.base.location.position.y + fStack_50;
          fStack_70 = (this_ptr->base).base.base.location.position.z + fStack_4c;
          pfVar7 = (float *)(**(code **)(*(int *)(iVar9 + 0x14c) + 0x14))(iVar9,auStack_114);
          fStack_30 = *pfVar7 + pfVar7[3];
          fStack_2c = pfVar7[1] + pfVar7[4];
          fStack_60 = fStack_30 * 0.5f;
          fStack_28 = pfVar7[2] + pfVar7[5];
          fStack_5c = fStack_2c * 0.5f;
          fStack_58 = fStack_28 * 0.5f;
          fStack_48 = *(float *)(iVar9 + 0x20) + fStack_60;
          fStack_44 = *(float *)(iVar9 + 0x24) + fStack_5c;
          fStack_cc = fStack_48 - fStack_78;
          fStack_c8 = fStack_44 - fStack_74;
          fStack_40 = *(float *)(iVar9 + 0x28) + fStack_58;
          fStack_c4 = fStack_40 - fStack_70;
          fStack_118 = SQRT(fStack_c4 * fStack_c4 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8);
          if (fStack_118 <= 0.0) {
            fStack_c8 = 0.0;
            fStack_cc = 0.0;
            fStack_c4 = 0.0;
          }
          else {
            fVar8 = 1.0 / fStack_118;
            fStack_cc = fStack_cc * fVar8;
            fStack_c8 = fStack_c8 * fVar8;
            fStack_c4 = fStack_c4 * fVar8;
          }
          fStack_3c = fStack_cc * 3.0f;
          fStack_38 = fStack_c8 * 3.0f;
          fStack_34 = fStack_c4 * 3.0f;
          fStack_a8 = fStack_48 + fStack_3c;
          fStack_a4 = fStack_44 + fStack_38;
          fStack_a0 = fStack_40 + fStack_34;
          if (&fStack_48 != &fStack_a8) {
            fStack_48 = fStack_a8;
            fStack_44 = fStack_a4;
            fStack_40 = fStack_a0;
          }
          core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)this_ptr);
          pCVar3 = 0x01E57284;
          pacVar2 = 0x01E57284->lights[199].filter_names;
          *(char *)((int)(pacVar2 + 0x13) + 0x18) = '\0';
          *(char *)((int)(pacVar2 + 0x13) + 0x19) = '\0';
          *(char *)((int)(pacVar2 + 0x13) + 0x1a) = '\0';
          *(char *)((int)(pacVar2 + 0x13) + 0x1b) = '\0';
          core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(pCVar3,&fStack_78,&fStack_48);
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
          if (iVar9 == *(int *)(0x01E57284->lights[199].filter_names[0x13] + 0x18)) {
            (this_ptr->base).player_input.action_state.fire = 1;
            return;
          }
        }
      }
    }
  }
  return;
}
