// Name: core_hero.cpp_CHero_FUN_004f2890
// Address: 004f2890
// Address Range: [[004f2890, 004f289f] [004f28a6, 004f28cd]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_FUN_004f2890(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f2890(CHero *this_ptr)

{
  CMotionList *this_ptr_00;
  int iVar1;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 0) {
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&(this_ptr->base).model.motion_controller);
    iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}
