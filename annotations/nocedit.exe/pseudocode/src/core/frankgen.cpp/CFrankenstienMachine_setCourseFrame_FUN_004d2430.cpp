// Name: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430
// Address: 004d2430
// Address Range: [[004d2430, 004d24e4]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

void __cdecl
core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430(CFrankenstienMachine *this_ptr)

{
  if ((this_ptr->course).len < 1) {
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 0x1dc;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFrankenstienMachine::setCourseFrame - no course!");
  }
  core_course_cpp_CCourse_FUN_00442710(&this_ptr->course);
  return;
}
