// Name: core_bride.cpp_CBride_processDamage_FUN_00420c40
// Address: 00420c40
// Address Range: [[00420c40, 00420e1a]]
// Convention: unknown
// Signature: void core_bride_cpp_CBride_processDamage_FUN_00420c40(CBride *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_bride_cpp_CBride_processDamage_FUN_00420c40(CBride *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *input_local_point;
  SMotion *pSVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *sound_name;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[1]);
  if (param_2->ammo_type == AMMO_TYPE_LITHIUM) {
    iVar2 = 0;
    param_2->damage_amount = param_2->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)param_1,&local_3c,&param_2->impact_direction);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,&local_3c,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  if (param_2->damage_type == DAMAGE_TYPE_BURN) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                   (&(param_1->base).base.model,&local_24,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)param_1,&local_30,input_local_point);
    core_charactr_cpp_FUN_00427730((CCharacter *)param_1,&local_30,0,0,10.0,0);
  }
  core_bride_cpp_CBride_processDismemberment_FUN_00420a10(param_1,param_2);
  iVar2 = param_1->part_indices[8];
  (param_1->base).base.hit_points = (param_1->base).base.hit_points - param_2->damage_amount;
  if ((param_1->base).base.model.part_data.visibility_flags[iVar2] == 0) {
    (param_1->base).base.hit_points = 0.0;
  }
  this_ptr = &(param_1->base).base.model;
  if (0.0 < (param_1->base).base.hit_points) {
    iVar4 = 1;
    iVar2 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr->motion_controller,(iVar2 == 0) + 7,iVar4);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[0]);
    if (iVar2 != 0) goto LAB_00420d65;
    sound_name = "ub-hurt?.wav";
  }
  else {
    (param_1->base).base.hit_points = 0.0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar1->state_index == 0xe) || (pSVar1->state_index == 0xd)) goto LAB_00420d65;
    iVar4 = 1;
    iVar2 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr->motion_controller,(iVar2 == 0) + 0xb,iVar4);
    sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[0]);
    sound_name = "ub-die?.wav";
  }
  uVar3 = (*((param_1->base).base.base.vtable._ub)->playSound)((CDemonActor *)param_1,sound_name);
  param_1->sfx_handles[0] = uVar3;
LAB_00420d65:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
  return;
}
