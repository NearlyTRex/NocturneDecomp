// Name: core_batman.cpp_CBatman_processDamage_FUN_004179a0
// Address: 004179a0
// Address Range: [[004179a0, 00417bac]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_processDamage_FUN_004179a0(CBatman *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_batman_cpp_CBatman_processDamage_FUN_004179a0(CBatman *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CVector3f *input_local_point;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  CVector3f local_30;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk2 + 8));
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)this_ptr->unk2);
  if (damage_info->ammo_type == 7) {
    iVar2 = 0;
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_30,&damage_info->impact_direction);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar2 < 5);
  }
  if (damage_info->damage_type == 0x6c) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                   (&(this_ptr->base).base.model,(CVector3f *)&stack0xffffffc4,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_24,input_local_point);
    core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0
              ((CCharacter *)this_ptr,&local_24,0,0.0,0x41200000,0);
  }
  core_batman_cpp_CBatman_FUN_00417660(this_ptr);
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if ((pSVar3->state_index != 7) && (pSVar3->state_index != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,7,1);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk2 + 4));
      uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"batman-die.wav");
      *(uint *)(this_ptr->unk2 + 4) = uVar4;
      core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
      return;
    }
  }
  else {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,4,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,5,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,6,1);
    }
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk2 + 4));
    if (iVar2 == 0) {
      uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"batman-hurt?.wav");
      *(uint *)(this_ptr->unk2 + 4) = uVar4;
      core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
