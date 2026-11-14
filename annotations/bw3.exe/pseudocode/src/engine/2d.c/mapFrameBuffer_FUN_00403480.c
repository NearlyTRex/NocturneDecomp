// Name: engine_2d.c_mapFrameBuffer_FUN_00403480
// Address: 00403480
// Address Range: [[00403480, 00403699]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403480(void *frame_buffer,int width,int height,int bits_per_pixel,int stride)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403480(void *frame_buffer,int width,int height,int bits_per_pixel,int stride)

{
  int iVar1;
  
  if (_DAT_007303b8 != 0) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x995;
    core_main_c_FUN_004e4330("mapFrameBuffer - already mapped!");
  }
  if (stride == 0) {
    iVar1 = width * bits_per_pixel >> 0x1f;
    stride = (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x99d;
    core_main_c_FUN_004e4330("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = width * bits_per_pixel >> 0x1f;
  if ((stride ^ stride >> 0x1f) - (stride >> 0x1f) <
      (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x99e;
    core_main_c_FUN_004e4330("mapFrameBuffer - invalid stride");
  }
  if ((width < 1) || (height < 1)) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x99f;
    core_main_c_FUN_004e4330("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < height) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x9a0;
    core_main_c_FUN_004e4330("mapFrameBuffer - ySize too big!");
  }
  if (frame_buffer == (void *)0x0) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x9a1;
    core_main_c_FUN_004e4330("mapFrameBuffer - invalid buffer!");
  }
  _DAT_007303b8 = DAT_005fba18;
  _DAT_007303bc = DAT_005fba1c;
  _DAT_007303c0 = _DAT_01c6b5a8;
  DAT_005fba18 = width;
  _DAT_007303c4 = _DAT_01c6b5ac;
  _DAT_007303c8 = _DAT_01c6b5b0;
  DAT_005fba1c = height;
  _DAT_007303cc = _DAT_01c6b5b4;
  _DAT_01c6b5a8 = 0;
  _DAT_007303d0 = DAT_005fba20;
  _DAT_01c6b5ac = 0;
  _DAT_007303d4 = _DAT_01c5faec;
  _DAT_007303d8 = _DAT_01c5faf0 - _DAT_01c5faec;
  DAT_005fba20 = bits_per_pixel;
  iVar1 = height + -1;
  _DAT_01c6b5b0 = width + -1;
  _DAT_01c6b5b4 = iVar1;
  if (0 < height) {
    iVar1 = 0;
    do {
      *(void **)(&DAT_01c5faec + iVar1) = frame_buffer;
      iVar1 = iVar1 + 4;
      frame_buffer = (void *)((int)frame_buffer + stride);
    } while (iVar1 < height * 4);
  }
  return iVar1;
}
