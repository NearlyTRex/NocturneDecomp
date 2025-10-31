// Name: core_actor.cpp_CDemonActor_getActorType_FUN_00408b50
// Address: 00408b50
// Address Range: [[00408b50, 00408b8e]]
// Convention: __cdecl
// Signature: CDemonActorType * core_actor.cpp_CDemonActor_getActorType_FUN_00408b50(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_006135c9
//   TerminatedCString s_core_actor_cpp_006135db
//   TerminatedCString s_CDemonActor_getActorType_006135ed
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

CDemonActorType * __cdecl
core_actor_cpp_CDemonActor_getActorType_FUN_00408b50(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x226);
  g_CurrentLineNumber = 0x22a;
  g_CurrentFilename = "..\\core\\actor.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::getActorType called.  Should never be called for this base class!");
  return (CDemonActorType *)0x0;
}


// Assembly code:
// 00408b50: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_getActorType_FUN_00408b50
// 00408b51: PUSH 0x226
// 00408b56: PUSH 0x6135c9
//   XREF to: 006135c9 (DATA)
// 00408b5b: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00408b5f: PUSH EDX
// 00408b60: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00408b65: ADD ESP,0xc
// 00408b68: MOV EBX,0x22a
// 00408b6d: MOV ECX,0x6135db
//   XREF to: 006135db (PARAM)
// 00408b72: PUSH 0x6135ed
//   XREF to: 006135ed (DATA)
// 00408b77: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00408b7d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00408b83: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00408b88: ADD ESP,0x4
// 00408b8b: XOR EAX,EAX
// 00408b8d: POP EBX
// 00408b8e: RET
