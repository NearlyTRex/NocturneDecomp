// Name: core_batman.cpp_CBatman_processDamage_FUN_00414290
// Address: 00414290
// Address Range: [[00414290, 004144bc]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_processDamage_FUN_00414290(CBatman *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batman_cpp_CBatman_processDamage_FUN_00414290(CBatman *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  uint uVar1;
  byte bVar2;
  float afStackY_1048 [1011];
  CBatman *this_ptr_01;
  CVector3f *position;
  int iVar3;
  int flame_type;
  float fVar4;
  float *pfVar5;
  int include_hero;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [5];
  CVector3f CStack_30;
  float fStack_24;
  uint auStack_20 [4];
  
  bVar2 = 0;
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[2]);
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
  if (damage_info->ammo_type == AMMO_TYPE_LITHIUM) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005cbc0e;
    core_actor_cpp_FUN_00408d70(this_ptr,&damage_info->impact_direction);
    iVar3 = 0;
    CStack_60.x = afStack_44[2];
    *(float *)((int)&CStack_60 + (uint)bVar2 * -8 + 4) = afStack_44[(uint)bVar2 * -2 + 3];
    *(float *)((int)&CStack_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (0x01C3DEB4,&CStack_60,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar3 < 5);
  }
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
              (&(this_ptr->base).base.model,0,&CStack_54);
    pfVar5 = &fStack_24;
    fStack_24 = CStack_54.x;
    auStack_20[(uint)bVar2 * -2] = *(uint *)((int)&CStack_54 + (uint)bVar2 * -8 + 4);
    auStack_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         *(uint *)((int)&CStack_54 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar5);
    include_hero = 0;
    fVar4 = 10.0;
    flame_type = 0;
    iVar3 = 0;
    position = &CStack_30;
    CStack_30.x = fStack_48;
    *(float *)((int)&CStack_30 + (uint)bVar2 * -8 + 4) = afStack_44[(uint)bVar2 * -2];
    this_ptr_01 = this_ptr;
    *(float *)((int)&CStack_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
              ((CCharacter *)this_ptr_01,position,iVar3,flame_type,fVar4,include_hero);
  }
  core_batman_cpp_CBatman_processDismemberment_FUN_00413f40(this_ptr,damage_info);
  fVar4 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar4;
  if (fVar4 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar3 + 0x24) != 7) && (*(int *)(iVar3 + 0x24) != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,7,1);
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
      uVar1 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"4@batman-die.wav" + 2);
      this_ptr->sfx_handles[1] = uVar1;
    }
  }
  else {
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
    if (iVar3 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,4,1);
    }
    if (iVar3 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,5,1);
    }
    if (iVar3 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,6,1);
    }
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar3 == 0) {
      uVar1 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"batman-hurt?.wav");
      this_ptr->sfx_handles[1] = uVar1;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
