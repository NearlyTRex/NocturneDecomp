// Name: core_gabriela.cpp_CGabriella_processDamage_FUN_004cab10
// Address: 004cab10
// Address Range: [[004cab10, 004cad10]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processDamage_FUN_004cab10(CGabriella *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_processDamage_FUN_004cab10(CGabriella *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  SMotion *pSVar2;
  float fVar3;
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
  (this_ptr->base).invincibility_timer = 0x3F000000;
  fVar3 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar3;
  if (0.0 < fVar3) {
    if (0.0 < damage_info->damage_amount) {
      if ((this_ptr->base).ladder_to_climb == (CLadder *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,8,1);
      }
      if (g_CGamePtr->hero_number != HERO_TYPE_STRANGER) {
        pCVar1 = (this_ptr->base).base.base.vtable._ub;
        fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.25,0.4);
        (*pCVar1->playSoundWithDelay)((CDemonActor *)this_ptr,"gb-hit[1,6].wav",fVar3);
      }
    }
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if (pSVar2->state_index != 0xc) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
      if (pSVar2->state_index != 0xb) {
        force_immediate = 1;
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
        fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,100.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,(fVar3 <= _DAT_005e122c) + 9,force_immediate);
        if (g_CGamePtr->hero_number != HERO_TYPE_STRANGER) {
          pCVar1 = (this_ptr->base).base.base.vtable._ub;
          fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.25,0.4);
          (*pCVar1->playSoundWithDelay)((CDemonActor *)this_ptr,"gb-die[1,6].wav",fVar3);
        }
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
      }
    }
  }
  if (damage_info->damage_amount <= 0.0) {
    core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
    return;
  }
  core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320(g_CGamePtr);
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
  return;
}
