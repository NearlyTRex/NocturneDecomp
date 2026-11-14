// Name: core_haystack.cpp_CHaystack_updateAI_FUN_004e98b0
// Address: 004e98b0
// Address Range: [[004e98b0, 004e9ef6]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_updateAI_FUN_004e98b0(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_haystack_cpp_CHaystack_updateAI_FUN_004e98b0(CHaystack *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  EHeroTask EVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  CPathMap *this_ptr_01;
  byte bVar6;
  float afStackY_10b4 [1007];
  float local_dc;
  CVector3f local_d8;
  float local_cc;
  float afStack_c8 [5];
  uint local_b4;
  float afStack_b0 [4];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  uint local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_30;
  int local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar6 = 0;
  local_2c = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_24 = 0;
  local_20 = 0.25;
  local_30 = 0.7853982;
  memset(&(this_ptr->base).player_input,0,0x30);
  if ((this_ptr->base).ai_task != HERO_TASK_STAND) {
    iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    local_60 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar4 + 0x20);
    local_5c = (this_ptr->base).base.base.location.position.y - *(float *)(iVar4 + 0x24);
    local_58 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar4 + 0x28);
    local_9c = local_60;
    afStack_b0[(uint)bVar6 * -2 + 6] = afStack_b0[(uint)bVar6 * -2 + 0x15];
    afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
    local_48 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
    if ((((this_ptr->base).ai_task == HERO_TASK_GUARD) || (local_48 < _DAT_005e4543)) &&
       ((EVar2 = (this_ptr->base).ai_task, EVar2 == HERO_TASK_KILL || (EVar2 == HERO_TASK_GUARD))))
    {
      local_dc = 9999.9;
      iVar4 = core_hero_cpp_FUN_004ec350(this_ptr,&stack0xffffff24);
      if ((iVar4 == 0) || ((float)_DAT_005e4547 <= local_dc)) {
        if (this_ptr->guns_drawn != 0) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
      }
      else {
        local_2c = iVar4;
        local_24 = 1;
      }
    }
    local_84 = *(float *)(local_2c + 0x20) - (this_ptr->base).base.base.location.position.x;
    local_80 = *(float *)(local_2c + 0x24) - (this_ptr->base).base.base.location.position.y;
    local_7c = *(float *)(local_2c + 0x28) - (this_ptr->base).base.base.location.position.z;
    local_54 = local_84;
    afStack_b0[(uint)bVar6 * -2 + 0x18] = afStack_b0[(uint)bVar6 * -2 + 0xc];
    afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
         afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    if (afStack_b0 + 5 != afStack_b0 + 0x17) {
      local_9c = local_54;
      local_98 = local_50;
      local_94 = local_4c;
    }
    fVar1 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
    local_1c = fVar1;
    if ((float)_DAT_005e454f <= fVar1) {
      this_ptr_01 = (CPathMap *)0x0;
      if (local_24 == 0) {
        iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        this_ptr_01 = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))(iVar4);
      }
      if (this_ptr_01 == (CPathMap *)0x0) {
        this_ptr_01 = core_path_cpp_getPathMap_FUN_005351f0((CLocation *)(local_2c + 0x20));
      }
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                        (this_ptr_01,&(this_ptr->base).base.base.location.position,&local_d8,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar4 != 0) {
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                             (local_d8.y - (this_ptr->base).base.base.orient.vec.y);
        fVar3 = local_18 * _DAT_005e4557 * (float)_DAT_005e455f;
        local_3c = -local_20;
        (this_ptr->base).player_input.turn_speed = fVar3;
        if (fVar3 < local_3c) {
          (this_ptr->base).player_input.turn_speed = local_3c;
        }
        if (local_20 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_20;
        }
        if (((float)_DAT_005e4567 <= fVar1) || (local_24 == 1)) {
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
          pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             (&this_ptr_00->base);
          if ((pSVar5->state_index != 2) && (pSVar5->state_index != 1)) {
            (this_ptr->base).player_input.action_state.fire = 1;
          }
        }
      }
      else {
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base)
        ;
        if ((pSVar5->state_index == 10) && (this_ptr->guns_drawn != 0)) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
      }
      if (local_24 == 1) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_b0 + 5);
        local_78 = local_b4;
        afStack_b0[(uint)bVar6 * -2 + 0xf] = afStack_b0[(uint)bVar6 * -2];
        afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
             afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                             (local_74 - (this_ptr->base).base.base.orient.vec.y);
        fVar1 = local_18 * _DAT_005e4557 * (float)_DAT_005e455f;
        local_40 = -local_20;
        (this_ptr->base).player_input.turn_speed = fVar1;
        if (fVar1 < local_40) {
          (this_ptr->base).player_input.turn_speed = local_40;
        }
        if (local_20 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_20;
        }
        fVar1 = (this_ptr->base).player_input.turn_speed;
        if ((((float)_DAT_005e456f < fVar1) && ((double)fVar1 < _DAT_005e4577)) &&
           ((this_ptr->base).player_input.action_state.fire != 0)) {
          (this_ptr->base).player_input.turn_speed = 0.0;
        }
      }
    }
    local_90 = *(float *)(local_2c + 0x20) - (this_ptr->base).base.base.location.position.x;
    local_8c = *(float *)(local_2c + 0x24) - (this_ptr->base).base.base.location.position.y;
    local_88 = *(float *)(local_2c + 0x28) - (this_ptr->base).base.base.location.position.z;
    afStack_b0[2] = local_90;
    afStack_b0[(uint)bVar6 * -2 + 3] = afStack_b0[(uint)bVar6 * -2 + 9];
    afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    if (afStack_b0 + 5 != afStack_b0 + 2) {
      local_9c = afStack_b0[2];
      local_98 = afStack_b0[3];
      local_94 = local_a0;
    }
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_b0 + 5);
    local_6c = local_cc;
    afStack_b0[(uint)bVar6 * -2 + 0x12] = afStack_c8[(uint)bVar6 * -2];
    afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
         afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    if (afStack_b0 + 5 != afStack_b0 + 0x11) {
      local_9c = local_6c;
      local_98 = local_68;
      local_94 = local_64;
    }
    afStack_c8[3] =
         core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                   (local_98 - (this_ptr->base).base.base.orient.vec.y);
    if (local_30 < afStack_c8[3]) {
      afStack_c8[3] = local_30;
    }
    if (afStack_c8[3] < -local_30) {
      afStack_c8[3] = -local_30;
    }
    local_28 = afStack_c8[3] - (this_ptr->head_look_euler).y;
    if (delta_time * _DAT_005e457f < local_28) {
      local_28 = delta_time * _DAT_005e457f;
    }
    if (local_28 < delta_time * _DAT_005e4583) {
      local_28 = delta_time * _DAT_005e4583;
    }
    (this_ptr->head_look_euler).y = (this_ptr->head_look_euler).y + local_28;
  }
  return;
}
