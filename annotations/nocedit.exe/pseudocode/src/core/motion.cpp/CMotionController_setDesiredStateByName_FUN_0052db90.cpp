// Name: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
// Address: 0052db90
// Address Range: [[0052db90, 0052dbbd]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90(CMotionController * this_ptr, char * state_name, int force_immediate)

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
          (CMotionController *this_ptr,char *state_name,int force_immediate)

{
  int desired_state_index;
  
  desired_state_index =
       core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr->motion_list_ptr);
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (this_ptr,desired_state_index,force_immediate);
  return;
}
