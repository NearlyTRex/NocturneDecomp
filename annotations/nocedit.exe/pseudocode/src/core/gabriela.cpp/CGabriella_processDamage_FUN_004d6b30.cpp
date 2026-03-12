// Name: core_gabriela.cpp_CGabriella_processDamage_FUN_004d6b30
// Address: 004d6b30
// Address Range: [[004d6b30, 004d6bef] [004d6c76, 004d6ce2] [004d6d03, 004d6d30]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processDamage_FUN_004d6b30(CGabriella *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_processDamage_FUN_004d6b30(CGabriella *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_01;
  CDemonActor_vtable *pCVar2;
  SMotion *pSVar2;
  SMotion *pSVar3;
  float fVar3;
  float fVar4;
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  int force_immediate;
  
  if (ABS((this_ptr->base).invincibility_timer) != 0.0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->god_mode_enabled != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  (this_ptr->base).invincibility_timer = 0.5f;
  fVar4 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_01 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar4;
  if (0.0 < fVar4) {
    if (0.0 < damage_info->damage_amount) {
      if ((this_ptr->base).ladder_to_climb == (CLadder *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_01->motion_controller,8,1);
      }
      if (g_CGamePtr->hero_number != HERO_TYPE_STRANGER) {
        pCVar2 = (this_ptr->base).base.base.vtable._ub;
        fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.25,0.4);
        (*pCVar2->playSoundWithDelay)((CDemonActor *)this_ptr,"gb-hit[1,6].wav",fVar4);
      }
    }
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_01->motion_controller);
    if (pSVar2->state_index != 0xc) {
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_01->motion_controller);
      if (pSVar3->state_index != 0xb) {
        force_immediate = 1;
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
        fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,100.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,(fVar3 <= 50.0f) + 9,
                   force_immediate);
        if (g_CGamePtr->hero_number != HERO_TYPE_STRANGER) {
          pCVar1 = (this_ptr->base).base.base.vtable._ub;
          fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.25,0.4);
          (*pCVar1->playSoundWithDelay)((CDemonActor *)this_ptr,"gb-die[1,6].wav",fVar4);
        }
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004ee030
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
      }
    }
  }
  if (damage_info->damage_amount <= 0.0) {
    core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
    return;
  }
  core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0(g_CGamePtr);
  core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
  return;
}
