// Name: sound_mp3.cpp_FUN_0052f320
// Address: 0052f320
// Address Range: [[0052f320, 0052f34f]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_0052f320()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 005356d5 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_FUN_0052f320(undefined4 param_1, undefined4 param_2) */

void sound_mp3_cpp_FUN_0052f320(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  *(int *)(in_stack_00000004 + 0x1314) =
       *(int *)(in_stack_00000004 + 0x1314) + in_stack_00000008 * -8;
  *(int *)(in_stack_00000004 + 0x1318) = *(int *)(in_stack_00000004 + 0x1318) - in_stack_00000008;
  return;
}


// Assembly code:
// 0052f320: PUSH EBX
//   Label: sound_mp3.cpp_FUN_0052f320
// 0052f321: PUSH ESI
// 0052f322: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052f326: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052f32a: LEA EDX,[ECX*0x8 + 0x0]
// 0052f331: MOV EBX,dword ptr [EAX + 0x1314]
// 0052f337: MOV ESI,dword ptr [EAX + 0x1318]
// 0052f33d: SUB EBX,EDX
// 0052f33f: SUB ESI,ECX
// 0052f341: MOV dword ptr [EAX + 0x1314],EBX
// 0052f347: MOV dword ptr [EAX + 0x1318],ESI
// 0052f34d: POP ESI
// 0052f34e: POP EBX
// 0052f34f: RET
