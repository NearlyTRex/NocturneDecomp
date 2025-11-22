// Name: wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
// Address: 005f30d0
// Address Range: [[005f30d0, 005f30f3]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_setCursorPosition_FUN_005f30d0(int x, int y)
// Cross-references:
//   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 (004dce70) at 004dcec6 [UNCONDITIONAL_CALL]
//   core_game.cpp_SettingCursorPos_FUN_004dccc0 (004dccc0) at 004dcd2b [UNCONDITIONAL_CALL]
//   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 (005107c0) at 0051084a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 (004a5fc0) at 004a61e3 [UNCONDITIONAL_CALL]
// Globals:
//   SetCursorPos* SetCursorPos = 00211bb8
//   int g_MouseX
//   int g_MouseY
// Function calls:
//   SetCursorPos

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(int x,int y)

{
  int in_stack_00000010;
  int in_stack_00000014;
  
  (*SetCursorPos)(x,y);
  g_MouseX = in_stack_00000010;
  g_MouseY = in_stack_00000014;
  return;
}


// Assembly code:
// 005f30d0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
//   XREF to: Stack[0x8] (READ)
// 005f30d4: PUSH EDX
// 005f30d5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f30d9: PUSH ECX
// 005f30da: CALL dword ptr CS:[0x6114e0]
//   XREF to: EXTERNAL:00000044 (COMPUTED_CALL)
//   XREF to: 006114e0 (READ)
// 005f30e1: MOV EAX,dword ptr [ESP + 0x4]
// 005f30e5: MOV [0x02cf6a8c],EAX
//   XREF to: 02cf6a8c (WRITE)
// 005f30ea: MOV EAX,dword ptr [ESP + 0x8]
// 005f30ee: MOV [0x02cf6a90],EAX
//   XREF to: 02cf6a90 (WRITE)
// 005f30f3: RET
