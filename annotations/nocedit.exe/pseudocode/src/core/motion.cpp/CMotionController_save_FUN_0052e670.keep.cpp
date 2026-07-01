// Name: core_motion.cpp_CMotionController_save_FUN_0052e670
// Address: 0052e670
// MANUAL RECONSTRUCTION
// Address Range: [[0052e670, 0052e6f6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_save_FUN_0052e670(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_save_FUN_0052e670(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

{
  SMotion *pSVar1;
  double dVar2;
  
  if (this_ptr->current_motion_name[0] == '\0') {
    if (this_ptr->motion_list_ptr == (CMotionList *)0x0) {
      g_CurrentFilename = "..\\core\\motion.cpp";
      g_CurrentLineNumber = 1334;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to save motion controller state without setting motion list pointer!");
    }
    dVar2 = (double)this_ptr->current_frame_number;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
    _fprintf(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",indent_prefix,pSVar1->motion_name,dVar2);
    return;
  }
  _fprintf(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",indent_prefix,
             this_ptr->current_motion_name,(double)this_ptr->current_frame_number);
  return;
}
