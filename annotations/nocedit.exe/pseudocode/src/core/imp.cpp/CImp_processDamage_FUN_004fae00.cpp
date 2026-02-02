// Name: core_imp.cpp_CImp_processDamage_FUN_004fae00
// Address: 004fae00
// Address Range: [[004fae00, 004faf34]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_processDamage_FUN_004fae00(CImp *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_imp_cpp_CImp_processDamage_FUN_004fae00(CImp *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  char *sound_name;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 8));
  if (damage_info->ammo_type == 8) {
    iVar4 = 0;
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,(CVector3f *)&stack0xffffffdc,&damage_info->impact_direction)
    ;
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar4 < 5);
  }
  core_imp_cpp_CImp_FUN_004fab60(this_ptr);
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,5,1);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0xc));
    if (iVar4 != 0) goto LAB_004faefc;
    sound_name = "imp-hurt?.wav";
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if ((pSVar2->state_index == 6) || (pSVar2->state_index == 7)) goto LAB_004faefc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,6,1);
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 0xc));
    sound_name = "imp-die?.wav";
  }
  uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
  *(uint *)(this_ptr->unk + 0xc) = uVar3;
LAB_004faefc:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
