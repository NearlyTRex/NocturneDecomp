// Name: core_hero.cpp_CHero_canBeGrabbed_FUN_004cea00
// Address: 004cea00
// Address Range: [[004cea00, 004cea0f] [004cea16, 004cea3f]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004cea00(CHero *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004cea00(CHero *this_ptr,CDemonActor *grabber,int grab_type)

{
  CMotionList *this_ptr_00;
  int iVar1;
  char *state_name;
  
  if (grab_type == 0) {
    state_name = "GETGRABBED";
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                            ((CMotionController *)(this_ptr + 0x2b4));
    iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0
                      (this_ptr_00,state_name,grab_type);
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}
