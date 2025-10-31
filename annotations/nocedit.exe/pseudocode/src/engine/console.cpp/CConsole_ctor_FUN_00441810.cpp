// Name: engine_console.cpp_CConsole_ctor_FUN_00441810
// Address: 00441810
// Address Range: [[00441810, 00441879]]
// Convention: __cdecl
// Signature: CConsole * engine_console.cpp_CConsole_ctor_FUN_00441810(CConsole * this_ptr, int width, int height, int screen_x, int screen_y)
// Cross-references:
//   engine_console.cpp_staticInit_FUN_004417e0 (004417e0) at 004417ed [UNCONDITIONAL_CALL]
// Function calls:
//   engine_console.cpp_CConsole_reset_FUN_00441a40

#include "nocturne.h"

CConsole * __cdecl
engine_console_cpp_CConsole_ctor_FUN_00441810
          (CConsole *this_ptr,int width,int height,int screen_x,int screen_y)

{
  this_ptr->consoleWidth = width;
  this_ptr->consoleHeight = height;
  this_ptr->screenX = screen_x;
  this_ptr->screenY = screen_y;
  if (this_ptr->screenX < 1) {
    this_ptr->screenX = 1;
  }
  if (this_ptr->screenY < 1) {
    this_ptr->screenY = 1;
  }
  engine_console_cpp_CConsole_reset_FUN_00441a40(this_ptr);
  this_ptr->fileLoggingEnabled = 0;
  return this_ptr;
}


// Assembly code:
// 00441810: PUSH EBX
//   Label: engine_console.cpp_CConsole_ctor_FUN_00441810
// 00441811: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00441815: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00441819: MOV dword ptr [EBX + 0xfac],EAX
// 0044181f: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00441823: MOV dword ptr [EBX + 0xfb0],EAX
// 00441829: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0044182d: MOV dword ptr [EBX + 0xfb4],EAX
// 00441833: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00441837: MOV EDX,dword ptr [EBX + 0xfb4]
// 0044183d: MOV dword ptr [EBX + 0xfb8],EAX
// 00441843: CMP EDX,0x1
// 00441846: JL 0x0044186e
//   XREF to: 0044186e (CONDITIONAL_JUMP)
// 00441848: CMP dword ptr [EBX + 0xfb8],0x1
//   Label: LAB_00441848
// 0044184f: JGE 0x0044185b
//   XREF to: 0044185b (CONDITIONAL_JUMP)
// 00441851: MOV dword ptr [EBX + 0xfb8],0x1
// 0044185b: PUSH EBX
//   Label: LAB_0044185b
// 0044185c: CALL engine_console.cpp_CConsole_reset_FUN_00441a40
//   XREF to: 00441a40 (UNCONDITIONAL_CALL)
// 00441861: ADD ESP,0x4
// 00441864: MOV EAX,EBX
// 00441866: MOV dword ptr [EBX],0x0
// 0044186c: POP EBX
// 0044186d: RET
// 0044186e: MOV dword ptr [EBX + 0xfb4],0x1
//   Label: LAB_0044186e
// 00441878: JMP 0x00441848
//   XREF to: 00441848 (UNCONDITIONAL_JUMP)
