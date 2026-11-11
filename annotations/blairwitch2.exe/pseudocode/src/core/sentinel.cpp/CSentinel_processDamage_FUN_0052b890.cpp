// Name: core_sentinel.cpp_CSentinel_processDamage_FUN_0052b890
// Address: 0052b890
// Address Range: [[0052b890, 0052b989]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_processDamage_FUN_0052b890(CSentinel *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_CSentinel_processDamage_FUN_0052b890(CSentinel *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  uint uVar3;
  char *sound_name;
  
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,5,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,6,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,7,1);
    }
    iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handle);
    if (iVar2 != 0) goto LAB_0052b90d;
    sound_name = "sentinel-hurt?.wav";
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar2 + 0x24) == 8) || (*(int *)(iVar2 + 0x24) == 9)) goto LAB_0052b90d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,8,1);
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
    sound_name = "sentinel-die.wav";
  }
  uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
  this_ptr->sfx_handle = uVar3;
LAB_0052b90d:
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
