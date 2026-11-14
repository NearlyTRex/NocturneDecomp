// Name: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
// Address: 00524ae0
// Address Range: [[00524ae0, 00524b0a]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0(CMotionController *this_ptr,char *motion_name,float frame_number)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0(CMotionController *this_ptr,char *motion_name,float frame_number)

{
  int target_motion_index;
  
  target_motion_index =
       core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                 (this_ptr->motion_list_ptr,motion_name,1);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
            (this_ptr,target_motion_index,frame_number);
  return;
}
