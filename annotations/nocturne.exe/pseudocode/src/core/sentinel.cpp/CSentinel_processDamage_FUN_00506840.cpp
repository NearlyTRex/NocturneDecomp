// Name: core_sentinel.cpp_CSentinel_processDamage_FUN_00506840
// Address: 00506840
// Address Range: [[00506840, 00506939]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_processDamage_FUN_00506840(CSentinel *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_CSentinel_processDamage_FUN_00506840(CSentinel *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  char *sound_name;
  
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr_00->motion_controller,5,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,6,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,7,1);
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handle);
    if (iVar4 != 0) goto LAB_005068bd;
    sound_name = "sentinel-hurt?.wav";
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr_00->motion_controller);
    if ((pSVar2->state_index == 8) || (pSVar2->state_index == 9)) goto LAB_005068bd;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,8,1);
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
    sound_name = "sentinel-die.wav";
  }
  uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
  this_ptr->sfx_handle = uVar3;
LAB_005068bd:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
  return;
}
