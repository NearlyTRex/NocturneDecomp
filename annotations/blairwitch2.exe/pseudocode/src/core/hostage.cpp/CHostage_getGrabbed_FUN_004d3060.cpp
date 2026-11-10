// Name: core_hostage.cpp_CHostage_getGrabbed_FUN_004d3060
// Address: 004d3060
// Address Range: [[004d3060, 004d30c2]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_getGrabbed_FUN_004d3060(CHostage *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_getGrabbed_FUN_004d3060(CHostage *this_ptr,CDemonActor *grabber,int grab_type)

{
  (this_ptr->base).base.grabbed_type = grab_type;
  (this_ptr->base).base.grabbed_by = grabber;
  if (grab_type == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,4,1);
    core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,this_ptr->get_eaten_event);
  }
  this_ptr->grabber_flee_timer = 3.0;
  this_ptr->grabber = grabber;
  return 1;
}
