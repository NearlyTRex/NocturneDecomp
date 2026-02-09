// Name: core_scat.cpp_CScat_FUN_005578e0
// Address: 005578e0
// Address Range: [[005578e0, 00557d1a]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_FUN_005578e0(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_FUN_005578e0(CScat *this_ptr)

{
  CWeapon *pCVar1;
  float fVar2;
  CHero *pCVar3;
  SMotion *pSVar4;
  CPathMap *this_ptr_00;
  CPathMap *extraout_EAX;
  int iVar5;
  CVector3f *pCVar6;
  CHero *this_ptr_01;
  int iVar7;
  float in_stack_00000008;
  float local_7c;
  float local_78;
  CVector3f local_74;
  CVector3f CStack_68;
  float local_5c;
  float local_58;
  CVector3f CStack_50;
  float fStack_40;
  float local_3c;
  CVector3f local_38;
  int local_2c;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = 0.25;
  local_1c = 0.7853982;
  this_ptr_01 = g_HeroActors[g_LocalHeroIndex];
  if ((this_ptr->base).ai_task == 0) {
    return;
  }
  memset(&(this_ptr->base).action_bindings,0,0x2c);
  pCVar3 = g_HeroActors[g_LocalHeroIndex];
  local_3c = (this_ptr->base).base.base.location.position.x -
             (pCVar3->base).base.location.position.x;
  local_38.x = (this_ptr->base).base.base.location.position.y -
               (pCVar3->base).base.location.position.y;
  local_38.y = (this_ptr->base).base.base.location.position.z -
               (pCVar3->base).base.location.position.z;
  iVar5 = (this_ptr->base).ai_task;
  iVar7 = 0;
  if ((((iVar5 == 2) || (iVar5 == 3)) &&
      (pCVar1 = (this_ptr->base).inventory.selected_weapon, pCVar1 != (CWeapon *)0x0)) &&
     (0 < pCVar1->ammo_count)) {
    local_38.z = 9999.9;
    pCVar3 = (CHero *)core_hero_cpp_CHero_FUN_004f3960(&this_ptr->base);
    if ((pCVar3 != (CHero *)0x0) && ((int)local_38.z < 0x41f00000)) {
      iVar7 = 1;
      this_ptr_01 = pCVar3;
    }
  }
  if (iVar7 != *(int *)this_ptr->unk) {
    (this_ptr->base).action_bindings.draw_key = 1;
  }
  CStack_68.z = (this_ptr_01->base).base.location.position.x -
                (this_ptr->base).base.base.location.position.x;
  local_5c = (this_ptr_01->base).base.location.position.y -
             (this_ptr->base).base.base.location.position.y;
  local_58 = (this_ptr_01->base).base.location.position.z -
             (this_ptr->base).base.base.location.position.z;
  if (&local_3c != &CStack_68.z) {
    local_3c = CStack_68.z;
    local_38.x = local_5c;
    local_38.y = local_58;
  }
  local_7c = SQRT(local_38.y * local_38.y + local_3c * local_3c + local_38.x * local_38.x);
  if ((this_ptr->base).ai_task == 3) {
    local_7c = 0.0;
  }
  if (*(int *)(this_ptr->unk + 0x14) == 0) goto LAB_00557b63;
  local_2c = 0;
  if (*(int *)(*(int *)(this_ptr->unk + 0x14) + 0x2e0) == 8) {
    if (local_7c < (float)8) {
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller);
      if ((pSVar4->state_index == 7) && (*(int *)this_ptr->unk != 0)) {
        (this_ptr->base).action_bindings.fire_key = 1;
      }
LAB_00557a94:
      if (local_2c == 0) goto LAB_00557b63;
    }
  }
  else if (local_7c < (float)15) {
    if ((*(int *)this_ptr->unk != 0) && (iVar7 != 0)) {
      if (((float)0.90000000000000002 < (this_ptr->base).base.layer_action_t) &&
         (*(int *)(this_ptr->unk + 0x28) != 0)) {
        (this_ptr->base).action_bindings.fire_key = 1;
      }
      core_charactr_cpp_CCharacter_FUN_00428d80((CCharacter *)this_ptr);
    }
    (this_ptr->base).action_bindings.run_key = 0;
    (this_ptr->base).action_bindings.walk_key = 0;
    goto LAB_00557a94;
  }
  this_ptr_00 = (*((this_ptr_01->base).base.vtable._ub)->getPathMap)((CDemonActor *)this_ptr_01);
  if (this_ptr_00 == (CPathMap *)0x0) {
    core_path_cpp_FUN_00548500();
    this_ptr_00 = extraout_EAX;
  }
  iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                    (this_ptr_00,&(this_ptr->base).base.base.location.position,&CStack_50,
                     (this_ptr->base).base.base.unk1);
  if (iVar5 != 0) {
    fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_50.y - (this_ptr->base).base.base.orient.bank);
    fVar2 = fStack_14 * (float)0.31830988619288902 * (float)4;
    local_20 = -local_1c;
    *(float *)((this_ptr->base).unk2 + 4) = fVar2;
    if (fVar2 < local_20) {
      *(float *)((this_ptr->base).unk2 + 4) = local_20;
    }
    if (local_1c < *(float *)((this_ptr->base).unk2 + 4)) {
      *(float *)((this_ptr->base).unk2 + 4) = local_1c;
    }
    if ((float)10 <= local_78) {
      (this_ptr->base).action_bindings.run_key = 1;
    }
    (this_ptr->base).action_bindings.walk_key = 1;
  }
LAB_00557b63:
  local_74.x = (this_ptr_01->base).base.location.position.x -
               (this_ptr->base).base.base.location.position.x;
  local_74.y = (this_ptr_01->base).base.location.position.y -
               (this_ptr->base).base.base.location.position.y;
  local_74.z = (this_ptr_01->base).base.location.position.z -
               (this_ptr->base).base.base.location.position.z;
  if (&local_38 != &local_74) {
    local_38.x = local_74.x;
    local_38.y = local_74.y;
    local_38.z = local_74.z;
  }
  pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_68,&local_38);
  if (&local_38 != pCVar6) {
    local_38.x = pCVar6->x;
    local_38.y = pCVar6->y;
    local_38.z = pCVar6->z;
  }
  fStack_40 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (local_38.y - (this_ptr->base).base.base.orient.bank);
  if (fStack_18 < fStack_40) {
    fStack_40 = fStack_18;
  }
  if (fStack_40 < -fStack_18) {
    fStack_40 = -fStack_18;
  }
  local_7c = fStack_40 - *(float *)(this_ptr->unk + 8);
  if (in_stack_00000008 * (float)3.1415926535000001 < local_7c) {
    local_7c = in_stack_00000008 * (float)3.1415926535000001;
  }
  if (local_7c < in_stack_00000008 * (float)-3.1415926535000001) {
    local_7c = in_stack_00000008 * (float)-3.1415926535000001;
  }
  *(float *)(this_ptr->unk + 8) = *(float *)(this_ptr->unk + 8) + local_7c;
  return;
}
