// Name: core_zombie.cpp_CZombie_processDamage_FUN_005996d0
// Address: 005996d0
// Address Range: [[005996d0, 005998e6]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_processDamage_FUN_005996d0(CZombie *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_zombie_cpp_CZombie_processDamage_FUN_005996d0(CZombie *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  CMotionList *this_ptr_01;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  core_zombie_cpp_CZombie_processDismemberment_FUN_00599400(this_ptr,damage_info);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
  iVar2 = this_ptr->part_indices[6];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_data.visibility_flags[iVar2] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  fVar1 = (this_ptr->base).base.hit_points;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).attack_cooldown = 1.2;
  if (0.0 < fVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,4,1);
    if (this_ptr->pain_cooldown <= 0.0) {
      this_ptr->pain_cooldown = 2.0;
      iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
      if (iVar2 == 0) {
        if (this_ptr->is_female != 0) {
          uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"f-zombie-hit?.wav");
          this_ptr->sfx_handles[0] = uVar3;
          core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
          return;
        }
        uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"zom-s0?.wav");
        this_ptr->sfx_handles[0] = uVar3;
        core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
        return;
      }
    }
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar2 + 0x24) != 8) && (*(int *)(iVar2 + 0x24) != 7)) {
      core_zombie_cpp_CZombie_dropAndClearTarget_FUN_00598f20(this_ptr);
      iVar2 = 6;
      if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)
         && (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0
             || ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]]
                 != 0)))) {
        iVar5 = 0;
        pcVar4 = "@lookForHead" + 1;
        this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                                (&(this_ptr->base).base.model.base);
        iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(this_ptr_01,pcVar4,iVar5);
        if (-1 < iVar5) {
          iVar2 = 9;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,iVar2,1);
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
      if (this_ptr->is_female == 0) {
        pcVar4 = "zom-d0?.wav";
      }
      else {
        pcVar4 = "f-zombie-die?.wav";
      }
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,pcVar4);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
