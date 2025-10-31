// Name: shape_edittool.cpp_getFontSpaceCharWidth_FUN_004a6f10
// Address: 004a6f10
// Address Range: [[004a6f10, 004a6f1a]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_getFontSpaceCharWidth_FUN_004a6f10(CBitFont * font_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_getFontSpaceCharWidth_FUN_004a6f10(CBitFont *font_ptr)

{
  return font_ptr->char_widths[0x20];
}


// Assembly code:
// 004a6f10: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_getFontSpaceCharWidth_FUN_004a6f10
//   XREF to: Stack[0x4] (READ)
// 004a6f14: MOV EAX,dword ptr [EAX + 0x25e8]
// 004a6f1a: RET
