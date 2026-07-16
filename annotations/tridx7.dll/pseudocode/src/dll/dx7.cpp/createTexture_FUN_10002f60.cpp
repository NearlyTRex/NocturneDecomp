// Name: dll_dx7.cpp_createTexture_FUN_10002f60
// Address: 10002f60
// Address Range: [[10002f60, 10003085]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_createTexture_FUN_10002f60(int texture_size)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_createTexture_FUN_10002f60(int texture_size)

{
  STextureSurfaceSlot *ppv_object;
  IDirectDrawSurface *this_ptr;
  STextureSurfaceSlot *pSVar1;
  HRESULT HVar2;
  int iVar3;
  DDPIXELFORMAT *pDVar4;
  DDSURFACEDESC2 *pDVar5;
  DDPIXELFORMAT *pDVar6;
  DDSURFACEDESC2 local_7c;
  
  pDVar5 = &local_7c;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    pDVar5->dwSize = 0;
    pDVar5 = (DDSURFACEDESC2 *)&pDVar5->dwFlags;
  }
  pDVar4 = &g_TexturePixelFormat;
  pDVar6 = &local_7c.ddpfPixelFormat;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pDVar6->dwSize = pDVar4->dwSize;
    pDVar4 = (DDPIXELFORMAT *)&pDVar4->dwFlags;
    pDVar6 = (DDPIXELFORMAT *)&pDVar6->dwFlags;
  }
  local_7c.dwSize = 0x7c;
  local_7c.dwFlags = 0x101007;
  if (*g_ExternalRendererBridge.agp_texture_mode == 0) {
    texture_size = texture_size / 2;
  }
  local_7c.ddsCaps.dwCaps = 0x5000;
  local_7c.dwHeight = texture_size;
  local_7c.dwWidth = texture_size;
  if (g_MipMapFlag == 0) {
    if (g_AllowAutoMipMapping == 0) {
      local_7c.dwFlags = 0x121007;
      local_7c.dwMipMapOrRefresh.dwMipMapCount = 1;
      local_7c.ddsCaps.dwCaps = 0x405008;
    }
  }
  else {
    local_7c.dwFlags = 0x121007;
    iVar3 = dll_dx7_cpp_FUN_10003090(texture_size);
    local_7c.ddsCaps.dwCaps = local_7c.ddsCaps.dwCaps | 0x400008;
    local_7c.dwMipMapOrRefresh.dwMipMapCount = iVar3 - 3;
  }
  pSVar1 = g_TextureSurfaces + g_TextureCount;
  ppv_object = g_TextureSurfaces + g_TextureCount;
  HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                    (g_DirectDraw4,&local_7c,&pSVar1->surface,(IUnknown *)0x0);
  if (HVar2 != 0) {
    return -1;
  }
  this_ptr = pSVar1->surface;
  HVar2 = (*this_ptr->vtable->QueryInterface)
                    ((IUnknown *)this_ptr,(GUID *)&g_IID_IDirect3DTexture2,&ppv_object->texture);
  if (HVar2 != 0) {
    dll_dx7_cpp_FUN_10002340("D3D won't let me convert a surface to a texture.");
  }
  iVar3 = g_TextureCount;
  g_TextureCount = g_TextureCount + 1;
  if (0x1000 < g_TextureCount) {
    dll_dx7_cpp_FUN_10002340("Too many textures requested");
  }
  return iVar3;
}
