// Name: core_moocow.cpp_CMooCow_processDamage_FUN_004f91d0
// Address: 004f91d0
// Address Range: [[004f91d0, 004f9294]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_CMooCow_processDamage_FUN_004f91d0(CMooCow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_moocow_cpp_CMooCow_processDamage_FUN_004f91d0(CMooCow *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  
  core_moocow_cpp_FUN_004f9050(this_ptr,damage_info);
  fVar1 = (this_ptr->base).hit_points - damage_info->damage_amount;
  (this_ptr->base).hit_points = fVar1;
  if (fVar1 <= 0.0) {
    this_ptr_00 = &(this_ptr->base).model;
    (this_ptr->base).hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    if ((pSVar2->state_index != 7) && (pSVar2->state_index != 6)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,6,1);
      (*((this_ptr->base).base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    }
  }
  iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(0x02CF5680,this_ptr->sfx_handle);
  if (iVar3 != 0) {
    core_charactr_cpp_CCharacter_processDamage_FUN_00430d60(&this_ptr->base,damage_info);
    return;
  }
  uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"cow?.wav");
  this_ptr->sfx_handle = uVar4;
  core_charactr_cpp_CCharacter_processDamage_FUN_00430d60(&this_ptr->base,damage_info);
  return;
}
