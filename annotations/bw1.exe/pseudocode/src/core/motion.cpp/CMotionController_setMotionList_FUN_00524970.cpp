// Name: core_motion.cpp_CMotionController_setMotionList_FUN_00524970
// Address: 00524970
// Address Range: [[00524970, 005249ad]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_setMotionList_FUN_00524970(CMotionController *this_ptr,CMotionList *motion_list)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_setMotionList_FUN_00524970(CMotionController *this_ptr,CMotionList *motion_list)

{
  int iVar1;
  
  this_ptr->motion_list_ptr = motion_list;
  if (this_ptr->current_motion_name[0] == '\0') {
    return;
  }
  iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
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
