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
  uint sfx_handle;
  SMotion *pSVar2;
  CMotionList *this_ptr_01;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *sound_name;
  
  core_zombie_cpp_CZombie_FUN_005fc220(this_ptr);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
  iVar5 = *(int *)(this_ptr->unk4 + 0x48);
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  fVar1 = (this_ptr->base).base.hit_points;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).unk2 = 0x3f99999a;
  if (0.0 < fVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,4,1);
    if (*(float *)(this_ptr->unk4 + 0x4c) <= 0.0) {
      sfx_handle = *(uint *)(this_ptr->unk4 + 0x54);
      this_ptr->unk4[0x4c] = '\0';
      this_ptr->unk4[0x4d] = '\0';
      this_ptr->unk4[0x4e] = '\0';
      this_ptr->unk4[0x4f] = '@';
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(sfx_handle);
      if (iVar5 == 0) {
        if (*(int *)this_ptr->unk4 != 0) {
          uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"f-zombie-hit?.wav");
          *(uint *)(this_ptr->unk4 + 0x54) = uVar4;
          core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
          return;
        }
        uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"zom-s0?.wav");
        *(uint *)(this_ptr->unk4 + 0x54) = uVar4;
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
      iVar5 = 6;
      if (((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk4 + 0x48)]
           == 0) &&
         (((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk4 + 0x38)]
           != 0 || ((this_ptr->base).base.model.part_data.visibility_flags
                    [*(int *)(this_ptr->unk4 + 0x30)] != 0)))) {
        this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                (&(this_ptr->base).base.model.motion_controller);
        iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_01);
        if (-1 < iVar3) {
          iVar5 = 9;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,iVar5,1);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk4 + 0x54));
      if (*(int *)this_ptr->unk4 == 0) {
        sound_name = "zom-d0?.wav";
      }
      else {
        sound_name = "f-zombie-die?.wav";
      }
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
