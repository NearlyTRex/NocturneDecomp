// Name: shape_edittool.cpp_getFontMaxCharWidth_FUN_004a6ef0
// Address: 004a6ef0
// Address Range: [[004a6ef0, 004a6efa]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_getFontMaxCharWidth_FUN_004a6ef0(CBitFont * font_ptr)
// Cross-references:
//   core_script.cpp_CScript_unk50_FUN_00566660 (00566660) at 005666a1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl shape_edittool_cpp_getFontMaxCharWidth_FUN_004a6ef0(CBitFont *font_ptr)

{
  return font_ptr->max_char_width;
}


// Assembly code:
// 004a6ef0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_getFontMaxCharWidth_FUN_004a6ef0
//   XREF to: Stack[0x4] (READ)
// 004a6ef4: MOV EAX,dword ptr [EAX + 0x316c]
// 004a6efa: RET
