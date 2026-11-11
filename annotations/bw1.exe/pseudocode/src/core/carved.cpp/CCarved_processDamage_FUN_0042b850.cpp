// Name: core_carved.cpp_CCarved_processDamage_FUN_0042b850
// Address: 0042b850
// Address Range: [[0042b850, 0042ba27]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_processDamage_FUN_0042b850(CCarved *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_carved_cpp_CCarved_processDamage_FUN_0042b850(CCarved *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  
  if ((this_ptr->base).base.is_invulnerable != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"@ShotInvulnerable" + 1);
    return;
  }
  core_carved_cpp_FUN_0042b580(this_ptr,damage_info);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
  iVar3 = this_ptr->part_indices[6];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_data.visibility_flags[iVar3] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  fVar1 = (this_ptr->base).base.hit_points;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).attack_cooldown = 1.2;
  if (0.0 < fVar1) {
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,iVar3 + 0xd,1)
    ;
    if (this_ptr->pain_cooldown <= 0.0) {
      this_ptr->pain_cooldown = 2.0;
      iVar3 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[0]);
      if (iVar3 == 0) {
        uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"carved-damage?.wav");
        this_ptr->sfx_handles[0] = uVar4;
        core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
        return;
      }
    }
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    iVar3 = pSVar2->state_index;
    if (((iVar3 == 0x16) || (iVar3 == 0x13)) && ((iVar3 == 0x17 || (iVar3 == 0x14)))) {
      if (iVar3 == 0x18) goto LAB_0042b956;
      if (iVar3 == 0x15) {
        core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
        return;
      }
    }
    core_carved_cpp_FUN_0042b370(this_ptr);
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar3 + 0x13,1);
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"carved-die?.wav");
    (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
  }
LAB_0042b956:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
