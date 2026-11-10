// Name: core_drone.cpp_CDrone_processDamage_FUN_0046dfe0
// Address: 0046dfe0
// Address Range: [[0046dfe0, 0046e147]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_processDamage_FUN_0046dfe0(CDrone *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_drone_cpp_CDrone_processDamage_FUN_0046dfe0(CDrone *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  uint uVar3;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[2]);
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
    iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
    if (iVar2 == 0) {
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"drone-hurt?.wav");
      this_ptr->sfx_handles[0] = uVar3;
    }
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,3,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,4,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,5,1);
      core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
      return;
    }
  }
  else {
    this_ptr_00 = &(this_ptr->base).base.model;
    (this_ptr->base).base.hit_points = 0.0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar2 + 0x24) != 8) && (*(int *)(iVar2 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr_00,7,1);
    }
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
    uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"drone-die?.wav");
    this_ptr->sfx_handles[0] = uVar3;
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
