// Name: core_haystack.cpp_CHaystack_updateAI_FUN_004ccff0
// Address: 004ccff0
// Address Range: [[004ccff0, 004cd636]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_updateAI_FUN_004ccff0(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_haystack_cpp_CHaystack_updateAI_FUN_004ccff0(CHaystack *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  float fVar2;
  EHeroTask EVar3;
  float fVar4;
  int iVar5;
  CPathMap *this_ptr_00;
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
  local_2c = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_24 = 0;
  local_20 = 0.25;
  local_30 = 0.7853982;
  memset(&(this_ptr->base).player_input,0,0x34);
  if ((this_ptr->base).ai_task != HERO_TASK_STAND) {
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_60 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar5 + 0x20);
    local_5c = (this_ptr->base).base.base.location.position.y - *(float *)(iVar5 + 0x24);
    local_58 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar5 + 0x28);
    local_9c = local_60;
    afStack_b0[(uint)bVar6 * -2 + 6] = afStack_b0[(uint)bVar6 * -2 + 0x15];
    afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
    local_48 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
    if ((((this_ptr->base).ai_task == HERO_TASK_GUARD) || (local_48 < _DAT_005d9942)) &&
       ((EVar3 = (this_ptr->base).ai_task, EVar3 == HERO_TASK_KILL || (EVar3 == HERO_TASK_GUARD))))
    {
      local_dc = 9999.9;
      iVar5 = core_hero_cpp_FUN_004d00c0(this_ptr,&stack0xffffff24);
      if ((iVar5 == 0) || ((float)_DAT_005d9946 <= local_dc)) {
        if (this_ptr->guns_drawn != 0) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
      }
      else {
        local_2c = iVar5;
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
    fVar2 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
    local_1c = fVar2;
    if ((float)_DAT_005d994e <= fVar2) {
      this_ptr_00 = (CPathMap *)0x0;
      if (local_24 == 0) {
        iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        this_ptr_00 = (CPathMap *)(**(code **)(*(int *)(iVar5 + 0x2b0) + 0xcc))(iVar5);
      }
      if (this_ptr_00 == (CPathMap *)0x0) {
        this_ptr_00 = core_path_cpp_getPathMap_FUN_00513ea0((CLocation *)(local_2c + 0x20));
      }
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                        (this_ptr_00,&(this_ptr->base).base.base.location.position,&local_d8,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar5 != 0) {
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                             (local_d8.y - (this_ptr->base).base.base.orient.vec.y);
        fVar4 = local_18 * _DAT_005d9956 * (float)_DAT_005d995e;
        local_3c = -local_20;
        (this_ptr->base).player_input.turn_speed = fVar4;
        if (fVar4 < local_3c) {
          (this_ptr->base).player_input.turn_speed = local_3c;
        }
        if (local_20 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_20;
        }
        if (((float)_DAT_005d9966 <= fVar2) || (local_24 == 1)) {
          (this_ptr->base).player_input.action_state.run = 1;
          (this_ptr->base).player_input.action_state.walk = 1;
        }
        else {
          (this_ptr->base).player_input.action_state.walk = 1;
        }
      }
    }
    else {
      pCVar1 = &(this_ptr->base).base.model;
      if (local_24 == 1) {
        if (this_ptr->guns_drawn == 0) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
        else {
          iVar5 = core_motion_cpp_FUN_005035c0(pCVar1);
          if ((*(int *)(iVar5 + 0x24) != 2) && (*(int *)(iVar5 + 0x24) != 1)) {
            (this_ptr->base).player_input.action_state.fire = 1;
          }
        }
      }
      else {
        iVar5 = core_motion_cpp_FUN_005035c0(pCVar1);
        if ((*(int *)(iVar5 + 0x24) == 10) && (this_ptr->guns_drawn != 0)) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
      }
      if (local_24 == 1) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_b0 + 5);
        local_78 = local_b4;
        afStack_b0[(uint)bVar6 * -2 + 0xf] = afStack_b0[(uint)bVar6 * -2];
        afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
             afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                             (local_74 - (this_ptr->base).base.base.orient.vec.y);
        fVar2 = local_18 * _DAT_005d9956 * (float)_DAT_005d995e;
        local_40 = -local_20;
        (this_ptr->base).player_input.turn_speed = fVar2;
        if (fVar2 < local_40) {
          (this_ptr->base).player_input.turn_speed = local_40;
        }
        if (local_20 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_20;
        }
        fVar2 = (this_ptr->base).player_input.turn_speed;
        if ((((float)_DAT_005d996e < fVar2) && ((double)fVar2 < _DAT_005d9976)) &&
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
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_b0 + 5);
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
         core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                   (local_98 - (this_ptr->base).base.base.orient.vec.y);
    if (local_30 < afStack_c8[3]) {
      afStack_c8[3] = local_30;
    }
    if (afStack_c8[3] < -local_30) {
      afStack_c8[3] = -local_30;
    }
    local_28 = afStack_c8[3] - (this_ptr->head_look_euler).y;
    if (delta_time * _DAT_005d997e < local_28) {
      local_28 = delta_time * _DAT_005d997e;
    }
    if (local_28 < delta_time * _DAT_005d9982) {
      local_28 = delta_time * _DAT_005d9982;
    }
    (this_ptr->head_look_euler).y = (this_ptr->head_look_euler).y + local_28;
  }
  return;
}
