// Name: core_actor.cpp_CDemonActor_processActionButton_FUN_00409f60
// Address: 00409f60
// Address Range: [[00409f60, 00409fa1]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_processActionButton_FUN_00409f60(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_0061393a
//   TerminatedCString s_core_actor_cpp_0061394c
//   TerminatedCString s_CDemonActor_processActio_0061395e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x559);
  g_CurrentLineNumber = 0x560;
  g_CurrentFilename = "..\\core\\actor.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::processActionButton - should never be called for this base class!");
  return 1;
}


// Assembly code:
// 00409f60: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_processActionButton_FUN_00409f60
// 00409f61: PUSH 0x559
// 00409f66: PUSH 0x61393a
//   XREF to: 0061393a (DATA)
// 00409f6b: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00409f6f: PUSH EDX
// 00409f70: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409f75: ADD ESP,0xc
// 00409f78: MOV EBX,0x560
// 00409f7d: MOV ECX,0x61394c
//   XREF to: 0061394c (PARAM)
// 00409f82: PUSH 0x61395e
//   XREF to: 0061395e (DATA)
// 00409f87: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00409f8d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00409f93: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00409f98: MOV EAX,0x1
// 00409f9d: ADD ESP,0x4
// 00409fa0: POP EBX
// 00409fa1: RET
