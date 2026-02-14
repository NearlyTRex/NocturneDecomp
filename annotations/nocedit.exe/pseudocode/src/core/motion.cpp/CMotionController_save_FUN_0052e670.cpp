// Name: core_motion.cpp_CMotionController_save_FUN_0052e670
// Address: 0052e670
// Address Range: [[0052e670, 0052e6f6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_save_FUN_0052e670(CMotionController *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_save_FUN_0052e670(CMotionController *this_ptr,_FILE *file_handle)

{
  SMotion *pSVar1;
  uint in_stack_0000000c;
  double dVar2;
  
  if (this_ptr->current_motion_name[0] == '\0') {
    if (this_ptr->motion_list_ptr == (CMotionList *)0x0) {
      g_CurrentFilename = "..\\core\\motion.cpp";
      g_CurrentLineNumber = 0x536;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to save motion controller state without setting motion list pointer!");
    }
    dVar2 = (double)(float)this_ptr->current_frame_number;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
    _fprintf(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",in_stack_0000000c,pSVar1,dVar2);
    return;
  }
  _fprintf(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n");
  return;
}
