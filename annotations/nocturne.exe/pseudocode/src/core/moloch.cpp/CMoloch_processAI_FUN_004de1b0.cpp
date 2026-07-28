// Name: core_moloch.cpp_CMoloch_processAI_FUN_004de1b0
// Address: 004de1b0
// Address Range: [[004de1b0, 004de54a]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_004de1b0(CMoloch *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_004de1b0(CMoloch *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  int iVar3;
  EHeroTask EVar4;
  CPathMap *this_ptr_00;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  float fStack_78;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f CStack_68;
  float fStack_58;
  byte auStack_50 [12];
  float local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  float local_24;
  float local_20;
  float fStack_18;
  
  local_20 = 0.25;
  local_24 = 0.7853982;
  iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  memset(&(this_ptr->base).player_input,0,0x2c);
  EVar4 = (this_ptr->base).ai_task;
  if ((EVar4 != HERO_TASK_STAND) && (EVar4 == HERO_TASK_FOLLOW)) {
    iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    pCVar1 = &(this_ptr->base).base.base.location;
    local_44 = *(float *)(iVar3 + 0x20) - (pCVar1->position).x;
    local_40 = *(float *)(iVar3 + 0x24) - (this_ptr->base).base.base.location.position.y;
    local_3c = *(float *)(iVar3 + 0x28) - (this_ptr->base).base.base.location.position.z;
    local_74 = (pCVar1->position).x - *(float *)(iVar7 + 0x20);
    local_70 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar7 + 0x24);
    local_6c = (this_ptr->base).base.base.location.position.z - *(float *)(iVar7 + 0x28);
    if (&local_74 != &local_44) {
      local_74 = local_44;
      local_70 = local_40;
      local_6c = local_3c;
    }
    iVar7 = _DAT_01cae0e8 * 4;
    (this_ptr->base).base.turn_angle_accumulator = 0.0;
    if (SQRT(local_6c * local_6c + local_74 * local_74 + local_70 * local_70) <=
        (float)6) {
      iVar7 = *(int *)(iVar7 + 0x1cae0d8);
      iVar7 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x140))(iVar7);
      if ((iVar7 == 0) && (uVar6 = core_charactr_cpp_FUN_0042af70(this_ptr,delta_time), uVar6 != 0))
      {
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
      iVar7 = *(int *)(iVar7 + 0x1cae0d8);
      this_ptr_00 = (CPathMap *)(**(code **)(*(int *)(iVar7 + 0x14c) + 0xbc))(iVar7);
      iVar7 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                        (this_ptr_00,&(this_ptr->base).base.base.location.position,&CStack_68,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar7 != 0) {
        fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                     (CStack_68.y - (this_ptr->base).base.base.orient.vec.y);
        fVar2 = fStack_18 * (float)0.31830988619288902 * (float)4;
        fStack_28 = -local_20;
        (this_ptr->base).player_input.turn_speed = fVar2;
        if (fVar2 < fStack_28) {
          (this_ptr->base).player_input.turn_speed = fStack_28;
        }
        if (local_20 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_20;
        }
        (this_ptr->base).player_input.action_state.walk = 1;
      }
      (this_ptr->base).base.hero_proximity_timer = 0.0;
    }
    fVar2 = (this_ptr->base).base.turn_angle_accumulator;
    if (fVar2 <= 0.0) {
      if (fVar2 < 0.0) {
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
        (this_ptr->base).player_input.turn_speed = -local_20;
      }
    }
    else {
      (this_ptr->base).base.turn_angle_accumulator = 0.0;
      (this_ptr->base).player_input.turn_speed = local_20;
    }
    fStack_38 = *(float *)(iVar3 + 0x20) - (this_ptr->base).base.base.location.position.x;
    fStack_34 = *(float *)(iVar3 + 0x24) - (this_ptr->base).base.base.location.position.y;
    fStack_30 = *(float *)(iVar3 + 0x28) - (this_ptr->base).base.base.location.position.z;
    if (&local_74 != &fStack_38) {
      local_74 = fStack_38;
      local_70 = fStack_34;
      local_6c = fStack_30;
    }
    pfVar5 = (float *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (auStack_50,&local_74);
    if (&local_74 != pfVar5) {
      local_74 = *pfVar5;
      local_70 = pfVar5[1];
      local_6c = pfVar5[2];
    }
    fStack_58 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_70 - (this_ptr->base).base.base.orient.vec.y);
    if (local_24 < fStack_58) {
      fStack_58 = local_24;
    }
    if (fStack_58 < -local_24) {
      fStack_58 = -local_24;
    }
    fStack_78 = fStack_58 - this_ptr->aim_yaw;
    if (delta_time * (float)3.1415926535000001 < fStack_78) {
      fStack_78 = delta_time * (float)3.1415926535000001;
    }
    if (fStack_78 < delta_time * (float)-3.1415926535000001) {
      fStack_78 = delta_time * (float)-3.1415926535000001;
    }
    this_ptr->aim_yaw = this_ptr->aim_yaw + fStack_78;
  }
  return;
}
