// Name: engine_font.cpp_CBitFont_dtor_FUN_004cceb0
// Address: 004cceb0
// Address Range: [[004cceb0, 004ccec1]]
// Convention: __cdecl
// Signature: CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004cceb0(CBitFont * this_ptr)
// Cross-references:
//   core_dfont.cpp_freeFonts_FUN_004710a0 (004710a0) at 004711a1 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_font.cpp_CBitFont_free_FUN_004cd4e0

#include "nocturne.h"

CBitFont * __cdecl engine_font_cpp_CBitFont_dtor_FUN_004cceb0(CBitFont *this_ptr)

{
  engine_font_cpp_CBitFont_free_FUN_004cd4e0(this_ptr);
  return this_ptr;
}


// Assembly code:
// 004cceb0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_dtor_FUN_004cceb0
// 004cceb1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cceb5: PUSH EBX
// 004cceb6: CALL engine_font.cpp_CBitFont_free_FUN_004cd4e0
//   XREF to: 004cd4e0 (UNCONDITIONAL_CALL)
// 004ccebb: ADD ESP,0x4
// 004ccebe: MOV EAX,EBX
// 004ccec0: POP EBX
// 004ccec1: RET
