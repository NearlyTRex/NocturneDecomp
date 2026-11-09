// Name: core_zombie.cpp_FUN_00599d00
// Address: 00599d00
// Address Range: [[00599d00, 00599d67]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_FUN_00599d00(CZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_FUN_00599d00(CZombie *this_ptr)

{
  CMotionList *this_ptr_00;
  byte *this_ptr_01;
  char *state_name;
  int iVar1;
  int force_immediate;
  
  iVar1 = 0;
  state_name = "CHASE_2";
  this_ptr_01 = &this_ptr->field_0x2b4;
  this_ptr_00 = core_motion_cpp_FUN_00503860((CMotionController *)this_ptr_01);
  iVar1 = core_motion_cpp_FUN_00502fa0(this_ptr_00,state_name,iVar1);
  if (iVar1 == 0x16) {
    if (*(int *)&this_ptr->field_0x10b80 == 0) {
      force_immediate = 1;
      iVar1 = core_actor_cpp_FUN_0040cfc0(0,2);
      iVar1 = iVar1 + 0x15;
    }
    else {
      force_immediate = 1;
      iVar1 = 0x16;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_01,iVar1,force_immediate);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)this_ptr_01,1,1);
  return;
}
