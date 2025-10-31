// Name: core_actor.cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10
// Address: 00408d10
// Address Range: [[00408d10, 00408d4c]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10(CDemonActor * this_ptr, SIntersectXZCylinder * cylinder)
// Globals:
//   TerminatedCString s_core_actor_cpp_006136cd
//   TerminatedCString s_core_actor_cpp_006136df
//   TerminatedCString s_CDemonActor_customInters_006136f1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10
          (CDemonActor *this_ptr,SIntersectXZCylinder *cylinder)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x298);
  g_CurrentLineNumber = 0x299;
  g_CurrentFilename = "..\\core\\actor.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::customIntersectCylinderXZ should not be called for this base class");
  return;
}


// Assembly code:
// 00408d10: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10
// 00408d11: PUSH 0x298
// 00408d16: PUSH 0x6136cd
//   XREF to: 006136cd (DATA)
// 00408d1b: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00408d1f: PUSH EDX
// 00408d20: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00408d25: ADD ESP,0xc
// 00408d28: MOV EBX,0x299
// 00408d2d: MOV ECX,0x6136df
//   XREF to: 006136df (PARAM)
// 00408d32: PUSH 0x6136f1
//   XREF to: 006136f1 (DATA)
// 00408d37: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00408d3d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00408d43: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00408d48: ADD ESP,0x4
// 00408d4b: POP EBX
// 00408d4c: RET
