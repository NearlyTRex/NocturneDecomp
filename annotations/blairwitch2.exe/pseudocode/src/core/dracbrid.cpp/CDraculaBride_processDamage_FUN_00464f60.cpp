// Name: core_dracbrid.cpp_CDraculaBride_processDamage_FUN_00464f60
// Address: 00464f60
// Address Range: [[00464f60, 00465200]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_processDamage_FUN_00464f60(CDraculaBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_CDraculaBride_processDamage_FUN_00464f60(CDraculaBride *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  byte bVar1;
  int aiStackY_104c [3];
  float afStackY_1040 [12];
  int aiStackY_1010 [996];
  CDraculaBride *this_ptr_01;
  CVector3f *position;
  int iVar2;
  int flame_type;
  float fVar3;
  float *pfVar4;
  int include_hero;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [2];
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  float fStack_28;
  int aiStack_24 [4];
  int iStack_14;
  
  bVar1 = 0;
  iStack_14 = 0;
  if (damage_info->ammo_type == AMMO_TYPE_LITHIUM) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005d11d4;
    core_actor_cpp_FUN_00408d70(this_ptr,&damage_info->impact_direction);
    iVar2 = 0;
    CStack_4c.x = fStack_40;
    *(float *)((int)&CStack_4c + (uint)bVar1 * -8 + 4) = afStack_3c[(uint)bVar1 * -2];
    *(float *)((int)&CStack_4c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
         afStack_3c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (0x01C3DEB4,&CStack_4c,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
    iStack_14 = 1;
  }
  if (damage_info->damage_type == DAMAGE_TYPE_ATTACK_STAKE) {
    iStack_14 = 1;
  }
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
              (&(this_ptr->base).base.model,0,&CStack_64);
    pfVar4 = &fStack_28;
    fStack_28 = CStack_64.x;
    aiStack_24[(uint)bVar1 * -2] = *(int *)((int)&CStack_64 + (uint)bVar1 * -8 + 4);
    aiStack_24[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
         *(int *)((int)&CStack_64 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar4);
    include_hero = 0;
    fVar3 = 10.0;
    flame_type = 0;
    iVar2 = 0;
    position = &CStack_34;
    CStack_34.x = fStack_58;
    *(float *)((int)&CStack_34 + (uint)bVar1 * -8 + 4) = afStack_54[(uint)bVar1 * -2];
    this_ptr_01 = this_ptr;
    *(float *)((int)&CStack_34 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
         afStack_54[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
    core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
              ((CCharacter *)this_ptr_01,position,iVar2,flame_type,fVar3,include_hero);
  }
  core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_00464f10(this_ptr,damage_info);
  fVar3 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar3;
  if (fVar3 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((((iVar2 != 0x11) && (iVar2 != 0x10)) && (iVar2 != 10)) && (iVar2 != 7)) {
      if (iStack_14 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,10,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,7,1);
        (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                  ((CDemonActor *)this_ptr,"4@bride-launch.wav" + 2);
      }
    }
    iVar2 = core_actor_cpp_randomChance_FUN_0040d060(0.4);
    if (iVar2 != 0) {
      core_dracbrid_cpp_FUN_00465400(this_ptr,"bride-die?.wav",2.0);
    }
    goto LAB_0046508c;
  }
  iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
  iVar2 = *(int *)(iVar2 + 0x24);
  if (((iVar2 == 8) || (iVar2 == 9)) || (iVar2 == 2)) {
    iVar2 = 1;
LAB_00465146:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar2,1);
  }
  else if (((iVar2 == 0) || (iVar2 == 0xe)) ||
          (((iVar2 == 0x13 || (((iVar2 == 0xc || (iVar2 == 0x12)) || (iVar2 == 0x14)))) ||
           (iVar2 == 0x15)))) {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,4,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,5,1);
    }
    if (iVar2 == 2) {
      iVar2 = 6;
      goto LAB_00465146;
    }
  }
  iVar2 = core_actor_cpp_randomChance_FUN_0040d060(0.4);
  if (iVar2 != 0) {
    core_dracbrid_cpp_FUN_00465400(this_ptr,"bride-hurt?.wav",2.0);
  }
LAB_0046508c:
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
