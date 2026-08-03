// Name: core_biggs.cpp_CBiggs_processDamage_FUN_00415900
// Address: 00415900
// Address Range: [[00415900, 004159b3]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_processDamage_FUN_00415900(CBiggs *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_processDamage_FUN_00415900(CBiggs *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,7,1);
  }
  else {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr_00->motion_controller,4,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,5,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,6,1);
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
  return;
}
