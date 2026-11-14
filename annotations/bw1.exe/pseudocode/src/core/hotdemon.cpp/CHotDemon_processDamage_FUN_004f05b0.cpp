// Name: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004f05b0
// Address: 004f05b0
// Address Range: [[004f05b0, 004f0777]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004f05b0(CHotDemon *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004f05b0(CHotDemon *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1010 [1009];
  int iVar5;
  CVector3f CStack_28;
  float fStack_1c;
  uint auStack_18 [4];
  
  bVar4 = 0;
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
  if (damage_info->ammo_type == AMMO_TYPE_MERCURY) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005e5212;
    core_actor_cpp_FUN_00408b40(this_ptr,&damage_info->impact_direction);
    iVar5 = 0;
    CStack_28.x = fStack_1c;
    *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4) = auStack_18[(uint)bVar4 * -2];
    *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         auStack_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    do {
      iVar5 = iVar5 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,&CStack_28,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar5 < 5);
  }
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    iVar5 = pSVar2->state_index;
    if ((((iVar5 != 4) && (iVar5 != 5)) && (iVar5 != 10)) && (iVar5 != 0xb)) {
      if (iVar5 < 6) {
        iVar5 = 4;
      }
      else {
        iVar5 = 10;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,iVar5,1);
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"hotdemon-die.wav");
      this_ptr->sfx_handles[1] = uVar3;
      core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
      return;
    }
  }
  else {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((pSVar2->state_index < 6) || (pSVar2->state_index == 0xf)) {
      iVar5 = 3;
    }
    else {
      iVar5 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar5,1);
    iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]);
    if (iVar5 == 0) {
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"hotdemon-hurt?.wav");
      this_ptr->sfx_handles[1] = uVar3;
      core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
