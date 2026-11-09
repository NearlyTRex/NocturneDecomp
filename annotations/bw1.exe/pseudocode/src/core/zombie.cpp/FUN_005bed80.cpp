// Name: core_zombie.cpp_FUN_005bed80
// Address: 005bed80
// Address Range: [[005bed80, 005bede7]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_FUN_005bed80(CZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_FUN_005bed80(CZombie *this_ptr)

{
  CMotionList *this_ptr_00;
  byte *this_ptr_01;
  char *state_name;
  int iVar1;
  int force_immediate;
  
  iVar1 = 0;
  state_name = "CHASE_2";
  this_ptr_01 = &this_ptr->field_0x158;
  this_ptr_00 = core_motion_cpp_FUN_00524a00((CMotionController *)this_ptr_01);
  iVar1 = core_motion_cpp_FUN_00524150(this_ptr_00,state_name,iVar1);
  if (iVar1 == 0x16) {
    if (*(int *)&this_ptr->field_0xc2f0 == 0) {
      force_immediate = 1;
      iVar1 = core_actor_cpp_FUN_0040cc60(0,2);
      iVar1 = iVar1 + 0x15;
    }
    else {
      force_immediate = 1;
      iVar1 = 0x16;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr_01,iVar1,force_immediate);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)this_ptr_01,1,1);
  return;
}
