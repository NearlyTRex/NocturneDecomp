// Name: core_mobster.cpp_CMobster_processDamage_FUN_00500080
// Address: 00500080
// Address Range: [[00500080, 00500205]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_00500080(CMobster *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_00500080(CMobster *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint uVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
  core_mobster_cpp_CMobster_processDismemberment_FUN_004ffcc0(this_ptr,damage_info);
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0) &&
     ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] == 0)) {
    damage_info->damage_amount = 9999.9;
  }
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar3 + 0x24) != 5) && (*(int *)(iVar3 + 0x24) != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,4,1);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      if (this_ptr->death_sound_played == 0) {
        sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
        uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"@mobster-die-?.wav" + 1);
        this_ptr->death_sound_played = 1;
        this_ptr->sfx_handles[0] = uVar4;
        core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
        return;
      }
    }
    goto LAB_00500145;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (damage_info->attacker,g_CTommyGunClassInfo.name_hash);
  if (pCVar2 == (CDemonActor *)0x0) {
LAB_00500121:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,3,1);
  }
  else {
    iVar3 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
    if (iVar3 != 0) goto LAB_00500121;
  }
  iVar3 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
  if (iVar3 == 0) {
    uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"mobster-hit-?.wav");
    this_ptr->sfx_handles[0] = uVar4;
    core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
    return;
  }
LAB_00500145:
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
