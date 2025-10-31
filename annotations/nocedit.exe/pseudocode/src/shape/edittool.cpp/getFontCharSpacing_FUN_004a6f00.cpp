// Name: shape_edittool.cpp_getFontCharSpacing_FUN_004a6f00
// Address: 004a6f00
// Address Range: [[004a6f00, 004a6f0a]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_getFontCharSpacing_FUN_004a6f00(CBitFont * font_ptr)
// Cross-references:
//   core_script.cpp_CScript_unk50_FUN_00566660 (00566660) at 0056668a [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl shape_edittool_cpp_getFontCharSpacing_FUN_004a6f00(CBitFont *font_ptr)

{
  return font_ptr->char_spacing;
}


// Assembly code:
// 004a6f00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_getFontCharSpacing_FUN_004a6f00
//   XREF to: Stack[0x4] (READ)
// 004a6f04: MOV EAX,dword ptr [EAX + 0x3174]
// 004a6f0a: RET
