// Name: core_gargoyle.cpp_CGargoyle_processDamage_FUN_004e57d0
// Address: 004e57d0
// Address Range: [[004e57d0, 004e5923]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_processDamage_FUN_004e57d0(CGargoyle *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_CGargoyle_processDamage_FUN_004e57d0(CGargoyle *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  CVector3f local_1c;
  
  iVar4 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_1c,&damage_info->impact_direction);
  do {
    iVar4 = iVar4 + 1;
    core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
              (g_CFireEffectPtr,&local_1c,(CVector3f *)0x0,0x10000,0x8000,0,0xffff);
  } while (iVar4 < 3);
  this_ptr_00 = &(this_ptr->base).base.model;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  if (pSVar2->state_index != 5) {
    core_gargoyle_cpp_CGargoyle_FUN_004e5530(this_ptr);
    fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
    (this_ptr->base).base.hit_points = fVar1;
    if (0.0 < fVar1) {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->unk2);
      if (iVar4 == 0) {
        uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gargoyle-hurt?.wav");
        this_ptr->unk2 = uVar3;
        core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
        return;
      }
    }
    else {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->unk2);
      (this_ptr->base).base.hit_points = 0.0;
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_00->motion_controller);
      if (pSVar2->state_index != 8) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,8,1);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"gargoyle-shatter.wav");
        core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0
                  ((CCharacter *)this_ptr,(CVector3f *)0x0,-1.0);
      }
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
    return;
  }
  damage_info->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
