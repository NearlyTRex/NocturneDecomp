// Name: core_hellhag.cpp_CHag_startBurn_FUN_005aad70
// Address: 005aad70
// Address Range: [[005aad70, 005aae75]]
// Convention: __cdecl
// Signature: void __cdecl core_hellhag_cpp_CHag_startBurn_FUN_005aad70(CHag *this_ptr,CVector3f *direction,float strength)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hellhag_cpp_CHag_startBurn_FUN_005aad70(CHag *this_ptr,CVector3f *direction,float strength)

{
  SStateMachine *this_ptr_00;
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char *state_name;
  
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,8,1);
  this_ptr_00 = &(this_ptr->base).state_machine;
  iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,&DAT_005f0c0e);
  if (iVar5 == 0) {
    state_name = core_muzzle_cpp_SStateMachine_getStateName_FUN_0059db70(this_ptr_00);
    core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
              (this_ptr_00,"BurnComplete",state_name);
  }
  core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0
            (&(this_ptr->base).state_machine,&DAT_005f0c20);
  pCVar1 = &(this_ptr->base).burn_direction;
  (this_ptr->base).burn_timer = strength * _DAT_005f0c26;
  if (pCVar1 != direction) {
    pCVar1->x = direction->x;
    (this_ptr->base).burn_direction.y = direction->y;
    (this_ptr->base).burn_direction.z = direction->z;
  }
  pCVar1 = &(this_ptr->base).burn_direction;
  (this_ptr->base).burn_direction.y = 0.0;
  fVar2 = (this_ptr->base).burn_direction.y;
  fVar3 = (this_ptr->base).burn_direction.z;
  fVar2 = SQRT(fVar3 * fVar3 + pCVar1->x * pCVar1->x + fVar2 * fVar2);
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    fVar3 = (this_ptr->base).burn_direction.y;
    fVar4 = (this_ptr->base).burn_direction.z;
    pCVar1->x = pCVar1->x * fVar2;
    (this_ptr->base).burn_direction.y = fVar3 * fVar2;
    (this_ptr->base).burn_direction.z = fVar4 * fVar2;
    return;
  }
  (this_ptr->base).burn_direction.z = 0.0;
  (this_ptr->base).burn_direction.y = (this_ptr->base).burn_direction.z;
  pCVar1->x = (this_ptr->base).burn_direction.y;
  return;
}
