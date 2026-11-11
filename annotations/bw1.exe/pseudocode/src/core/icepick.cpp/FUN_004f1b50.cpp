// Name: core_icepick.cpp_FUN_004f1b50
// Address: 004f1b50
// Address Range: [[004f1b50, 004f2326]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_FUN_004f1b50(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_FUN_004f1b50(CIcePick *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  EHeroTask EVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  uint uVar6;
  CPathMap *this_ptr_01;
  byte bVar7;
  float afStackY_10c4 [1009];
  float local_dc;
  float local_d8;
  float local_d4;
  CVector3f CStack_d0;
  float fStack_c0;
  uint uStack_b8;
  float afStack_b4 [5];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  float local_38;
  float local_34;
  int local_30;
  float fStack_2c;
  int local_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float fStack_14;
  
  bVar7 = 0;
  local_30 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_28 = 0;
  local_24 = 0.25;
  local_34 = 0.7853982;
  memset(&(this_ptr->base).player_input,0,0x30);
  if ((this_ptr->base).ai_task != HERO_TASK_STAND) {
    iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    local_88 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar4 + 0x20);
    local_84 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar4 + 0x24);
    local_80 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar4 + 0x28);
    local_dc = local_88;
    (&stack0xffffff28)[(uint)bVar7 * 0xfffffffe] = afStack_b4[(uint)bVar7 * -2 + 0xc];
    afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -8] =
         afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    local_1c = SQRT(local_d4 * local_d4 + local_dc * local_dc + local_d8 * local_d8);
    if ((this_ptr->base).ai_task == HERO_TASK_GUARD) {
      local_1c = 0.0;
    }
    iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    local_38 = 20.0;
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x148))(iVar4);
    if (iVar4 != 0) {
      local_38 = 30.0;
    }
    if ((local_1c < local_38) &&
       ((EVar2 = (this_ptr->base).ai_task, EVar2 == HERO_TASK_KILL || (EVar2 == HERO_TASK_GUARD))))
    {
      fStack_4c = 9999.9;
      iVar4 = core_hero_cpp_FUN_004ec350(this_ptr,afStack_b4 + 0x1a);
      if ((iVar4 == 0) || (local_38 <= fStack_4c)) {
        if (this_ptr->guns_drawn != 0) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
      }
      else {
        local_30 = iVar4;
        local_28 = 1;
      }
    }
    fStack_58 = *(float *)(local_30 + 0x20) - (this_ptr->base).base.base.location.position.x;
    fStack_54 = *(float *)(local_30 + 0x24) - (this_ptr->base).base.base.location.position.y;
    fStack_50 = *(float *)(local_30 + 0x28) - (this_ptr->base).base.base.location.position.z;
    fStack_a0 = fStack_58;
    afStack_b4[(uint)bVar7 * -2 + 6] = afStack_b4[(uint)bVar7 * -2 + 0x18];
    afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
    if (&stack0xffffff24 != afStack_b4 + 5) {
      local_dc = fStack_a0;
      local_d8 = fStack_9c;
      local_d4 = fStack_98;
    }
    fVar1 = SQRT(local_d4 * local_d4 + local_dc * local_dc + local_d8 * local_d8);
    (this_ptr->base).base.turn_angle_accumulator = 0.0;
    fStack_20 = fVar1;
    if ((float)_DAT_005e5417 <= fVar1) {
      this_ptr_01 = (CPathMap *)0x0;
      if (local_28 == 0) {
        iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        this_ptr_01 = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))(iVar4);
        iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x148))(iVar4);
        if ((iVar4 == 0) &&
           (uVar6 = core_charactr_cpp_FUN_00434c60(this_ptr,delta_time), uVar6 != 0)) {
          if (uVar6 < 2) {
            (this_ptr->base).player_input.action_state.walk = 1;
          }
          else if (uVar6 == 2) {
            (this_ptr->base).player_input.action_state.run = 1;
            (this_ptr->base).player_input.action_state.walk = 1;
          }
        }
      }
      else {
        (this_ptr->base).base.hero_proximity_timer = 0.0;
      }
      if (this_ptr_01 == (CPathMap *)0x0) {
        this_ptr_01 = core_path_cpp_getPathMap_FUN_005351f0((CLocation *)(local_30 + 0x20));
      }
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                        (this_ptr_01,&(this_ptr->base).base.base.location.position,&CStack_d0,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar4 != 0) {
        fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                     (CStack_d0.y - (this_ptr->base).base.base.orient.vec.y);
        fVar3 = fStack_14 * _DAT_005e541f * (float)_DAT_005e5427;
        fStack_3c = -local_24;
        (this_ptr->base).player_input.turn_speed = fVar3;
        if (fVar3 < fStack_3c) {
          (this_ptr->base).player_input.turn_speed = fStack_3c;
        }
        if (local_24 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_24;
        }
        if (((float)_DAT_005e542f <= fVar1) || (local_28 == 1)) {
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
      if (local_28 == 1) {
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
        (this_ptr->base).base.hero_proximity_timer = 0.0;
      }
      else {
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base)
        ;
        if ((pSVar5->state_index == 10) && (this_ptr->guns_drawn != 0)) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
        iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x148))(iVar4);
        if ((iVar4 == 0) &&
           (uVar6 = core_charactr_cpp_FUN_00434c60(this_ptr,delta_time), uVar6 != 0)) {
          if (uVar6 < 2) {
            (this_ptr->base).player_input.action_state.walk = 1;
          }
          else if (uVar6 == 2) {
            (this_ptr->base).player_input.action_state.run = 1;
            (this_ptr->base).player_input.action_state.walk = 1;
          }
        }
      }
      if (local_28 == 1) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff24);
        uStack_64 = uStack_b8;
        afStack_b4[(uint)bVar7 * -2 + 0x15] = afStack_b4[(uint)bVar7 * -2];
        afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
             afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                     (fStack_60 - (this_ptr->base).base.base.orient.vec.y);
        fVar1 = fStack_14 * _DAT_005e541f * (float)_DAT_005e5427;
        fStack_48 = -local_24;
        (this_ptr->base).player_input.turn_speed = fVar1;
        if (fVar1 < fStack_48) {
          (this_ptr->base).player_input.turn_speed = fStack_48;
        }
        if (local_24 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_24;
        }
        fVar1 = (this_ptr->base).player_input.turn_speed;
        if ((((float)_DAT_005e5437 < fVar1) && ((double)fVar1 < _DAT_005e543f)) &&
           ((this_ptr->base).player_input.action_state.fire != 0)) {
          (this_ptr->base).player_input.turn_speed = 0.0;
        }
      }
    }
    fVar1 = (this_ptr->base).base.turn_angle_accumulator;
    if (fVar1 <= 0.0) {
      if (fVar1 < 0.0) {
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
        (this_ptr->base).player_input.turn_speed = -local_24;
      }
    }
    else {
      (this_ptr->base).base.turn_angle_accumulator = 0.0;
      (this_ptr->base).player_input.turn_speed = local_24;
    }
    fStack_7c = *(float *)(local_30 + 0x20) - (this_ptr->base).base.base.location.position.x;
    fStack_78 = *(float *)(local_30 + 0x24) - (this_ptr->base).base.base.location.position.y;
    fStack_74 = *(float *)(local_30 + 0x28) - (this_ptr->base).base.base.location.position.z;
    fStack_94 = fStack_7c;
    afStack_b4[(uint)bVar7 * -2 + 9] = afStack_b4[(uint)bVar7 * -2 + 0xf];
    afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
    if (&stack0xffffff24 != afStack_b4 + 8) {
      local_dc = fStack_94;
      local_d8 = fStack_90;
      local_d4 = fStack_8c;
    }
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff24);
    fStack_70 = afStack_b4[2];
    afStack_b4[(uint)bVar7 * -2 + 0x12] = afStack_b4[(uint)bVar7 * -2 + 3];
    afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
         afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    if (&stack0xffffff24 != afStack_b4 + 0x11) {
      local_dc = fStack_70;
      local_d8 = fStack_6c;
      local_d4 = fStack_68;
    }
    fStack_c0 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                 (local_d8 - (this_ptr->base).base.base.orient.vec.y);
    if (local_34 < fStack_c0) {
      fStack_c0 = local_34;
    }
    if (fStack_c0 < -local_34) {
      fStack_c0 = -local_34;
    }
    fStack_2c = fStack_c0 - (this_ptr->head_look_euler).y;
    if (delta_time * _DAT_005e5447 < fStack_2c) {
      fStack_2c = delta_time * _DAT_005e5447;
    }
    if (fStack_2c < delta_time * _DAT_005e544b) {
      fStack_2c = delta_time * _DAT_005e544b;
    }
    (this_ptr->head_look_euler).y = (this_ptr->head_look_euler).y + fStack_2c;
  }
  return;
}
