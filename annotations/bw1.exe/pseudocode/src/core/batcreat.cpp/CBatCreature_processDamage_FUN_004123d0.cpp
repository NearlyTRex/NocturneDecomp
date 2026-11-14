// Name: core_batcreat.cpp_CBatCreature_processDamage_FUN_004123d0
// Address: 004123d0
// Address Range: [[004123d0, 004125fc]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_processDamage_FUN_004123d0(CBatCreature *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batcreat_cpp_CBatCreature_processDamage_FUN_004123d0(CBatCreature *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  SMotion *pSVar1;
  uint uVar2;
  byte bVar3;
  float afStackY_1048 [1011];
  CBatCreature *this_ptr_01;
  CVector3f *position;
  int iVar4;
  int flame_type;
  float fVar5;
  float *pfVar6;
  int include_hero;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [5];
  CVector3f CStack_30;
  float fStack_24;
  uint auStack_20 [4];
  
  bVar3 = 0;
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[2]);
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
  if (damage_info->ammo_type == AMMO_TYPE_LITHIUM) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005d38c9;
    core_actor_cpp_FUN_00408b40(this_ptr,&damage_info->impact_direction);
    iVar4 = 0;
    CStack_60.x = afStack_44[2];
    *(float *)((int)&CStack_60 + (uint)bVar3 * -8 + 4) = afStack_44[(uint)bVar3 * -2 + 3];
    *(float *)((int)&CStack_60 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,&CStack_60,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&(this_ptr->base).base.model,0,&CStack_54);
    pfVar6 = &fStack_24;
    fStack_24 = CStack_54.x;
    auStack_20[(uint)bVar3 * -2] = *(uint *)((int)&CStack_54 + (uint)bVar3 * -8 + 4);
    auStack_20[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(uint *)((int)&CStack_54 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar6);
    include_hero = 0;
    fVar5 = 10.0;
    flame_type = 0;
    iVar4 = 0;
    position = &CStack_30;
    CStack_30.x = fStack_48;
    *(float *)((int)&CStack_30 + (uint)bVar3 * -8 + 4) = afStack_44[(uint)bVar3 * -2];
    this_ptr_01 = this_ptr;
    *(float *)((int)&CStack_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
              ((CCharacter *)this_ptr_01,position,iVar4,flame_type,fVar5,include_hero);
  }
  core_batcreat_cpp_CBatCreature_processDismemberment_FUN_00412170(this_ptr,damage_info);
  fVar5 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar5;
  if (fVar5 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((pSVar1->state_index != 7) && (pSVar1->state_index != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,7,1);
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
      uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"@batman-die.wav" + 1);
      this_ptr->sfx_handles[1] = uVar2;
    }
  }
  else {
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,4,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,5,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,6,1);
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]);
    if (iVar4 == 0) {
      uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"batman-hurt?.wav");
      this_ptr->sfx_handles[1] = uVar2;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
