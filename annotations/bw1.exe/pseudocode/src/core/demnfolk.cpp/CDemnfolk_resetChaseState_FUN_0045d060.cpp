// Name: core_demnfolk.cpp_CDemnfolk_resetChaseState_FUN_0045d060
// Address: 0045d060
// Address Range: [[0045d060, 0045d0d6]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_0045d060(CDemnfolk *this_ptr)

#include "nocturne.h"

void __cdecl core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_0045d060(CDemnfolk *this_ptr)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->always_chase_fast != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,4,1);
    return;
  }
  if (this_ptr->is_indoor_demon == 0) {
    iVar2 = 5;
  }
  else {
    iVar2 = 1;
  }
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,iVar2);
  iVar2 = iVar2 + 4;
  if (((iVar2 == 9) || (iVar2 == 10)) &&
     (iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,5), iVar1 != 1)) {
    iVar2 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,iVar2,1);
  return;
}
