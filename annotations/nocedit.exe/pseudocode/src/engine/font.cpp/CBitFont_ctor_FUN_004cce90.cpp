// Name: engine_font.cpp_CBitFont_ctor_FUN_004cce90
// Address: 004cce90
// Address Range: [[004cce90, 004ccea1]]
// Convention: __cdecl
// Signature: CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004cce90(CBitFont * this_ptr)
// Cross-references:
//   core_dfont.cpp_initFonts_FUN_004709a0 (004709a0) at 00470be5 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_font.cpp_CBitFont_reset_FUN_004cced0

#include "nocturne.h"

CBitFont * __cdecl engine_font_cpp_CBitFont_ctor_FUN_004cce90(CBitFont *this_ptr)

{
  engine_font_cpp_CBitFont_reset_FUN_004cced0(this_ptr);
  return this_ptr;
}


// Assembly code:
// 004cce90: PUSH EBX
//   Label: engine_font.cpp_CBitFont_ctor_FUN_004cce90
// 004cce91: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cce95: PUSH EBX
// 004cce96: CALL engine_font.cpp_CBitFont_reset_FUN_004cced0
//   XREF to: 004cced0 (UNCONDITIONAL_CALL)
// 004cce9b: ADD ESP,0x4
// 004cce9e: MOV EAX,EBX
// 004ccea0: POP EBX
// 004ccea1: RET
