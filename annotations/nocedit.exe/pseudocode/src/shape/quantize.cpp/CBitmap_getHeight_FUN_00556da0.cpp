// Name: shape_quantize.cpp_CBitmap_getHeight_FUN_00556da0
// Address: 00556da0
// Address Range: [[00556da0, 00556da8]]
// Convention: __cdecl
// Signature: short shape_quantize.cpp_CBitmap_getHeight_FUN_00556da0(CBitmap * this_ptr)

#include "nocturne.h"

short __cdecl shape_quantize_cpp_CBitmap_getHeight_FUN_00556da0(CBitmap *this_ptr)

{
  return this_ptr->height;
}


// Assembly code:
// 00556da0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_quantize.cpp_CBitmap_getHeight_FUN_00556da0
//   XREF to: Stack[0x4] (READ)
// 00556da4: MOV AX,word ptr [EAX + 0x16]
// 00556da8: RET
