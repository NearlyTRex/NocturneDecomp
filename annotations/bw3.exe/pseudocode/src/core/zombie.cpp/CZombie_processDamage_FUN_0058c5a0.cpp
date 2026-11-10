// Name: core_zombie.cpp_CZombie_processDamage_FUN_0058c5a0
// Address: 0058c5a0
// Address Range: [[0058c5a0, 0058c7c3]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_processDamage_FUN_0058c5a0(CZombie *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

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
  iVar2 = *(int *)&this_ptr->field_0xd12c;
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar2 * 4) == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  fVar1 = (this_ptr->base).base.hit_points;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).attack_cooldown = 1.2;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    iVar2 = *(int *)(pSVar3 + 0x24);
    if (((iVar2 != 9) && (iVar2 != 8)) && (iVar2 != 0x15)) {
      core_zombie_cpp_CZombie_dropAndClearTarget_FUN_0058be30(this_ptr);
      iVar2 = 7;
      if ((*(int *)(&(this_ptr->base).base.model.field_0x2140 + *(int *)&this_ptr->field_0xd12c * 4)
           == 0) &&
         ((*(int *)(&(this_ptr->base).base.model.field_0x2140 + *(int *)&this_ptr->field_0xd11c * 4)
           != 0 || (*(int *)(&(this_ptr->base).base.model.field_0x2140 +
                            *(int *)&this_ptr->field_0xd114 * 4) != 0)))) {
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
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd138);
      if (*(int *)&this_ptr->field_0xd0e0 == 0) {
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
    iVar2 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,*(uint *)(damage_info + 4));
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,6,1);
    }
    if (*(float *)&this_ptr->field_0xd130 <= 0.0) {
      *(uint *)&this_ptr->field_0xd130 = 0x40000000;
      iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd138);
      if (iVar2 == 0) {
        if (*(int *)&this_ptr->field_0xd0e0 == 0) {
          uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"zom-s0?.wav");
          *(uint *)&this_ptr->field_0xd138 = uVar4;
          core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
          return;
        }
        uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"f-zombie-hit?.wav");
        *(uint *)&this_ptr->field_0xd138 = uVar4;
        core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
        return;
      }
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
