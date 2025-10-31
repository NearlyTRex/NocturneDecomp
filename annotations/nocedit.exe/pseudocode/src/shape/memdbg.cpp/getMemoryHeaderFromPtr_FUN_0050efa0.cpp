// Name: shape_memdbg.cpp_getMemoryHeaderFromPtr_FUN_0050efa0
// Address: 0050efa0
// Address Range: [[0050efa0, 0050efdb]]
// Convention: __cdecl
// Signature: SMemHead * shape_memdbg.cpp_getMemoryHeaderFromPtr_FUN_0050efa0(void * user_ptr)
// Globals:
//   TerminatedCString s_shape_memdbg_cpp_00635e2f
//   TerminatedCString s_headFromPtr_NULL_ptr_00635e43
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SMemHead * __cdecl shape_memdbg_cpp_getMemoryHeaderFromPtr_FUN_0050efa0(void *user_ptr)

{
  int in_stack_00000008;
  
  if (user_ptr != (void *)0x0) {
    return (SMemHead *)((int)user_ptr + -0x28);
  }
  g_CurrentFilename = "..\\shape\\memdbg.cpp";
  g_CurrentLineNumber = 0x99;
  core_main_c_displayErrorAndQuit_FUN_00506f10("headFromPtr - NULL ptr");
  return (SMemHead *)(in_stack_00000008 + -0x28);
}


// Assembly code:
// 0050efa0: CMP dword ptr [ESP + 0x4],0x0
//   Label: shape_memdbg.cpp_getMemoryHeaderFromPtr_FUN_0050efa0
//   XREF to: Stack[0x4] (READ)
// 0050efa5: JZ 0x0050efaf
//   XREF to: 0050efaf (CONDITIONAL_JUMP)
// 0050efa7: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0050efab: SUB EAX,0x28
// 0050efae: RET
// 0050efaf: PUSH EBX
//   Label: LAB_0050efaf
// 0050efb0: MOV ECX,0x635e2f
//   XREF to: 00635e2f (DATA)
// 0050efb5: MOV EBX,0x99
// 0050efba: PUSH 0x635e43
//   XREF to: 00635e43 (DATA)
// 0050efbf: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0050efc5: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0050efcb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050efd0: ADD ESP,0x4
// 0050efd3: POP EBX
// 0050efd4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0050efd8: SUB EAX,0x28
// 0050efdb: RET
