// Name: engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00
// Address: 00410b00
// Address Range: [[00410b00, 00410c14]]
// Convention: __cdecl
// Signature: void engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00(CAlphaBitmap * this_ptr, int dest_y, int dest_x, int left_x, int top_y, int right_x, int bottom_y)

#include "nocturne.h"

void __cdecl
engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00
          (CAlphaBitmap *this_ptr,int dest_y,int dest_x,int left_x,int top_y,int right_x,
          int bottom_y)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  uchar *srcAlpha;
  int unaff_EDI;
  uchar *srcIndices;
  int in_stack_00000024;
  int local_18;
  
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(this_ptr);
  iVar1 = (bottom_y - top_y) + 1;
  iVar2 = top_y * this_ptr->width + left_x;
  srcIndices = (uchar *)(this_ptr->ptrRaw + iVar2);
  srcAlpha = (uchar *)(this_ptr->ptrOpa + iVar2);
  if (g_BitsPerPixel == 0x20) {
    if (0 < iVar1) {
      do {
        wincore_windll_cpp_renderAlphaRow32_FUN_005b555c
                  ((uint *)((int)g_ScreenBufferArray[left_x] + dest_x * 4),srcIndices,srcAlpha,
                   in_stack_00000024,local_18);
        srcIndices = srcIndices + this_ptr->width;
        unaff_EBP = unaff_EBP + 4;
        srcAlpha = srcAlpha + this_ptr->width;
      } while (unaff_EBP < iVar1 * 4 + left_x * 4);
    }
  }
  else if (0 < iVar1) {
    do {
      wincore_windll_cpp_renderAlphaRow16_FUN_005b55f7
                ((ushort *)((int)g_ScreenBufferArray[left_x] + dest_x * 2),srcIndices,srcAlpha,
                 in_stack_00000024,local_18);
      srcIndices = srcIndices + this_ptr->width;
      unaff_EDI = unaff_EDI + 4;
      srcAlpha = srcAlpha + this_ptr->width;
    } while (unaff_EDI < local_18);
    return;
  }
  return;
}
