// Name: core_actor.cpp_CDemonActor_customRayIntersect_FUN_00408cc0
// Address: 00408cc0
// Address Range: [[00408cc0, 00408d05]]
// Convention: __cdecl
// Signature: float core_actor.cpp_CDemonActor_customRayIntersect_FUN_00408cc0(CDemonActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
// Globals:
//   TerminatedCString s_core_actor_cpp_00613660
//   TerminatedCString s_core_actor_cpp_00613672
//   TerminatedCString s_CDemonActor_customRayInt_00613684
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

float __cdecl
core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0
          (CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3f *out_normal)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x292);
  g_CurrentLineNumber = 0x293;
  g_CurrentFilename = "..\\core\\actor.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::customRayIntersect should not be called for this base class");
  return 2.0;
}


// Assembly code:
// 00408cc0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_customRayIntersect_FUN_00408cc0
// 00408cc1: PUSH ESI
// 00408cc2: PUSH 0x292
// 00408cc7: PUSH 0x613660
//   XREF to: 00613660 (DATA)
// 00408ccc: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00408cd0: PUSH EDX
// 00408cd1: MOV EBX,0x293
// 00408cd6: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00408cdb: ADD ESP,0xc
// 00408cde: MOV ESI,0x40000000
// 00408ce3: MOV ECX,0x613672
//   XREF to: 00613672 (PARAM)
// 00408ce8: PUSH 0x613684
//   XREF to: 00613684 (DATA)
// 00408ced: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00408cf3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00408cf9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00408cfe: ADD ESP,0x4
// 00408d01: MOV EAX,ESI
// 00408d03: POP ESI
// 00408d04: POP EBX
// 00408d05: RET
