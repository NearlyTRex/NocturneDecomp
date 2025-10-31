// Name: core_cloth.cpp_UnknownSomethingAndFreeMem_FUN_00438cb0
// Address: 00438cb0
// Address Range: [[00438cb0, 00438ced]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_UnknownSomethingAndFreeMem_FUN_00438cb0()
// Cross-references:
//   core_cloth.cpp_CCloth_allocMemory_FUN_00438c50 (00438c50) at 00438c56 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00 (00438c00) at 00438c06 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_cloth_cpp_006181aa
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_UnknownSomethingAndFreeMem(undefined4 param_1) */

void core_cloth_cpp_UnknownSomethingAndFreeMem_FUN_00438cb0(void)

{
  int in_stack_00000004;
  
  if (*(void **)(in_stack_00000004 + 0x3fe3c) == (void *)0x0) {
    return;
  }
  g_CurrentDebugFilename = "..\\core\\cloth.cpp";
  g_CurrentDebugLine = 0x85;
  crt_memory_c_free_FUN_005fe659(*(void **)(in_stack_00000004 + 0x3fe3c));
  *(undefined4 *)(in_stack_00000004 + 0x3fe3c) = 0;
  return;
}


// Assembly code:
// 00438cb0: PUSH EBX
//   Label: core_cloth.cpp_UnknownSomethingAndFreeMem_FUN_00438cb0
// 00438cb1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00438cb5: MOV EDX,dword ptr [EBX + 0x3fe3c]
// 00438cbb: TEST EDX,EDX
// 00438cbd: JNZ 0x00438cc1
//   XREF to: 00438cc1 (CONDITIONAL_JUMP)
// 00438cbf: POP EBX
// 00438cc0: RET
// 00438cc1: PUSH ESI
//   Label: LAB_00438cc1
// 00438cc2: MOV ECX,0x6181aa
//   XREF to: 006181aa (PARAM)
// 00438cc7: MOV ESI,0x85
// 00438ccc: PUSH EDX
// 00438ccd: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 00438cd3: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 00438cd9: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00438cde: ADD ESP,0x4
// 00438ce1: MOV dword ptr [EBX + 0x3fe3c],0x0
// 00438ceb: POP ESI
// 00438cec: POP EBX
// 00438ced: RET
