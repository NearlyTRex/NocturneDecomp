// Name: core_hero.cpp_CHero_canBeGrabbed_FUN_004eada0
// Address: 004eada0
// Address Range: [[004eada0, 004eadaf] [004eadb6, 004eaddf]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004eada0(CHero *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004eada0(CHero *this_ptr,CDemonActor *grabber,int grab_type)

{
  CMotionList *this_ptr_00;
  int iVar1;
  char *state_name;
  
  if (grab_type == 0) {
    state_name = "GETGRABBED";
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                            ((CMotionController *)(this_ptr + 0x158));
    iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_00524150
                      (this_ptr_00,state_name,grab_type);
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}
