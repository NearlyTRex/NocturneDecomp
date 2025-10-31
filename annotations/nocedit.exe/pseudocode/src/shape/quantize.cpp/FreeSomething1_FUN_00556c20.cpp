// Name: shape_quantize.cpp_FreeSomething1_FUN_00556c20
// Address: 00556c20
// Address Range: [[00556c20, 00556ca7]]
// Convention: unknown
// Signature: undefined shape_quantize.cpp_FreeSomething1_FUN_00556c20()
// Cross-references:
//   shape_quantize.cpp_ColorQuantizationMaybe_FUN_00556490 (00556490) at 0055679c [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_00556180 (00556180) at 00556256 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_quantize_cpp_006411b2
//   TerminatedCString s_shape_quantize_cpp_006411c8
//   TerminatedCString s_shape_quantize_cpp_006411de
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

/* Signature: undefined1 shape_quantize.cpp_FreeSomething1(undefined4 param_1) */

int shape_quantize_cpp_FreeSomething1_FUN_00556c20(void)

{
  int in_stack_00000004;
  
  if (*(void **)(in_stack_00000004 + 0x1c) != (void *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x4b6;
    crt_memory_c_free_FUN_005fe659(*(void **)(in_stack_00000004 + 0x1c));
  }
  if (*(void **)(in_stack_00000004 + 0x20) != (void *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x4b7;
    crt_memory_c_free_FUN_005fe659(*(void **)(in_stack_00000004 + 0x20));
  }
  if (*(void **)(in_stack_00000004 + 0x24) == (void *)0x0) {
    return in_stack_00000004;
  }
  g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
  g_CurrentDebugLine = 0x4b8;
  shape_memdbg_cpp_debugFree_FUN_0050f210(*(void **)(in_stack_00000004 + 0x24));
  return in_stack_00000004;
}


// Assembly code:
// 00556c20: PUSH EBX
//   Label: shape_quantize.cpp_FreeSomething1_FUN_00556c20
// 00556c21: PUSH ESI
// 00556c22: PUSH EBP
// 00556c23: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00556c27: MOV EDX,dword ptr [EBX + 0x1c]
// 00556c2a: TEST EDX,EDX
// 00556c2c: JNZ 0x00556c60
//   XREF to: 00556c60 (CONDITIONAL_JUMP)
// 00556c2e: MOV EBP,dword ptr [EBX + 0x20]
//   Label: LAB_00556c2e
// 00556c31: TEST EBP,EBP
// 00556c33: JZ 0x00556c53
//   XREF to: 00556c53 (CONDITIONAL_JUMP)
// 00556c35: MOV EAX,0x6411c8
//   XREF to: 006411c8 (PARAM)
// 00556c3a: MOV EDX,0x4b7
// 00556c3f: PUSH EBP
// 00556c40: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 00556c45: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 00556c4b: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00556c50: ADD ESP,0x4
// 00556c53: MOV ESI,dword ptr [EBX + 0x24]
//   Label: LAB_00556c53
// 00556c56: TEST ESI,ESI
// 00556c58: JNZ 0x00556c81
//   XREF to: 00556c81 (CONDITIONAL_JUMP)
// 00556c5a: MOV EAX,EBX
// 00556c5c: POP EBP
// 00556c5d: POP ESI
// 00556c5e: POP EBX
// 00556c5f: RET
// 00556c60: MOV ECX,0x6411b2
//   Label: LAB_00556c60
//   XREF to: 006411b2 (PARAM)
// 00556c65: MOV ESI,0x4b6
// 00556c6a: PUSH EDX
// 00556c6b: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 00556c71: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 00556c77: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00556c7c: ADD ESP,0x4
// 00556c7f: JMP 0x00556c2e
//   XREF to: 00556c2e (UNCONDITIONAL_JUMP)
// 00556c81: PUSH EDI
//   Label: LAB_00556c81
// 00556c82: MOV EDI,0x6411de
//   XREF to: 006411de (DATA)
// 00556c87: MOV EBP,0x4b8
// 00556c8c: PUSH ESI
// 00556c8d: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 00556c93: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 00556c99: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00556c9e: ADD ESP,0x4
// 00556ca1: POP EDI
// 00556ca2: MOV EAX,EBX
// 00556ca4: POP EBP
// 00556ca5: POP ESI
// 00556ca6: POP EBX
// 00556ca7: RET
