// Name: core_batcreat.cpp_CBatCreature_processDamage_FUN_00412760
// Address: 00412760
// Address Range: [[00412760, 0041298c]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_processDamage_FUN_00412760(CBatCreature *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batcreat_cpp_CBatCreature_processDamage_FUN_00412760(CBatCreature *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  uint uVar1;
  byte bVar2;
  float afStackY_1048 [1011];
  CBatCreature *this_ptr_01;
  CVector3f *position;
  int iVar3;
  int flame_type;
  float fVar4;
  uint *puVar5;
  int include_hero;
  CVector3f CStack_60;
  uint uStack_54;
  float afStack_50 [5];
  float fStack_3c;
  CVector3f CStack_30;
  uint uStack_24;
  float afStack_20 [4];
  
  bVar2 = 0;
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[2]);
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
  if (damage_info->ammo_type == AMMO_TYPE_LITHIUM) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005cb956;
    core_actor_cpp_FUN_00408d70(this_ptr,&damage_info->impact_direction);
    iVar3 = 0;
    CStack_60.x = fStack_3c;
    *(float *)((int)&CStack_60 + (uint)bVar2 * -8 + 4) = afStack_50[(uint)bVar2 * -2 + 6];
    *(float *)((int)&CStack_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (0x01C3DEB4,&CStack_60,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar3 < 5);
  }
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,0);
    puVar5 = &uStack_24;
    uStack_24 = uStack_54;
    afStack_20[(uint)bVar2 * -2] = afStack_50[(uint)bVar2 * -2];
    afStack_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    core_actor_cpp_FUN_00408d70(this_ptr,puVar5);
    include_hero = 0;
    fVar4 = 10.0;
    flame_type = 0;
    iVar3 = 0;
    position = &CStack_30;
    CStack_30.x = afStack_50[2];
    *(float *)((int)&CStack_30 + (uint)bVar2 * -8 + 4) = afStack_50[(uint)bVar2 * -2 + 3];
    this_ptr_01 = this_ptr;
    *(float *)((int)&CStack_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
    core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
              ((CCharacter *)this_ptr_01,position,iVar3,flame_type,fVar4,include_hero);
  }
  core_batcreat_cpp_CBatCreature_processDismemberment_FUN_00412500(this_ptr,damage_info);
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
                        ((CDemonActor *)this_ptr,"@batman-die.wav" + 1);
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
