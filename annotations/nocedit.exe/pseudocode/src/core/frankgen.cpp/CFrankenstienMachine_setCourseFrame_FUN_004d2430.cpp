// Name: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430
// Address: 004d2430
// Address Range: [[004d2430, 004d24e4]]
// Convention: unknown
// Signature: void core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430(void)

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_CFrankenstienMachine_setCourseFrame(uint
   param_1, uint param_2, uint param_3) */

void core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x300) < 1) {
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 0x1dc;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFrankenstienMachine::setCourseFrame - no course!");
  }
  core_course_cpp_CCourse_FUN_00442710((CCourse *)(in_stack_00000004 + 0x300));
  return;
}
