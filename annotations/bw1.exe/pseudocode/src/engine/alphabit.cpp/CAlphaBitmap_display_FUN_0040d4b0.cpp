// Name: engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
// Address: 0040d4b0
// Address Range: [[0040d4b0, 0040d658]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap *this_ptr,int x,int y,int alpha)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap *this_ptr,int x,int y,int alpha)

{
  int iVar1;
  uint *destPixels;
  ushort *destPixels_00;
  int iVar2;
  char *pcVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  
  if ((((-1 < this_ptr->width + x) && (x < DAT_0061b498)) && (-1 < y + this_ptr->height)) &&
     (y < DAT_0061b49c)) {
    engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040d910(this_ptr);
    local_14 = this_ptr->raw;
    pcVar3 = this_ptr->opa;
    if (DAT_0061b4a0 == 0x20) {
      local_24 = 0;
      if (0 < this_ptr->height) {
        local_18 = y;
        do {
          if ((-1 < local_18) && (local_18 < DAT_0061b49c)) {
            destPixels = *(uint **)(&DAT_01c4354c + local_18 * 4);
            iVar1 = this_ptr->width;
            iVar2 = 0;
            if (x < 0) {
              iVar2 = -x;
              iVar1 = iVar1 + x;
            }
            else {
              destPixels = destPixels + x;
            }
            if (DAT_0061b498 < x + iVar1) {
              iVar1 = DAT_0061b498 - x;
            }
            engine_special_cpp_renderAlphaRow32_FUN_0057ff73
                      (destPixels,(uchar *)(local_14 + iVar2),(uchar *)(pcVar3 + iVar2),alpha,iVar1)
            ;
          }
          local_18 = local_18 + 1;
          local_14 = local_14 + this_ptr->width;
          pcVar3 = pcVar3 + this_ptr->width;
          local_24 = local_24 + 1;
        } while (local_24 < this_ptr->height);
      }
    }
    else {
      local_20 = 0;
      if (0 < this_ptr->height) {
        local_1c = y;
        do {
          if ((-1 < local_1c) && (local_1c < DAT_0061b49c)) {
            destPixels_00 = *(ushort **)(&DAT_01c4354c + local_1c * 4);
            iVar1 = this_ptr->width;
            iVar2 = 0;
            if (x < 0) {
              iVar2 = -x;
              iVar1 = iVar1 + x;
            }
            else {
              destPixels_00 = destPixels_00 + x;
            }
            if (DAT_0061b498 < x + iVar1) {
              iVar1 = DAT_0061b498 - x;
            }
            engine_special_cpp_renderAlphaRow16_FUN_0058000e
                      (destPixels_00,(uchar *)(local_14 + iVar2),(uchar *)(pcVar3 + iVar2),alpha,
                       iVar1);
          }
          local_1c = local_1c + 1;
          local_14 = local_14 + this_ptr->width;
          pcVar3 = pcVar3 + this_ptr->width;
          local_20 = local_20 + 1;
        } while (local_20 < this_ptr->height);
      }
    }
  }
  return;
}
