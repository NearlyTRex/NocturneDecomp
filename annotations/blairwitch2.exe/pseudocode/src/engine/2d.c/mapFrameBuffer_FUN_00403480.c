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
    g_CurrentLineNumber = 2427;
    core_main_c_displayErrorAndQuit_FUN_004e4500("mapFrameBuffer - already mapped!");
  }
  if (stride == 0) {
    iVar1 = width * bits_per_pixel >> 0x1f;
    stride = (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2435;
    core_main_c_displayErrorAndQuit_FUN_004e4500("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = width * bits_per_pixel >> 0x1f;
  if ((stride ^ stride >> 0x1f) - (stride >> 0x1f) <
      (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2436;
    core_main_c_displayErrorAndQuit_FUN_004e4500("mapFrameBuffer - invalid stride");
  }
  if ((width < 1) || (height < 1)) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2437;
    core_main_c_displayErrorAndQuit_FUN_004e4500("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < height) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2438;
    core_main_c_displayErrorAndQuit_FUN_004e4500("mapFrameBuffer - ySize too big!");
  }
  if (frame_buffer == (void *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2439;
    core_main_c_displayErrorAndQuit_FUN_004e4500("mapFrameBuffer - invalid buffer!");
  }
  g_StoredWindowWidth = g_INT_006141b8;
  g_StoredWindowHeight = g_INT_006141bc;
  g_StoredClipLeft = g_INT_01c35e48;
  g_INT_006141b8 = width;
  g_StoredClipTop = g_INT_01c35e4c;
  g_StoredClipRight = g_ClipRight;
  g_INT_006141bc = height;
  g_StoredClipBottom = g_INT_01c35e54;
  g_INT_01c35e48 = 0;
  g_StoredBitsPerPixel = g_INT_006141c0;
  g_INT_01c35e4c = 0;
  g_StoredMappedFrameBuffer = g_ScreenBufferArray[0];
  g_ScreenBufferStride = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  g_INT_006141c0 = bits_per_pixel;
  iVar1 = height + -1;
  g_ClipRight = width + -1;
  g_INT_01c35e54 = iVar1;
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
