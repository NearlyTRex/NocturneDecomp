// Name: core_construc.cpp_CConstruct_processDamage_FUN_00443f00
// Address: 00443f00
// Address Range: [[00443f00, 0044400c]]
// Convention: __cdecl
// Signature: void __cdecl core_construc_cpp_CConstruct_processDamage_FUN_00443f00(CConstruct *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_construc_cpp_CConstruct_processDamage_FUN_00443f00(CConstruct *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  float fVar2;
  SMotion *pSVar3;
  int iVar4;
  uint uVar5;
  int force_immediate;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[6]);
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[4]);
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
  this_ptr_00 = &(this_ptr->base).base.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
  if (pSVar3->state_index != 0xc) {
    if (this_ptr->blown_up != 1) {
      fVar2 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
      (this_ptr->base).base.hit_points = fVar2;
      if (fVar2 <= 0.0) {
        pCVar1 = (this_ptr->base).base.base.vtable._ub;
        (this_ptr->base).base.hit_points = 1.0;
        uVar5 = (*pCVar1->playSound)((CDemonActor *)this_ptr,"stick-leaps.wav");
        this_ptr->sfx_handles[7] = uVar5;
        core_construc_cpp_FUN_00444110(this_ptr);
      }
      else {
        force_immediate = 1;
        iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&this_ptr_00->base,iVar4 + 7,force_immediate);
        iVar4 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handles[5]);
        if (iVar4 == 0) {
          uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"stick-hurt_growl.wav");
          this_ptr->sfx_handles[5] = uVar5;
        }
      }
      damage_info->gore_multiplier = 0.0;
      core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
    }
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0xe,1);
  return;
}
