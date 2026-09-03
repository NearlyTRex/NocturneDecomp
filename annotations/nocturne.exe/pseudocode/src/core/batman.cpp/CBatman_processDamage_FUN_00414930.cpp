// Name: core_batman.cpp_CBatman_processDamage_FUN_00414930
// Address: 00414930
// Address Range: [[00414930, 00414b3c]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_processDamage_FUN_00414930(CBatman *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_processDamage_FUN_00414930(CBatman *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CVector3f *input_local_point;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[2]);
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[0]);
  if (damage_info->ammo_type == AMMO_TYPE_LITHIUM) {
    iVar2 = 0;
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)this_ptr,&local_30,&damage_info->impact_direction);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (g_CFireEffect_PTR_005b80f0,&local_30,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                   (&(this_ptr->base).base.model,&local_3c,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)this_ptr,&local_24,input_local_point);
    core_charactr_cpp_CCharacter_igniteBone_FUN_00427730
              ((CCharacter *)this_ptr,&local_24,0,0,10.0,0);
  }
  core_batman_cpp_CBatman_processDismemberment_FUN_004145f0(this_ptr,damage_info);
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr_00->motion_controller);
    if ((pSVar3->state_index != 7) && (pSVar3->state_index != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr_00->motion_controller,7,1);
      sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[1]);
      uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"batman-die.wav");
      this_ptr->sfx_handles[1] = uVar4;
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
      return;
    }
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
    }
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[1]);
    if (iVar2 == 0) {
      uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"batman-hurt?.wav");
      this_ptr->sfx_handles[1] = uVar4;
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
  return;
}
