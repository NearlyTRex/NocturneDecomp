// Name: core_unionzom.cpp_CUnionZombie_processVanishAttackState_FUN_005a40f0
// Address: 005a40f0
// Address Range: [[005a40f0, 005a4211]]
// Convention: __cdecl
// Signature: void __cdecl core_unionzom_cpp_CUnionZombie_processVanishAttackState_FUN_005a40f0(CUnionZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_unionzom_cpp_CUnionZombie_processVanishAttackState_FUN_005a40f0(CUnionZombie *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  SStateMachine *this_ptr_01;
  uint uVar1;
  SMotion *pSVar2;
  
  uVar1 = this_ptr->vanish_phase;
  this_ptr_00 = &(this_ptr->base).base.base.model;
  if (uVar1 == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,4,1);
    core_basicene_cpp_CBasicEnemy_setFade_FUN_005a01a0
              (&this_ptr->base,(this_ptr->base).fade_val,0.0,1.2);
    core_basicene_cpp_CBasicEnemy_startFade_FUN_0059f570(&this_ptr->base);
    this_ptr->vanish_phase = 1;
    return;
  }
  if (uVar1 < 2) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
    if (pSVar2->state_index == 4) {
      if (40.0f <= (this_ptr->base).base.base.model.base.current_frame_number) {
        core_basicene_cpp_CBasicEnemy_setFade_FUN_005a01a0
                  (&this_ptr->base,(this_ptr->base).fade_val,1.0,0.75);
        core_basicene_cpp_CBasicEnemy_startFade_FUN_0059f570(&this_ptr->base);
        this_ptr->vanish_phase = 2;
        return;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
      return;
    }
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
    if (pSVar2->state_index == 3) {
      this_ptr_01 = &(this_ptr->base).state_machine;
      (this_ptr->base).attack_range = 2.0f;
      core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
                (this_ptr_01,"ChaseComplete","MeleeAttack");
      core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_01,"MeleeAttack");
      this_ptr->vanish_phase = 0;
      return;
    }
  }
  return;
}
