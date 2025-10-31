// Name: core_dynamite.cpp_FUN_0049cf20
// Address: 0049cf20
// Address Range: [[0049cf20, 0049cf60]]
// Convention: unknown
// Signature: undefined core_dynamite.cpp_FUN_0049cf20()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c5813 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_fuse_wav_00622e93
//   undefined4 DAT_0065d30c
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_weapon_dynamite.cpp_FUN_0049cf20(undefined4 param_1) */

void core_dynamite_cpp_FUN_0049cf20(void)

{
  undefined4 uVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  char local_68 [100];
  
  *(undefined4 *)(in_stack_00000004 + 0x578) = _DAT_0065d30c;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_68,"fuse.wav");
  uVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  *(undefined4 *)(in_stack_00000004 + 0x588) = uVar1;
  return;
}


// Assembly code:
// 0049cf20: PUSH EBX
//   Label: core_dynamite.cpp_FUN_0049cf20
// 0049cf21: SUB ESP,0x64
// 0049cf24: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 0049cf28: PUSH 0x622e93
//   XREF to: 00622e93 (DATA)
// 0049cf2d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x68] (DATA)
// 0049cf31: FLD float ptr [0x0065d30c]
//   XREF to: 0065d30c (READ)
// 0049cf37: PUSH EAX
// 0049cf38: FSTP float ptr [EBX + 0x578]
// 0049cf3e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0049cf43: ADD ESP,0x8
// 0049cf46: MOV EAX,ESP
// 0049cf48: PUSH EAX
// 0049cf49: MOV EDX,dword ptr [EBX + 0x154]
// 0049cf4f: PUSH EBX
// 0049cf50: CALL dword ptr [EDX + 0x24]
// 0049cf53: ADD ESP,0x8
// 0049cf56: MOV dword ptr [EBX + 0x588],EAX
// 0049cf5c: ADD ESP,0x64
// 0049cf5f: POP EBX
// 0049cf60: RET
