// Name: engine_2d.c_mapFrameBuffer_FUN_00404120
// Address: 00404120
// Address Range: [[00404120, 00404339]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_mapFrameBuffer_FUN_00404120(void *frame_buffer,int width,int height,int bits_per_pixel,int stride)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_2d_c_mapFrameBuffer_FUN_00404120(void *frame_buffer,int width,int height,int bits_per_pixel,int stride)

{
  int iVar1;
  
  if (DAT_006b023c != 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2456;
    core_main_c_displayErrorAndQuit_FUN_004c8440("mapFrameBuffer - already mapped!");
  }
  if (stride == 0) {
    iVar1 = width * bits_per_pixel >> 0x1f;
    stride = (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2464;
    core_main_c_displayErrorAndQuit_FUN_004c8440("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = width * bits_per_pixel >> 0x1f;
  if ((stride ^ stride >> 0x1f) - (stride >> 0x1f) <
      (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2465;
    core_main_c_displayErrorAndQuit_FUN_004c8440("mapFrameBuffer - invalid stride");
  }
  if ((width < 1) || (height < 1)) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2466;
    core_main_c_displayErrorAndQuit_FUN_004c8440("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < height) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2467;
    core_main_c_displayErrorAndQuit_FUN_004c8440("mapFrameBuffer - ySize too big!");
  }
  if (frame_buffer == (void *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2468;
    core_main_c_displayErrorAndQuit_FUN_004c8440("mapFrameBuffer - invalid buffer!");
  }
  DAT_006b023c = g_WindowWidth;
  DAT_006b0240 = g_WindowHeight;
  DAT_006b0244 = _DAT_01c00c58;
  g_WindowWidth = width;
  DAT_006b0248 = _DAT_01c00c5c;
  DAT_006b024c = _DAT_01c00c60;
  g_WindowHeight = height;
  DAT_006b0250 = _DAT_01c00c64;
  _DAT_01c00c58 = 0;
  DAT_006b0254 = DAT_005b7624;
  _DAT_01c00c5c = 0;
  DAT_006b0258 = _DAT_01bd2fa0;
  DAT_006b025c = _DAT_01bd2fa4 - _DAT_01bd2fa0;
  DAT_005b7624 = bits_per_pixel;
  iVar1 = height + -1;
  _DAT_01c00c60 = width + -1;
  _DAT_01c00c64 = iVar1;
  if (0 < height) {
    iVar1 = 0;
    do {
      *(void **)(&DAT_01bd2fa0 + iVar1) = frame_buffer;
      iVar1 = iVar1 + 4;
      frame_buffer = (void *)((int)frame_buffer + stride);
    } while (iVar1 < height * 4);
  }
  return iVar1;
}
