// Name: engine_font.cpp_CBitFont_clipCharacter_FUN_004ccdd0
// Address: 004ccdd0
// Address Range: [[004ccdd0, 004cce82]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_clipCharacter_FUN_004ccdd0(int * bitmap_offset, int * left_x, int * top_y, int * right_x, int * bottom_y, int bitmap_width)
// Cross-references:
//   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 (004ce7a0) at 004cea20 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_clipCharacter_FUN_004ccdd0
          (int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width)

{
  if (*left_x < g_ClipLeft) {
    if (*right_x < g_ClipLeft) {
      return 1;
    }
    *bitmap_offset = *bitmap_offset + (g_ClipLeft - *left_x);
    *left_x = g_ClipLeft;
  }
  if (g_ClipRight < *right_x) {
    if (g_ClipRight < *left_x) {
      return 1;
    }
    *right_x = g_ClipRight;
  }
  if (*top_y < g_ClipTop) {
    if (*bottom_y < g_ClipTop) {
      return 1;
    }
    *bitmap_offset = *bitmap_offset + (g_ClipTop - *top_y) * bitmap_width;
    *top_y = g_ClipTop;
  }
  if (g_ClipBottom < *bottom_y) {
    if (g_ClipBottom < *top_y) {
      return 1;
    }
    *bottom_y = g_ClipBottom;
  }
  return 0;
}


// Assembly code:
// 004ccdd0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_clipCharacter_FUN_004ccdd0
// 004ccdd1: PUSH ESI
// 004ccdd2: PUSH EDI
// 004ccdd3: PUSH EBP
// 004ccdd4: MOV ESI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004ccdda: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004ccde0: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ccde4: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004ccde8: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004ccdec: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004ccdf0: MOV EAX,dword ptr [ECX]
// 004ccdf2: CMP EAX,EDI
// 004ccdf4: JGE 0x004cce0c
//   XREF to: 004cce0c (CONDITIONAL_JUMP)
// 004ccdf6: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004ccdfa: MOV EAX,dword ptr [EAX]
// 004ccdfc: CMP EAX,EDI
// 004ccdfe: JL 0x004cce6d
//   XREF to: 004cce6d (CONDITIONAL_JUMP)
// 004cce04: MOV EAX,EDI
// 004cce06: SUB EAX,dword ptr [ECX]
// 004cce08: ADD dword ptr [EBX],EAX
// 004cce0a: MOV dword ptr [ECX],EDI
// 004cce0c: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_004cce0c
//   XREF to: Stack[0x10] (READ)
// 004cce10: MOV EAX,dword ptr [EAX]
// 004cce12: CMP EAX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004cce18: JLE 0x004cce2e
//   XREF to: 004cce2e (CONDITIONAL_JUMP)
// 004cce1a: MOV EAX,dword ptr [ECX]
// 004cce1c: MOV ECX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004cce22: CMP EAX,ECX
// 004cce24: JG 0x004cce6d
//   XREF to: 004cce6d (CONDITIONAL_JUMP)
// 004cce26: MOV EAX,ECX
// 004cce28: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004cce2c: MOV dword ptr [ECX],EAX
// 004cce2e: MOV EAX,dword ptr [EDX]
//   Label: LAB_004cce2e
// 004cce30: CMP EAX,ESI
// 004cce32: JGE 0x004cce48
//   XREF to: 004cce48 (CONDITIONAL_JUMP)
// 004cce34: MOV EAX,dword ptr [EBP]
// 004cce37: CMP EAX,ESI
// 004cce39: JL 0x004cce6d
//   XREF to: 004cce6d (CONDITIONAL_JUMP)
// 004cce3b: MOV EAX,ESI
// 004cce3d: SUB EAX,dword ptr [EDX]
// 004cce3f: IMUL EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004cce44: ADD dword ptr [EBX],EAX
// 004cce46: MOV dword ptr [EDX],ESI
// 004cce48: MOV EBX,dword ptr [0x02d02564]
//   Label: LAB_004cce48
//   XREF to: 02d02564 (READ)
// 004cce4e: CMP EBX,dword ptr [EBP]
// 004cce51: JGE 0x004cce5a
//   XREF to: 004cce5a (CONDITIONAL_JUMP)
// 004cce53: CMP EBX,dword ptr [EDX]
// 004cce55: JL 0x004cce6d
//   XREF to: 004cce6d (CONDITIONAL_JUMP)
// 004cce57: MOV dword ptr [EBP],EBX
// 004cce5a: XOR EAX,EAX
//   Label: LAB_004cce5a
// 004cce5c: MOV dword ptr [0x02d02558],EDI
//   XREF to: 02d02558 (WRITE)
// 004cce62: MOV dword ptr [0x02d0255c],ESI
//   XREF to: 02d0255c (WRITE)
// 004cce68: POP EBP
// 004cce69: POP EDI
// 004cce6a: POP ESI
// 004cce6b: POP EBX
// 004cce6c: RET
// 004cce6d: MOV EAX,0x1
//   Label: LAB_004cce6d
// 004cce72: MOV dword ptr [0x02d02558],EDI
//   XREF to: 02d02558 (WRITE)
// 004cce78: MOV dword ptr [0x02d0255c],ESI
//   XREF to: 02d0255c (WRITE)
// 004cce7e: POP EBP
// 004cce7f: POP EDI
// 004cce80: POP ESI
// 004cce81: POP EBX
// 004cce82: RET
