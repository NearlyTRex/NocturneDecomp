// Name: core_moloch.cpp_CMoloch_processAI_FUN_00501c60
// Address: 00501c60
// Address Range: [[00501c60, 005020b9]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_00501c60(CMoloch *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_00501c60(CMoloch *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  EHeroTask EVar3;
  CHero *pCVar4;
  CHero *pCVar5;
  CPathMap *this_ptr_00;
  int iVar6;
  uint uVar7;
  byte bVar8;
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
  CHero *local_18;
  float fStack_14;
  
  bVar8 = 0;
  local_18 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
  local_24 = 0.25;
  local_28 = 0.7853982;
  memset(&(this_ptr->base).player_input,0,0x34);
  pCVar5 = local_18;
  iVar6 = g_INT_01cedef4;
  EVar3 = (this_ptr->base).ai_task;
  if ((EVar3 != HERO_TASK_STAND) && (EVar3 == HERO_TASK_FOLLOW)) {
    pCVar4 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
    pCVar1 = &(this_ptr->base).base.base.location;
    local_5c = (pCVar1->position).x - (pCVar4->base).base.location.position.x;
    local_58[0] = (this_ptr->base).base.base.location.position.y -
                  (pCVar4->base).base.location.position.y;
    local_58[1] = (this_ptr->base).base.base.location.position.z -
                  (pCVar4->base).base.location.position.z;
    local_98.x = local_5c;
    *(float *)((int)&local_98 + (uint)bVar8 * -8 + 4) = local_58[(uint)bVar8 * -2];
    *(float *)((int)&local_98 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         local_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    local_58[2] = (pCVar5->base).base.location.position.x - (pCVar1->position).x;
    local_58[3] = (pCVar5->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    local_48 = (pCVar5->base).base.location.position.z -
               (this_ptr->base).base.base.location.position.z;
    local_68.x = local_58[2];
    *(float *)((int)&local_68 + (uint)bVar8 * -8 + 4) = local_58[(uint)bVar8 * -2 + 3];
    *(float *)((int)&local_68 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         local_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    if (&local_98 != &local_68) {
      local_98.x = local_68.x;
      local_98.y = local_68.y;
      local_98.z = local_68.z;
    }
    (this_ptr->base).base.turn_angle_accumulator = 0.0;
    if (SQRT(local_98.z * local_98.z + local_98.x * local_98.x + local_98.y * local_98.y) <=
        (float)6) {
      iVar6 = (*(((g_CHero_PTR_ARRAY_01cedee4[iVar6]->base).base.vtable._uh)->_uh).isWeaponDrawn)
                        (g_CHero_PTR_ARRAY_01cedee4[iVar6]);
      if ((iVar6 == 0) &&
         (uVar7 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042abe0
                            ((CCharacter *)this_ptr,delta_time), uVar7 != 0)) {
        if (uVar7 < 2) {
          (this_ptr->base).player_input.action_state.walk = 1;
        }
        else if (uVar7 == 2) {
          (this_ptr->base).player_input.action_state.run = 1;
          (this_ptr->base).player_input.action_state.walk = 1;
        }
      }
    }
    else {
      this_ptr_00 = (*((g_CHero_PTR_ARRAY_01cedee4[iVar6]->base).base.vtable._ub)->getPathMap)
                              ((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[iVar6]);
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                        (this_ptr_00,&(this_ptr->base).base.base.location.position,&CStack_b0,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar6 != 0) {
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                              (CStack_b0.y - (this_ptr->base).base.base.orient.vec.y);
        fVar2 = fStack_14 * 0.3183099f * (float)4;
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
    fStack_a4 = (local_18->base).base.location.position.x -
                (this_ptr->base).base.base.location.position.x;
    afStack_a0[0] =
         (local_18->base).base.location.position.y - (this_ptr->base).base.base.location.position.y;
    afStack_a0[1] =
         (local_18->base).base.location.position.z - (this_ptr->base).base.base.location.position.z;
    CStack_8c.x = fStack_a4;
    *(float *)((int)&CStack_8c + (uint)bVar8 * -8 + 4) = afStack_a0[(uint)bVar8 * -2];
    *(float *)((int)&CStack_8c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (&local_98 != &CStack_8c) {
      local_98.x = CStack_8c.x;
      local_98.y = CStack_8c.y;
      local_98.z = CStack_8c.z;
    }
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_98,&CStack_74);
    CStack_80.x = CStack_74.x;
    *(uint *)((int)&CStack_80 + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_74 + (uint)bVar8 * -8 + 4);
    *(uint *)((int)&CStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)((int)&CStack_74 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    if (&local_98 != &CStack_80) {
      local_98.x = CStack_80.x;
      local_98.y = CStack_80.y;
      local_98.z = CStack_80.z;
    }
    fStack_40 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                          (local_98.y - (this_ptr->base).base.base.orient.vec.y);
    if (local_28 < fStack_40) {
      fStack_40 = local_28;
    }
    if (fStack_40 < -local_28) {
      fStack_40 = -local_28;
    }
    fStack_20 = fStack_40 - this_ptr->aim_yaw;
    if (delta_time * 3.141593f < fStack_20) {
      fStack_20 = delta_time * 3.141593f;
    }
    if (fStack_20 < delta_time * -3.141593f) {
      fStack_20 = delta_time * -3.141593f;
    }
    this_ptr->aim_yaw = this_ptr->aim_yaw + fStack_20;
  }
  return;
}
