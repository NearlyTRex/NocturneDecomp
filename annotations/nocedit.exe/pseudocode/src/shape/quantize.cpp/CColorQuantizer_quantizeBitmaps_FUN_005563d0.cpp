// Name: shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0
// Address: 005563d0
// Address Range: [[005563d0, 00556461]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0(CColorQuantizer *this_ptr,int bitmap_count,CBitmap **bitmap_array)

#include "nocturne.h"

int __cdecl shape_quantize_cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0(CColorQuantizer *this_ptr,int bitmap_count,CBitmap **bitmap_array)

{
  int iVar1;
  CBitmap **ppCVar2;
  int iVar3;
  
  shape_quantize_cpp_CColorQuantizer_reset_FUN_00554d40(this_ptr);
  iVar3 = 0;
  ppCVar2 = bitmap_array;
  if (0 < bitmap_count) {
    do {
      if (((*ppCVar2)->bit_depth == '\x18') &&
         (iVar1 = shape_quantize_cpp_CColorQuantizer_importBitmap_FUN_00554a50(this_ptr,*ppCVar2),
         iVar1 == 0)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      ppCVar2 = ppCVar2 + 1;
    } while (iVar3 < bitmap_count);
  }
  iVar1 = shape_quantize_cpp_CColorQuantizer_quantize_FUN_00554cc0(this_ptr);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < bitmap_count) {
      do {
        if (((*bitmap_array)->bit_depth == '\x18') &&
           (iVar1 = shape_quantize_cpp_CColorQuantizer_applyQuantization_FUN_00556180
                              (this_ptr,bitmap_array), iVar1 == 0)) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        bitmap_array = bitmap_array + 1;
      } while (iVar3 < bitmap_count);
    }
    shape_quantize_cpp_CColorQuantizer_reset_FUN_00554d40(this_ptr);
    iVar3 = 1;
  }
  return iVar3;
}
