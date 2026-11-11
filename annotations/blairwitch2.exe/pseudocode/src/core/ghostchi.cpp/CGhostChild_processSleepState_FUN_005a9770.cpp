// Name: core_ghostchi.cpp_CGhostChild_processSleepState_FUN_005a9770
// Address: 005a9770
// Address Range: [[005a9770, 005a988c]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_CGhostChild_processSleepState_FUN_005a9770(CGhostChild *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_ghostchi_cpp_CGhostChild_processSleepState_FUN_005a9770(CGhostChild *this_ptr,float delta_time)

{
  SStateMachine *pSVar1;
  uint uVar2;
  float fVar3;
  
  (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,4,1);
  uVar2 = this_ptr->sleep_phase;
  if (uVar2 == 0) {
    fVar3 = (this_ptr->base).fade_val;
    (this_ptr->base).base.base.is_spectral = 1;
    unkafter_basicene_cpp_FUN_005a01a0(this_ptr,fVar3,0,0x3f000000);
    unkafter_basicene_cpp_FUN_0059f570(this_ptr);
    this_ptr->sleep_phase = 1;
    this_ptr->sleep_timer = this_ptr->sleep_time;
    return;
  }
  if (uVar2 < 2) {
    fVar3 = this_ptr->sleep_timer - delta_time;
    (this_ptr->base).base.base.is_spectral = 1;
    this_ptr->sleep_timer = fVar3;
    if (0.0 < fVar3) {
      return;
    }
    fVar3 = (this_ptr->base).fade_val;
    this_ptr->sleep_timer = 0.0;
    unkafter_basicene_cpp_FUN_005a01a0(this_ptr,fVar3,0x3f800000,0x3f800000);
    unkafter_basicene_cpp_FUN_0059f570(this_ptr);
    this_ptr->sleep_phase = 2;
    return;
  }
  if (uVar2 == 2) {
    pSVar1 = &(this_ptr->base).state_machine;
    (this_ptr->base).base.base.is_spectral = 0;
    unkaddr_0059d350_cpp_FUN_0059dcb0(pSVar1,0);
    unkaddr_0059d350_cpp_FUN_0059d880(pSVar1,"SleepComplete");
    this_ptr->sleep_phase = 3;
    return;
  }
  return;
}
