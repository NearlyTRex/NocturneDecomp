// Name: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430
// Address: 004d2430
// Address Range: [[004d2430, 004d24e4]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430(CFrankenstienMachine *this_ptr)

{
  int iVar1;
  float in_stack_00000008;
  float in_stack_0000000c;
  float local_20;
  
  iVar1 = (this_ptr->course).len;
  if (iVar1 < 1) {
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 0x1dc;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFrankenstienMachine::setCourseFrame - no course!");
  }
  local_20 = ((float)iVar1 * (this_ptr->master_frame - in_stack_00000008)) /
             (in_stack_0000000c - in_stack_00000008);
  if (local_20 < 0.0) {
    local_20 = 0.0;
  }
  if ((float)(iVar1 + -1) < local_20) {
    local_20 = (float)(iVar1 + -1);
  }
  core_course_cpp_CCourse_evaluate_FUN_00442710
            (&this_ptr->course,local_20,&(this_ptr->base).location.position,
             &(this_ptr->base).orient.vec);
  return;
}
