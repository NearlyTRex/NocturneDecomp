// Name: core_menu.cpp_showJoystickCalibrationScreen_FUN_00510410
// Address: 00510410
// Address Range: [[00510410, 005104c0]]
// Convention: __cdecl
// Signature: void core_menu.cpp_showJoystickCalibrationScreen_FUN_00510410(char * instruction_text, char * message_text)
// Globals:
//   TerminatedCString s_d_d_x_006365f8
//   CBitFont* g_MediumFont
//   DWORD g_JoyXPos
//   DWORD g_JoyYPos
//   DWORD g_JoyButtons
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80

#include "nocturne.h"

void __cdecl
core_menu_cpp_showJoystickCalibrationScreen_FUN_00510410(char *instruction_text,char *message_text)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *in_stack_0000000c;
  char acStack_100 [240];
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,instruction_text);
  iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_MediumFont,0x58);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_MediumFont,in_stack_0000000c,0x140 - iVar1 / 2,0xf0 - iVar2 / 2,7,0);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xfffffefc,"%d,%d,%x",g_JoyXPos,g_JoyYPos,g_JoyButtons);
  engine_2d_c_drawText_FUN_00401fd0(acStack_100,0,0);
  return;
}


// Assembly code:
// 00510410: PUSH EBX
//   Label: core_menu.cpp_showJoystickCalibrationScreen_FUN_00510410
// 00510411: PUSH ESI
// 00510412: PUSH EDI
// 00510413: PUSH EBP
// 00510414: SUB ESP,0x100
// 0051041a: MOV EDX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 00510421: PUSH EDX
// 00510422: MOV ECX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 00510428: PUSH ECX
// 00510429: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 0051042e: MOV EDX,EAX
// 00510430: SAR EDX,0x1f
// 00510433: SUB EAX,EDX
// 00510435: SAR EAX,0x1
// 00510437: ADD ESP,0x8
// 0051043a: PUSH 0x58
// 0051043c: MOV ESI,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 00510442: MOV EBX,0x140
// 00510447: PUSH ESI
// 00510448: SUB EBX,EAX
// 0051044a: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0051044f: MOV EDX,EAX
// 00510451: SAR EDX,0x1f
// 00510454: SUB EAX,EDX
// 00510456: SAR EAX,0x1
// 00510458: ADD ESP,0x8
// 0051045b: PUSH 0x0
// 0051045d: MOV EDX,0xf0
// 00510462: PUSH 0x7
// 00510464: SUB EDX,EAX
// 00510466: PUSH EDX
// 00510467: PUSH EBX
// 00510468: MOV EDI,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x4] (READ)
// 0051046f: PUSH EDI
// 00510470: MOV EBP,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 00510476: PUSH EBP
// 00510477: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 0051047c: ADD ESP,0x18
// 0051047f: MOV EAX,[0x02d05208]
//   XREF to: 02d05208 (READ)
// 00510484: PUSH EAX
// 00510485: MOV EDX,dword ptr [0x02d051fc]
//   XREF to: 02d051fc (READ)
// 0051048b: PUSH EDX
// 0051048c: MOV ECX,dword ptr [0x02d051f8]
//   XREF to: 02d051f8 (READ)
// 00510492: PUSH ECX
// 00510493: PUSH 0x6365f8
//   XREF to: 006365f8 (DATA)
// 00510498: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x110] (DATA)
// 0051049c: PUSH EAX
// 0051049d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005104a2: ADD ESP,0x14
// 005104a5: PUSH 0x0
// 005104a7: PUSH 0x0
// 005104a9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 005104ad: PUSH EAX
// 005104ae: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005104b3: ADD ESP,0xc
// 005104b6: ADD ESP,0x100
// 005104bc: POP EBP
// 005104bd: POP EDI
// 005104be: POP ESI
// 005104bf: POP EBX
// 005104c0: RET
