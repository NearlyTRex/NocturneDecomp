// Name: engine_winfont.cpp_CWinFont_drawText_FUN_005f23f0
// Address: 005f23f0
// Address Range: [[005f23f0, 005f2438]]
// Convention: __cdecl
// Signature: int engine_winfont.cpp_CWinFont_drawText_FUN_005f23f0(CWinFont * this_ptr, int x_position, int y_position, char * text_string, int text_color, int draw_flags)
// Function calls:
//   engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
//   engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440

#include "nocturne.h"

int __cdecl
engine_winfont_cpp_CWinFont_drawText_FUN_005f23f0
          (CWinFont *this_ptr,int x_position,int y_position,char *text_string,int text_color,
          int draw_flags)

{
  int iVar1;
  int in_stack_0000001c;
  
  iVar1 = engine_winfont_cpp_CWinFont_createTextBackground_FUN_005f2860(this_ptr,-1,-1);
  if (iVar1 == 0) {
    return 0;
  }
  engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005f2440
            (this_ptr,this_ptr->deviceContextHandle,y_position,(int)text_string,(char *)text_color,
             draw_flags,in_stack_0000001c);
  return 0;
}


// Assembly code:
// 005f23f0: PUSH EBX
//   Label: engine_winfont.cpp_CWinFont_drawText_FUN_005f23f0
// 005f23f1: PUSH EBP
// 005f23f2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005f23f6: PUSH -0x1
// 005f23f8: PUSH -0x1
// 005f23fa: PUSH EBX
// 005f23fb: CALL engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
//   XREF to: 005f2860 (UNCONDITIONAL_CALL)
// 005f2400: ADD ESP,0xc
// 005f2403: TEST EAX,EAX
// 005f2405: JNZ 0x005f240a
//   XREF to: 005f240a (CONDITIONAL_JUMP)
// 005f2407: POP EBP
// 005f2408: POP EBX
// 005f2409: RET
// 005f240a: PUSH EDI
//   Label: LAB_005f240a
// 005f240b: PUSH ESI
// 005f240c: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005f2410: PUSH EDX
// 005f2411: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 005f2415: PUSH ECX
// 005f2416: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 005f241a: PUSH ESI
// 005f241b: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005f241f: PUSH EDI
// 005f2420: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005f2424: PUSH EBP
// 005f2425: MOV EAX,dword ptr [EBX + 0x4]
// 005f2428: PUSH EAX
// 005f2429: PUSH EBX
// 005f242a: CALL engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440
//   XREF to: 005f2440 (UNCONDITIONAL_CALL)
// 005f242f: ADD ESP,0x1c
// 005f2432: XOR EAX,EAX
// 005f2434: POP ESI
// 005f2435: POP EDI
// 005f2436: POP EBP
// 005f2437: POP EBX
// 005f2438: RET
