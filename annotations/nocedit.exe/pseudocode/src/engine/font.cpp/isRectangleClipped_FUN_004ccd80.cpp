// Name: engine_font.cpp_isRectangleClipped_FUN_004ccd80
// Address: 004ccd80
// Address Range: [[004ccd80, 004ccdc6]]
// Convention: __cdecl
// Signature: int engine_font.cpp_isRectangleClipped_FUN_004ccd80(int rect_width, int rect_height, int rect_x, int rect_y)
// Globals:
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom

#include "nocturne.h"

int __cdecl
engine_font_cpp_isRectangleClipped_FUN_004ccd80
          (int rect_width,int rect_height,int rect_x,int rect_y)

{
  if ((((g_ClipLeft <= rect_x) && (g_ClipTop <= rect_y)) &&
      (rect_x <= (g_ClipRight + 1) - rect_width)) && (rect_y <= (g_ClipBottom + 1) - rect_height)) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 004ccd80: PUSH EDI
//   Label: engine_font.cpp_isRectangleClipped_FUN_004ccd80
// 004ccd81: PUSH EBP
// 004ccd82: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004ccd86: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 004ccd8a: CMP EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004ccd90: JL 0x004ccdba
//   XREF to: 004ccdba (CONDITIONAL_JUMP)
// 004ccd92: CMP ECX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004ccd98: JL 0x004ccdba
//   XREF to: 004ccdba (CONDITIONAL_JUMP)
// 004ccd9a: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 004ccd9f: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004ccda3: INC EAX
// 004ccda4: SUB EAX,EDI
// 004ccda6: CMP EDX,EAX
// 004ccda8: JG 0x004ccdba
//   XREF to: 004ccdba (CONDITIONAL_JUMP)
// 004ccdaa: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 004ccdaf: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004ccdb3: INC EAX
// 004ccdb4: SUB EAX,EBP
// 004ccdb6: CMP ECX,EAX
// 004ccdb8: JLE 0x004ccdc2
//   XREF to: 004ccdc2 (CONDITIONAL_JUMP)
// 004ccdba: MOV EAX,0x1
//   Label: LAB_004ccdba
// 004ccdbf: POP EBP
// 004ccdc0: POP EDI
// 004ccdc1: RET
// 004ccdc2: XOR EAX,EAX
//   Label: LAB_004ccdc2
// 004ccdc4: POP EBP
// 004ccdc5: POP EDI
// 004ccdc6: RET
