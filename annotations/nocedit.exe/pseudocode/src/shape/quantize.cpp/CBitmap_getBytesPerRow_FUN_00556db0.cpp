// Name: shape_quantize.cpp_CBitmap_getBytesPerRow_FUN_00556db0
// Address: 00556db0
// Address Range: [[00556db0, 00556db8]]
// Convention: __cdecl
// Signature: short shape_quantize.cpp_CBitmap_getBytesPerRow_FUN_00556db0(CBitmap * this_ptr)

#include "nocturne.h"

short __cdecl shape_quantize_cpp_CBitmap_getBytesPerRow_FUN_00556db0(CBitmap *this_ptr)

{
  return this_ptr->bytes_per_row;
}


// Assembly code:
// 00556db0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_quantize.cpp_CBitmap_getBytesPerRow_FUN_00556db0
//   XREF to: Stack[0x4] (READ)
// 00556db4: MOV AX,word ptr [EAX + 0x18]
// 00556db8: RET
