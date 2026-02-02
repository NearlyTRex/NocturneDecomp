// Name: core_mobster.cpp_CMobster_processDamage_FUN_00527740
// Address: 00527740
// Address Range: [[00527740, 005278c5]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_00527740(CMobster *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_mobster_cpp_CMobster_processDamage_FUN_00527740(CMobster *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CTommyGun *pCVar2;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk2 + 0xc));
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk2 + 4));
  core_mobster_cpp_CMobster_FUN_00527380(this_ptr);
  if (((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk2 + 0x14)] == 0) &&
     ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk2 + 0x1c)] == 0)) {
    damage_info->damage_amount = 9999.9;
  }
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if ((pSVar3->state_index != 5) && (pSVar3->state_index != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,4,1);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
      if (*(int *)(this_ptr->unk2 + 8) == 0) {
        sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)this_ptr->unk2);
        uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"mobster-die-?.wav");
        this_ptr->unk2[8] = '\x01';
        this_ptr->unk2[9] = '\0';
        this_ptr->unk2[10] = '\0';
        this_ptr->unk2[0xb] = '\0';
        *(uint *)this_ptr->unk2 = uVar4;
        core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
        return;
      }
    }
    goto LAB_00527805;
  }
  pCVar2 = (CTommyGun *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (damage_info->attacker,g_CTommyGunClassInfo.name_hash);
  if (pCVar2 == (CTommyGun *)0x0) {
LAB_005277e1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,3,1);
  }
  else {
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    if (iVar2 != 0) goto LAB_005277e1;
  }
  iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->unk2);
  if (iVar2 == 0) {
    uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"mobster-hit-?.wav");
    *(uint *)this_ptr->unk2 = uVar4;
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
    return;
  }
LAB_00527805:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
