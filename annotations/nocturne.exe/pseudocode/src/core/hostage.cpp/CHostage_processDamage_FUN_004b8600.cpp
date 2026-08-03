// Name: core_hostage.cpp_CHostage_processDamage_FUN_004b8600
// Address: 004b8600
// Address Range: [[004b8600, 004b86ff]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_processDamage_FUN_004b8600(CHostage *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_processDamage_FUN_004b8600(CHostage *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint uVar4;
  
  if (this_ptr->hostage_type == 0) {
    damage_info->damage_amount = 0.0;
  }
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,6,1);
    (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,this_ptr->die_sound);
  }
  else if (0.0 < damage_info->damage_amount) {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr_00->motion_controller,4,1);
      pCVar2 = DAT_00763e44;
      this_ptr->grabber_flee_timer = 3.0;
      this_ptr->grabber = pCVar2;
    }
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handle);
    if (iVar3 == 0) {
      uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,this_ptr->damage_sound);
      this_ptr->sfx_handle = uVar4;
      core_npc_cpp_CNPC_processDamage_FUN_004eeea0(&this_ptr->base,damage_info);
      return;
    }
  }
  core_npc_cpp_CNPC_processDamage_FUN_004eeea0(&this_ptr->base,damage_info);
  return;
}
