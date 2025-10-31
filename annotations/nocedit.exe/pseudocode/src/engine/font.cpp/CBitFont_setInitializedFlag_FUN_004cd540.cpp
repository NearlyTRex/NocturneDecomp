// Name: engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540
// Address: 004cd540
// Address Range: [[004cd540, 004cd54e]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540(CBitFont * this_ptr)
// Cross-references:
//   core_dfont.cpp_initFonts_FUN_004709a0 (004709a0) at 00470c21 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(CBitFont *this_ptr)

{
  this_ptr->is_initialized = 1;
  return;
}


// Assembly code:
// 004cd540: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540
//   XREF to: Stack[0x4] (READ)
// 004cd544: MOV dword ptr [EAX + 0x1d64],0x1
// 004cd54e: RET
