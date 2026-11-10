// Name: core_mobster.cpp_CMobster_processDamage_FUN_00500080
// Address: 00500080
// Address Range: [[00500080, 00500205]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_00500080(CMobster *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_00500080(CMobster *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  uint uVar3;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
  core_mobster_cpp_CMobster_processDismemberment_FUN_004ffcc0(this_ptr,damage_info);
  if ((*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[1] * 4) == 0) &&
     (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[3] * 4) == 0)) {
    *(uint *)(damage_info + 4) = 0x461c3f9a;
  }
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar2 + 0x24) != 5) && (*(int *)(iVar2 + 0x24) != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr_00,4,1);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      if (this_ptr->death_sound_played == 0) {
        sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
        uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"@mobster-die-?.wav" + 1);
        this_ptr->death_sound_played = 1;
        this_ptr->sfx_handles[0] = uVar3;
        core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
        return;
      }
    }
    goto LAB_00500145;
  }
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)(damage_info + 0x34),g_CTommyGunClassInfo.name_hash);
  if (iVar2 == 0) {
LAB_00500121:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,3,1);
  }
  else {
    iVar2 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
    if (iVar2 != 0) goto LAB_00500121;
  }
  iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
  if (iVar2 == 0) {
    uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"mobster-hit-?.wav");
    this_ptr->sfx_handles[0] = uVar3;
    core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
    return;
  }
LAB_00500145:
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
