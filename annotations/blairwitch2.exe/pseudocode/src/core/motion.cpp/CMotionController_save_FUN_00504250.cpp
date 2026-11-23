// Name: core_motion.cpp_CMotionController_save_FUN_00504250
// Address: 00504250
// Address Range: [[00504250, 005042d6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_save_FUN_00504250(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_save_FUN_00504250(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

{
  if (this_ptr->current_motion_name[0] == '\0') {
    if (this_ptr->motion_list_ptr == (CMotionList *)0x0) {
      g_CurrentFilename = "..\\core\\motion.cpp";
      g_CurrentLineNumber = 1409;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Tried to save motion controller state without setting motion list pointer!");
    }
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(this_ptr);
    _fprintf(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n");
    return;
  }
  _fprintf(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n");
  return;
}
