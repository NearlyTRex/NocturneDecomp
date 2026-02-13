// Name: core_moloch.cpp_CMoloch_FUN_005293b0
// Address: 005293b0
// Address Range: [[005293b0, 0052974a]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_FUN_005293b0(CMoloch *this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_FUN_005293b0(CMoloch *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  CHero *pCVar3;
  CHero *pCVar4;
  int iVar5;
  CPathMap *this_ptr_00;
  int iVar6;
  CVector3f *pCVar7;
  uint uVar8;
  float in_stack_00000008;
  float local_74;
  CVector3f local_70;
  CVector3f CStack_64;
  float fStack_54;
  CVector3f CStack_4c;
  float local_40;
  float local_3c;
  CVector3f CStack_34;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_14;
  
  local_20 = 0.25;
  local_24 = 0.7853982;
  pCVar3 = g_HeroActors[g_LocalHeroIndex];
  memset(&(this_ptr->base).player_control,0,0x2c);
  iVar5 = g_LocalHeroIndex;
  iVar6 = (this_ptr->base).ai_task;
  if ((iVar6 != 0) && (iVar6 == 1)) {
    pCVar4 = g_HeroActors[g_LocalHeroIndex];
    pCVar1 = &(this_ptr->base).base.base.location;
    CStack_4c.z = (pCVar3->base).base.location.position.x - (pCVar1->position).x;
    local_40 = (pCVar3->base).base.location.position.y -
               (this_ptr->base).base.base.location.position.y;
    local_3c = (pCVar3->base).base.location.position.z -
               (this_ptr->base).base.base.location.position.z;
    local_74 = (pCVar1->position).x - (pCVar4->base).base.location.position.x;
    local_70.x = (this_ptr->base).base.base.location.position.y -
                 (pCVar4->base).base.location.position.y;
    local_70.y = (this_ptr->base).base.base.location.position.z -
                 (pCVar4->base).base.location.position.z;
    if (&local_74 != &CStack_4c.z) {
      local_74 = CStack_4c.z;
      local_70.x = local_40;
      local_70.y = local_3c;
    }
    (this_ptr->base).base.turn_angle_accumulator = 0.0;
    if (SQRT(local_70.y * local_70.y + local_74 * local_74 + local_70.x * local_70.x) <=
        (float)6) {
      iVar6 = (*(((g_HeroActors[iVar5]->base).base.vtable._ue)->_ue).randomize)
                        ((CEnemy *)g_HeroActors[iVar5]);
      if ((iVar6 == 0) &&
         (uVar8 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
                            ((CCharacter *)this_ptr,in_stack_00000008), uVar8 != 0)) {
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
      this_ptr_00 = (*((g_HeroActors[iVar5]->base).base.vtable._ub)->getPathMap)
                              ((CDemonActor *)g_HeroActors[iVar5]);
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr_00,&(this_ptr->base).base.base.location.position,&CStack_64,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar6 != 0) {
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (CStack_64.y - (this_ptr->base).base.base.orient.vec.y);
        fVar2 = fStack_14 * (float)0.31830988619288902 * (float)4;
        local_24 = -fStack_1c;
        (this_ptr->base).player_control.turn_speed = fVar2;
        if (fVar2 < local_24) {
          (this_ptr->base).player_control.turn_speed = local_24;
        }
        if (fStack_1c < (this_ptr->base).player_control.turn_speed) {
          (this_ptr->base).player_control.turn_speed = fStack_1c;
        }
        (this_ptr->base).player_control.action_states[0] = 1;
      }
      (this_ptr->base).base.hero_proximity_timer = 0.0;
    }
    fVar2 = (this_ptr->base).base.turn_angle_accumulator;
    if (fVar2 <= 0.0) {
      if (fVar2 < 0.0) {
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
        (this_ptr->base).player_control.turn_speed = -fStack_1c;
      }
    }
    else {
      (this_ptr->base).base.turn_angle_accumulator = 0.0;
      (this_ptr->base).player_control.turn_speed = fStack_1c;
    }
    CStack_34.x = (pCVar3->base).base.location.position.x -
                  (this_ptr->base).base.base.location.position.x;
    CStack_34.y = (pCVar3->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    CStack_34.z = (pCVar3->base).base.location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    if (&local_70 != &CStack_34) {
      local_70.x = CStack_34.x;
      local_70.y = CStack_34.y;
      local_70.z = CStack_34.z;
    }
    pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_4c,&local_70)
    ;
    if (&local_70 != pCVar7) {
      local_70.x = pCVar7->x;
      local_70.y = pCVar7->y;
      local_70.z = pCVar7->z;
    }
    fStack_54 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_70.y - (this_ptr->base).base.base.orient.vec.y);
    if (local_20 < fStack_54) {
      fStack_54 = local_20;
    }
    if (fStack_54 < -local_20) {
      fStack_54 = -local_20;
    }
    local_74 = fStack_54 - *(float *)(this_ptr->unk2 + 0xc30);
    if (in_stack_00000008 * (float)3.1415926535000001 < local_74) {
      local_74 = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (local_74 < in_stack_00000008 * (float)-3.1415926535000001) {
      local_74 = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(this_ptr->unk2 + 0xc30) = *(float *)(this_ptr->unk2 + 0xc30) + local_74;
  }
  return;
}
