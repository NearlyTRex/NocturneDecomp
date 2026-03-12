// Name: core_moloch.cpp_CMoloch_processAI_FUN_005293b0
// Address: 005293b0
// Address Range: [[005293b0, 0052974a]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_005293b0(CMoloch *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_005293b0(CMoloch *this_ptr,float delta_time)

{
  CPathMap *this_ptr_00;
  int iVar6;
  float fVar1;
  CVector3f *pCVar7;
  int iVar2;
  uint uVar8;
  float fStack_78;
  CVector3f local_74;
  CVector3f CStack_68;
  float fStack_58;
  CVector3f CStack_50;
  CVector3f local_44;
  CVector3f CStack_38;
  float fStack_28;
  float local_24;
  float local_20;
  float fStack_18;
  float fVar2;
  CHero *pCVar3;
  EHeroTask EVar4;
  CHero *pCVar5;
  CLocation *pCVar1;
  
  pCVar3 = g_HeroActors[g_LocalHeroIndex];
  memset(&(this_ptr->base).player_control,0,0x2c);
  iVar2 = g_LocalHeroIndex;
  EVar4 = (this_ptr->base).ai_task;
  if ((EVar4 != HERO_TASK_STAND) && (EVar4 == HERO_TASK_FOLLOW)) {
    pCVar5 = g_HeroActors[g_LocalHeroIndex];
    pCVar1 = &(this_ptr->base).base.base.location;
    local_44.x = (pCVar3->base).base.location.position.x - (pCVar1->position).x;
    local_44.y = (pCVar3->base).base.location.position.y -
                 (this_ptr->base).base.base.location.position.y;
    local_44.z = (pCVar3->base).base.location.position.z -
                 (this_ptr->base).base.base.location.position.z;
    local_74.x = (pCVar1->position).x - (pCVar5->base).base.location.position.x;
    local_74.y = (this_ptr->base).base.base.location.position.y -
                 (pCVar5->base).base.location.position.y;
    local_74.z = (this_ptr->base).base.base.location.position.z -
                 (pCVar5->base).base.location.position.z;
    if (&local_74 != &local_44) {
      local_74.x = local_44.x;
      local_74.y = local_44.y;
      local_74.z = local_44.z;
    }
    (this_ptr->base).base.turn_angle_accumulator = 0.0;
    if (SQRT(local_74.z * local_74.z + local_74.x * local_74.x + local_74.y * local_74.y) <=
        (float)6) {
      iVar2 = (*(((g_HeroActors[iVar2]->base).base.vtable._ue)->_ue).randomize)
                        ((CEnemy *)g_HeroActors[iVar2]);
      if ((iVar2 == 0) &&
         (uVar8 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
                            ((CCharacter *)this_ptr,delta_time), uVar8 != 0)) {
        if (uVar8 < 2) {
          (this_ptr->base).player_control.action_states[0] = 1;
        }
        else if (uVar8 == 2) {
          (this_ptr->base).player_control.action_states[2] = 1;
          (this_ptr->base).player_control.action_states[0] = 1;
        }
      }
    }
    else {
      this_ptr_00 = (*((g_HeroActors[iVar2]->base).base.vtable._ub)->getPathMap)
                              ((CDemonActor *)g_HeroActors[iVar2]);
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr_00,&(this_ptr->base).base.base.location.position,&CStack_68,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar6 != 0) {
        fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_68.y - (this_ptr->base).base.base.orient.vec.y);
        fVar1 = fVar1 * (float)0.31830988619288902 * (float)4;
        (this_ptr->base).player_control.turn_speed = fVar1;
        if (fVar1 < -0.25) {
          (this_ptr->base).player_control.turn_speed = -0.25;
        }
        if (0.25 < (this_ptr->base).player_control.turn_speed) {
          (this_ptr->base).player_control.turn_speed = 0.25;
        }
        (this_ptr->base).player_control.action_states[0] = 1;
      }
      (this_ptr->base).base.hero_proximity_timer = 0.0;
    }
    fVar2 = (this_ptr->base).base.turn_angle_accumulator;
    if (fVar2 <= 0.0) {
      if (fVar2 < 0.0) {
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
        (this_ptr->base).player_control.turn_speed = -0.25;
      }
    }
    else {
      (this_ptr->base).base.turn_angle_accumulator = 0.0;
      (this_ptr->base).player_control.turn_speed = 0.25;
    }
    CStack_38.x = (pCVar3->base).base.location.position.x -
                  (this_ptr->base).base.base.location.position.x;
    CStack_38.y = (pCVar3->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    CStack_38.z = (pCVar3->base).base.location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    if (&local_74 != &CStack_38) {
      local_74.x = CStack_38.x;
      local_74.y = CStack_38.y;
      local_74.z = CStack_38.z;
    }
    pCVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_50,&local_74);
    if (&local_74 != pCVar7) {
      local_74.x = pCVar7->x;
      local_74.y = pCVar7->y;
      local_74.z = pCVar7->z;
    }
    fStack_58 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_74.y - (this_ptr->base).base.base.orient.vec.y);
    if (0.7853982 < fStack_58) {
      fStack_58 = 0.7853982;
    }
    if (fStack_58 < -0.7853982) {
      fStack_58 = -0.7853982;
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
