// Name: dll_dx7.cpp_pickTextureFormat_FUN_10003340
// Address: 10003340
// MANUAL RECONSTRUCTION
// Address Range: [[10003340, 100033ff]]
// Convention: __stdcall
// Signature: HRESULT __stdcall dll_dx7_cpp_pickTextureFormat_FUN_10003340(DDPIXELFORMAT *pixel_format,void *found_flag)

#include "nocturne.h"

HRESULT __stdcall dll_dx7_cpp_pickTextureFormat_FUN_10003340(DDPIXELFORMAT *pixel_format,void *found_flag)

{
  uint *format_found;
  uint alpha_mask;

  format_found = (uint *)found_flag;
  alpha_mask = (pixel_format->dwAlphaBitMask).dwRGBAlphaBitMask;
  if (g_ScreenBitDepth == 0x20) {
    if (((pixel_format->dwBitCount).dwRGBBitCount == 0x20) &&
       ((alpha_mask & 0xff000000) != 0)) {
      g_TextureFormatSelected = 1;
      *format_found = 1;
      g_TexturePixelFormat = *pixel_format;
      return 0;
    }
    return 1;
  }
  if ((pixel_format->dwBitCount).dwRGBBitCount == 0x10) {
    if ((alpha_mask & 0xf000) != 0) {
      g_TextureFormatSelected = 1;
      *format_found = 1;
      g_TexturePixelFormat = *pixel_format;
      return (uint)(alpha_mask != 0xf000);
    }
    if (*format_found == 0) {
      *format_found = 1;
      g_TexturePixelFormat = *pixel_format;
      return 1;
    }
  }
  return 1;
}
