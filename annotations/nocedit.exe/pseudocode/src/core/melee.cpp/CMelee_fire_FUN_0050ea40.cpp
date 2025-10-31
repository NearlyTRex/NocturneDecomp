// Name: core_melee.cpp_CMelee_fire_FUN_0050ea40
// Address: 0050ea40
// Address Range: [[0050ea40, 0050ea68]]
// Convention: unknown
// Signature: undefined core_melee.cpp_CMelee_fire_FUN_0050ea40()
// Globals:
//   TerminatedCString s_core_melee_cpp_00635ca1
//   TerminatedCString s_CMelee_fire_should_never_00635cb3
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_melee.cpp_CMelee_fire() */

undefined4 core_melee_cpp_CMelee_fire_FUN_0050ea40(void)

{
  g_CurrentFilename = "..\\core\\melee.cpp";
  g_CurrentLineNumber = 0x8c;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CMelee::fire - should never be called...");
  return 1;
}


// Assembly code:
// 0050ea40: MOV EDX,0x635ca1
//   Label: core_melee.cpp_CMelee_fire_FUN_0050ea40
//   XREF to: 00635ca1 (PARAM)
// 0050ea45: MOV ECX,0x8c
// 0050ea4a: PUSH 0x635cb3
//   XREF to: 00635cb3 (DATA)
// 0050ea4f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0050ea55: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0050ea5b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050ea60: MOV EAX,0x1
// 0050ea65: ADD ESP,0x4
// 0050ea68: RET
