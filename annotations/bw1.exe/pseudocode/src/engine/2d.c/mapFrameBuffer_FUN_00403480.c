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
  
  if (_DAT_00713a38 != 0) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x995;
    core_main_c_FUN_005030e0("mapFrameBuffer - already mapped!");
  }
  if (stride == 0) {
    iVar1 = width * bits_per_pixel >> 0x1f;
    stride = (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x99d;
    core_main_c_FUN_005030e0("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = width * bits_per_pixel >> 0x1f;
  if ((stride ^ stride >> 0x1f) - (stride >> 0x1f) <
      (int)((width * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x99e;
    core_main_c_FUN_005030e0("mapFrameBuffer - invalid stride");
  }
  if ((width < 1) || (height < 1)) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x99f;
    core_main_c_FUN_005030e0("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < height) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x9a0;
    core_main_c_FUN_005030e0("mapFrameBuffer - ySize too big!");
  }
  if (frame_buffer == (void *)0x0) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x9a1;
    core_main_c_FUN_005030e0("mapFrameBuffer - invalid buffer!");
  }
  _DAT_00713a38 = DAT_0061b498;
  _DAT_00713a3c = DAT_0061b49c;
  _DAT_00713a40 = _DAT_01c4f008;
  DAT_0061b498 = width;
  _DAT_00713a44 = _DAT_01c4f00c;
  _DAT_00713a48 = _DAT_01c4f010;
  DAT_0061b49c = height;
  _DAT_00713a4c = _DAT_01c4f014;
  _DAT_01c4f008 = 0;
  _DAT_00713a50 = DAT_0061b4a0;
  _DAT_01c4f00c = 0;
  _DAT_00713a54 = _DAT_01c4354c;
  _DAT_00713a58 = _DAT_01c43550 - _DAT_01c4354c;
  DAT_0061b4a0 = bits_per_pixel;
  iVar1 = height + -1;
  _DAT_01c4f010 = width + -1;
  _DAT_01c4f014 = iVar1;
  if (0 < height) {
    iVar1 = 0;
    do {
      *(void **)(&DAT_01c4354c + iVar1) = frame_buffer;
      iVar1 = iVar1 + 4;
      frame_buffer = (void *)((int)frame_buffer + stride);
    } while (iVar1 < height * 4);
  }
  return iVar1;
}
