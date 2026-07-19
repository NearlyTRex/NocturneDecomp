// Name: dll_dx7.cpp_createStagingTextures_FUN_10003400
// Address: 10003400
// MANUAL RECONSTRUCTION
// Address Range: [[10003400, 100035a3]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_createStagingTextures_FUN_10003400(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_createStagingTextures_FUN_10003400(void)

{
  IDirectDrawSurface *this_ptr;
  HRESULT HVar1;
  int size_index;
  int cache_index;
  uint mask;
  DDSURFACEDESC2 desc;

  dll_dx7_cpp_releaseAllTextures_FUN_10002ea0();
  for (size_index = 0;
       size_index < (int)(sizeof(g_TextureSizeTable) / sizeof(g_TextureSizeTable[0]));
       size_index = size_index + 1) {
    for (cache_index = 0;
         cache_index < (int)(sizeof(g_StagingTextures) / sizeof(g_StagingTextures[0]));
         cache_index = cache_index + 1) {
      memset(&desc,0,sizeof(desc));
      desc.ddpfPixelFormat = g_TexturePixelFormat;
      desc.dwHeight = g_TextureSizeTable[size_index];
      desc.dwSize = sizeof(desc);
      desc.dwFlags = 0x1007;              /* CAPS | HEIGHT | WIDTH | PIXELFORMAT */
      desc.ddsCaps.dwCaps = 0x1800;       /* TEXTURE | SYSTEMMEMORY */
      desc.dwWidth = desc.dwHeight;
      HVar1 = (*g_DirectDraw4->vtable->CreateSurface)
                        (g_DirectDraw4,&desc,&g_StagingTextures[cache_index][size_index],
                         (IUnknown *)0x0);
      if (HVar1 != 0) {
        return 0;
      }
      this_ptr = g_StagingTextures[cache_index][size_index];
      HVar1 = (*this_ptr->vtable->QueryInterface)
                        ((IUnknown *)this_ptr,(GUID *)&g_IID_IDirect3DTexture2,
                         (void **)&g_StagingTextureInterfaces[cache_index][size_index]);
      if (HVar1 != 0) {
        return 0;
      }
    }
  }
  g_HWRedShift = 0;
  for (mask = desc.ddpfPixelFormat.dwRedYMask.dwRBitMask; (mask & 1) == 0; mask = mask >> 1) {
    g_HWRedShift = g_HWRedShift + 1;
  }
  g_HWRedScale = 0xff / (desc.ddpfPixelFormat.dwRedYMask.dwRBitMask >>
                        ((byte)g_HWRedShift & 0x1f));
  g_HWGreenShift = 0;
  for (mask = desc.ddpfPixelFormat.dwGreenUMask.dwGBitMask; (mask & 1) == 0; mask = mask >> 1) {
    g_HWGreenShift = g_HWGreenShift + 1;
  }
  g_HWGreenScale = 0xff / (desc.ddpfPixelFormat.dwGreenUMask.dwGBitMask >>
                          ((byte)g_HWGreenShift & 0x1f));
  g_HWBlueShift = 0;
  for (mask = desc.ddpfPixelFormat.dwBlueVMask.dwBBitMask; (mask & 1) == 0; mask = mask >> 1) {
    g_HWBlueShift = g_HWBlueShift + 1;
  }
  g_HWBlueScale = 0xff / (desc.ddpfPixelFormat.dwBlueVMask.dwBBitMask >>
                         ((byte)g_HWBlueShift & 0x1f));
  if (g_TextureFormatSelected == 0) {
    g_HWAlphaMask = 0;
  }
  else {
    g_HWAlphaMask = desc.ddpfPixelFormat.dwAlphaBitMask.dwRGBAlphaBitMask;
  }
  g_TextureCount = 0;
  g_HWTextureBitDepth = desc.ddpfPixelFormat.dwBitCount.dwRGBBitCount;
  dll_dx7_cpp_initTextureCaches_FUN_10001200();
  return 1;
}
