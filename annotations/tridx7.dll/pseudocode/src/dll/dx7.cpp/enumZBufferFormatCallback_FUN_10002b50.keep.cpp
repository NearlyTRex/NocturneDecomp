// Name: dll_dx7.cpp_enumZBufferFormatCallback_FUN_10002b50
// Address: 10002b50
// MANUAL RECONSTRUCTION
// Address Range: [[10002b50, 10002ba0]]
// Convention: __stdcall
// Signature: HRESULT __stdcall dll_dx7_cpp_enumZBufferFormatCallback_FUN_10002b50(DDPIXELFORMAT *lp_pixel_format,void *lp_context)

#include "nocturne.h"

HRESULT __stdcall dll_dx7_cpp_enumZBufferFormatCallback_FUN_10002b50(DDPIXELFORMAT *lp_pixel_format,void *lp_context)

{
  DDPIXELFORMAT *best_format;

  best_format = (DDPIXELFORMAT *)lp_context;
  if (lp_pixel_format->dwFlags == 0x400) {          /* DDPF_ZBUFFER */
    if (g_ScreenBitDepth != 0x20) {
      *best_format = *lp_pixel_format;
      return 0;
    }
    if ((best_format->dwBitCount).dwRGBBitCount <
        (lp_pixel_format->dwBitCount).dwRGBBitCount) {
      *best_format = *lp_pixel_format;
    }
  }
  return 1;
}
