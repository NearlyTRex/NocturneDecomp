// Name: core_motion.cpp_CMotionController_setMotionList_FUN_004fc280
// Address: 004fc280
// Address Range: [[004fc280, 004fc2bd]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_setMotionList_FUN_004fc280(CMotionController *this_ptr,CMotionList *motion_list)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_setMotionList_FUN_004fc280(CMotionController *this_ptr,CMotionList *motion_list)

{
  int iVar1;
  
  this_ptr->motion_list_ptr = motion_list;
  if (this_ptr->current_motion_name[0] == '\0') {
    return;
  }
  iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                    (this_ptr->motion_list_ptr,this_ptr->current_motion_name,0);
  this_ptr->current_motion_index = iVar1;
  if (-1 < iVar1) {
    this_ptr->current_motion_name[0] = '\0';
    return;
  }
  this_ptr->current_motion_index = 0;
  this_ptr->current_motion_name[0] = '\0';
  return;
}
