// Name: cockpit_drawsurf.cpp_getFontMaxWidth_FUN_0048a6a0
// Address: 0048a6a0
// Address Range: [[0048a6a0, 0048a6aa]]
// Convention: __cdecl
// Signature: int cockpit_drawsurf.cpp_getFontMaxWidth_FUN_0048a6a0(CBitFont * font_ptr)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_getFontMaxWidth_FUN_0048a6a0(CBitFont *font_ptr)

{
  return font_ptr->current_max_width;
}


// Assembly code:
// 0048a6a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: cockpit_drawsurf.cpp_getFontMaxWidth_FUN_0048a6a0
//   XREF to: Stack[0x4] (READ)
// 0048a6a4: MOV EAX,dword ptr [EAX + 0x3170]
// 0048a6aa: RET
