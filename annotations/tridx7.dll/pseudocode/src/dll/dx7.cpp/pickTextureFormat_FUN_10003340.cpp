// Name: dll_dx7.cpp_pickTextureFormat_FUN_10003340
// Address: 10003340
// Address Range: [[10003340, 100033ff]]
// Convention: __stdcall
// Signature: HRESULT __stdcall dll_dx7_cpp_pickTextureFormat_FUN_10003340(DDPIXELFORMAT *pixel_format,int *found_flag)

#include "nocturne.h"

HRESULT __stdcall dll_dx7_cpp_pickTextureFormat_FUN_10003340(DDPIXELFORMAT *pixel_format,int *found_flag)

{
  int iVar1;
  DDPIXELFORMAT *pDVar2;
  DDPIXELFORMAT *pDVar3;
  
  if (g_ScreenBitDepth == 0x20) {
    if (((pixel_format->dwBitCount).dwRGBBitCount == 0x20) &&
       (*(char *)((int)&pixel_format->dwAlphaBitMask + 3) != '\0')) {
      g_TextureFormatSelected = 1;
      *found_flag = 1;
      pDVar2 = &g_TexturePixelFormat;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        pDVar2->dwSize = pixel_format->dwSize;
        pixel_format = (DDPIXELFORMAT *)&pixel_format->dwFlags;
        pDVar2 = (DDPIXELFORMAT *)&pDVar2->dwFlags;
      }
      return 0;
    }
    return 1;
  }
  if ((pixel_format->dwBitCount).dwRGBBitCount == 0x10) {
    if ((*(byte *)((int)&pixel_format->dwAlphaBitMask + 1) & 0xf0) != 0) {
      g_TextureFormatSelected = 1;
      *found_flag = 1;
      pDVar2 = pixel_format;
      pDVar3 = &g_TexturePixelFormat;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        pDVar3->dwSize = pDVar2->dwSize;
        pDVar2 = (DDPIXELFORMAT *)&pDVar2->dwFlags;
        pDVar3 = (DDPIXELFORMAT *)&pDVar3->dwFlags;
      }
      return (uint)((pixel_format->dwAlphaBitMask).dwRGBAlphaBitMask != 0xf000);
    }
    if (*found_flag == 0) {
      *found_flag = 1;
      pDVar2 = &g_TexturePixelFormat;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        pDVar2->dwSize = pixel_format->dwSize;
        pixel_format = (DDPIXELFORMAT *)&pixel_format->dwFlags;
        pDVar2 = (DDPIXELFORMAT *)&pDVar2->dwFlags;
      }
      return 1;
    }
  }
  return 1;
}
