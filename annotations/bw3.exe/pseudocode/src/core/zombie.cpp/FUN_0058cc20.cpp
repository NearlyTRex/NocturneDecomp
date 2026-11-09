// Name: core_zombie.cpp_FUN_0058cc20
// Address: 0058cc20
// Address Range: [[0058cc20, 0058cc85]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_FUN_0058cc20(CZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_FUN_0058cc20(CZombie *this_ptr)

{
  CMotionList *this_ptr_00;
  byte *this_ptr_01;
  char *state_name;
  int iVar1;
  int force_immediate;
  
  iVar1 = 0;
  state_name = "CHASE_FAST";
  this_ptr_01 = &this_ptr->field_0x158;
  this_ptr_00 = core_motion_cpp_FUN_004fc310((CMotionController *)this_ptr_01);
  iVar1 = core_motion_cpp_FUN_004fba50(this_ptr_00,state_name,iVar1);
  if (iVar1 == 2) {
    if (*(int *)&this_ptr->field_0xd0dc == 0) {
      force_immediate = 1;
      iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
      iVar1 = iVar1 + 1;
    }
    else {
      force_immediate = 1;
      iVar1 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)this_ptr_01,iVar1,force_immediate);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)this_ptr_01,1,1);
  return;
}
