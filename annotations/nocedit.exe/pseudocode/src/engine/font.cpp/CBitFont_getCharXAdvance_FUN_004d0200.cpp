// Name: engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200
// Address: 004d0200
// Address Range: [[004d0200, 004d0221]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200(CBitFont * this_ptr, int char_code)
// Cross-references:
//   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 (004d0850) at 004d0cea [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 (004a65e0) at 004a664d [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharXAdvance_FUN_004d0200(CBitFont *this_ptr,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return this_ptr->char_x_advance[char_code];
  }
  return 0;
}


// Assembly code:
// 004d0200: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200
//   XREF to: Stack[0x8] (READ)
// 004d0204: TEST EAX,EAX
// 004d0206: JL 0x004d020f
//   XREF to: 004d020f (CONDITIONAL_JUMP)
// 004d0208: CMP EAX,0x100
// 004d020d: JL 0x004d0212
//   XREF to: 004d0212 (CONDITIONAL_JUMP)
// 004d020f: XOR EAX,EAX
//   Label: LAB_004d020f
// 004d0211: RET
// 004d0212: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_004d0212
//   XREF to: Stack[0x4] (READ)
// 004d0216: SHL EAX,0x2
// 004d0219: ADD EAX,EDX
// 004d021b: MOV EAX,dword ptr [EAX + 0x2d68]
// 004d0221: RET
