// Name: shape_edittool.cpp_getFontMaxCharHeight_FUN_004a6ee0
// Address: 004a6ee0
// Address Range: [[004a6ee0, 004a6eea]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_getFontMaxCharHeight_FUN_004a6ee0(CBitFont * font_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_getFontMaxCharHeight_FUN_004a6ee0(CBitFont *font_ptr)

{
  return font_ptr->max_char_height;
}


// Assembly code:
// 004a6ee0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_getFontMaxCharHeight_FUN_004a6ee0
//   XREF to: Stack[0x4] (READ)
// 004a6ee4: MOV EAX,dword ptr [EAX + 0x3168]
// 004a6eea: RET
