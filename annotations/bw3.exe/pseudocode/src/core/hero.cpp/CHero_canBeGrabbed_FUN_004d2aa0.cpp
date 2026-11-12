// Name: core_hero.cpp_CHero_canBeGrabbed_FUN_004d2aa0
// Address: 004d2aa0
// Address Range: [[004d2aa0, 004d2aaf] [004d2ab6, 004d2adf]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004d2aa0(CHero *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004d2aa0(CHero *this_ptr,CDemonActor *grabber,int grab_type)

{
  CMotionList *this_ptr_00;
  int iVar1;
  char *state_name;
  
  if (grab_type == 0) {
    state_name = "GETGRABBED";
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                            (&(this_ptr->base).model.base);
    iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50
                      (this_ptr_00,state_name,grab_type);
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}
