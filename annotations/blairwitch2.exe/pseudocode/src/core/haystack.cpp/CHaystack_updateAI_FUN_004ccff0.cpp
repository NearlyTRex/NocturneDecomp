// Name: core_haystack.cpp_CHaystack_updateAI_FUN_004ccff0
// Address: 004ccff0
// Address Range: [[004ccff0, 004cd636]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_updateAI_FUN_004ccff0(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_haystack_cpp_CHaystack_updateAI_FUN_004ccff0(CHaystack *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  EHeroTask EVar2;
  float fVar3;
  CHero *pCVar4;
  SMotion *pSVar5;
  CPathMap *this_ptr_01;
  int iVar6;
  byte bVar7;
  float afStackY_10b4 [1007];
  float local_dc;
  CVector3f local_d8;
  CVector3f local_cc;
  float local_bc;
  CVector3f local_b4;
  CVector3f local_a8;
  CVector3f local_9c;
  float local_90;
  float local_8c [4];
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_6c;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  float local_48;
  float local_40;
  float local_3c;
  float local_30;
  CHero *local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar7 = 0;
  local_2c = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
  local_24 = 0;
  local_20 = 0.25;
  local_30 = 0.7853982;
  memset(&(this_ptr->base).player_input,0,0x34);
  if ((this_ptr->base).ai_task != HERO_TASK_STAND) {
    pCVar4 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
    local_60 = (this_ptr->base).base.base.location.position.x -
               (pCVar4->base).base.location.position.x;
    local_5c = (this_ptr->base).base.base.location.position.y -
               (pCVar4->base).base.location.position.y;
    local_58 = (this_ptr->base).base.base.location.position.z -
               (pCVar4->base).base.location.position.z;
    local_9c.x = local_60;
    *(float *)((int)&local_9c + (uint)bVar7 * -8 + 4) = local_8c[(uint)bVar7 * -2 + 0xc];
    *(float *)((int)&local_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    local_48 = SQRT(local_9c.z * local_9c.z + local_9c.x * local_9c.x + local_9c.y * local_9c.y);
    if ((((this_ptr->base).ai_task == HERO_TASK_GUARD) || (local_48 < 20.0f)) &&
       ((EVar2 = (this_ptr->base).ai_task, EVar2 == HERO_TASK_KILL || (EVar2 == HERO_TASK_GUARD))))
    {
      local_dc = 9999.9;
      pCVar4 = (CHero *)core_hero_cpp_CHero_closestEnemy_FUN_004d00c0
                                  (&this_ptr->base,&stack0xffffff24);
      if ((pCVar4 == (CHero *)0x0) || ((float)20 <= local_dc)) {
        if (this_ptr->guns_drawn != 0) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
      }
      else {
        local_2c = pCVar4;
        local_24 = 1;
      }
    }
    local_8c[2] = (local_2c->base).base.location.position.x -
                  (this_ptr->base).base.base.location.position.x;
    local_8c[3] = (local_2c->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    local_7c = (local_2c->base).base.location.position.z -
               (this_ptr->base).base.base.location.position.z;
    local_54.x = local_8c[2];
    local_8c[(uint)bVar7 * -2 + 0xf] = local_8c[(uint)bVar7 * -2 + 3];
    local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
         local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    if (&local_9c != (CVector3f *)(local_8c + 0xe)) {
      local_9c.x = local_54.x;
      local_9c.y = local_54.y;
      local_9c.z = local_54.z;
    }
    fVar1 = SQRT(local_9c.z * local_9c.z + local_9c.x * local_9c.x + local_9c.y * local_9c.y);
    local_1c = fVar1;
    if ((float)6 <= fVar1) {
      this_ptr_01 = (CPathMap *)0x0;
      if (local_24 == 0) {
        this_ptr_01 = (*((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.vtable._ub)->
                        getPathMap)((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]);
      }
      if (this_ptr_01 == (CPathMap *)0x0) {
        this_ptr_01 = core_path_cpp_getPathMap_FUN_00513ea0(&(local_2c->base).base.location);
      }
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                        (this_ptr_01,&(this_ptr->base).base.base.location.position,&local_d8,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar6 != 0) {
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                             (local_d8.y - (this_ptr->base).base.base.orient.vec.y);
        fVar3 = local_18 * 0.3183099f * (float)4;
        local_3c = -local_20;
        (this_ptr->base).player_input.turn_speed = fVar3;
        if (fVar3 < local_3c) {
          (this_ptr->base).player_input.turn_speed = local_3c;
        }
        if (local_20 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_20;
        }
        if (((float)10 <= fVar1) || (local_24 == 1)) {
          (this_ptr->base).player_input.action_state.run = 1;
          (this_ptr->base).player_input.action_state.walk = 1;
        }
        else {
          (this_ptr->base).player_input.action_state.walk = 1;
        }
      }
    }
    else {
      this_ptr_00 = &(this_ptr->base).base.model;
      if (local_24 == 1) {
        if (this_ptr->guns_drawn == 0) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
        else {
          pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                             (&this_ptr_00->base);
          if ((pSVar5->state_index != 2) && (pSVar5->state_index != 1)) {
            (this_ptr->base).player_input.action_state.fire = 1;
          }
        }
      }
      else {
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base)
        ;
        if ((pSVar5->state_index == 10) && (this_ptr->guns_drawn != 0)) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
      }
      if (local_24 == 1) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_9c,&local_b4);
        local_78 = local_b4.x;
        local_8c[(uint)bVar7 * -2 + 6] = *(float *)((int)&local_b4 + (uint)bVar7 * -8 + 4);
        local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             *(float *)((int)&local_b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                             (local_74 - (this_ptr->base).base.base.orient.vec.y);
        fVar1 = local_18 * 0.3183099f * (float)4;
        local_40 = -local_20;
        (this_ptr->base).player_input.turn_speed = fVar1;
        if (fVar1 < local_40) {
          (this_ptr->base).player_input.turn_speed = local_40;
        }
        if (local_20 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_20;
        }
        fVar1 = (this_ptr->base).player_input.turn_speed;
        if ((((float)-0.25 < fVar1) && ((double)fVar1 < 0.25)) &&
           ((this_ptr->base).player_input.action_state.fire != 0)) {
          (this_ptr->base).player_input.turn_speed = 0.0;
        }
      }
    }
    local_90 = (local_2c->base).base.location.position.x -
               (this_ptr->base).base.base.location.position.x;
    local_8c[0] = (local_2c->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    local_8c[1] = (local_2c->base).base.location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    local_a8.x = local_90;
    *(float *)((int)&local_a8 + (uint)bVar7 * -8 + 4) = local_8c[(uint)bVar7 * -2];
    *(float *)((int)&local_a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    if (&local_9c != &local_a8) {
      local_9c.x = local_a8.x;
      local_9c.y = local_a8.y;
      local_9c.z = local_a8.z;
    }
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_9c,&local_cc);
    local_6c.x = local_cc.x;
    local_8c[(uint)bVar7 * -2 + 9] = *(float *)((int)&local_cc + (uint)bVar7 * -8 + 4);
    local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         *(float *)((int)&local_cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&local_9c != (CVector3f *)(local_8c + 8)) {
      local_9c.x = local_6c.x;
      local_9c.y = local_6c.y;
      local_9c.z = local_6c.z;
    }
    local_bc = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                         (local_9c.y - (this_ptr->base).base.base.orient.vec.y);
    if (local_30 < local_bc) {
      local_bc = local_30;
    }
    if (local_bc < -local_30) {
      local_bc = -local_30;
    }
    local_28 = local_bc - (this_ptr->head_look_euler).y;
    if (delta_time * 3.141593f < local_28) {
      local_28 = delta_time * 3.141593f;
    }
    if (local_28 < delta_time * -3.141593f) {
      local_28 = delta_time * -3.141593f;
    }
    (this_ptr->head_look_euler).y = (this_ptr->head_look_euler).y + local_28;
  }
  return;
}
