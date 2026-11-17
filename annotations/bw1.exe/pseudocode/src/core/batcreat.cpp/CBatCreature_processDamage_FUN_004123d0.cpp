// Name: core_batcreat.cpp_CBatCreature_processDamage_FUN_004123d0
// Address: 004123d0
// Address Range: [[004123d0, 004125fc]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_processDamage_FUN_004123d0(CBatCreature *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_processDamage_FUN_004123d0(CBatCreature *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  SMotion *pSVar1;
  uint uVar2;
  byte bVar3;
  float afStackY_1048 [1011];
  CBatCreature *this_ptr_01;
  CVector3f *pCVar4;
  int iVar5;
  int flame_type;
  float fVar6;
  int include_hero;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  
  bVar3 = 0;
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[2]);
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
  if (damage_info->ammo_type == AMMO_TYPE_LITHIUM) {
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,&damage_info->impact_direction,&CStack_3c);
    iVar5 = 0;
    CStack_60.x = CStack_3c.x;
    *(uint *)((int)&CStack_60 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_3c + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_60 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    do {
      iVar5 = iVar5 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (g_CFireEffectPtr,&CStack_60,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar5 < 5);
  }
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&(this_ptr->base).base.model,0,&CStack_54);
    pCVar4 = &CStack_24;
    CStack_24.x = CStack_54.x;
    *(uint *)((int)&CStack_24 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_54 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_24 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_54 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,pCVar4,&CStack_48);
    include_hero = 0;
    fVar6 = 10.0;
    flame_type = 0;
    iVar5 = 0;
    pCVar4 = &CStack_30;
    CStack_30.x = CStack_48.x;
    *(uint *)((int)&CStack_30 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_48 + (uint)bVar3 * -8 + 4);
    this_ptr_01 = this_ptr;
    *(uint *)((int)&CStack_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
              ((CCharacter *)this_ptr_01,pCVar4,iVar5,flame_type,fVar6,include_hero);
  }
  core_batcreat_cpp_CBatCreature_processDismemberment_FUN_00412170(this_ptr,damage_info);
  fVar6 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar6;
  if (fVar6 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((pSVar1->state_index != 7) && (pSVar1->state_index != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,7,1);
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
      uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"batman-die.wav");
      this_ptr->sfx_handles[1] = uVar2;
    }
  }
  else {
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    if (iVar5 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,4,1);
    }
    if (iVar5 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,5,1);
    }
    if (iVar5 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,6,1);
    }
    iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]);
    if (iVar5 == 0) {
      uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"batman-hurt?.wav");
      this_ptr->sfx_handles[1] = uVar2;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
