// Name: core_hostage.cpp_CHostage_processDamage_FUN_004f6450
// Address: 004f6450
// Address Range: [[004f6450, 004f654f]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_processDamage_FUN_004f6450(CHostage *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_hostage_cpp_CHostage_processDamage_FUN_004f6450(CHostage *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)this_ptr->unk2 == 0) {
    damage_info->damage_amount = 0.0;
  }
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,6,1);
    (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,this_ptr->die_sound);
  }
  else if (0.0 < damage_info->damage_amount) {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,4,1);
      uVar2 = DAT_00821ff4;
      this_ptr->unk4[0xc] = '\0';
      this_ptr->unk4[0xd] = '\0';
      this_ptr->unk4[0xe] = '@';
      this_ptr->unk4[0xf] = '@';
      *(uint *)(this_ptr->unk4 + 8) = uVar2;
    }
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->unk1);
    if (iVar3 == 0) {
      iVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,this_ptr->damage_sound);
      this_ptr->unk1 = iVar3;
      core_npc_cpp_CNPC_processDamage_FUN_00544d30(&this_ptr->base,damage_info);
      return;
    }
  }
  core_npc_cpp_CNPC_processDamage_FUN_00544d30(&this_ptr->base,damage_info);
  return;
}
