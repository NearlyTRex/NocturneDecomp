// Name: core_zombie.cpp_CZombie_processDamage_FUN_00561fc0
// Address: 00561fc0
// Address Range: [[00561fc0, 005621d6]]
// Convention: unknown
// Signature: void core_zombie_cpp_CZombie_processDamage_FUN_00561fc0(CZombie *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_zombie_cpp_CZombie_processDamage_FUN_00561fc0(CZombie *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  CMotionList *this_ptr_00;
  uint uVar3;
  float unaff_EBX;
  int unaff_EBP;
  int iVar4;
  CVector3f *unaff_EDI;
  char *pcVar5;
  int iVar6;
  
  core_zombie_cpp_CZombie_processDismemberment_FUN_00561cf0(param_1,param_2);
  (*(((param_1->base).base.base.vtable._uc)->_uc).kill)
            ((CCharacter *)param_1,unaff_EBP,unaff_EDI,unaff_EBX);
  iVar4 = param_1->part_indices[6];
  (param_1->base).base.hit_points = (param_1->base).base.hit_points - param_2->damage_amount;
  if ((param_1->base).base.model.part_data.visibility_flags[iVar4] == 0) {
    (param_1->base).base.hit_points = 0.0;
  }
  fVar1 = (param_1->base).base.hit_points;
  this_ptr = &(param_1->base).base.model;
  (param_1->base).attack_cooldown = 1.2;
  if (0.0 < fVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,4,1)
    ;
    if (param_1->pain_cooldown <= 0.0) {
      param_1->pain_cooldown = 2.0;
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[0]);
      if (iVar4 == 0) {
        if (param_1->is_female != 0) {
          uVar3 = (*((param_1->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)param_1,"f-zombie-hit?.wav");
          param_1->sfx_handles[0] = uVar3;
          core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
          return;
        }
        uVar3 = (*((param_1->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)param_1,"zom-s0?.wav");
        param_1->sfx_handles[0] = uVar3;
        core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
        return;
      }
    }
  }
  else {
    (param_1->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index != 8) && (pSVar2->state_index != 7)) {
      core_zombie_cpp_CZombie_dropAndClearTarget_FUN_005618c0(param_1);
      iVar4 = 6;
      if (((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[6]] == 0) &&
         (((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[2]] != 0 ||
          ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[0]] != 0))))
      {
        iVar6 = 0;
        pcVar5 = "lookForHead";
        this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                                (&(param_1->base).base.model.motion_controller);
        iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(this_ptr_00,pcVar5,iVar6);
        if (-1 < iVar6) {
          iVar4 = 9;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,iVar4,1);
      sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[0]);
      if (param_1->is_female == 0) {
        pcVar5 = "zom-d0?.wav";
      }
      else {
        pcVar5 = "f-zombie-die?.wav";
      }
      (*((param_1->base).base.base.vtable._ub)->playSound)((CDemonActor *)param_1,pcVar5);
      (*((param_1->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)param_1,0x32,25.0);
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
  return;
}
