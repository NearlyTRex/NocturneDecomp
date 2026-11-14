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
  
  if (_DAT_0070ca38 != 0) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x97b;
    core_main_c_FUN_004e4500("mapFrameBuffer - already mapped!");
  }
  if (stride == 0) {
    iVar1 = width * bits_per_pixel >> 0x1f;
    stride = (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x983;
    core_main_c_FUN_004e4500("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = width * bits_per_pixel >> 0x1f;
  if ((stride ^ stride >> 0x1f) - (stride >> 0x1f) <
      (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x984;
    core_main_c_FUN_004e4500("mapFrameBuffer - invalid stride");
  }
  if ((width < 1) || (height < 1)) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x985;
    core_main_c_FUN_004e4500("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < height) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x986;
    core_main_c_FUN_004e4500("mapFrameBuffer - ySize too big!");
  }
  if (frame_buffer == (void *)0x0) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x987;
    core_main_c_FUN_004e4500("mapFrameBuffer - invalid buffer!");
  }
  _DAT_0070ca38 = DAT_006141b8;
  _DAT_0070ca3c = DAT_006141bc;
  _DAT_0070ca40 = _DAT_01c35e48;
  DAT_006141b8 = width;
  _DAT_0070ca44 = _DAT_01c35e4c;
  _DAT_0070ca48 = _DAT_01c35e50;
  DAT_006141bc = height;
  _DAT_0070ca4c = _DAT_01c35e54;
  _DAT_01c35e48 = 0;
  _DAT_0070ca50 = DAT_006141c0;
  _DAT_01c35e4c = 0;
  _DAT_0070ca54 = _DAT_01c2a38c;
  _DAT_0070ca58 = _DAT_01c2a390 - _DAT_01c2a38c;
  DAT_006141c0 = bits_per_pixel;
  iVar1 = height + -1;
  _DAT_01c35e50 = width + -1;
  _DAT_01c35e54 = iVar1;
  if (0 < height) {
    iVar1 = 0;
    do {
      *(void **)(&DAT_01c2a38c + iVar1) = frame_buffer;
      iVar1 = iVar1 + 4;
      frame_buffer = (void *)((int)frame_buffer + stride);
    } while (iVar1 < height * 4);
  }
  return iVar1;
}
