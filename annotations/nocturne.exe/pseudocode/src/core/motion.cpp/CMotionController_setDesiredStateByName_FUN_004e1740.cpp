// Name: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740
// Address: 004e1740
// Address Range: [[004e1740, 004e176d]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740(CMotionController *this_ptr,char *state_name,int force_immediate)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740(CMotionController *this_ptr,char *state_name,int force_immediate)

{
  int desired_state_index;
  
  desired_state_index =
       core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0
                 (this_ptr->motion_list_ptr,state_name,1);
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (this_ptr,desired_state_index,force_immediate);
  return;
}
