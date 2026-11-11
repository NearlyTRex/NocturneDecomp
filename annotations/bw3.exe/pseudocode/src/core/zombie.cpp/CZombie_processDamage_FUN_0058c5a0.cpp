// Name: core_zombie.cpp_CZombie_processDamage_FUN_0058c5a0
// Address: 0058c5a0
// Address Range: [[0058c5a0, 0058c7c3]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_processDamage_FUN_0058c5a0(CZombie *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_zombie_cpp_CZombie_processDamage_FUN_0058c5a0(CZombie *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  CMotionList *this_ptr_01;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  
  core_zombie_cpp_CZombie_processDismemberment_FUN_0058c330(this_ptr,damage_info);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
  iVar2 = this_ptr->part_indices[6];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_data.visibility_flags[iVar2] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  fVar1 = (this_ptr->base).base.hit_points;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).attack_cooldown = 1.2;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    iVar2 = pSVar3->state_index;
    if (((iVar2 != 9) && (iVar2 != 8)) && (iVar2 != 0x15)) {
      core_zombie_cpp_CZombie_dropAndClearTarget_FUN_0058be30(this_ptr);
      iVar2 = 7;
      if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)
         && (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0
             || ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]]
                 != 0)))) {
        iVar6 = 0;
        pcVar5 = "@lookForHead" + 1;
        this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                                (&(this_ptr->base).base.model.base);
        iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(this_ptr_01,pcVar5,iVar6);
        if (-1 < iVar6) {
          iVar2 = 10;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,iVar2,1);
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
      if (this_ptr->is_female == 0) {
        pcVar5 = "zom-d0?.wav";
      }
      else {
        pcVar5 = "f-zombie-die?.wav";
      }
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,pcVar5);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
      return;
    }
  }
  else {
    iVar2 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,damage_info->damage_amount);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,6,1);
    }
    if (this_ptr->pain_cooldown <= 0.0) {
      this_ptr->pain_cooldown = 2.0;
      iVar2 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handles[0]);
      if (iVar2 == 0) {
        if (this_ptr->is_female == 0) {
          uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"zom-s0?.wav");
          this_ptr->sfx_handles[0] = uVar4;
          core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
          return;
        }
        uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"f-zombie-hit?.wav");
        this_ptr->sfx_handles[0] = uVar4;
        core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
        return;
      }
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
