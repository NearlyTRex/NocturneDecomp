// Name: dll_dx7.cpp_createTexture_FUN_10002f60
// Address: 10002f60
// MANUAL RECONSTRUCTION
// Address Range: [[10002f60, 10003059] [1000305d, 1000307a] [1000307e, 10003085]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_createTexture_FUN_10002f60(int texture_size)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_createTexture_FUN_10002f60(int texture_size)

{
  STextureSurfaceSlot *ppv_object;
  IDirectDrawSurface *this_ptr;
  STextureSurfaceSlot *pSVar1;
  HRESULT HVar2;
  int size_index;
  int slot_index;
  DDSURFACEDESC2 local_7c;
  
  memset(&local_7c,0,sizeof(local_7c));
  local_7c.ddpfPixelFormat = g_TexturePixelFormat;
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
    size_index = dll_dx7_cpp_textureSizeToIndex_FUN_10003090(texture_size);
    local_7c.ddsCaps.dwCaps = local_7c.ddsCaps.dwCaps | 0x400008;
    local_7c.dwMipMapOrRefresh.dwMipMapCount = size_index - 3;
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
                    ((IUnknown *)this_ptr,(GUID *)&g_IID_IDirect3DTexture2,
                     (void **)&ppv_object->texture);
  slot_index = g_TextureCount;
  if (HVar2 != 0) {
    dll_dx7_cpp_fatalError_FUN_10002340("D3D won't let me convert a surface to a texture.");
  }
  g_TextureCount = g_TextureCount + 1;
  if ((int)(sizeof(g_TextureSurfaces) / sizeof(g_TextureSurfaces[0])) < g_TextureCount) {
    dll_dx7_cpp_fatalError_FUN_10002340("Too many textures requested");
  }
  return slot_index;
}
