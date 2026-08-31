// Name: core_icepick.cpp_CIcePick_processDamage_FUN_004f95b0
// Address: 004f95b0
// MANUAL RECONSTRUCTION
// Address Range: [[004f95b0, 004f975d]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_processDamage_FUN_004f95b0(CIcePick *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_processDamage_FUN_004f95b0(CIcePick *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;

  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
#if !NOCTURNE_AUTHENTIC_FRIENDLY_FIRE
  nocturne_net_friendly_fire_block(&(this_ptr->base).base,damage_info);
#endif
  if (ABS((this_ptr->base).invincibility_timer) != 0.0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->god_mode_enabled != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  (this_ptr->base).invincibility_timer = 3.0f;
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
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004ee030
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
        sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"icepick_die01.wav");
        core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
        return;
      }
    }
  }
  else if (0.0 < damage_info->damage_amount) {
    if (this_ptr->guns_drawn == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,iVar4,1);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
    if (iVar4 == 0) {
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"icepick_injured??.wav");
      this_ptr->sfx_handles[1] = uVar3;
      core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
      return;
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
  return;
}
