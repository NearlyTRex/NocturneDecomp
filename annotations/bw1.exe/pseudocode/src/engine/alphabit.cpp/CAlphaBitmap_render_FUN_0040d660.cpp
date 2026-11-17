// Name: engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040d660
// Address: 0040d660
// Address Range: [[0040d660, 0040d832]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040d660(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040d660(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha)

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
  if ((((dest_x < g_INT_0061b498) && (dest_y < g_INT_0061b49c)) &&
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
    if (g_INT_0061b498 <= dest_x + local_1c) {
      local_1c = local_1c - ((dest_x + local_1c) - g_INT_0061b498);
    }
    if (g_INT_0061b49c <= dest_y + iVar2) {
      iVar2 = iVar2 - ((dest_y + iVar2) - g_INT_0061b49c);
    }
    engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040d910(this_ptr);
    iVar1 = left_x + top_y * this_ptr->width;
    srcIndices = (uchar *)(this_ptr->raw + iVar1);
    srcAlpha = (uchar *)(this_ptr->opa + iVar1);
    local_18 = dest_y * 4;
    iVar1 = iVar2 * 4 + local_18;
    if (g_INT_0061b4a0 == 0x20) {
      if (0 < iVar2) {
        local_14 = local_18;
        do {
          engine_special_cpp_renderAlphaRow32_FUN_0057ff73
                    ((uint *)(*(int *)((int)g_ScreenBufferArray + local_14) + dest_x * 4),srcIndices
                     ,srcAlpha,global_alpha,local_1c);
          srcIndices = srcIndices + this_ptr->width;
          local_14 = local_14 + 4;
          srcAlpha = srcAlpha + this_ptr->width;
        } while (local_14 < iVar1);
      }
    }
    else if (0 < iVar2) {
      do {
        engine_special_cpp_renderAlphaRow16_FUN_0058000e
                  ((ushort *)(*(int *)((int)g_ScreenBufferArray + local_18) + dest_x * 2),srcIndices
                   ,srcAlpha,global_alpha,local_1c);
        srcIndices = srcIndices + this_ptr->width;
        local_18 = local_18 + 4;
        srcAlpha = srcAlpha + this_ptr->width;
      } while (local_18 < iVar1);
      return;
    }
  }
  return;
}
