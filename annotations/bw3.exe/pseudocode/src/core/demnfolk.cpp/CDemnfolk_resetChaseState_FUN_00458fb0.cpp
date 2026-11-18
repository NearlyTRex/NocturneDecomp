// Name: core_demnfolk.cpp_CDemnfolk_resetChaseState_FUN_00458fb0
// Address: 00458fb0
// Address Range: [[00458fb0, 00459026]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(CDemnfolk *this_ptr)

#include "nocturne.h"

void __cdecl core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(CDemnfolk *this_ptr)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->always_chase_fast != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,4,1);
    return;
  }
  if (this_ptr->is_indoor_demon == 0) {
    iVar2 = 5;
  }
  else {
    iVar2 = 1;
  }
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,iVar2);
  iVar2 = iVar2 + 4;
  if (((iVar2 == 8) || (iVar2 == 9)) &&
     (iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,5), iVar1 != 1)) {
    iVar2 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&(this_ptr->base).base.model.base,iVar2,1);
  return;
}
