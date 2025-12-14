// Name: shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0
// Address: 005563d0
// Address Range: [[005563d0, 00556461]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0(CColorQuantizer * this_ptr, int bitmap_count, CBitmap * * bitmap_array)

#include "nocturne.h"

int __cdecl
shape_quantize_cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0
          (CColorQuantizer *this_ptr,int bitmap_count,CBitmap **bitmap_array)

{
  int iVar1;
  int iVar2;
  uint *in_stack_00000010;
  CBitmap **in_stack_00000014;
  
  shape_quantize_cpp_CColorQuantizer_reset_FUN_00554d40(this_ptr);
  iVar2 = 0;
  if (0 < bitmap_count) {
    do {
      if ((((CBitmap *)*in_stack_00000010)->bit_depth == '\x18') &&
         (iVar1 = shape_quantize_cpp_CColorQuantizer_importBitmap_FUN_00554a50
                            (this_ptr,(CBitmap *)*in_stack_00000010), iVar1 == 0)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      in_stack_00000010 = in_stack_00000010 + 1;
    } while (iVar2 < bitmap_count);
  }
  iVar1 = shape_quantize_cpp_CColorQuantizer_quantize_FUN_00554cc0(this_ptr);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < bitmap_count) {
      do {
        if (((*in_stack_00000014)->bit_depth == '\x18') &&
           (iVar1 = shape_quantize_cpp_CColorQuantizer_applyQuantization_FUN_00556180
                              (this_ptr,in_stack_00000014), iVar1 == 0)) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        in_stack_00000014 = in_stack_00000014 + 1;
      } while (iVar2 < bitmap_count);
    }
    shape_quantize_cpp_CColorQuantizer_reset_FUN_00554d40(this_ptr);
    iVar2 = 1;
  }
  return iVar2;
}
