// Name: shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20
// Address: 0050ef20
// Address Range: [[0050ef20, 0050ef94]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20(SMemHead * header)
// Cross-references:
//   shape_memdbg.cpp_debugFree_FUN_0050f460 (0050f460) at 0050f4e8 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540 (0050f540) at 0050f5db [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_memdbg_cpp_00635df7
//   TerminatedCString s_SMemHead_remove_list_cor_00635e0b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   SMemHead* g_MemoryListHead
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_SMemHead_remove_FUN_0050ef20(SMemHead *header)

{
  if (header->prev == (SMemHead *)0x0) {
    if (header != g_MemoryListHead) {
      g_CurrentFilename = "..\\shape\\memdbg.cpp";
      g_CurrentLineNumber = 0x8b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SMemHead::remove - list corruption!");
    }
    g_MemoryListHead = header->next;
  }
  else {
    header->prev->next = header->next;
  }
  if (header->next == (SMemHead *)0x0) {
    header->next = (SMemHead *)0x0;
    header->prev = header->next;
    return;
  }
  header->next->prev = header->prev;
  header->next = (SMemHead *)0x0;
  header->prev = header->next;
  return;
}


// Assembly code:
// 0050ef20: PUSH EBX
//   Label: shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20
// 0050ef21: PUSH EBP
// 0050ef22: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050ef26: MOV EDX,dword ptr [EBX]
// 0050ef28: TEST EDX,EDX
// 0050ef2a: JNZ 0x0050ef79
//   XREF to: 0050ef79 (CONDITIONAL_JUMP)
// 0050ef2c: CMP EBX,dword ptr [0x02f0d938]
//   XREF to: 02f0d938 (READ)
// 0050ef32: JZ 0x0050ef5b
//   XREF to: 0050ef5b (CONDITIONAL_JUMP)
// 0050ef34: PUSH EDI
// 0050ef35: PUSH ESI
// 0050ef36: MOV ESI,0x635df7
//   XREF to: 00635df7 (DATA)
// 0050ef3b: MOV EDI,0x8b
// 0050ef40: PUSH 0x635e0b
//   XREF to: 00635e0b (DATA)
// 0050ef45: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0050ef4b: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0050ef51: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050ef56: ADD ESP,0x4
// 0050ef59: POP ESI
// 0050ef5a: POP EDI
// 0050ef5b: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0050ef5b
// 0050ef5e: MOV [0x02f0d938],EAX
//   XREF to: 02f0d938 (WRITE)
// 0050ef63: MOV EBP,dword ptr [EBX + 0x4]
//   Label: LAB_0050ef63
// 0050ef66: TEST EBP,EBP
// 0050ef68: JNZ 0x0050ef81
//   XREF to: 0050ef81 (CONDITIONAL_JUMP)
// 0050ef6a: MOV dword ptr [EBX + 0x4],0x0
// 0050ef71: MOV EAX,dword ptr [EBX + 0x4]
// 0050ef74: MOV dword ptr [EBX],EAX
// 0050ef76: POP EBP
// 0050ef77: POP EBX
// 0050ef78: RET
// 0050ef79: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0050ef79
// 0050ef7c: MOV dword ptr [EDX + 0x4],EAX
// 0050ef7f: JMP 0x0050ef63
//   XREF to: 0050ef63 (UNCONDITIONAL_JUMP)
// 0050ef81: MOV EAX,dword ptr [EBX]
//   Label: LAB_0050ef81
// 0050ef83: MOV dword ptr [EBP],EAX
// 0050ef86: MOV dword ptr [EBX + 0x4],0x0
// 0050ef8d: MOV EAX,dword ptr [EBX + 0x4]
// 0050ef90: MOV dword ptr [EBX],EAX
// 0050ef92: POP EBP
// 0050ef93: POP EBX
// 0050ef94: RET
