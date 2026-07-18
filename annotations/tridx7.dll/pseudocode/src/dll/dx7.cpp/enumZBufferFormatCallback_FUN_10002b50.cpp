// Name: dll_dx7.cpp_enumZBufferFormatCallback_FUN_10002b50
// Address: 10002b50
// Address Range: [[10002b50, 10002ba0]]
// Convention: __stdcall
// Signature: HRESULT __stdcall dll_dx7_cpp_enumZBufferFormatCallback_FUN_10002b50(DDPIXELFORMAT *lp_pixel_format,void *lp_context)

#include "nocturne.h"

HRESULT __stdcall dll_dx7_cpp_enumZBufferFormatCallback_FUN_10002b50(DDPIXELFORMAT *lp_pixel_format,void *lp_context)

{
  int iVar1;
  
  if (lp_pixel_format->dwFlags == 0x400) {
    if (g_ScreenBitDepth != 0x20) {
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(DWORD *)lp_context = lp_pixel_format->dwSize;
        lp_pixel_format = (DDPIXELFORMAT *)&lp_pixel_format->dwFlags;
        lp_context = (DWORD *)((int)lp_context + 4);
      }
      return 0;
    }
    if (*(uint *)((int)lp_context + 0xc) < (lp_pixel_format->dwBitCount).dwRGBBitCount) {
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(DWORD *)lp_context = lp_pixel_format->dwSize;
        lp_pixel_format = (DDPIXELFORMAT *)&lp_pixel_format->dwFlags;
        lp_context = (DWORD *)((int)lp_context + 4);
      }
      return 1;
    }
  }
  return 1;
}
