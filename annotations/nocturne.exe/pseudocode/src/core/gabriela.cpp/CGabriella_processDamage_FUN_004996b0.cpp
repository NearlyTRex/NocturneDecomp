// Name: core_gabriela.cpp_CGabriella_processDamage_FUN_004996b0
// Address: 004996b0
// Address Range: [[004996b0, 004998b0]]
// Convention: unknown
// Signature: void core_gabriela_cpp_CGabriella_processDamage_FUN_004996b0(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_gabriela_cpp_CGabriella_processDamage_FUN_004996b0(CCharacter *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  CDemonActor_vtable *pCVar1;
  SMotion *pSVar2;
  float fVar3;
  int force_immediate;
  
  if ((*(uint *)param_1[1].base.actor_name & 0x7fffffff) != 0) {
    param_2->damage_amount = 0.0;
  }
  if (0x01C775EC->god_mode_enabled != 0) {
    param_2->damage_amount = 0.0;
  }
  if (0x01C775EC->allow_damage_flag == 0) {
    param_2->damage_amount = 0.0;
  }
  *(float *)param_1[1].base.actor_name = 0.5f;
  fVar3 = param_1->hit_points - param_2->damage_amount;
  this_ptr = &param_1->model;
  param_1->hit_points = fVar3;
  if (0.0 < fVar3) {
    if (0.0 < param_2->damage_amount) {
      if (param_1[2].flames[0x1d].globe.position.z == 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr->motion_controller,8,1);
      }
      if (0x01C775EC->hero_number != HERO_TYPE_STRANGER) {
        pCVar1 = (param_1->base).vtable._ub;
        fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.25,0.4);
        (*pCVar1->playSoundWithDelay)(&param_1->base,"gb-hit[1,6].wav",fVar3);
      }
    }
  }
  else {
    param_1->hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if (pSVar2->state_index != 0xc) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&this_ptr->motion_controller);
      if (pSVar2->state_index != 0xb) {
        force_immediate = 1;
        param_1->grabbed_by = (CDemonActor *)0x0;
        fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,100.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->model).motion_controller,(fVar3 <= 50.0f) + 9,force_immediate
                  );
        if (0x01C775EC->hero_number != HERO_TYPE_STRANGER) {
          pCVar1 = (param_1->base).vtable._ub;
          fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.25,0.4);
          (*pCVar1->playSoundWithDelay)(&param_1->base,"gb-die[1,6].wav",fVar3);
        }
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670
                  ((CGore *)INT_005b96c4,&param_1->base,0x32,50.0,(CVector3f *)0x0);
      }
    }
  }
  if (param_2->damage_amount <= 0.0) {
    core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
    return;
  }
  core_game_cpp_FUN_004a3a90(0x01C775EC);
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}
