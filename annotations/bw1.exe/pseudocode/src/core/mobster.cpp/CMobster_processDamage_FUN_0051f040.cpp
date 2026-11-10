// Name: core_mobster.cpp_CMobster_processDamage_FUN_0051f040
// Address: 0051f040
// Address Range: [[0051f040, 0051f1c5]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_0051f040(CMobster *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_0051f040(CMobster *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
  core_mobster_cpp_CMobster_processDismemberment_FUN_0051ec80(this_ptr,damage_info);
  if ((*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[1] * 4) == 0) &&
     (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[3] * 4) == 0)) {
    *(uint *)(damage_info + 4) = 0x461c3f9a;
  }
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((*(int *)(pSVar3 + 0x24) != 5) && (*(int *)(pSVar3 + 0x24) != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,4,1);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      if (this_ptr->death_sound_played == 0) {
        sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
        uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"@mobster-die-?.wav" + 1);
        this_ptr->death_sound_played = 1;
        this_ptr->sfx_handles[0] = uVar4;
        core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
        return;
      }
    }
    goto LAB_0051f105;
  }
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)(damage_info + 0x34),g_CTommyGunClassInfo.name_hash);
  if (iVar2 == 0) {
LAB_0051f0e1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,3,1);
  }
  else {
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
    if (iVar2 != 0) goto LAB_0051f0e1;
  }
  iVar2 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[0]);
  if (iVar2 == 0) {
    uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"mobster-hit-?.wav");
    this_ptr->sfx_handles[0] = uVar4;
    core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
    return;
  }
LAB_0051f105:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
