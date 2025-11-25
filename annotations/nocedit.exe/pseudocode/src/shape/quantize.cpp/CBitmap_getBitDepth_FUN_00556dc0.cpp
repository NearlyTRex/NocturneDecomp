// Name: shape_quantize.cpp_CBitmap_getBitDepth_FUN_00556dc0
// Address: 00556dc0
// Address Range: [[00556dc0, 00556dc7]]
// Convention: __cdecl
// Signature: uchar shape_quantize.cpp_CBitmap_getBitDepth_FUN_00556dc0(CBitmap * this_ptr)

#include "nocturne.h"

uchar __cdecl shape_quantize_cpp_CBitmap_getBitDepth_FUN_00556dc0(CBitmap *this_ptr)

{
  return this_ptr->bit_depth;
}


// Assembly code:
// 00556dc0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_quantize.cpp_CBitmap_getBitDepth_FUN_00556dc0
//   XREF to: Stack[0x4] (READ)
// 00556dc4: MOV AL,byte ptr [EAX + 0x1a]
// 00556dc7: RET
