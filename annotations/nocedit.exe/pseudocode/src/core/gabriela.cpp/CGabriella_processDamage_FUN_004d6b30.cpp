// Name: core_gabriela.cpp_CGabriella_processDamage_FUN_004d6b30
// Address: 004d6b30
// Address Range: [[004d6b30, 004d6bef] [004d6c76, 004d6ce2] [004d6d03, 004d6d30]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processDamage_FUN_004d6b30 (CGabriella *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_gabriela_cpp_CGabriella_processDamage_FUN_004d6b30
          (CGabriella *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  SMotion *pSVar2;
  float fVar3;
  int force_immediate;
  
  if (ABS((this_ptr->base).unk1) != 0.0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->debug_flag_1 != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  (this_ptr->base).unk1 = 0.5f;
  fVar3 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar3;
  if (0.0 < fVar3) {
    if (0.0 < damage_info->damage_amount) {
      if ((this_ptr->base).ladder_to_climb == (CDemonActor *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,8,1);
      }
      if (g_CGamePtr->hero_number != 2) {
        pCVar1 = (this_ptr->base).base.base.vtable._ub;
        fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.25,0.4);
        (*pCVar1->playSoundWithVolume)((CDemonActor *)this_ptr,"gb-hit[1,6].wav",fVar3);
      }
    }
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if (pSVar2->state_index != 0xc) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_00->motion_controller);
      if (pSVar2->state_index != 0xb) {
        force_immediate = 1;
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
        fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,100.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,(fVar3 <= 50.0f) + 9,
                   force_immediate);
        if (g_CGamePtr->hero_number != 2) {
          pCVar1 = (this_ptr->base).base.base.vtable._ub;
          fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.25,0.4);
          (*pCVar1->playSoundWithVolume)((CDemonActor *)this_ptr,"gb-die[1,6].wav",fVar3);
        }
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,(CDemonActor *)this_ptr);
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
