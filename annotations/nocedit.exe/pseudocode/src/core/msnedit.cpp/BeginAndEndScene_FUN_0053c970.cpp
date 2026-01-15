// Name: core_msnedit.cpp_BeginAndEndScene_FUN_0053c970
// Address: 0053c970
// Address Range: [[0053c970, 0053c9f9]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_BeginAndEndScene_FUN_0053c970()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_BeginAndEndScene(uint param_1, uint param_2,
   uint param_3, uint param_4) */

void core_msnedit_cpp_BeginAndEndScene_FUN_0053c970(void)

{
  uint *puVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if ((((in_stack_00000008 != 0) && (DAT_02f7c53c != 3)) && (DAT_02f7c53c != 4)) &&
     (((*(int *)(in_stack_00000004 + 0x14) < in_stack_0000000c &&
       (in_stack_0000000c < *(int *)(in_stack_00000004 + 0x1c))) &&
      ((*(int *)(in_stack_00000004 + 0x18) < in_stack_00000010 &&
       (in_stack_00000010 < *(int *)(in_stack_00000004 + 0x20))))))) {
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    puVar1 = (uint *)core_msnedit_cpp_FUN_00535c60();
    *(uint *)(in_stack_00000008 + 0x20) = *puVar1;
    *(uint *)(in_stack_00000008 + 0x24) = puVar1[1];
    *(uint *)(in_stack_00000008 + 0x28) = puVar1[2];
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    return;
  }
  return;
}
