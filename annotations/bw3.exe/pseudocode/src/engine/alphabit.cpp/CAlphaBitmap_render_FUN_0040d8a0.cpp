// Name: engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040d8a0
// Address: 0040d8a0
// Address Range: [[0040d8a0, 0040da72]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040d8a0(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040d8a0(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha)

{
  int iVar1;
  int iVar2;
  uchar *srcIndices;
  uchar *srcAlpha;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = (right_x - left_x) + 1;
  iVar2 = (bottom_y - top_y) + 1;
  if ((((dest_x < DAT_005fba18) && (dest_y < DAT_005fba1c)) &&
      (iVar1 = dest_x + local_1c, -1 < iVar1)) && (-1 < dest_y + iVar2)) {
    if (dest_x < 0) {
      left_x = left_x - dest_x;
      dest_x = 0;
      local_1c = iVar1;
    }
    if (dest_y < 0) {
      iVar2 = iVar2 + dest_y;
      top_y = top_y - dest_y;
      dest_y = 0;
    }
    if (DAT_005fba18 <= dest_x + local_1c) {
      local_1c = local_1c - ((dest_x + local_1c) - DAT_005fba18);
    }
    if (DAT_005fba1c <= dest_y + iVar2) {
      iVar2 = iVar2 - ((dest_y + iVar2) - DAT_005fba1c);
    }
    engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040db50(this_ptr);
    iVar1 = left_x + top_y * this_ptr->width;
    srcIndices = (uchar *)(this_ptr->raw + iVar1);
    srcAlpha = (uchar *)(this_ptr->opa + iVar1);
    local_18 = dest_y * 4;
    iVar1 = iVar2 * 4 + local_18;
    if (DAT_005fba20 == 0x20) {
      if (0 < iVar2) {
        local_14 = local_18;
        do {
          engine_special_cpp_renderAlphaRow32_FUN_005630a3
                    ((uint *)(*(int *)(&DAT_01c5faec + local_14) + dest_x * 4),srcIndices,srcAlpha,
                     global_alpha,local_1c);
          srcIndices = srcIndices + this_ptr->width;
          local_14 = local_14 + 4;
          srcAlpha = srcAlpha + this_ptr->width;
        } while (local_14 < iVar1);
      }
    }
    else if (0 < iVar2) {
      do {
        engine_special_cpp_renderAlphaRow16_FUN_0056313e
                  ((ushort *)(*(int *)(&DAT_01c5faec + local_18) + dest_x * 2),srcIndices,srcAlpha,
                   global_alpha,local_1c);
        srcIndices = srcIndices + this_ptr->width;
        local_18 = local_18 + 4;
        srcAlpha = srcAlpha + this_ptr->width;
      } while (local_18 < iVar1);
      return;
    }
  }
  return;
}
