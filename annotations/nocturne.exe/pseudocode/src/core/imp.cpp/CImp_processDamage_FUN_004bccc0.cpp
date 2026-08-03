// Name: core_imp.cpp_CImp_processDamage_FUN_004bccc0
// Address: 004bccc0
// Address Range: [[004bccc0, 004bcdf4]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_processDamage_FUN_004bccc0(CImp *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_imp_cpp_CImp_processDamage_FUN_004bccc0(CImp *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  char *sound_name;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[0]);
  if (damage_info->ammo_type == AMMO_TYPE_MERCURY) {
    iVar4 = 0;
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)this_ptr,&local_24,&damage_info->impact_direction);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (g_CFireEffect_PTR_005b80f0,&local_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  core_imp_cpp_CImp_processDismemberment_FUN_004bca20(this_ptr,damage_info);
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,5,1);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[1]);
    if (iVar4 != 0) goto LAB_004bcdbc;
    sound_name = "imp-hurt?.wav";
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr_00->motion_controller);
    if ((pSVar2->state_index == 6) || (pSVar2->state_index == 7)) goto LAB_004bcdbc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,6,1);
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[1]);
    sound_name = "imp-die?.wav";
  }
  uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
  this_ptr->sfx_handles[1] = uVar3;
LAB_004bcdbc:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
  return;
}
