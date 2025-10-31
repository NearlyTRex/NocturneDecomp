// Name: engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
// Address: 004d01a0
// Address Range: [[004d01a0, 004d01c1]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont * font, int char_code)
// Cross-references:
//   cockpit_drawsurf.cpp_getCurrentCharWidth_FUN_00489ca0 (00489ca0) at 00489cb3 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_renderOverlay_FUN_004d8040 (004d8040) at 004d80db [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0 (004d89d0) at 004d8a13 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_unk50_FUN_00566660 (00566660) at 00566679 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 (004cfe80) at 004cff0d [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 (004d0850) at 004d0d08 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 (004a65e0) at 004a67fb [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont *font,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return font->char_widths[char_code];
  }
  return 0;
}


// Assembly code:
// 004d01a0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   XREF to: Stack[0x8] (READ)
// 004d01a4: TEST EAX,EAX
// 004d01a6: JL 0x004d01af
//   XREF to: 004d01af (CONDITIONAL_JUMP)
// 004d01a8: CMP EAX,0x100
// 004d01ad: JL 0x004d01b2
//   XREF to: 004d01b2 (CONDITIONAL_JUMP)
// 004d01af: XOR EAX,EAX
//   Label: LAB_004d01af
// 004d01b1: RET
// 004d01b2: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_004d01b2
//   XREF to: Stack[0x4] (READ)
// 004d01b6: SHL EAX,0x2
// 004d01b9: ADD EAX,EDX
// 004d01bb: MOV EAX,dword ptr [EAX + 0x2568]
// 004d01c1: RET
