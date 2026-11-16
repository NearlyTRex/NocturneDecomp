// Name: core_motion.cpp_CMotionController_save_FUN_004fcd30
// Address: 004fcd30
// Address Range: [[004fcd30, 004fcdb6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_save_FUN_004fcd30(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_save_FUN_004fcd30(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

{
  if (this_ptr->current_motion_name[0] == '\0') {
    if (this_ptr->motion_list_ptr == (CMotionList *)0x0) {
      _DAT_01d71de0 = "..\\core\\motion.cpp";
      _DAT_01d71de4 = 0x59b;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Tried to save motion controller state without setting motion list pointer!");
    }
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
    _fprintf(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n");
    return;
  }
  _fprintf(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n");
  return;
}
