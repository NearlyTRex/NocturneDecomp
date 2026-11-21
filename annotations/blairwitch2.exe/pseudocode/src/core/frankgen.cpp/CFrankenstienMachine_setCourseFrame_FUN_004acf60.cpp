// Name: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60
// Address: 004acf60
// Address Range: [[004acf60, 004ad014]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)

{
  int iVar1;
  float local_20;
  
  iVar1 = (this_ptr->course).len;
  if (iVar1 < 1) {
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 476;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CFrankenstienMachine::setCourseFrame - no course!");
  }
  local_20 = ((float)iVar1 * (this_ptr->master_frame - start_frame)) / (end_frame - start_frame);
  if (local_20 < 0.0) {
    local_20 = 0.0;
  }
  if ((float)(iVar1 + -1) < local_20) {
    local_20 = (float)(iVar1 + -1);
  }
  core_course_cpp_CCourse_evaluate_FUN_00438c40
            (&this_ptr->course,local_20,&(this_ptr->base).location.position,
             &(this_ptr->base).orient.vec);
  return;
}
