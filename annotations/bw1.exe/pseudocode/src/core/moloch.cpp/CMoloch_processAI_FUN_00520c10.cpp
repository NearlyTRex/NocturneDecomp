// Name: core_moloch.cpp_CMoloch_processAI_FUN_00520c10
// Address: 00520c10
// Address Range: [[00520c10, 00521069]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_00520c10(CMoloch *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_00520c10(CMoloch *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  EHeroTask EVar3;
  int iVar4;
  CPathMap *this_ptr_00;
  uint uVar5;
  int iVar6;
  byte bVar7;
  float afStackY_108c [1009];
  CVector3f CStack_b0;
  float fStack_a4;
  float afStack_a0 [2];
  CVector3f local_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f local_68;
  float local_5c;
  float local_58 [4];
  float local_48;
  float fStack_40;
  float fStack_34;
  float local_28;
  float local_24;
  float fStack_20;
  int local_18;
  float fStack_14;
  
  bVar7 = 0;
  local_18 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_24 = 0.25;
  local_28 = 0.7853982;
  memset(&(this_ptr->base).player_input,0,0x30);
  iVar6 = local_18;
  EVar3 = (this_ptr->base).ai_task;
  if ((EVar3 != HERO_TASK_STAND) && (EVar3 == HERO_TASK_FOLLOW)) {
    iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    pCVar1 = &(this_ptr->base).base.base.location;
    local_5c = (pCVar1->position).x - *(float *)(iVar4 + 0x20);
    local_58[0] = (this_ptr->base).base.base.location.position.y - *(float *)(iVar4 + 0x24);
    local_58[1] = (this_ptr->base).base.base.location.position.z - *(float *)(iVar4 + 0x28);
    local_98.x = local_5c;
    *(float *)((int)&local_98 + (uint)bVar7 * -8 + 4) = local_58[(uint)bVar7 * -2];
    *(float *)((int)&local_98 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         local_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    local_58[2] = *(float *)(iVar6 + 0x20) - (pCVar1->position).x;
    local_58[3] = *(float *)(iVar6 + 0x24) - (this_ptr->base).base.base.location.position.y;
    local_48 = *(float *)(iVar6 + 0x28) - (this_ptr->base).base.base.location.position.z;
    local_68.x = local_58[2];
    *(float *)((int)&local_68 + (uint)bVar7 * -8 + 4) = local_58[(uint)bVar7 * -2 + 3];
    *(float *)((int)&local_68 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         local_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    if (&local_98 != &local_68) {
      local_98.x = local_68.x;
      local_98.y = local_68.y;
      local_98.z = local_68.z;
    }
    iVar6 = _DAT_01d06ab4 * 4;
    (this_ptr->base).base.turn_angle_accumulator = 0.0;
    if (SQRT(local_98.z * local_98.z + local_98.x * local_98.x + local_98.y * local_98.y) <=
        (float)_DAT_005ea296) {
      iVar6 = *(int *)(iVar6 + 0x1d06aa4);
      iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x148))(iVar6);
      if ((iVar6 == 0) &&
         (uVar5 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_00434c60
                            ((CCharacter *)this_ptr,delta_time), uVar5 != 0)) {
        if (uVar5 < 2) {
          (this_ptr->base).player_input.action_state.walk = 1;
        }
        else if (uVar5 == 2) {
          (this_ptr->base).player_input.action_state.run = 1;
          (this_ptr->base).player_input.action_state.walk = 1;
        }
      }
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x1d06aa4);
      this_ptr_00 = (CPathMap *)(**(code **)(*(int *)(iVar6 + 0x154) + 0xc4))(iVar6);
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                        (this_ptr_00,&(this_ptr->base).base.base.location.position,&CStack_b0,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar6 != 0) {
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                              (CStack_b0.y - (this_ptr->base).base.base.orient.vec.y);
        fVar2 = fStack_14 * _DAT_005ea29e * (float)_DAT_005ea2a6;
        fStack_34 = -local_24;
        (this_ptr->base).player_input.turn_speed = fVar2;
        if (fVar2 < fStack_34) {
          (this_ptr->base).player_input.turn_speed = fStack_34;
        }
        if (local_24 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_24;
        }
        (this_ptr->base).player_input.action_state.walk = 1;
      }
      (this_ptr->base).base.hero_proximity_timer = 0.0;
    }
    fVar2 = (this_ptr->base).base.turn_angle_accumulator;
    if (fVar2 <= 0.0) {
      if (fVar2 < 0.0) {
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
        (this_ptr->base).player_input.turn_speed = -local_24;
      }
    }
    else {
      (this_ptr->base).base.turn_angle_accumulator = 0.0;
      (this_ptr->base).player_input.turn_speed = local_24;
    }
    fStack_a4 = *(float *)(local_18 + 0x20) - (this_ptr->base).base.base.location.position.x;
    afStack_a0[0] = *(float *)(local_18 + 0x24) - (this_ptr->base).base.base.location.position.y;
    afStack_a0[1] = *(float *)(local_18 + 0x28) - (this_ptr->base).base.base.location.position.z;
    CStack_8c.x = fStack_a4;
    *(float *)((int)&CStack_8c + (uint)bVar7 * -8 + 4) = afStack_a0[(uint)bVar7 * -2];
    *(float *)((int)&CStack_8c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    if (&local_98 != &CStack_8c) {
      local_98.x = CStack_8c.x;
      local_98.y = CStack_8c.y;
      local_98.z = CStack_8c.z;
    }
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_98,&CStack_74);
    CStack_80.x = CStack_74.x;
    *(uint *)((int)&CStack_80 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_74 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&local_98 != &CStack_80) {
      local_98.x = CStack_80.x;
      local_98.y = CStack_80.y;
      local_98.z = CStack_80.z;
    }
    fStack_40 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                          (local_98.y - (this_ptr->base).base.base.orient.vec.y);
    if (local_28 < fStack_40) {
      fStack_40 = local_28;
    }
    if (fStack_40 < -local_28) {
      fStack_40 = -local_28;
    }
    fStack_20 = fStack_40 - this_ptr->aim_yaw;
    if (delta_time * _DAT_005ea2ae < fStack_20) {
      fStack_20 = delta_time * _DAT_005ea2ae;
    }
    if (fStack_20 < delta_time * _DAT_005ea2b2) {
      fStack_20 = delta_time * _DAT_005ea2b2;
    }
    this_ptr->aim_yaw = this_ptr->aim_yaw + fStack_20;
  }
  return;
}
