// Name: core_zombie.cpp_CZombie_processDamage_FUN_005fc4f0
// Address: 005fc4f0
// Address Range: [[005fc4f0, 005fc706]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_processDamage_FUN_005fc4f0(CZombie *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_zombie_cpp_CZombie_processDamage_FUN_005fc4f0(CZombie *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  CMotionList *this_ptr_01;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  core_zombie_cpp_CZombie_FUN_005fc220(this_ptr);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
  iVar4 = this_ptr->part_indices[6];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_data.visibility_flags[iVar4] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  fVar1 = (this_ptr->base).base.hit_points;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).attack_cooldown = 1.2;
  if (0.0 < fVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,4,1);
    if (this_ptr->pain_cooldown <= 0.0) {
      this_ptr->pain_cooldown = 2.0;
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
      if (iVar4 == 0) {
        if (this_ptr->is_female != 0) {
          uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"f-zombie-hit?.wav");
          this_ptr->sfx_handles[0] = uVar3;
          core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
          return;
        }
        uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"zom-s0?.wav");
        this_ptr->sfx_handles[0] = uVar3;
        core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
        return;
      }
    }
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if ((pSVar2->state_index != 8) && (pSVar2->state_index != 7)) {
      core_zombie_cpp_CZombie_FUN_005fbde0(this_ptr);
      iVar4 = 6;
      if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)
         && (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0
             || ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]]
                 != 0)))) {
        iVar6 = 0;
        pcVar5 = "lookForHead";
        this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                (&(this_ptr->base).base.model.motion_controller);
        iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_01,pcVar5,iVar6);
        if (-1 < iVar6) {
          iVar4 = 9;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,iVar4,1);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
      if (this_ptr->is_female == 0) {
        pcVar5 = "zom-d0?.wav";
      }
      else {
        pcVar5 = "f-zombie-die?.wav";
      }
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,pcVar5);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
