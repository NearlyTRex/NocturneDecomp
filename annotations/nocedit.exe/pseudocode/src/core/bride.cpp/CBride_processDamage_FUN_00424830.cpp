// Name: core_bride.cpp_CBride_processDamage_FUN_00424830
// Address: 00424830
// Address Range: [[00424830, 00424a0a]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_processDamage_FUN_00424830(CBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bride_cpp_CBride_processDamage_FUN_00424830(CBride *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *input_local_point;
  SMotion *pSVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *sound_name;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
  if (damage_info->ammo_type == 7) {
    iVar2 = 0;
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_3c,&damage_info->impact_direction);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
                (g_CFireEffectPtr,&local_3c,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  if (damage_info->damage_type == 0x6c) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                   (&(this_ptr->base).base.model,&local_24,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_30,input_local_point);
    core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0
              ((CCharacter *)this_ptr,&local_30,0,0.0,0x41200000,0);
  }
  core_bride_cpp_CBride_FUN_00424600(this_ptr);
  iVar2 = this_ptr->part_indices[8];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_data.visibility_flags[iVar2] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  if (0.0 < (this_ptr->base).base.hit_points) {
    iVar4 = 1;
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,(iVar2 == 0) + 7,iVar4);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
    if (iVar2 != 0) goto LAB_00424955;
    sound_name = "ub-hurt?.wav";
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if ((pSVar1->state_index == 0xe) || (pSVar1->state_index == 0xd)) goto LAB_00424955;
    iVar4 = 1;
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,(iVar2 == 0) + 0xb,iVar4);
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
    sound_name = "ub-die?.wav";
  }
  uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
  this_ptr->sfx_handles[0] = uVar3;
LAB_00424955:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
