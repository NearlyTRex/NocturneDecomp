// Name: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004f7720
// Address: 004f7720
// Address Range: [[004f7720, 004f78e0]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004f7720(CHotDemon *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004f7720(CHotDemon *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
  if (damage_info->ammo_type == AMMO_TYPE_MERCURY) {
    iVar4 = 0;
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_24,&damage_info->impact_direction);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
                (g_CFireEffectPtr,&local_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    iVar4 = pSVar2->state_index;
    if ((((iVar4 != 4) && (iVar4 != 5)) && (iVar4 != 10)) && (iVar4 != 0xb)) {
      if (iVar4 < 6) {
        iVar4 = 4;
      }
      else {
        iVar4 = 10;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,iVar4,1);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"hotdemon-die.wav");
      this_ptr->sfx_handles[1] = uVar3;
      core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
      return;
    }
  }
  else {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if ((pSVar2->state_index < 6) || (pSVar2->state_index == 0xf)) {
      iVar4 = 3;
    }
    else {
      iVar4 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar4,1);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
    if (iVar4 == 0) {
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"hotdemon-hurt?.wav");
      this_ptr->sfx_handles[1] = uVar3;
      core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
