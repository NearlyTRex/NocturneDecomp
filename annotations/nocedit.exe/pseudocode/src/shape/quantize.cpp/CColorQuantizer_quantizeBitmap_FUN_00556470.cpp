// Name: shape_quantize.cpp_CColorQuantizer_quantizeBitmap_FUN_00556470
// Address: 00556470
// Address Range: [[00556470, 00556484]]
// Convention: __cdecl
// Signature: void shape_quantize.cpp_CColorQuantizer_quantizeBitmap_FUN_00556470(CColorQuantizer * this_ptr, CBitmap * * bitmap_ptr)
// Cross-references:
//   shape_quantize.cpp_quantizeRawPixelData_FUN_00556490 (00556490) at 00556610 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0

#include "nocturne.h"

void __cdecl
shape_quantize_cpp_CColorQuantizer_quantizeBitmap_FUN_00556470
          (CColorQuantizer *this_ptr,CBitmap **bitmap_ptr)

{
  shape_quantize_cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0(this_ptr,1,bitmap_ptr);
  return;
}


// Assembly code:
// 00556470: MOV EDX,dword ptr [ESP + 0x8]
//   Label: shape_quantize.cpp_CColorQuantizer_quantizeBitmap_FUN_00556470
//   XREF to: Stack[0x8] (READ)
// 00556474: PUSH EDX
// 00556475: PUSH 0x1
// 00556477: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0055647b: PUSH ECX
// 0055647c: CALL shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0
//   XREF to: 005563d0 (UNCONDITIONAL_CALL)
// 00556481: ADD ESP,0xc
// 00556484: RET
