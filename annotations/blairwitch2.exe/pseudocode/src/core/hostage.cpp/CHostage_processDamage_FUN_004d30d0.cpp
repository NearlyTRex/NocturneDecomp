// Name: core_hostage.cpp_CHostage_processDamage_FUN_004d30d0
// Address: 004d30d0
// Address Range: [[004d30d0, 004d31cf]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_processDamage_FUN_004d30d0(CHostage *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_processDamage_FUN_004d30d0(CHostage *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint uVar4;
  
  if (this_ptr->hostage_type == 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,6,1);
    (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,this_ptr->die_sound);
  }
  else if (0.0 < *(float *)(damage_info + 4)) {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr_00,4,1);
      pCVar2 = DAT_007bbff4;
      this_ptr->grabber_flee_timer = 3.0;
      this_ptr->grabber = pCVar2;
    }
    iVar3 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handle);
    if (iVar3 == 0) {
      uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,this_ptr->damage_sound);
      this_ptr->sfx_handle = uVar4;
      core_npc_cpp_CNPC_processDamage_FUN_00510b90(&this_ptr->base,damage_info);
      return;
    }
  }
  core_npc_cpp_CNPC_processDamage_FUN_00510b90(&this_ptr->base,damage_info);
  return;
}
