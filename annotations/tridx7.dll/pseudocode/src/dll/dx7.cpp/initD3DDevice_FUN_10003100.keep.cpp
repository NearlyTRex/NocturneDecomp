// Name: dll_dx7.cpp_initD3DDevice_FUN_10003100
// Address: 10003100
// MANUAL RECONSTRUCTION
// Address Range: [[10003100, 100032cd] [100032d1, 10003332]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_initD3DDevice_FUN_10003100(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_initD3DDevice_FUN_10003100(void)

{
  HRESULT HVar1;
  int iVar2;
  int format_found;
  D3DVIEWPORT2 viewport;
  DDSURFACEDESC2 desc;
  DDBLTFX bltfx;

  HVar1 = (*g_Direct3D3->vtable->CreateDevice)
                    (g_Direct3D3,(GUID *)&g_Direct3DDeviceGUID,g_BackBufferSurface,&g_Device,
                     (IUnknown *)0x0);
  if (HVar1 != 0) {
    return 0;
  }
  format_found = 0;
  HVar1 = (*g_Device->vtable->EnumTextureFormats)
                    (g_Device,dll_dx7_cpp_pickTextureFormat_FUN_10003340,&format_found);
  if (HVar1 != 0) {
    return 0;
  }
  if (format_found == 0) {
    return 0;
  }
  HVar1 = (*g_Direct3D3->vtable->CreateViewport)(g_Direct3D3,&g_Viewport,(IUnknown *)0x0);
  if (HVar1 != 0) {
    return 0;
  }
  HVar1 = (*g_Device->vtable->AddViewport)(g_Device,g_Viewport);
  if (HVar1 != 0) {
    return 0;
  }
  memset(&viewport,0,sizeof(viewport));
  viewport.dwX = 0;
  viewport.dwY = 0;
  viewport.dwWidth = g_ScreenWidth;
  viewport.dwHeight = g_ScreenHeight;
  viewport.dwSize = sizeof(viewport);
  viewport.dvClipX = -1.0;
  viewport.dvClipWidth = 2.0;
  viewport.dvMaxZ = 1.0;
  viewport.dvClipHeight = ((float)g_ScreenHeight / (float)g_ScreenWidth) * 2.0;
  viewport.dvMinZ = 0.0;
  viewport.dvClipY = viewport.dvClipHeight * 0.5;
  HVar1 = (*g_Viewport->vtable->SetViewport2)(g_Viewport,&viewport);
  if (HVar1 != 0) {
    return 0;
  }
  (*g_Device->vtable->SetCurrentViewport)(g_Device,g_Viewport);
  if (g_UseHoldBuffer != 0) {
    memset(&desc,0,sizeof(desc));
    desc.ddpfPixelFormat = g_TexturePixelFormat;
    desc.dwSize = sizeof(desc);
    desc.dwFlags = 0x1007;              /* CAPS | HEIGHT | WIDTH | PIXELFORMAT */
    desc.dwWidth = 0x280;               /* 640 */
    desc.dwHeight = 0x1e0;              /* 480 */
    desc.ddsCaps.dwCaps = 0x40;         /* OFFSCREENPLAIN */
    HVar1 = (*g_DirectDraw4->vtable->CreateSurface)
                      (g_DirectDraw4,&desc,&g_HoldBufferSurface,(IUnknown *)0x0);
    if (HVar1 != 0) {
      dll_dx7_cpp_fatalError_FUN_10002340("Can't create hold surface");
    }
    memset(&bltfx,0,sizeof(bltfx));
    bltfx.dwSize = sizeof(bltfx);
    (*g_HoldBufferSurface->vtable->Blt)
              (g_HoldBufferSurface,(RECT *)0x0,(IDirectDrawSurface *)0x0,(RECT *)0x0,0x1000400,
               &bltfx);                 /* WAIT | COLORFILL */
  }
  iVar2 = dll_dx7_cpp_createStagingTextures_FUN_10003400();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = dll_dx7_cpp_initDefaultRenderStates_FUN_100035b0();
  return (uint)(iVar2 != 0);
}
