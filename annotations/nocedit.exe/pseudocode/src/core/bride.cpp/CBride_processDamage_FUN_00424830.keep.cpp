// Name: core_bride.cpp_CBride_processDamage_FUN_00424830
// Address: 00424830
// MANUAL RECONSTRUCTION
// Address Range: [[00424830, 00424a0a]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_processDamage_FUN_00424830(CBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_bride_cpp_CBride_processDamage_FUN_00424830(CBride *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_01;
  CVector3f *input_local_point;
  SMotion *pSVar1;
  int iVar2;
  uint uVar3;
  int iVar1;
  int force_immediate;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  char *sound_name;
  int iVar4;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
  if (damage_info->ammo_type == AMMO_TYPE_LITHIUM) {
    iVar1 = 0;
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_3c,&damage_info->impact_direction);
    do {
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
                (g_CFireEffectPtr,&local_3c,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar1 < 5);
  }
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                   (&(this_ptr->base).base.model,&local_24,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_30,input_local_point);
    core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0
              ((CCharacter *)this_ptr,&local_30,0,0,10.0,0);
  }
  core_bride_cpp_CBride_processDismemberment_FUN_00424600(this_ptr,damage_info);
  iVar1 = this_ptr->part_indices[8];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_data.visibility_flags[iVar1] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  this_ptr_01 = &(this_ptr->base).base.model;
  if (0.0 < (this_ptr->base).base.hit_points) {
    force_immediate = 1;
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_01->motion_controller,(iVar1 == 0) + 7,force_immediate);
    iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
    if (iVar1 != 0) goto LAB_00424955;
    sound_name = "ub-hurt?.wav";
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_01->motion_controller);
    if ((pSVar1->state_index == 0xe) || (pSVar1->state_index == 0xd)) goto LAB_00424955;
    iVar4 = 1;
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_01->motion_controller,(iVar2 == 0) + 0xb,iVar4);
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
    sound_name = "ub-die?.wav";
  }
  uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
  this_ptr->sfx_handles[0] = uVar3;
LAB_00424955:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
