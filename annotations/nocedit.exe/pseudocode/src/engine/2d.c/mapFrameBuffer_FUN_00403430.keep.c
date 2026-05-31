// Name: engine_2d.c_mapFrameBuffer_FUN_00403430
// Address: 00403430
// MANUAL RECONSTRUCTION
// Address Range: [[00403430, 00403649]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403430(int width,int height,int bits_per_pixel,int stride,void *frame_buffer)

#include "nocturne.h"

int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403430(int width,int height,int bits_per_pixel,int stride,void *frame_buffer)

{
  int iVar1;

  if (g_StoredWindowWidth != 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x99a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - already mapped!");
  }
  if (frame_buffer == (void *)0x0) {
    frame_buffer = (void *)(height * stride / 8);
  }
  if (((stride != 8) && (stride != 0x10)) && (stride != 0x20)) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x9a2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - invalid bits/pixel");
  }
  if (ABS((int)frame_buffer) < height * stride / 8) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x9a3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - invalid stride");
  }
  if ((height < 1) || (bits_per_pixel < 1)) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x9a4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < bits_per_pixel) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x9a5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - ySize too big!");
  }
  if (width == 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x9a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - invalid buffer!");
  }
  g_StoredWindowWidth = g_WindowWidth;
  g_StoredWindowHeight = g_WindowHeight;
  g_StoredClipLeft = g_ClipLeft;
  g_WindowWidth = height;
  g_StoredClipTop = g_ClipTop;
  g_StoredClipRight = g_ClipRight;
  g_WindowHeight = bits_per_pixel;
  g_StoredClipBottom = g_ClipBottom;
  g_ClipLeft = 0;
  g_StoredBitsPerPixel = g_BitsPerPixel;
  g_ClipTop = 0;
  g_StoredMappedFrameBuffer = g_ScreenBufferArray[0];
  g_ScreenBufferStride = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  g_BitsPerPixel = stride;
  iVar1 = bits_per_pixel + -1;
  g_ClipRight = height + -1;
  g_ClipBottom = iVar1;
  if (0 < bits_per_pixel) {
    iVar1 = 0;
    do {
      g_ScreenBufferArray[iVar1 / 4] = (void *)width;
      iVar1 = iVar1 + 4;
      width = width + (int)frame_buffer;
    } while (iVar1 < bits_per_pixel * 4);
  }
  return iVar1;
}
