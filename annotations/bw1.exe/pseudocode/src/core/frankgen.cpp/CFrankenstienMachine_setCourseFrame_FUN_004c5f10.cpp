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
  
  iVar1 = (this_ptr->course).len;
  if (iVar1 < 1) {
    _DAT_01d1d400 = "..\\core\\frankgen.cpp";
    _DAT_01d1d404 = 0x1dc;
    core_main_c_FUN_005030e0("CFrankenstienMachine::setCourseFrame - no course!");
  }
  local_20 = ((float)iVar1 * (this_ptr->master_frame - start_frame)) / (end_frame - start_frame);
  if (local_20 < 0.0) {
    local_20 = 0.0;
  }
  if ((float)(iVar1 + -1) < local_20) {
    local_20 = (float)(iVar1 + -1);
  }
  core_course_cpp_CCourse_evaluate_FUN_00447f00
            (&this_ptr->course,local_20,&(this_ptr->base).location.position,
             &(this_ptr->base).orient.vec);
  return;
}
