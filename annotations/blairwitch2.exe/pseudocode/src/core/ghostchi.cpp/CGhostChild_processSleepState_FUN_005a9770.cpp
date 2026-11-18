// Name: core_ghostchi.cpp_CGhostChild_processSleepState_FUN_005a9770
// Address: 005a9770
// Address Range: [[005a9770, 005a988c]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_CGhostChild_processSleepState_FUN_005a9770(CGhostChild *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_ghostchi_cpp_CGhostChild_processSleepState_FUN_005a9770(CGhostChild *this_ptr,float delta_time)

{
  SStateMachine *this_ptr_00;
  uint uVar1;
  float fVar2;
  
  (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,4,1);
  uVar1 = this_ptr->sleep_phase;
  if (uVar1 == 0) {
    fVar2 = (this_ptr->base).fade_val;
    (this_ptr->base).base.base.is_spectral = 1;
    core_basicene_cpp_CBasicEnemy_setFade_FUN_005a01a0(&this_ptr->base,fVar2,0.0,0.5);
    core_basicene_cpp_CBasicEnemy_startFade_FUN_0059f570(&this_ptr->base);
    this_ptr->sleep_phase = 1;
    this_ptr->sleep_timer = this_ptr->sleep_time;
    return;
  }
  if (uVar1 < 2) {
    fVar2 = this_ptr->sleep_timer - delta_time;
    (this_ptr->base).base.base.is_spectral = 1;
    this_ptr->sleep_timer = fVar2;
    if (0.0 < fVar2) {
      return;
    }
    fVar2 = (this_ptr->base).fade_val;
    this_ptr->sleep_timer = 0.0;
    core_basicene_cpp_CBasicEnemy_setFade_FUN_005a01a0(&this_ptr->base,fVar2,1.0,1.0);
    core_basicene_cpp_CBasicEnemy_startFade_FUN_0059f570(&this_ptr->base);
    this_ptr->sleep_phase = 2;
    return;
  }
  if (uVar1 == 2) {
    this_ptr_00 = &(this_ptr->base).state_machine;
    (this_ptr->base).base.base.is_spectral = 0;
    core_muzzle_cpp_SStateMachine_setTransitionDelay_FUN_0059dcb0(this_ptr_00,0.0);
    core_muzzle_cpp_SStateMachine_setNextRefState_FUN_0059d880(this_ptr_00,"SleepComplete")
    ;
    this_ptr->sleep_phase = 3;
    return;
  }
  return;
}
