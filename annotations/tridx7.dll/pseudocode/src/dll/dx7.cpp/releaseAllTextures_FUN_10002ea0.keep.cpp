// Name: dll_dx7.cpp_releaseAllTextures_FUN_10002ea0
// Address: 10002ea0
// MANUAL RECONSTRUCTION
// Address Range: [[10002ea0, 10002f35]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_releaseAllTextures_FUN_10002ea0(void)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_releaseAllTextures_FUN_10002ea0(void)

{
  IDirect3DTexture2 *this_ptr;
  IDirectDrawSurface *this_ptr_00;
  int iVar2;
  int iVar3;
  int iVar5;

  for (iVar3 = 0; iVar3 < (int)(sizeof(g_StagingTextureInterfaces[0]) /
                                sizeof(g_StagingTextureInterfaces[0][0])); iVar3 = iVar3 + 1) {
    for (iVar5 = 0; iVar5 < (int)(sizeof(g_StagingTextureInterfaces) /
                                  sizeof(g_StagingTextureInterfaces[0])); iVar5 = iVar5 + 1) {
      this_ptr = g_StagingTextureInterfaces[iVar5][iVar3];
      if (this_ptr != (IDirect3DTexture2 *)0x0) {
        (*this_ptr->vtable->Release)((IUnknown *)this_ptr);
        g_StagingTextureInterfaces[iVar5][iVar3] = (IDirect3DTexture2 *)0x0;
      }
      this_ptr_00 = g_StagingTextures[iVar5][iVar3];
      if (this_ptr_00 != (IDirectDrawSurface *)0x0) {
        (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
        g_StagingTextures[iVar5][iVar3] = (IDirectDrawSurface *)0x0;
      }
    }
  }
  for (iVar2 = 0; iVar2 < (int)(sizeof(g_TextureSurfaces) / sizeof(g_TextureSurfaces[0]));
       iVar2 = iVar2 + 1) {
    this_ptr = g_TextureSurfaces[iVar2].texture;
    if (this_ptr != (IDirect3DTexture2 *)0x0) {
      (*this_ptr->vtable->Release)((IUnknown *)this_ptr);
      g_TextureSurfaces[iVar2].texture = (IDirect3DTexture2 *)0x0;
    }
    this_ptr_00 = g_TextureSurfaces[iVar2].surface;
    if (this_ptr_00 != (IDirectDrawSurface *)0x0) {
      (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
      g_TextureSurfaces[iVar2].surface = (IDirectDrawSurface *)0x0;
    }
  }
  memset(g_TextureSurfaces,0,sizeof(g_TextureSurfaces));
  return;
}
