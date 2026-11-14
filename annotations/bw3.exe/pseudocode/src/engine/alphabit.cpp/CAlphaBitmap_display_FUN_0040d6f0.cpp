// Name: engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
// Address: 0040d6f0
// Address Range: [[0040d6f0, 0040d898]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap *this_ptr,int x,int y,int alpha)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap *this_ptr,int x,int y,int alpha)

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
  
  if ((((-1 < this_ptr->width + x) && (x < DAT_005fba18)) && (-1 < y + this_ptr->height)) &&
     (y < DAT_005fba1c)) {
    engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040db50(this_ptr);
    local_14 = this_ptr->raw;
    pcVar3 = this_ptr->opa;
    if (DAT_005fba20 == 0x20) {
      local_24 = 0;
      if (0 < this_ptr->height) {
        local_18 = y;
        do {
          if ((-1 < local_18) && (local_18 < DAT_005fba1c)) {
            destPixels = *(uint **)(&DAT_01c5faec + local_18 * 4);
            iVar1 = this_ptr->width;
            iVar2 = 0;
            if (x < 0) {
              iVar2 = -x;
              iVar1 = iVar1 + x;
            }
            else {
              destPixels = destPixels + x;
            }
            if (DAT_005fba18 < x + iVar1) {
              iVar1 = DAT_005fba18 - x;
            }
            engine_special_cpp_renderAlphaRow32_FUN_005630a3
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
          if ((-1 < local_1c) && (local_1c < DAT_005fba1c)) {
            destPixels_00 = *(ushort **)(&DAT_01c5faec + local_1c * 4);
            iVar1 = this_ptr->width;
            iVar2 = 0;
            if (x < 0) {
              iVar2 = -x;
              iVar1 = iVar1 + x;
            }
            else {
              destPixels_00 = destPixels_00 + x;
            }
            if (DAT_005fba18 < x + iVar1) {
              iVar1 = DAT_005fba18 - x;
            }
            engine_special_cpp_renderAlphaRow16_FUN_0056313e
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
