// Name: core_dracbrid.cpp_CDraculaBride_processDamage_FUN_0047d480
// Address: 0047d480
// Address Range: [[0047d480, 0047d720]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_processDamage_FUN_0047d480(CDraculaBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_CDraculaBride_processDamage_FUN_0047d480(CDraculaBride *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  SMotion *pSVar1;
  byte bVar2;
  float afStackY_104c [1011];
  CDraculaBride *this_ptr_01;
  CVector3f *pCVar3;
  int iVar4;
  int flame_type;
  float fVar5;
  int include_hero;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  int iStack_14;
  
  bVar2 = 0;
  iStack_14 = 0;
  if (damage_info->ammo_type == AMMO_TYPE_LITHIUM) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005dafcd;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,&damage_info->impact_direction,&CStack_40);
    iVar4 = 0;
    CStack_4c.x = CStack_40.x;
    *(uint *)((int)&CStack_4c + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&CStack_40 + (uint)bVar2 * -8 + 4);
    *(uint *)((int)&CStack_4c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&CStack_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,&CStack_4c,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
    iStack_14 = 1;
  }
  if (damage_info->damage_type == DAMAGE_TYPE_ATTACK_STAKE) {
    iStack_14 = 1;
  }
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&(this_ptr->base).base.model,0,&CStack_64);
    pCVar3 = &CStack_28;
    CStack_28.x = CStack_64.x;
    *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&CStack_64 + (uint)bVar2 * -8 + 4);
    *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&CStack_64 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,pCVar3,&CStack_58);
    include_hero = 0;
    fVar5 = 10.0;
    flame_type = 0;
    iVar4 = 0;
    pCVar3 = &CStack_34;
    CStack_34.x = CStack_58.x;
    *(uint *)((int)&CStack_34 + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&CStack_58 + (uint)bVar2 * -8 + 4);
    this_ptr_01 = this_ptr;
    *(uint *)((int)&CStack_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&CStack_58 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
              ((CCharacter *)this_ptr_01,pCVar3,iVar4,flame_type,fVar5,include_hero);
  }
  core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0047d430(this_ptr,damage_info);
  fVar5 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar5;
  if (fVar5 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    iVar4 = pSVar1->state_index;
    if ((((iVar4 != 0x11) && (iVar4 != 0x10)) && (iVar4 != 10)) && (iVar4 != 7)) {
      if (iStack_14 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,10,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,7,1);
        (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                  ((CDemonActor *)this_ptr,"4@bride-launch.wav" + 2);
      }
    }
    iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.4);
    if (iVar4 != 0) {
      core_dracbrid_cpp_FUN_0047d920(this_ptr,"bride-die?.wav",2.0);
    }
    goto LAB_0047d5ac;
  }
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
  iVar4 = pSVar1->state_index;
  if (((iVar4 == 8) || (iVar4 == 9)) || (iVar4 == 2)) {
    iVar4 = 1;
LAB_0047d666:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
  else if (((iVar4 == 0) || (iVar4 == 0xe)) ||
          (((iVar4 == 0x13 || (((iVar4 == 0xc || (iVar4 == 0x12)) || (iVar4 == 0x14)))) ||
           (iVar4 == 0x15)))) {
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,4,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,5,1);
    }
    if (iVar4 == 2) {
      iVar4 = 6;
      goto LAB_0047d666;
    }
  }
  iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.4);
  if (iVar4 != 0) {
    core_dracbrid_cpp_FUN_0047d920(this_ptr,"bride-hurt?.wav",2.0);
  }
LAB_0047d5ac:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
