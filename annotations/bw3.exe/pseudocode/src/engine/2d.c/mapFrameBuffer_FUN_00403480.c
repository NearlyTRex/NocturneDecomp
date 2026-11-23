// Name: engine_2d.c_mapFrameBuffer_FUN_00403480
// Address: 00403480
// Address Range: [[00403480, 00403699]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403480(void *frame_buffer,int width,int height,int bits_per_pixel,int stride)

#include "nocturne.h"

int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403480(void *frame_buffer,int width,int height,int bits_per_pixel,int stride)

{
  int iVar1;
  
  if (g_StoredWindowWidth != 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2453;
    core_main_c_displayErrorAndQuit_FUN_004e4330("mapFrameBuffer - already mapped!");
  }
  if (stride == 0) {
    iVar1 = width * bits_per_pixel >> 0x1f;
    stride = (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2461;
    core_main_c_displayErrorAndQuit_FUN_004e4330("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = width * bits_per_pixel >> 0x1f;
  if ((stride ^ stride >> 0x1f) - (stride >> 0x1f) <
      (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2462;
    core_main_c_displayErrorAndQuit_FUN_004e4330("mapFrameBuffer - invalid stride");
  }
  if ((width < 1) || (height < 1)) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2463;
    core_main_c_displayErrorAndQuit_FUN_004e4330("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < height) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2464;
    core_main_c_displayErrorAndQuit_FUN_004e4330("mapFrameBuffer - ySize too big!");
  }
  if (frame_buffer == (void *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2465;
    core_main_c_displayErrorAndQuit_FUN_004e4330("mapFrameBuffer - invalid buffer!");
  }
  g_StoredWindowWidth = g_INT_005fba18;
  g_StoredWindowHeight = g_INT_005fba1c;
  g_StoredClipLeft = g_INT_01c6b5a8;
  g_INT_005fba18 = width;
  g_StoredClipTop = g_INT_01c6b5ac;
  g_StoredClipRight = g_INT_01c6b5b0;
  g_INT_005fba1c = height;
  g_StoredClipBottom = g_INT_01c6b5b4;
  g_INT_01c6b5a8 = 0;
  g_StoredBitsPerPixel = g_INT_005fba20;
  g_INT_01c6b5ac = 0;
  g_StoredMappedFrameBuffer = g_ScreenBufferArray[0];
  g_ScreenBufferStride = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  g_INT_005fba20 = bits_per_pixel;
  iVar1 = height + -1;
  g_INT_01c6b5b0 = width + -1;
  g_INT_01c6b5b4 = iVar1;
  if (0 < height) {
    iVar1 = 0;
    do {
      *(void **)((int)g_ScreenBufferArray + iVar1) = frame_buffer;
      iVar1 = iVar1 + 4;
      frame_buffer = (void *)((int)frame_buffer + stride);
    } while (iVar1 < height * 4);
  }
  return iVar1;
}
