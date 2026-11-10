// Name: core_drone.cpp_CDrone_processDamage_FUN_004864e0
// Address: 004864e0
// Address Range: [[004864e0, 00486647]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_processDamage_FUN_004864e0(CDrone *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_drone_cpp_CDrone_processDamage_FUN_004864e0(CDrone *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[2]);
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
    iVar4 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[0]);
    if (iVar4 == 0) {
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"drone-hurt?.wav");
      this_ptr->sfx_handles[0] = uVar3;
    }
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,3,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,4,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,5,1);
      core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
      return;
    }
  }
  else {
    this_ptr_00 = &(this_ptr->base).base.model;
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((*(int *)(pSVar2 + 0x24) != 8) && (*(int *)(pSVar2 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,7,1);
    }
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
    uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"drone-die?.wav");
    this_ptr->sfx_handles[0] = uVar3;
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
