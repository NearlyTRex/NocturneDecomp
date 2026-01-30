// Name: core_zombie.cpp_CZombie_FUN_005fca10
// Address: 005fca10
// Address Range: [[005fca10, 005fca77]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_FUN_005fca10(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fca10(CZombie* param_1) */

void __cdecl core_zombie_cpp_CZombie_FUN_005fca10(void)

{
  CMotionList *this_ptr;
  int iVar1;
  CMotionController *this_ptr_00;
  int in_stack_00000004;
  int force_immediate;
  
  this_ptr_00 = (CMotionController *)(in_stack_00000004 + 0x158);
  this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr_00);
  iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr);
  if (iVar1 == 0x16) {
    if (*(int *)(in_stack_00000004 + 0xbf44) == 0) {
      force_immediate = 1;
      iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
      iVar1 = iVar1 + 0x15;
    }
    else {
      force_immediate = 1;
      iVar1 = 0x16;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (this_ptr_00,iVar1,force_immediate);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr_00,1,1);
  return;
}
