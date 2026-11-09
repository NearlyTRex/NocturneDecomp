// Name: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950
// Address: 00503950
// Address Range: [[00503950, 0050397a]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950(CMotionController *this_ptr,char *motion_name,float frame_number)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950(CMotionController *this_ptr,char *motion_name,float frame_number)

{
  int target_motion_index;
  
  target_motion_index = core_motion_cpp_FUN_00502f10(*(CMotionList **)this_ptr,motion_name,1);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
            (this_ptr,target_motion_index,frame_number);
  return;
}
