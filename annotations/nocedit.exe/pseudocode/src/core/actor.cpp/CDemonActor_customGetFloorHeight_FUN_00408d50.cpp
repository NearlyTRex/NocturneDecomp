// Name: core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_00408d50
// Address: 00408d50
// Address Range: [[00408d50, 00408d8e]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_00408d50(CDemonActor * this_ptr, float x_pos, float z_pos, float * out_floor_height)
// Globals:
//   TerminatedCString s_core_actor_cpp_00613741
//   TerminatedCString s_core_actor_cpp_00613753
//   TerminatedCString s_CDemonActor_customGetFlo_00613765
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50
          (CDemonActor *this_ptr,float x_pos,float z_pos,float *out_floor_height)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x29d);
  g_CurrentLineNumber = 0x29e;
  g_CurrentFilename = "..\\core\\actor.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::customGetFloorHeight should not be called for this base class");
  return 0;
}


// Assembly code:
// 00408d50: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_00408d50
// 00408d51: PUSH 0x29d
// 00408d56: PUSH 0x613741
//   XREF to: 00613741 (DATA)
// 00408d5b: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00408d5f: PUSH EDX
// 00408d60: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00408d65: ADD ESP,0xc
// 00408d68: MOV EBX,0x29e
// 00408d6d: MOV ECX,0x613753
//   XREF to: 00613753 (PARAM)
// 00408d72: PUSH 0x613765
//   XREF to: 00613765 (DATA)
// 00408d77: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00408d7d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00408d83: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00408d88: ADD ESP,0x4
// 00408d8b: XOR EAX,EAX
// 00408d8d: POP EBX
// 00408d8e: RET
