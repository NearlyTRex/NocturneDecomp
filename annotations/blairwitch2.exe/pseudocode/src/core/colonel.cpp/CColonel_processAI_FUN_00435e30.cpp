// Name: core_colonel.cpp_CColonel_processAI_FUN_00435e30
// Address: 00435e30
// Address Range: [[00435e30, 00436417]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_processAI_FUN_00435e30(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_colonel_cpp_CColonel_processAI_FUN_00435e30(CColonel *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  EHeroTask EVar2;
  CEnemy *pCVar3;
  SMotion *pSVar4;
  CPathMap *this_ptr_01;
  int iVar5;
  byte bVar6;
  float afStackY_10b4 [1007];
  float local_e0;
  float local_dc;
  CVector3f local_d8;
  float local_cc;
  float local_c8 [2];
  CVector3f local_c0;
  float local_b0;
  float local_a8;
  float local_a4 [5];
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  float local_60;
  float local_5c [2];
  CVector3f local_54;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_2c;
  CEnemy *local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar6 = 0;
  local_28 = *(CEnemy **)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_24 = 0;
  local_1c = 0.25;
  local_2c = 0.7853982;
  memset(&(this_ptr->base).player_input,0,0x34);
  if ((this_ptr->base).ai_task != HERO_TASK_STAND) {
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_a8 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar5 + 0x20);
    local_a4[0] = (this_ptr->base).base.base.location.position.y - *(float *)(iVar5 + 0x24);
    local_a4[1] = (this_ptr->base).base.base.location.position.z - *(float *)(iVar5 + 0x28);
    local_84.x = local_a8;
    *(float *)((int)&local_84 + (uint)bVar6 * -8 + 4) = local_a4[(uint)bVar6 * -2];
    *(float *)((int)&local_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         local_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    local_44 = SQRT(local_84.z * local_84.z + local_84.x * local_84.x + local_84.y * local_84.y);
    if (((((this_ptr->base).ai_task == HERO_TASK_GUARD) || (local_44 < _DAT_005cdbf1)) &&
        ((EVar2 = (this_ptr->base).ai_task, EVar2 == HERO_TASK_KILL || (EVar2 == HERO_TASK_GUARD))))
       && ((pCVar3 = core_hero_cpp_CHero_closestEnemy_FUN_004d00c0(&this_ptr->base,&stack0xffffff20)
           , pCVar3 != (CEnemy *)0x0 && (local_e0 < (float)_DAT_005cdbf5)))) {
      local_28 = pCVar3;
      local_24 = 1;
    }
    local_cc = (local_28->base).base.location.position.x -
               (this_ptr->base).base.base.location.position.x;
    local_c8[0] = (local_28->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    local_c8[1] = (local_28->base).base.location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    local_6c.x = local_cc;
    *(float *)((int)&local_6c + (uint)bVar6 * -8 + 4) = local_c8[(uint)bVar6 * -2];
    *(float *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         local_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    if (&local_84 != &local_6c) {
      local_84.x = local_6c.x;
      local_84.y = local_6c.y;
      local_84.z = local_6c.z;
    }
    local_48 = SQRT(local_84.z * local_84.z + local_84.x * local_84.x + local_84.y * local_84.y);
    local_dc = local_48;
    if ((float)_DAT_005cdbfd <= local_48) {
      this_ptr_01 = (CPathMap *)0x0;
      if (local_24 == 0) {
        iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        this_ptr_01 = (CPathMap *)(**(code **)(*(int *)(iVar5 + 0x2b0) + 0xcc))(iVar5);
      }
      if (this_ptr_01 == (CPathMap *)0x0) {
        this_ptr_01 = core_path_cpp_getPathMap_FUN_00513ea0(&(local_28->base).base.location);
      }
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                        (this_ptr_01,&(this_ptr->base).base.base.location.position,&local_d8,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar5 != 0) {
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                             (local_d8.y - (this_ptr->base).base.base.orient.vec.y);
        fVar1 = local_18 * _DAT_005cdc05 * (float)_DAT_005cdc0d;
        local_38 = -local_1c;
        (this_ptr->base).player_input.turn_speed = fVar1;
        if (fVar1 < local_38) {
          (this_ptr->base).player_input.turn_speed = local_38;
        }
        if (local_1c < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_1c;
        }
        if (((float)_DAT_005cdc15 <= local_dc) || (local_24 == 1)) {
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
          pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                             (&this_ptr_00->base);
          if ((pSVar4->state_index != 2) && (pSVar4->state_index != 1)) {
            (this_ptr->base).player_input.action_state.fire = 1;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
      }
      if (local_24 == 1) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_84,&local_c0);
        local_a4[2] = local_c0.x;
        local_a4[(uint)bVar6 * -2 + 3] = *(float *)((int)&local_c0 + (uint)bVar6 * -8 + 4);
        local_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             *(float *)((int)&local_c0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                             (local_a4[3] - (this_ptr->base).base.base.orient.vec.y);
        fVar1 = local_18 * _DAT_005cdc05 * (float)_DAT_005cdc0d;
        local_40 = -local_1c;
        (this_ptr->base).player_input.turn_speed = fVar1;
        if (fVar1 < local_40) {
          (this_ptr->base).player_input.turn_speed = local_40;
        }
        if (local_1c < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_1c;
        }
        fVar1 = (this_ptr->base).player_input.turn_speed;
        if ((((float)_DAT_005cdc1d < fVar1) && ((double)fVar1 < _DAT_005cdc25)) &&
           ((this_ptr->base).player_input.action_state.fire != 0)) {
          (this_ptr->base).player_input.turn_speed = 0.0;
        }
      }
    }
    local_60 = (local_28->base).base.location.position.x -
               (this_ptr->base).base.base.location.position.x;
    local_5c[0] = (local_28->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    local_5c[1] = (local_28->base).base.location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    local_90.x = local_60;
    local_a4[(uint)bVar6 * -2 + 6] = local_5c[(uint)bVar6 * -2];
    local_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         local_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    if (&local_84 != (CVector3f *)(local_a4 + 5)) {
      local_84.x = local_90.x;
      local_84.y = local_90.y;
      local_84.z = local_90.z;
    }
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_84,&local_54);
    local_78.x = local_54.x;
    *(uint *)((int)&local_78 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_54 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&local_78 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    if (&local_84 != &local_78) {
      local_84.x = local_78.x;
      local_84.y = local_78.y;
      local_84.z = local_78.z;
    }
    local_b0 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                         (local_84.y - (this_ptr->base).base.base.orient.vec.y);
    if (local_2c < local_b0) {
      local_b0 = local_2c;
    }
    if (local_b0 < -local_2c) {
      local_b0 = -local_2c;
    }
    local_20 = local_b0 - (this_ptr->head_look_euler).y;
    if (delta_time * _DAT_005cdc2d < local_20) {
      local_20 = delta_time * _DAT_005cdc2d;
    }
    if (local_20 < delta_time * _DAT_005cdc31) {
      local_20 = delta_time * _DAT_005cdc31;
    }
    (this_ptr->head_look_euler).y = (this_ptr->head_look_euler).y + local_20;
  }
  return;
}
