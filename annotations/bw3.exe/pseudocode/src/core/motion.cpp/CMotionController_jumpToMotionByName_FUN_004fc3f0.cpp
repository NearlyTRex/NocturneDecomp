// Name: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0
// Address: 004fc3f0
// Address Range: [[004fc3f0, 004fc41a]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0(CMotionController *this_ptr,char *motion_name,float frame_number)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0(CMotionController *this_ptr,char *motion_name,float frame_number)

{
  int target_motion_index;
  
  target_motion_index = core_motion_cpp_FUN_004fb9c0(*(CMotionList **)this_ptr,motion_name,1);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
            (this_ptr,target_motion_index,frame_number);
  return;
}
