// Name: core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
// Address: 00539060
// Address Range: [[00539060, 005390c4]]
// Convention: unknown
// Signature: void core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_CalltoCallToDemonCameraInit(CDemonMission* param_1,
   uint param_2) */

void core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)(in_stack_00000004 + 0x24)) {
    *(uint *)(in_stack_00000004 + 0x14) = 0;
    *(int *)(in_stack_00000004 + 0x24) = in_stack_00000008;
    *(uint *)(in_stack_00000004 + 0x18) = 0;
    if (*(int *)(in_stack_00000004 + 0x24) == 0) {
      *(int *)(in_stack_00000004 + 0x1c) = g_WindowWidth;
      *(int *)(in_stack_00000004 + 0x20) = g_WindowHeight;
    }
    else {
      *(uint *)(in_stack_00000004 + 0x20) = 0xf0;
      *(uint *)(in_stack_00000004 + 0x1c) = 0x140;
    }
    core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0();
  }
  return;
}
