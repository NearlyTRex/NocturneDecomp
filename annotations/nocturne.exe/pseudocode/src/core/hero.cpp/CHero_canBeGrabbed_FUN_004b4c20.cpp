// Name: core_hero.cpp_CHero_canBeGrabbed_FUN_004b4c20
// Address: 004b4c20
// Address Range: [[004b4c20, 004b4c2f] [004b4c36, 004b4c5f]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004b4c20(CHero *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004b4c20(CHero *this_ptr,CDemonActor *grabber,int grab_type)

{
  CMotionList *this_ptr_00;
  int iVar1;
  char *state_name;
  
  if (grab_type == 0) {
    state_name = "GETGRABBED";
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                            (&(this_ptr->base).model.motion_controller);
    iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0
                      (this_ptr_00,state_name,grab_type);
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}
