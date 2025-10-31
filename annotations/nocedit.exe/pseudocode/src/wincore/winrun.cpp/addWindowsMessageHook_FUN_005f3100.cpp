// Name: wincore_winrun.cpp_addWindowsMessageHook_FUN_005f3100
// Address: 005f3100
// Address Range: [[005f3100, 005f314b]]
// Convention: unknown
// Signature: undefined wincore_winrun.cpp_addWindowsMessageHook_FUN_005f3100()
// Globals:
//   TerminatedCString s_wincore_winrun_cpp_00657f4c
//   TerminatedCString s_addWindowsMessageHook_to_00657f62
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_NumWindowMessageHandlers
//   WNDPROC[4] g_WindowMessageHandlers
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void wincore_winrun_cpp_addWindowsMessageHook_FUN_005f3100
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               undefined4 param_5,WNDPROC param_6)

{
  if (2 < g_NumWindowMessageHandlers) {
    g_CurrentFilename = "..\\wincore\\winrun.cpp";
    g_CurrentLineNumber = 0x62;
    core_main_c_displayErrorAndQuit_FUN_00506f10("addWindowsMessageHook - too many!",unaff_EBX);
  }
  g_WindowMessageHandlers[g_NumWindowMessageHandlers] = param_6;
  g_NumWindowMessageHandlers = g_NumWindowMessageHandlers + 1;
  return;
}


// Assembly code:
// 005f3100: PUSH ESI
//   Label: wincore_winrun.cpp_addWindowsMessageHook_FUN_005f3100
// 005f3101: CMP dword ptr [0x03f98ddc],0x3
//   XREF to: 03f98ddc (READ)
// 005f3108: JGE 0x005f3125
//   XREF to: 005f3125 (CONDITIONAL_JUMP)
// 005f310a: MOV EAX,[0x03f98ddc]
//   Label: LAB_005f310a
//   XREF to: 03f98ddc (READ)
// 005f310f: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f3113: LEA ESI,[EAX + 0x1]
// 005f3116: MOV dword ptr [EAX*0x4 + 0x3f98de0],EDX
//   XREF to: 03f98de0 (DATA)
// 005f311d: MOV dword ptr [0x03f98ddc],ESI
//   XREF to: 03f98ddc (WRITE)
// 005f3123: POP ESI
// 005f3124: RET
// 005f3125: PUSH EBX
//   Label: LAB_005f3125
// 005f3126: MOV ECX,0x657f4c
//   XREF to: 00657f4c (DATA)
// 005f312b: MOV EBX,0x62
// 005f3130: PUSH 0x657f62
//   XREF to: 00657f62 (DATA)
// 005f3135: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005f313b: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005f3141: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005f3146: ADD ESP,0x4
// 005f3149: POP EBX
// 005f314a: JMP 0x005f310a
//   XREF to: 005f310a (UNCONDITIONAL_JUMP)
