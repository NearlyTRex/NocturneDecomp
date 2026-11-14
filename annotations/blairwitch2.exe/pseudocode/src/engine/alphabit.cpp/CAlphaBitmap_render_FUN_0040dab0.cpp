// Name: engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040dab0
// Address: 0040dab0
// Address Range: [[0040dab0, 0040dbc4]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040dab0(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040dab0(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha)

{
  int pixelCount;
  int iVar1;
  int iVar2;
  uchar *srcAlpha;
  uchar *srcIndices;
  int local_18;
  int local_14;
  
  pixelCount = (right_x - left_x) + 1;
  engine_alphabit_cpp_FUN_0040dca0(this_ptr);
  iVar1 = (bottom_y - top_y) + 1;
  iVar2 = top_y * this_ptr->width + left_x;
  srcIndices = (uchar *)(this_ptr->raw + iVar2);
  srcAlpha = (uchar *)(this_ptr->opa + iVar2);
  local_18 = dest_y * 4;
  iVar2 = iVar1 * 4 + local_18;
  if (DAT_006141c0 == 0x20) {
    if (0 < iVar1) {
      do {
        engine_special_cpp_renderAlphaRow32_FUN_0055d523
                  ((uint *)(*(int *)(&DAT_01c2a38c + local_18) + dest_x * 4),srcIndices,srcAlpha,
                   global_alpha,pixelCount);
        srcIndices = srcIndices + this_ptr->width;
        local_18 = local_18 + 4;
        srcAlpha = srcAlpha + this_ptr->width;
      } while (local_18 < iVar2);
    }
  }
  else if (0 < iVar1) {
    local_14 = local_18;
    do {
      engine_special_cpp_renderAlphaRow16_FUN_0055d5be
                ((ushort *)(*(int *)(&DAT_01c2a38c + local_14) + dest_x * 2),srcIndices,srcAlpha,
                 global_alpha,pixelCount);
      srcIndices = srcIndices + this_ptr->width;
      local_14 = local_14 + 4;
      srcAlpha = srcAlpha + this_ptr->width;
    } while (local_14 < iVar2);
    return;
  }
  return;
}
