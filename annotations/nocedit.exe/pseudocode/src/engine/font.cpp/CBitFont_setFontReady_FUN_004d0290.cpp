// Name: engine_font.cpp_CBitFont_setFontReady_FUN_004d0290
// Address: 004d0290
// Address Range: [[004d0290, 004d029e]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_setFontReady_FUN_004d0290(CBitFont * this_ptr, int value)
// Cross-references:
//   core_dfont.cpp_initFonts_FUN_004709a0 (004709a0) at 00470c63 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(CBitFont *this_ptr,int value)

{
  this_ptr->rendering_ready = value;
  return;
}


// Assembly code:
// 004d0290: MOV EDX,dword ptr [ESP + 0x4]
//   Label: engine_font.cpp_CBitFont_setFontReady_FUN_004d0290
//   XREF to: Stack[0x4] (READ)
// 004d0294: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004d0298: MOV dword ptr [EDX + 0x3184],EAX
// 004d029e: RET
