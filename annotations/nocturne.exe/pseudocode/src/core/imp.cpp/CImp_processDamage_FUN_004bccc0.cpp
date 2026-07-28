// Name: core_imp.cpp_CImp_processDamage_FUN_004bccc0
// Address: 004bccc0
// Address Range: [[004bccc0, 004bcdf4]]
// Convention: unknown
// Signature: void core_imp_cpp_CImp_processDamage_FUN_004bccc0(CImp *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_imp_cpp_CImp_processDamage_FUN_004bccc0(CImp *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  char *sound_name;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[0]);
  if (param_2->ammo_type == AMMO_TYPE_MERCURY) {
    iVar4 = 0;
    param_2->damage_amount = param_2->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)param_1,&local_24,&param_2->impact_direction);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,&local_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  core_imp_cpp_CImp_processDismemberment_FUN_004bca20(param_1,param_2);
  fVar1 = (param_1->base).base.hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).base.model;
  (param_1->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,5,1)
    ;
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
    if (iVar4 != 0) goto LAB_004bcdbc;
    sound_name = "imp-hurt?.wav";
  }
  else {
    (param_1->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index == 6) || (pSVar2->state_index == 7)) goto LAB_004bcdbc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,6,1)
    ;
    sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[1]);
    sound_name = "imp-die?.wav";
  }
  uVar3 = (*((param_1->base).base.base.vtable._ub)->playSound)((CDemonActor *)param_1,sound_name);
  param_1->sfx_handles[1] = uVar3;
LAB_004bcdbc:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
  return;
}
