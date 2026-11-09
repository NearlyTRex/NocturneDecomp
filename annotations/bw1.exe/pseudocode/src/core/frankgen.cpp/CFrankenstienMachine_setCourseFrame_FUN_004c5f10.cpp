// Name: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004c5f10
// Address: 004c5f10
// Address Range: [[004c5f10, 004c5fc4]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004c5f10(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004c5f10(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)

{
  int iVar1;
  float local_20;
  
  iVar1 = *(int *)&this_ptr->field_0x300;
  if (iVar1 < 1) {
    _DAT_01d1d400 = "..\\core\\frankgen.cpp";
    _DAT_01d1d404 = 0x1dc;
    core_main_c_FUN_005030e0("CFrankenstienMachine::setCourseFrame - no course!");
  }
  local_20 = ((float)iVar1 * (*(float *)&this_ptr->field_0x15c - start_frame)) /
             (end_frame - start_frame);
  if (local_20 < 0.0) {
    local_20 = 0.0;
  }
  if ((float)(iVar1 + -1) < local_20) {
    local_20 = (float)(iVar1 + -1);
  }
  core_course_cpp_FUN_00447f00
            ((CCourse *)&this_ptr->field_0x300,local_20,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30);
  return;
}
