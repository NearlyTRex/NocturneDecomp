// Name: core_svetlana.cpp_CSvetlana_processAI_FUN_005938c0
// Address: 005938c0
// Address Range: [[005938c0, 00594096]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_processAI_FUN_005938c0(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_svetlana_cpp_CSvetlana_processAI_FUN_005938c0(CSvetlana *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  EHeroTask EVar2;
  float fVar3;
  int iVar4;
  CHero *pCVar5;
  SMotion *pSVar6;
  uint uVar7;
  CPathMap *this_ptr_01;
  byte bVar8;
  float afStackY_10c4 [1009];
  CVector3f local_dc;
  CVector3f CStack_d0;
  float fStack_c0;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  float local_88;
  float local_84 [4];
  float fStack_74;
  CVector3f CStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  float local_38;
  float local_34;
  CHero *local_30;
  float fStack_2c;
  int local_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float fStack_14;
  
  bVar8 = 0;
  local_30 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
  local_28 = 0;
  local_24 = 0.25;
  local_34 = 0.7853982;
  memset(&(this_ptr->base).player_input,0,0x30);
  if ((this_ptr->base).ai_task != HERO_TASK_STAND) {
    pCVar5 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
    local_88 = (this_ptr->base).base.base.location.position.x -
               (pCVar5->base).base.location.position.x;
    local_84[0] = (this_ptr->base).base.base.location.position.y -
                  (pCVar5->base).base.location.position.y;
    local_84[1] = (this_ptr->base).base.base.location.position.z -
                  (pCVar5->base).base.location.position.z;
    local_dc.x = local_88;
    *(float *)((int)&local_dc + (uint)bVar8 * -8 + 4) = local_84[(uint)bVar8 * -2];
    *(float *)((int)&local_dc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         local_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    local_1c = SQRT(local_dc.z * local_dc.z + local_dc.x * local_dc.x + local_dc.y * local_dc.y);
    if ((this_ptr->base).ai_task == HERO_TASK_GUARD) {
      local_1c = 0.0;
    }
    local_38 = 20.0;
    iVar4 = (*(((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._uh)->_uh).
              isWeaponDrawn)(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]);
    if (iVar4 != 0) {
      local_38 = 30.0;
    }
    if ((local_1c < local_38) &&
       ((EVar2 = (this_ptr->base).ai_task, EVar2 == HERO_TASK_KILL || (EVar2 == HERO_TASK_GUARD))))
    {
      fStack_4c = 9999.9;
      pCVar5 = (CHero *)core_hero_cpp_CHero_closestEnemy_FUN_004ec350
                                  (&this_ptr->base,local_84 + 0xe);
      if ((pCVar5 == (CHero *)0x0) || (local_38 <= fStack_4c)) {
        if (this_ptr->blades_drawn != 0) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
      }
      else {
        local_30 = pCVar5;
        local_28 = 1;
      }
    }
    fStack_58 = (local_30->base).base.location.position.x -
                (this_ptr->base).base.base.location.position.x;
    fStack_54 = (local_30->base).base.location.position.y -
                (this_ptr->base).base.base.location.position.y;
    fStack_50 = (local_30->base).base.location.position.z -
                (this_ptr->base).base.base.location.position.z;
    CStack_a0.x = fStack_58;
    *(float *)((int)&CStack_a0 + (uint)bVar8 * -8 + 4) = local_84[(uint)bVar8 * 0xfffffffe + 0xc];
    *(float *)((int)&CStack_a0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         local_84[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 0xd];
    if (&local_dc != &CStack_a0) {
      local_dc.x = CStack_a0.x;
      local_dc.y = CStack_a0.y;
      local_dc.z = CStack_a0.z;
    }
    fVar1 = SQRT(local_dc.z * local_dc.z + local_dc.x * local_dc.x + local_dc.y * local_dc.y);
    (this_ptr->base).base.turn_angle_accumulator = 0.0;
    fStack_20 = fVar1;
    if ((float)6 <= fVar1) {
      this_ptr_01 = (CPathMap *)0x0;
      if (local_28 == 0) {
        this_ptr_01 = (*((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._ub)->
                        getPathMap)((CDemonActor *)g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]);
        iVar4 = (*(((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._uh)->_uh).
                  isWeaponDrawn)(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]);
        if ((iVar4 == 0) &&
           (uVar7 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_00434c60
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
        (this_ptr->base).base.hero_proximity_timer = 0.0;
      }
      if (this_ptr_01 == (CPathMap *)0x0) {
        this_ptr_01 = core_path_cpp_getPathMap_FUN_005351f0(&(local_30->base).base.location);
      }
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                        (this_ptr_01,&(this_ptr->base).base.base.location.position,&CStack_d0,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar4 != 0) {
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                              (CStack_d0.y - (this_ptr->base).base.base.orient.vec.y);
        fVar3 = fStack_14 * 0.3183099f * (float)4;
        fStack_3c = -local_24;
        (this_ptr->base).player_input.turn_speed = fVar3;
        if (fVar3 < fStack_3c) {
          (this_ptr->base).player_input.turn_speed = fStack_3c;
        }
        if (local_24 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_24;
        }
        if (((float)10 <= fVar1) || (local_28 == 1)) {
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
        if (this_ptr->blades_drawn == 0) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
        else {
          pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             (&this_ptr_00->base);
          if ((pSVar6->state_index != 2) && (pSVar6->state_index != 1)) {
            (this_ptr->base).player_input.action_state.fire = 1;
          }
        }
        (this_ptr->base).base.hero_proximity_timer = 0.0;
      }
      else {
        pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base)
        ;
        if ((pSVar6->state_index == 10) && (this_ptr->blades_drawn != 0)) {
          (this_ptr->base).player_input.action_state.draw = 1;
        }
        iVar4 = (*(((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._uh)->_uh).
                  isWeaponDrawn)(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]);
        if ((iVar4 == 0) &&
           (uVar7 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_00434c60
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
      if (local_28 == 1) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_dc,&CStack_b8);
        fStack_64 = CStack_b8.x;
        local_84[(uint)bVar8 * 0xfffffffe + 9] =
             (float)*(uint *)((int)&CStack_b8 + (uint)bVar8 * -8 + 4);
        local_84[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 10] =
             (float)*(uint *)((int)&CStack_b8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                              (fStack_60 - (this_ptr->base).base.base.orient.vec.y);
        fVar1 = fStack_14 * 0.3183099f * (float)4;
        fStack_48 = -local_24;
        (this_ptr->base).player_input.turn_speed = fVar1;
        if (fVar1 < fStack_48) {
          (this_ptr->base).player_input.turn_speed = fStack_48;
        }
        if (local_24 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_24;
        }
        fVar1 = (this_ptr->base).player_input.turn_speed;
        if ((((float)-0.25 < fVar1) && ((double)fVar1 < 0.25)) &&
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
    local_84[2] = (local_30->base).base.location.position.x -
                  (this_ptr->base).base.base.location.position.x;
    local_84[3] = (local_30->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    fStack_74 = (local_30->base).base.location.position.z -
                (this_ptr->base).base.base.location.position.z;
    CStack_94.x = local_84[2];
    *(float *)((int)&CStack_94 + (uint)bVar8 * -8 + 4) = local_84[(uint)bVar8 * -2 + 3];
    *(float *)((int)&CStack_94 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         local_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    if (&local_dc != &CStack_94) {
      local_dc.x = CStack_94.x;
      local_dc.y = CStack_94.y;
      local_dc.z = CStack_94.z;
    }
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_dc,&CStack_ac);
    CStack_70.x = CStack_ac.x;
    local_84[(uint)bVar8 * 0xfffffffe + 6] =
         (float)*(uint *)((int)&CStack_ac + (uint)bVar8 * -8 + 4);
    local_84[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 7] =
         (float)*(uint *)((int)&CStack_ac + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    if (&local_dc != (CVector3f *)(local_84 + 5)) {
      local_dc.x = CStack_70.x;
      local_dc.y = CStack_70.y;
      local_dc.z = CStack_70.z;
    }
    fStack_c0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                          (local_dc.y - (this_ptr->base).base.base.orient.vec.y);
    if (local_34 < fStack_c0) {
      fStack_c0 = local_34;
    }
    if (fStack_c0 < -local_34) {
      fStack_c0 = -local_34;
    }
    fStack_2c = fStack_c0 - (this_ptr->head_euler_angles).y;
    if (delta_time * 3.141593f < fStack_2c) {
      fStack_2c = delta_time * 3.141593f;
    }
    if (fStack_2c < delta_time * -3.141593f) {
      fStack_2c = delta_time * -3.141593f;
    }
    (this_ptr->head_euler_angles).y = (this_ptr->head_euler_angles).y + fStack_2c;
  }
  return;
}
