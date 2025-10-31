// Name: engine_dosio.c_addGetFileInfoHook_FUN_00481710
// Address: 00481710
// Address Range: [[00481710, 0048175b]]
// Convention: __cdecl
// Signature: void engine_dosio.c_addGetFileInfoHook_FUN_00481710(FileSearchHandler * handler)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507b65 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_dosio_c_00621577
//   TerminatedCString s_addGetFileInfoHook_too_m_00621589
//   int g_NumSearchHandlers
//   FileSearchHandler*[5] g_SearchHandlers
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl engine_dosio_c_addGetFileInfoHook_FUN_00481710(FileSearchHandler *handler)

{
  FileSearchHandler *in_stack_00000008;
  
  if (4 < g_NumSearchHandlers) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 0x53;
    core_main_c_displayErrorAndQuit_FUN_00506f10("addGetFileInfoHook - too many!");
  }
  g_SearchHandlers[g_NumSearchHandlers] = in_stack_00000008;
  g_NumSearchHandlers = g_NumSearchHandlers + 1;
  return;
}


// Assembly code:
// 00481710: PUSH ESI
//   Label: engine_dosio.c_addGetFileInfoHook_FUN_00481710
// 00481711: CMP dword ptr [0x02c14d18],0x5
//   XREF to: 02c14d18 (READ)
// 00481718: JGE 0x00481735
//   XREF to: 00481735 (CONDITIONAL_JUMP)
// 0048171a: MOV EAX,[0x02c14d18]
//   Label: LAB_0048171a
//   XREF to: 02c14d18 (READ)
// 0048171f: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00481723: LEA ESI,[EAX + 0x1]
// 00481726: MOV dword ptr [EAX*0x4 + 0x2c14d1c],EDX
//   XREF to: 02c14d1c (DATA)
// 0048172d: MOV dword ptr [0x02c14d18],ESI
//   XREF to: 02c14d18 (WRITE)
// 00481733: POP ESI
// 00481734: RET
// 00481735: PUSH EBX
//   Label: LAB_00481735
// 00481736: MOV ECX,0x621577
//   XREF to: 00621577 (PARAM)
// 0048173b: MOV EBX,0x53
// 00481740: PUSH 0x621589
//   XREF to: 00621589 (DATA)
// 00481745: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0048174b: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00481751: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00481756: ADD ESP,0x4
// 00481759: POP EBX
// 0048175a: JMP 0x0048171a
//   XREF to: 0048171a (UNCONDITIONAL_JUMP)
