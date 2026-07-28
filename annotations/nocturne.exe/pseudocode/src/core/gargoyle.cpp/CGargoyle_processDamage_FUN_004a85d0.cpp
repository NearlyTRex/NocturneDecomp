// Name: core_gargoyle.cpp_CGargoyle_processDamage_FUN_004a85d0
// Address: 004a85d0
// Address Range: [[004a85d0, 004a8723]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_CGargoyle_processDamage_FUN_004a85d0(CGargoyle *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_gargoyle_cpp_CGargoyle_processDamage_FUN_004a85d0(CGargoyle *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  CVector3f local_1c;
  
  iVar4 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)param_1,&local_1c,&param_2->impact_direction);
  do {
    iVar4 = iVar4 + 1;
    core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
              (0x01C08D04,&local_1c,(CVector3f *)0x0,0x10000,0x8000,0,0xffff);
  } while (iVar4 < 3);
  this_ptr = &(param_1->base).base.model;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&this_ptr->motion_controller);
  if (pSVar2->state_index != 5) {
    core_gargoyle_cpp_CGargoyle_processDismemberment_FUN_004a8330(param_1,param_2);
    fVar1 = (param_1->base).base.hit_points - param_2->damage_amount;
    (param_1->base).base.hit_points = fVar1;
    if (0.0 < fVar1) {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[0]);
      if (iVar4 == 0) {
        uVar3 = (*((param_1->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)param_1,"gargoyle-hurt?.wav");
        param_1->sfx_handles[0] = uVar3;
        core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
        return;
      }
    }
    else {
      sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[0]);
      (param_1->base).base.hit_points = 0.0;
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&this_ptr->motion_controller);
      if (pSVar2->state_index != 8) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr->motion_controller,8,1);
        (*((param_1->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"gargoyle-shatter.wav");
        core_charactr_cpp_CCharacter_dismember_FUN_00427b60
                  ((CCharacter *)param_1,(CVector3f *)0x0,-1.0,1);
      }
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
    return;
  }
  param_2->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
  return;
}
