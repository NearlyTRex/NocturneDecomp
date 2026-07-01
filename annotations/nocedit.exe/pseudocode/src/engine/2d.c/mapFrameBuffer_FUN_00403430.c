// Name: engine_2d.c_mapFrameBuffer_FUN_00403430
// Address: 00403430
// Address Range: [[00403430, 00403649]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403430(void *frame_buffer,int width,int height,int bits_per_pixel,int stride)

#include "nocturne.h"

int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403430(void *frame_buffer,int width,int height,int bits_per_pixel,int stride)

{
  int iVar1;
  
  if (g_StoredWindowWidth != 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2458;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - already mapped!");
  }
  if (stride == 0) {
    iVar1 = width * bits_per_pixel >> 0x1f;
    stride = (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2466;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = width * bits_per_pixel >> 0x1f;
  if ((stride ^ stride >> 0x1f) - (stride >> 0x1f) <
      (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2467;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - invalid stride");
  }
  if ((width < 1) || (height < 1)) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2468;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < height) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2469;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - ySize too big!");
  }
  if (frame_buffer == (void *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2470;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - invalid buffer!");
  }
  g_StoredWindowWidth = g_WindowWidth;
  g_StoredWindowHeight = g_WindowHeight;
  g_StoredClipLeft = g_ClipLeft;
  g_WindowWidth = width;
  g_StoredClipTop = g_ClipTop;
  g_StoredClipRight = g_ClipRight;
  g_WindowHeight = height;
  g_StoredClipBottom = g_ClipBottom;
  g_ClipLeft = 0;
  g_StoredBitsPerPixel = g_BitsPerPixel;
  g_ClipTop = 0;
  g_StoredMappedFrameBuffer = g_ScreenBufferArray[0];
  g_ScreenBufferStride = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  g_BitsPerPixel = bits_per_pixel;
  iVar1 = height + -1;
  g_ClipRight = width + -1;
  g_ClipBottom = iVar1;
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
