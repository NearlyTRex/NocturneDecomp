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
  CDeformableModelInstance *pCVar1;
  float fVar2;
  EHeroTask EVar3;
  int iVar4;
  CPathMap *this_ptr_00;
  byte bVar5;
  float afStackY_10b4 [1007];
  float local_e0;
  float local_dc;
  CVector3f local_d8;
  float local_cc;
  float local_c8 [6];
  float local_b0;
  float local_a8;
  float local_a4 [5];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar5 = 0;
  local_28 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_24 = 0;
  local_1c = 0.25;
  local_2c = 0.7853982;
  memset(&(this_ptr->base).player_input,0,0x34);
  if ((this_ptr->base).ai_task != HERO_TASK_STAND) {
    iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_a8 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar4 + 0x20);
    local_a4[0] = (this_ptr->base).base.base.location.position.y - *(float *)(iVar4 + 0x24);
    local_a4[1] = (this_ptr->base).base.base.location.position.z - *(float *)(iVar4 + 0x28);
    local_84 = local_a8;
    local_a4[(uint)bVar5 * -2 + 9] = local_a4[(uint)bVar5 * -2];
    local_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
         local_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    local_44 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    if (((((this_ptr->base).ai_task == HERO_TASK_GUARD) || (local_44 < _DAT_005cdbf1)) &&
        ((EVar3 = (this_ptr->base).ai_task, EVar3 == HERO_TASK_KILL || (EVar3 == HERO_TASK_GUARD))))
       && ((iVar4 = core_hero_cpp_FUN_004d00c0(this_ptr,&stack0xffffff20), iVar4 != 0 &&
           (local_e0 < (float)_DAT_005cdbf5)))) {
      local_28 = iVar4;
      local_24 = 1;
    }
    local_cc = *(float *)(local_28 + 0x20) - (this_ptr->base).base.base.location.position.x;
    local_c8[0] = *(float *)(local_28 + 0x24) - (this_ptr->base).base.base.location.position.y;
    local_c8[1] = *(float *)(local_28 + 0x28) - (this_ptr->base).base.base.location.position.z;
    local_6c = local_cc;
    local_a4[(uint)bVar5 * -2 + 0xf] = local_c8[(uint)bVar5 * -2];
    local_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
         local_c8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (local_a4 + 8 != local_a4 + 0xe) {
      local_84 = local_6c;
      local_80 = local_68;
      local_7c = local_64;
    }
    local_48 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    local_dc = local_48;
    if ((float)_DAT_005cdbfd <= local_48) {
      this_ptr_00 = (CPathMap *)0x0;
      if (local_24 == 0) {
        iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        this_ptr_00 = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x2b0) + 0xcc))(iVar4);
      }
      if (this_ptr_00 == (CPathMap *)0x0) {
        this_ptr_00 = core_path_cpp_getPathMap_FUN_00513ea0((CLocation *)(local_28 + 0x20));
      }
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                        (this_ptr_00,&(this_ptr->base).base.base.location.position,&local_d8,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar4 != 0) {
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                             (local_d8.y - (this_ptr->base).base.base.orient.vec.y);
        fVar2 = local_18 * _DAT_005cdc05 * (float)_DAT_005cdc0d;
        local_38 = -local_1c;
        (this_ptr->base).player_input.turn_speed = fVar2;
        if (fVar2 < local_38) {
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
      pCVar1 = &(this_ptr->base).base.model;
      if (local_24 == 1) {
        if (this_ptr->guns_drawn == 0) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
        else {
          iVar4 = core_motion_cpp_FUN_005035c0(pCVar1);
          if ((*(int *)(iVar4 + 0x24) != 2) && (*(int *)(iVar4 + 0x24) != 1)) {
            (this_ptr->base).player_input.action_state.fire = 1;
          }
        }
      }
      else {
        core_motion_cpp_FUN_005035c0(pCVar1);
      }
      if (local_24 == 1) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(local_a4 + 8);
        local_a4[2] = local_c8[2];
        local_a4[(uint)bVar5 * -2 + 3] = local_c8[(uint)bVar5 * -2 + 3];
        local_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             local_c8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                             (local_a4[3] - (this_ptr->base).base.base.orient.vec.y);
        fVar2 = local_18 * _DAT_005cdc05 * (float)_DAT_005cdc0d;
        local_40 = -local_1c;
        (this_ptr->base).player_input.turn_speed = fVar2;
        if (fVar2 < local_40) {
          (this_ptr->base).player_input.turn_speed = local_40;
        }
        if (local_1c < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_1c;
        }
        fVar2 = (this_ptr->base).player_input.turn_speed;
        if ((((float)_DAT_005cdc1d < fVar2) && ((double)fVar2 < _DAT_005cdc25)) &&
           ((this_ptr->base).player_input.action_state.fire != 0)) {
          (this_ptr->base).player_input.turn_speed = 0.0;
        }
      }
    }
    local_60 = *(float *)(local_28 + 0x20) - (this_ptr->base).base.base.location.position.x;
    local_5c = *(float *)(local_28 + 0x24) - (this_ptr->base).base.base.location.position.y;
    local_58 = *(float *)(local_28 + 0x28) - (this_ptr->base).base.base.location.position.z;
    local_90 = local_60;
    local_a4[(uint)bVar5 * -2 + 6] = local_a4[(uint)bVar5 * -2 + 0x12];
    local_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         local_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
    if (local_a4 + 8 != local_a4 + 5) {
      local_84 = local_90;
      local_80 = local_8c;
      local_7c = local_88;
    }
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(local_a4 + 8);
    local_78 = local_54;
    local_a4[(uint)bVar5 * -2 + 0xc] = local_a4[(uint)bVar5 * -2 + 0x15];
    local_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
         local_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
    if (local_a4 + 8 != local_a4 + 0xb) {
      local_84 = local_78;
      local_80 = local_74;
      local_7c = local_70;
    }
    local_b0 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                         (local_80 - (this_ptr->base).base.base.orient.vec.y);
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
