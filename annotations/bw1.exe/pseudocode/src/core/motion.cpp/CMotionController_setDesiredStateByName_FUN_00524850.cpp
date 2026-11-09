// Name: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850
// Address: 00524850
// Address Range: [[00524850, 0052487d]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_setDesiredStateByName_FUN_00524850(CMotionController *this_ptr,char *state_name,int force_immediate)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_setDesiredStateByName_FUN_00524850(CMotionController *this_ptr,char *state_name,int force_immediate)

{
  int desired_state_index;
  
  desired_state_index = core_motion_cpp_FUN_00524150(*(CMotionList **)this_ptr,state_name,1);
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (this_ptr,desired_state_index,force_immediate);
  return;
}
