// Name: core_hostage.cpp_CHostage_getGrabbed_FUN_004ef290
// Address: 004ef290
// Address Range: [[004ef290, 004ef2f2]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_getGrabbed_FUN_004ef290(CHostage *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_getGrabbed_FUN_004ef290(CHostage *this_ptr,CDemonActor *grabber,int grab_type)

{
  (this_ptr->base).base.grabbed_type = grab_type;
  (this_ptr->base).base.grabbed_by = grabber;
  if (grab_type == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,4,1);
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,this_ptr->get_eaten_event);
  }
  this_ptr->grabber_flee_timer = 3.0;
  this_ptr->grabber = grabber;
  return 1;
}
