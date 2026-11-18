// Name: core_ghostchi.cpp_CGhostChild_processAI_FUN_005a9890
// Address: 005a9890
// Address Range: [[005a9890, 005a997b]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_CGhostChild_processAI_FUN_005a9890(CGhostChild *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_ghostchi_cpp_CGhostChild_processAI_FUN_005a9890(CGhostChild *this_ptr,float delta_time)

{
  SStateMachine *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  SMotion *pSVar1;
  int iVar2;
  
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((this_ptr->base).base.base.base.particle_systems + 4,delta_time);
  if (0.0 < (this_ptr->base).burn_timer) {
    this_ptr_01 = &(this_ptr->base).base.base.model;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_01->base);
    if (pSVar1->state_index != 0xb) {
      pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_01->base);
      if (pSVar1->state_index != 0xc) {
        core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
                  (&(this_ptr->base).state_machine,"BurnComplete","Death");
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_01->base,0xc,1);
        return;
      }
    }
  }
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.base.model.base);
  if (pSVar1->state_index == 0xb) {
    (this_ptr->base).base.base.eye_glow_enabled = 0;
  }
  this_ptr_00 = &(this_ptr->base).state_machine;
  iVar2 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Death");
  if (iVar2 == 0) {
    iVar2 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Animation");
    if (iVar2 == 0) {
      iVar2 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Burn");
      if (iVar2 == 0) {
        (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
        return;
      }
    }
  }
  return;
}
