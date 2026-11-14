// Name: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160
// Address: 004fc160
// Address Range: [[004fc160, 004fc18d]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController *this_ptr,char *state_name,int force_immediate)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController *this_ptr,char *state_name,int force_immediate)

{
  int desired_state_index;
  
  desired_state_index =
       core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50
                 (this_ptr->motion_list_ptr,state_name,1);
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (this_ptr,desired_state_index,force_immediate);
  return;
}
