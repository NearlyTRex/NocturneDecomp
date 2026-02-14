// Name: core_motion.cpp_CMotionController_setMotionList_FUN_0052dcb0
// Address: 0052dcb0
// Address Range: [[0052dcb0, 0052dcdc]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_setMotionList_FUN_0052dcb0(CMotionController *this_ptr,CMotionList *motion_list)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_setMotionList_FUN_0052dcb0(CMotionController *this_ptr,CMotionList *motion_list)

{
  int iVar1;
  
  this_ptr->motion_list_ptr = motion_list;
  if (this_ptr->current_motion_name[0] == '\0') {
    return;
  }
  iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr->motion_list_ptr);
  this_ptr->current_motion_name[0] = '\0';
  this_ptr->current_motion_index = iVar1;
  return;
}
