// Name: shape_quantize.cpp_CBitmap_getPalette_FUN_00556de0
// Address: 00556de0
// Address Range: [[00556de0, 00556de7]]
// Convention: __cdecl
// Signature: void * shape_quantize.cpp_CBitmap_getPalette_FUN_00556de0(CBitmap * this_ptr)

#include "nocturne.h"

void * __cdecl shape_quantize_cpp_CBitmap_getPalette_FUN_00556de0(CBitmap *this_ptr)

{
  return this_ptr->palette;
}


// Assembly code:
// 00556de0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_quantize.cpp_CBitmap_getPalette_FUN_00556de0
//   XREF to: Stack[0x4] (READ)
// 00556de4: MOV EAX,dword ptr [EAX + 0x24]
// 00556de7: RET
