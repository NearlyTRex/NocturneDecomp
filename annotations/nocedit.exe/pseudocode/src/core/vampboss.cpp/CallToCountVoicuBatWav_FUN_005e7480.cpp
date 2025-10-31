// Name: core_vampboss.cpp_CallToCountVoicuBatWav_FUN_005e7480
// Address: 005e7480
// Address Range: [[005e7480, 005e74b4]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_CallToCountVoicuBatWav_FUN_005e7480()
// Cross-references:
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6561 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_voicubat_wav_00656cdf

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_vampboss.cpp_CallToCountVoicuBatWav(undefined4 param_1) */

void core_vampboss_cpp_CallToCountVoicuBatWav_FUN_005e7480(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0xcdcc0) = 1;
  *(undefined4 *)(in_stack_00000004 + 0xce904) = 1;
  *(undefined4 *)(in_stack_00000004 + 0xce8f4) = 0x40000000;
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  return;
}


// Assembly code:
// 005e7480: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_vampboss.cpp_CallToCountVoicuBatWav_FUN_005e7480
//   XREF to: Stack[0x4] (READ)
// 005e7484: MOV dword ptr [EAX + 0xcdcc0],0x1
// 005e748e: MOV dword ptr [EAX + 0xce904],0x1
// 005e7498: PUSH 0x656cdf
//   XREF to: 00656cdf (DATA)
// 005e749d: MOV EDX,dword ptr [EAX + 0x154]
// 005e74a3: PUSH EAX
// 005e74a4: MOV dword ptr [EAX + 0xce8f4],0x40000000
// 005e74ae: CALL dword ptr [EDX + 0x24]
// 005e74b1: ADD ESP,0x8
// 005e74b4: RET
