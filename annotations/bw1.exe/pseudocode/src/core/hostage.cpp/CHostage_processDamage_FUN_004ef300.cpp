// Name: core_hostage.cpp_CHostage_processDamage_FUN_004ef300
// Address: 004ef300
// Address Range: [[004ef300, 004ef3ff]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_processDamage_FUN_004ef300(CHostage *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_processDamage_FUN_004ef300(CHostage *this_ptr,SDamageInfo *damage_info)

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
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,6,1);
    (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,this_ptr->die_sound);
  }
  else if (0.0 < *(float *)(damage_info + 4)) {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,4,1);
      pCVar2 = DAT_007c2ff4;
      this_ptr->grabber_flee_timer = 3.0;
      this_ptr->grabber = pCVar2;
    }
    iVar3 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handle);
    if (iVar3 == 0) {
      uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,this_ptr->damage_sound);
      this_ptr->sfx_handle = uVar4;
      core_npc_cpp_CNPC_processDamage_FUN_00531da0(&this_ptr->base,damage_info);
      return;
    }
  }
  core_npc_cpp_CNPC_processDamage_FUN_00531da0(&this_ptr->base,damage_info);
  return;
}
