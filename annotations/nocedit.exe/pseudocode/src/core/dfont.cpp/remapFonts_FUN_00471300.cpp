// Name: core_dfont.cpp_remapFonts_FUN_00471300
// Address: 00471300
// Address Range: [[00471300, 0047130f]]
// Convention: __cdecl
// Signature: void core_dfont.cpp_remapFonts_FUN_00471300(void)
// Globals:
//   CBitFont* g_MediumFont
// Function calls:
//   engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0

#include "nocturne.h"

void __cdecl core_dfont_cpp_remapFonts_FUN_00471300(void)

{
  engine_font_cpp_CBitFont_remapPalette_FUN_004d02a0(g_MediumFont);
  return;
}


// Assembly code:
// 00471300: MOV EDX,dword ptr [0x020a5718]
//   Label: core_dfont.cpp_remapFonts_FUN_00471300
//   XREF to: 020a5718 (READ)
// 00471306: PUSH EDX
// 00471307: CALL engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0
//   XREF to: 004d02a0 (UNCONDITIONAL_CALL)
// 0047130c: ADD ESP,0x4
// 0047130f: RET
