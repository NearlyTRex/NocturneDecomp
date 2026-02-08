// Name: core_sentinel.cpp_CSentinel_processDamage_FUN_00568cd0
// Address: 00568cd0
// Address Range: [[00568cd0, 00568dc9]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_processDamage_FUN_00568cd0(CSentinel *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_sentinel_cpp_CSentinel_processDamage_FUN_00568cd0(CSentinel *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  char *sound_name;
  
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar3 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,5,1);
    }
    if (iVar3 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,6,1);
    }
    if (iVar3 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,7,1);
    }
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->unk3);
    if (iVar3 != 0) goto LAB_00568d4d;
    sound_name = "sentinel-hurt?.wav";
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if ((pSVar2->state_index == 8) || (pSVar2->state_index == 9)) goto LAB_00568d4d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,8,1);
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->unk3);
    sound_name = "sentinel-die.wav";
  }
  iVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
  this_ptr->unk3 = iVar3;
LAB_00568d4d:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
