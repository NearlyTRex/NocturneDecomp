// Name: core_colonel.cpp_CColonel_FUN_0043ff20
// Address: 0043ff20
// Address Range: [[0043ff20, 00440423]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_FUN_0043ff20(CColonel *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_colonel_cpp_CColonel_FUN_0043ff20(CColonel *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  bool bVar2;
  float fVar3;
  CHero *pCVar4;
  CVector3f *pCVar5;
  SMotion *pSVar6;
  CPathMap *this_ptr_01;
  int iVar7;
  CHero *pCVar8;
  float in_stack_00000008;
  float local_8c;
  float local_88;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  float local_44;
  CVector3f local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = false;
  local_1c = 0.25;
  local_20 = 0.7853982;
  pCVar8 = g_HeroActors[g_LocalHeroIndex];
  memset(&(this_ptr->base).player_control,0,0x2c);
  if ((this_ptr->base).ai_task != 0) {
    pCVar4 = g_HeroActors[g_LocalHeroIndex];
    local_54.x = (this_ptr->base).base.base.location.position.x -
                 (pCVar4->base).base.location.position.x;
    local_54.y = (this_ptr->base).base.base.location.position.y -
                 (pCVar4->base).base.location.position.y;
    local_54.z = (this_ptr->base).base.base.location.position.z -
                 (pCVar4->base).base.location.position.z;
    local_2c = SQRT(local_54.z * local_54.z + local_54.x * local_54.x + local_54.y * local_54.y);
    if (((((this_ptr->base).ai_task == 3) || (local_2c < 20.0f)) &&
        ((iVar7 = (this_ptr->base).ai_task, iVar7 == 2 || (iVar7 == 3)))) &&
       ((pCVar4 = (CHero *)core_hero_cpp_CHero_FUN_004f3960(&this_ptr->base), pCVar4 != (CHero *)0x0
        && (local_88 < (float)20)))) {
      bVar2 = true;
      pCVar8 = pCVar4;
    }
    local_60.x = (pCVar8->base).base.location.position.x -
                 (this_ptr->base).base.base.location.position.x;
    local_60.y = (pCVar8->base).base.location.position.y -
                 (this_ptr->base).base.base.location.position.y;
    local_60.z = (pCVar8->base).base.location.position.z -
                 (this_ptr->base).base.base.location.position.z;
    if (&local_54 != &local_60) {
      local_54.x = local_60.x;
      local_54.y = local_60.y;
      local_54.z = local_60.z;
    }
    fVar1 = SQRT(local_54.z * local_54.z + local_54.x * local_54.x + local_54.y * local_54.y);
    local_30 = fVar1;
    if ((float)6 <= fVar1) {
      this_ptr_01 = (CPathMap *)0x0;
      if (!bVar2) {
        this_ptr_01 = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                                ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
      }
      if (this_ptr_01 == (CPathMap *)0x0) {
        this_ptr_01 = core_path_cpp_FUN_00548500(&(pCVar8->base).base.location);
      }
      iVar7 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr_01,&(this_ptr->base).base.base.location.position,&local_84,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar7 != 0) {
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_84.y - (this_ptr->base).base.base.orient.vec.y);
        fVar3 = local_14 * (float)0.31830988619288902 * (float)4;
        local_28 = -local_1c;
        (this_ptr->base).player_control.turn_speed = fVar3;
        if (fVar3 < local_28) {
          (this_ptr->base).player_control.turn_speed = local_28;
        }
        if (local_1c < (this_ptr->base).player_control.turn_speed) {
          (this_ptr->base).player_control.turn_speed = local_1c;
        }
        if (((float)10 <= fVar1) || (bVar2)) {
          (this_ptr->base).player_control.action_states[2] = 1;
          (this_ptr->base).player_control.action_states[0] = 1;
        }
        else {
          (this_ptr->base).player_control.action_states[0] = 1;
        }
      }
    }
    else {
      this_ptr_00 = &(this_ptr->base).base.model;
      if (bVar2) {
        if (this_ptr->guns_drawn == 0) {
          (this_ptr->base).player_control.action_states[6] = 1;
        }
        else {
          pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&this_ptr_00->motion_controller);
          if ((pSVar6->state_index != 2) && (pSVar6->state_index != 1)) {
            (this_ptr->base).player_control.action_states[3] = 1;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                  (&this_ptr_00->motion_controller);
      }
      if (bVar2) {
        pCVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_3c,&local_54);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (pCVar5->y - (this_ptr->base).base.base.orient.vec.y);
        fVar1 = local_14 * (float)0.31830988619288902 * (float)4;
        local_18 = -local_1c;
        (this_ptr->base).player_control.turn_speed = fVar1;
        if (fVar1 < local_18) {
          (this_ptr->base).player_control.turn_speed = local_18;
        }
        if (local_1c < (this_ptr->base).player_control.turn_speed) {
          (this_ptr->base).player_control.turn_speed = local_1c;
        }
        fVar1 = (this_ptr->base).player_control.turn_speed;
        if ((((float)-0.25 < fVar1) && ((double)fVar1 < 0.25)) &&
           ((this_ptr->base).player_control.action_states[3] != 0)) {
          (this_ptr->base).player_control.turn_speed = 0.0;
        }
      }
    }
    local_78.x = (pCVar8->base).base.location.position.x -
                 (this_ptr->base).base.base.location.position.x;
    local_78.y = (pCVar8->base).base.location.position.y -
                 (this_ptr->base).base.base.location.position.y;
    local_78.z = (pCVar8->base).base.location.position.z -
                 (this_ptr->base).base.base.location.position.z;
    if (&local_54 != &local_78) {
      local_54.x = local_78.x;
      local_54.y = local_78.y;
      local_54.z = local_78.z;
    }
    pCVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_6c,&local_54);
    if (&local_54 != pCVar5) {
      local_54.x = pCVar5->x;
      local_54.y = pCVar5->y;
      local_54.z = pCVar5->z;
    }
    local_44 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (local_54.y - (this_ptr->base).base.base.orient.vec.y);
    if (local_20 < local_44) {
      local_44 = local_20;
    }
    if (local_44 < -local_20) {
      local_44 = -local_20;
    }
    local_8c = local_44 - (this_ptr->head_look_euler).y;
    if (in_stack_00000008 * (float)3.1415926535000001 < local_8c) {
      local_8c = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (local_8c < in_stack_00000008 * (float)-3.1415926535000001) {
      local_8c = in_stack_00000008 * (float)-3.1415926535000001;
    }
    (this_ptr->head_look_euler).y = (this_ptr->head_look_euler).y + local_8c;
  }
  return;
}
