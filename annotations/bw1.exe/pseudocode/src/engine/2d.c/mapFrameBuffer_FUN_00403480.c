// Name: engine_2d.c_mapFrameBuffer_FUN_00403480
// Address: 00403480
// Address Range: [[00403480, 00403699]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403480(void *frame_buffer,int width,int height,int bits_per_pixel,int stride)

#include "nocturne.h"

int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403480(void *frame_buffer,int width,int height,int bits_per_pixel,int stride)

{
  int iVar1;
  
  if (g_INT_00713a38 != 0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\2d.c";
    g_INT_01d1d404 = 0x995;
    core_main_c_displayErrorAndQuit_FUN_005030e0("mapFrameBuffer - already mapped!");
  }
  if (stride == 0) {
    iVar1 = width * bits_per_pixel >> 0x1f;
    stride = (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\2d.c";
    g_INT_01d1d404 = 0x99d;
    core_main_c_displayErrorAndQuit_FUN_005030e0("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = width * bits_per_pixel >> 0x1f;
  if ((stride ^ stride >> 0x1f) - (stride >> 0x1f) <
      (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\2d.c";
    g_INT_01d1d404 = 0x99e;
    core_main_c_displayErrorAndQuit_FUN_005030e0("mapFrameBuffer - invalid stride");
  }
  if ((width < 1) || (height < 1)) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\2d.c";
    g_INT_01d1d404 = 0x99f;
    core_main_c_displayErrorAndQuit_FUN_005030e0("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < height) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\2d.c";
    g_INT_01d1d404 = 0x9a0;
    core_main_c_displayErrorAndQuit_FUN_005030e0("mapFrameBuffer - ySize too big!");
  }
  if (frame_buffer == (void *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\2d.c";
    g_INT_01d1d404 = 0x9a1;
    core_main_c_displayErrorAndQuit_FUN_005030e0("mapFrameBuffer - invalid buffer!");
  }
  g_INT_00713a38 = g_INT_0061b498;
  g_INT_00713a3c = g_INT_0061b49c;
  g_INT_00713a40 = g_INT_01c4f008;
  g_INT_0061b498 = width;
  g_INT_00713a44 = g_INT_01c4f00c;
  g_INT_00713a48 = g_INT_01c4f010;
  g_INT_0061b49c = height;
  g_INT_00713a4c = g_INT_01c4f014;
  g_INT_01c4f008 = 0;
  g_INT_00713a50 = g_INT_0061b4a0;
  g_INT_01c4f00c = 0;
  g_PTR_00713a54 = g_ARRAY_PTR_01c4354c[0];
  g_INT_00713a58 = (int)g_ARRAY_PTR_01c4354c[1] - (int)g_ARRAY_PTR_01c4354c[0];
  g_INT_0061b4a0 = bits_per_pixel;
  iVar1 = height + -1;
  g_INT_01c4f010 = width + -1;
  g_INT_01c4f014 = iVar1;
  if (0 < height) {
    iVar1 = 0;
    do {
      *(void **)((int)g_ARRAY_PTR_01c4354c + iVar1) = frame_buffer;
      iVar1 = iVar1 + 4;
      frame_buffer = (void *)((int)frame_buffer + stride);
    } while (iVar1 < height * 4);
  }
  return iVar1;
}
