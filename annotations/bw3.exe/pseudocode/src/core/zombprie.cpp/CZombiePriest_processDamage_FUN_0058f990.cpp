// Name: core_zombprie.cpp_CZombiePriest_processDamage_FUN_0058f990
// Address: 0058f990
// Address Range: [[0058f990, 0058fb11]]
// Convention: __cdecl
// Signature: void __cdecl core_zombprie_cpp_CZombiePriest_processDamage_FUN_0058f990(CZombiePriest *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_zombprie_cpp_CZombiePriest_processDamage_FUN_0058f990(CZombiePriest *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
  unkafter_zombiepr_cpp_FUN_0058f630(this_ptr,damage_info);
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0) &&
     ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] == 0)) {
    damage_info->damage_amount = 9999.9;
  }
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    if ((pSVar3->state_index != 5) && (pSVar3->state_index != 4)) {
      (this_ptr->base).base.health_bar_mode = HEALTH_BAR_NONE;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,4,1);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      if (this_ptr->death_sound_played == 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->death_sfx_handle);
        uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"@mobster-die-?.wav" + 1);
        this_ptr->death_sound_played = 1;
        this_ptr->death_sfx_handle = uVar4;
        core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
        return;
      }
    }
    goto LAB_0058fa47;
  }
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (damage_info->attacker,g_CTommyGunClassInfo.name_hash);
  if (iVar2 == 0) {
LAB_0058fa23:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,3,1);
  }
  else {
    iVar2 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
    if (iVar2 != 0) goto LAB_0058fa23;
  }
  iVar2 = sound_sndmain_cpp_FUN_00556700(this_ptr->death_sfx_handle);
  if (iVar2 == 0) {
    uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"mobster-hit-?.wav");
    this_ptr->death_sfx_handle = uVar4;
    core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
    return;
  }
LAB_0058fa47:
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
