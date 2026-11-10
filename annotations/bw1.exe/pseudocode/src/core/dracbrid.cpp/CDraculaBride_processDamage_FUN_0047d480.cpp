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
  int aiStackY_104c [3];
  float afStackY_1040 [12];
  int aiStackY_1010 [996];
  CDraculaBride *this_ptr_01;
  CVector3f *position;
  int iVar3;
  int flame_type;
  float fVar4;
  uint *puVar5;
  int include_hero;
  uint uStack_64;
  float fStack_58;
  float afStack_54 [2];
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  uint uStack_28;
  int aiStack_24 [4];
  int iStack_14;
  
  bVar2 = 0;
  iStack_14 = 0;
  if (*(int *)(damage_info + 0x28) == 7) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005dafcd;
    core_actor_cpp_FUN_00408b40(this_ptr,damage_info + 0x1c);
    iVar3 = 0;
    CStack_4c.x = fStack_40;
    *(float *)((int)&CStack_4c + (uint)bVar2 * -8 + 4) = afStack_3c[(uint)bVar2 * -2];
    *(float *)((int)&CStack_4c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_3c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,&CStack_4c,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar3 < 5);
    iStack_14 = 1;
  }
  if (*(int *)(damage_info + 0x30) == 0x68) {
    iStack_14 = 1;
  }
  if (*(int *)(damage_info + 0x30) == 0x6c) {
    core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,0);
    puVar5 = &uStack_28;
    uStack_28 = uStack_64;
    aiStack_24[(uint)bVar2 * -2] = *(int *)(&stack0xffffffa0 + (uint)bVar2 * -8);
    aiStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         *(int *)(&stack0xffffffa4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    core_actor_cpp_FUN_00408b40(this_ptr,puVar5);
    include_hero = 0;
    fVar4 = 10.0;
    flame_type = 0;
    iVar3 = 0;
    position = &CStack_34;
    CStack_34.x = fStack_58;
    *(float *)((int)&CStack_34 + (uint)bVar2 * -8 + 4) = afStack_54[(uint)bVar2 * -2];
    this_ptr_01 = this_ptr;
    *(float *)((int)&CStack_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
              ((CCharacter *)this_ptr_01,position,iVar3,flame_type,fVar4,include_hero);
  }
  core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0047d430(this_ptr,damage_info);
  fVar4 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar4;
  if (fVar4 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    iVar3 = *(int *)(pSVar1 + 0x24);
    if ((((iVar3 != 0x11) && (iVar3 != 0x10)) && (iVar3 != 10)) && (iVar3 != 7)) {
      if (iStack_14 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,10,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,7,1);
        (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                  ((CDemonActor *)this_ptr,"4@bride-launch.wav" + 2);
      }
    }
    iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.4);
    if (iVar3 != 0) {
      core_dracbrid_cpp_FUN_0047d920(this_ptr,"bride-die?.wav",2.0);
    }
    goto LAB_0047d5ac;
  }
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
  iVar3 = *(int *)(pSVar1 + 0x24);
  if (((iVar3 == 8) || (iVar3 == 9)) || (iVar3 == 2)) {
    iVar3 = 1;
LAB_0047d666:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar3,1);
  }
  else if (((iVar3 == 0) || (iVar3 == 0xe)) ||
          (((iVar3 == 0x13 || (((iVar3 == 0xc || (iVar3 == 0x12)) || (iVar3 == 0x14)))) ||
           (iVar3 == 0x15)))) {
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    if (iVar3 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,4,1);
    }
    if (iVar3 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,5,1);
    }
    if (iVar3 == 2) {
      iVar3 = 6;
      goto LAB_0047d666;
    }
  }
  iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.4);
  if (iVar3 != 0) {
    core_dracbrid_cpp_FUN_0047d920(this_ptr,"bride-hurt?.wav",2.0);
  }
LAB_0047d5ac:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
