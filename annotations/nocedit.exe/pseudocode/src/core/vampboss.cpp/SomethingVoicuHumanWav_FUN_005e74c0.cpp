// Name: core_vampboss.cpp_SomethingVoicuHumanWav_FUN_005e74c0
// Address: 005e74c0
// Address Range: [[005e74c0, 005e7502]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_SomethingVoicuHumanWav_FUN_005e74c0()
// Cross-references:
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e607f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_float_00656cec
//   TerminatedCString s_voicuhuman_wav_00656cf2
// Function calls:
//   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_vampboss.cpp_SomethingVoicuHumanWav(undefined4 param_1) */

void core_vampboss_cpp_SomethingVoicuHumanWav_FUN_005e74c0(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0xcdcc0) = 3;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            ((CMotionController *)(in_stack_00000004 + 0x158),"float",0.0);
  *(undefined4 *)(in_stack_00000004 + 0xce91c) = 0;
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  return;
}


// Assembly code:
// 005e74c0: PUSH EBX
//   Label: core_vampboss.cpp_SomethingVoicuHumanWav_FUN_005e74c0
// 005e74c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e74c5: PUSH 0x0
// 005e74c7: PUSH 0x656cec
//   XREF to: 00656cec (DATA)
// 005e74cc: LEA EAX,[EBX + 0x158]
// 005e74d2: PUSH EAX
// 005e74d3: MOV dword ptr [EBX + 0xcdcc0],0x3
// 005e74dd: CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
//   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
// 005e74e2: ADD ESP,0xc
// 005e74e5: PUSH 0x656cf2
//   XREF to: 00656cf2 (DATA)
// 005e74ea: MOV EAX,dword ptr [EBX + 0x154]
// 005e74f0: PUSH EBX
// 005e74f1: MOV dword ptr [EBX + 0xce91c],0x0
// 005e74fb: CALL dword ptr [EAX + 0x24]
// 005e74fe: ADD ESP,0x8
// 005e7501: POP EBX
// 005e7502: RET
