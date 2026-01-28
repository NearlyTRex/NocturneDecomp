// Name: core_msnedit.cpp_FUN_005374b0
// Address: 005374b0
// Address Range: [[005374b0, 00537521]]
// Convention: unknown
// Signature: void core_msnedit_cpp_FUN_005374b0(void)

#include "nocturne.h"

void core_msnedit_cpp_FUN_005374b0(void)

{
  int in_stack_00000004;
  
  if ((2 < in_stack_00000004) || (in_stack_00000004 < 0)) {
    in_stack_00000004 = 0;
  }
  core_script_cpp_CScript_unk50_FUN_00566660();
  DAT_02f7c634 = in_stack_00000004;
  core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
