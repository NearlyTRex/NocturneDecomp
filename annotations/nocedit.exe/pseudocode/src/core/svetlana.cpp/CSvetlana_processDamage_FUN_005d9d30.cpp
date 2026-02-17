// Name: core_svetlana.cpp_CSvetlana_processDamage_FUN_005d9d30
// Address: 005d9d30
// Address Range: [[005d9d30, 005d9eba]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_processDamage_FUN_005d9d30(CSvetlana *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_processDamage_FUN_005d9d30(CSvetlana *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  if (((this_ptr->base).no_collision_flag & 0x7fffffffU) != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->debug_flag_1 != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  (this_ptr->base).no_collision_flag = (int)3.0f;
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if (pSVar2->state_index != 9) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_00->motion_controller);
      if (pSVar2->state_index != 8) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,8,1);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004ee030
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
        sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->unk5);
        iVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"svet-die.wav");
        this_ptr->unk5 = iVar3;
        core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
        return;
      }
    }
  }
  else if (0.0 < damage_info->damage_amount) {
    if (this_ptr->unk1 == 0) {
      iVar3 = 4;
    }
    else {
      iVar3 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,iVar3,1);
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->unk5);
    if (iVar3 == 0) {
      iVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"svet-hurt?.wav");
      this_ptr->unk5 = iVar3;
      core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
      return;
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
  return;
}
