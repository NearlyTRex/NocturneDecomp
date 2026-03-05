// Name: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
// Address: 0052ddb0
// Address Range: [[0052ddb0, 0052ddda]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController *this_ptr,char *motion_name,float frame_number)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController *this_ptr,char *motion_name,float frame_number)

{
  int target_motion_index;
  
  target_motion_index =
       core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                 (this_ptr->motion_list_ptr,motion_name,1);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
            (this_ptr,target_motion_index,frame_number);
  return;
}
