// Name: core_scat.cpp_CScat_FUN_005578e0
// Address: 005578e0
// Address Range: [[005578e0, 00557d1a]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_FUN_005578e0(CScat *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_scat_cpp_CScat_FUN_005578e0(CScat *this_ptr)

{
  CWeapon *pCVar1;
  float fVar2;
  CHero *pCVar3;
  SMotion *pSVar4;
  CPathMap *this_ptr_00;
  int iVar5;
  CVector3f *pCVar6;
  CHero *this_ptr_01;
  int iVar7;
  float in_stack_00000008;
  float fStack_80;
  float local_7c;
  CVector3f local_78;
  CVector3f CStack_6c;
  CVector3f local_60;
  CVector3f CStack_54;
  float fStack_44;
  CVector3f local_3c;
  int local_30;
  int local_2c;
  float fStack_24;
  float local_20;
  float local_1c;
  float fStack_18;
  
  local_20 = 0.25;
  local_1c = 0.7853982;
  this_ptr_01 = g_HeroActors[g_LocalHeroIndex];
  if ((this_ptr->base).ai_task == 0) {
    return;
  }
  memset(&(this_ptr->base).player_control,0,0x2c);
  pCVar3 = g_HeroActors[g_LocalHeroIndex];
  local_3c.x = (this_ptr->base).base.base.location.position.x -
               (pCVar3->base).base.location.position.x;
  local_3c.y = (this_ptr->base).base.base.location.position.y -
               (pCVar3->base).base.location.position.y;
  local_3c.z = (this_ptr->base).base.base.location.position.z -
               (pCVar3->base).base.location.position.z;
  iVar5 = (this_ptr->base).ai_task;
  iVar7 = 0;
  if ((((iVar5 == 2) || (iVar5 == 3)) &&
      (pCVar1 = (this_ptr->base).inventory.selected_weapon, pCVar1 != (CWeapon *)0x0)) &&
     (0 < pCVar1->ammo_count)) {
    local_30 = 0x461c3f9a;
    pCVar3 = (CHero *)core_hero_cpp_CHero_FUN_004f3960(&this_ptr->base);
    if ((pCVar3 != (CHero *)0x0) && (local_30 < 0x41f00000)) {
      iVar7 = 1;
      this_ptr_01 = pCVar3;
    }
  }
  if (iVar7 != this_ptr->guns_drawn) {
    (this_ptr->base).player_control.action_states[6] = 1;
  }
  local_60.x = (this_ptr_01->base).base.location.position.x -
               (this_ptr->base).base.base.location.position.x;
  local_60.y = (this_ptr_01->base).base.location.position.y -
               (this_ptr->base).base.base.location.position.y;
  local_60.z = (this_ptr_01->base).base.location.position.z -
               (this_ptr->base).base.base.location.position.z;
  if (&local_3c != &local_60) {
    local_3c.x = local_60.x;
    local_3c.y = local_60.y;
    local_3c.z = local_60.z;
  }
  local_7c = SQRT(local_3c.z * local_3c.z + local_3c.x * local_3c.x + local_3c.y * local_3c.y);
  if ((this_ptr->base).ai_task == 3) {
    local_7c = 0.0;
  }
  if (this_ptr->unk4 == 0) goto LAB_00557b63;
  local_2c = 0;
  if (*(int *)(this_ptr->unk4 + 0x2e0) == 8) {
    if (local_7c < (float)8) {
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller);
      if ((pSVar4->state_index == 7) && (this_ptr->guns_drawn != 0)) {
        (this_ptr->base).player_control.action_states[3] = 1;
      }
LAB_00557a94:
      if (local_2c == 0) goto LAB_00557b63;
    }
  }
  else if (local_7c < (float)15) {
    if ((this_ptr->guns_drawn != 0) && (iVar7 != 0)) {
      if (((float)0.90000000000000002 < (this_ptr->base).base.layer_action_t) && (this_ptr->unk9 != 0))
      {
        (this_ptr->base).player_control.action_states[3] = 1;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00428d80
                ((CCharacter *)this_ptr,&(this_ptr_01->base).base.location.position);
    }
    (this_ptr->base).player_control.action_states[2] = 0;
    (this_ptr->base).player_control.action_states[0] = 0;
    goto LAB_00557a94;
  }
  this_ptr_00 = (*((this_ptr_01->base).base.vtable._ub)->getPathMap)((CDemonActor *)this_ptr_01);
  if (this_ptr_00 == (CPathMap *)0x0) {
    this_ptr_00 = core_path_cpp_FUN_00548500(&(this_ptr_01->base).base.location);
  }
  iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                    (this_ptr_00,&(this_ptr->base).base.base.location.position,&CStack_54,
                     (this_ptr->base).base.base.direction_hint);
  if (iVar5 != 0) {
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_54.y - (this_ptr->base).base.base.orient.vec.y);
    fVar2 = fStack_18 * (float)0.31830988619288902 * (float)4;
    fStack_24 = -local_20;
    (this_ptr->base).player_control.turn_speed = fVar2;
    if (fVar2 < fStack_24) {
      (this_ptr->base).player_control.turn_speed = fStack_24;
    }
    if (local_20 < (this_ptr->base).player_control.turn_speed) {
      (this_ptr->base).player_control.turn_speed = local_20;
    }
    if ((float)10 <= local_7c) {
      (this_ptr->base).player_control.action_states[2] = 1;
    }
    (this_ptr->base).player_control.action_states[0] = 1;
  }
LAB_00557b63:
  local_78.x = (this_ptr_01->base).base.location.position.x -
               (this_ptr->base).base.base.location.position.x;
  local_78.y = (this_ptr_01->base).base.location.position.y -
               (this_ptr->base).base.base.location.position.y;
  local_78.z = (this_ptr_01->base).base.location.position.z -
               (this_ptr->base).base.base.location.position.z;
  if (&local_3c != &local_78) {
    local_3c.x = local_78.x;
    local_3c.y = local_78.y;
    local_3c.z = local_78.z;
  }
  pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_6c,&local_3c);
  if (&local_3c != pCVar6) {
    local_3c.x = pCVar6->x;
    local_3c.y = pCVar6->y;
    local_3c.z = pCVar6->z;
  }
  fStack_44 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (local_3c.y - (this_ptr->base).base.base.orient.vec.y);
  if (local_1c < fStack_44) {
    fStack_44 = local_1c;
  }
  if (fStack_44 < -local_1c) {
    fStack_44 = -local_1c;
  }
  fStack_80 = fStack_44 - *(float *)(this_ptr->unk1 + 4);
  if (in_stack_00000008 * (float)3.1415926535000001 < fStack_80) {
    fStack_80 = in_stack_00000008 * (float)3.1415926535000001;
  }
  if (fStack_80 < in_stack_00000008 * (float)-3.1415926535000001) {
    fStack_80 = in_stack_00000008 * (float)-3.1415926535000001;
  }
  *(float *)(this_ptr->unk1 + 4) = *(float *)(this_ptr->unk1 + 4) + fStack_80;
  return;
}
