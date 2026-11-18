// Name: core_motion.cpp_CMotionController_save_FUN_00525420
// Address: 00525420
// Address Range: [[00525420, 005254a6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_save_FUN_00525420(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_save_FUN_00525420(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

{
  if (this_ptr->current_motion_name[0] == '\0') {
    if (this_ptr->motion_list_ptr == (CMotionList *)0x0) {
      g_CHAR_PTR_01d1d400 = "..\\core\\motion.cpp";
      g_INT_01d1d404 = 0x596;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Tried to save motion controller state without setting motion list pointer!");
    }
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
    _fprintf(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n");
    return;
  }
  _fprintf(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n");
  return;
}
