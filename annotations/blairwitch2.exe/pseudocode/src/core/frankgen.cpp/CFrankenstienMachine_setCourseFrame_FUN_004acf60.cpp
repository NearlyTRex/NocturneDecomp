// Name: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60
// Address: 004acf60
// Address Range: [[004acf60, 004ad014]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)

{
  int iVar1;
  float local_20;
  
  iVar1 = *(int *)&this_ptr->field_0x45c;
  if (iVar1 < 1) {
    _DAT_01d046a0 = "..\\core\\frankgen.cpp";
    _DAT_01d046a4 = 0x1dc;
    core_main_c_FUN_004e4500("CFrankenstienMachine::setCourseFrame - no course!");
  }
  local_20 = ((float)iVar1 * (this_ptr->master_frame - start_frame)) / (end_frame - start_frame);
  if (local_20 < 0.0) {
    local_20 = 0.0;
  }
  if ((float)(iVar1 + -1) < local_20) {
    local_20 = (float)(iVar1 + -1);
  }
  core_course_cpp_FUN_00438c40
            ((CCourse *)&this_ptr->field_0x45c,local_20,(CVector3f *)&(this_ptr->base).field_0x20,
             &(this_ptr->base).orient.vec);
  return;
}
