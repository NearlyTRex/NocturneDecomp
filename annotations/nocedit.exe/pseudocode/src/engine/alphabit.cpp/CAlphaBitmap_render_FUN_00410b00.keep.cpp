// Name: engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00
// Address: 00410b00
// MANUAL RECONSTRUCTION
// Address Range: [[00410b00, 00410c14]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha)

{
  int pixelCount;
  int iVar3;
  int iVar1;
  int iVar2;
  uchar *srcAlpha;
  uchar *srcIndices;
  int local_18;
  int local_14;
  
  pixelCount = (right_x - left_x) + 1;
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(this_ptr);
  iVar1 = (bottom_y - top_y) + 1;
  iVar2 = top_y * this_ptr->width + left_x;
  srcIndices = (uchar *)(this_ptr->raw + iVar2);
  srcAlpha = (uchar *)(this_ptr->opa + iVar2);
  local_18 = dest_y * 4;
  iVar3 = iVar1 * 4 + local_18;
  if (g_BitsPerPixel == 0x20) {
    if (0 < iVar1) {
      do {
        wincore_windll_cpp_renderAlphaRow32_FUN_005b555c
                  ((uint *)g_ScreenBufferArray[local_18 / 4] + dest_x,srcIndices,
                   srcAlpha,global_alpha,pixelCount);
        srcIndices = srcIndices + this_ptr->width;
        local_18 = local_18 + 4;
        srcAlpha = srcAlpha + this_ptr->width;
      } while (local_18 < iVar3);
    }
  }
  else if (0 < iVar1) {
    local_14 = local_18;
    do {
      wincore_windll_cpp_renderAlphaRow16_FUN_005b55f7
                ((ushort *)g_ScreenBufferArray[local_14 / 4] + dest_x,srcIndices,
                 srcAlpha,global_alpha,pixelCount);
      srcIndices = srcIndices + this_ptr->width;
      local_14 = local_14 + 4;
      srcAlpha = srcAlpha + this_ptr->width;
    } while (local_14 < iVar3);
    return;
  }
  return;
}
