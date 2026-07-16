// Name: dll_dx7.cpp_FUN_10003100
// Address: 10003100
// Address Range: [[10003100, 10003332]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_FUN_10003100(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_FUN_10003100(void)

{
  HRESULT HVar1;
  int iVar2;
  DDPIXELFORMAT *pDVar3;
  D3DVIEWPORT2 *pDVar4;
  DDSURFACEDESC2 *pDVar5;
  DDPIXELFORMAT *pDVar6;
  uint *puVar7;
  byte bVar8;
  int iStack_110;
  D3DVIEWPORT2 DStack_10c;
  DDSURFACEDESC2 DStack_e0;
  uint auStack_64 [25];
  
  bVar8 = 0;
  HVar1 = (*g_Direct3D3->vtable->CreateDevice)
                    (g_Direct3D3,(GUID *)&g_Direct3DDeviceGUID,g_BackBufferSurface,&g_Device,
                     (IUnknown *)0x0);
  if (HVar1 != 0) {
    return 0;
  }
  iStack_110 = 0;
  HVar1 = (*g_Device->vtable->EnumTextureFormats)(g_Device,&LAB_10003340,&iStack_110);
  if (HVar1 != 0) {
    return 0;
  }
  if (iStack_110 == 0) {
    return 0;
  }
  HVar1 = (*g_Direct3D3->vtable->CreateViewport)(g_Direct3D3,&DAT_100141e4,(IUnknown *)0x0);
  if (HVar1 != 0) {
    return 0;
  }
  HVar1 = (*g_Device->vtable->AddViewport)(g_Device,DAT_100141e4);
  if (HVar1 != 0) {
    return 0;
  }
  pDVar4 = &DStack_10c;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    pDVar4->dwSize = 0;
    pDVar4 = (D3DVIEWPORT2 *)((int)pDVar4 + ((uint)bVar8 * -2 + 1) * 4);
  }
  DStack_10c.dwX = 0;
  DStack_10c.dwY = 0;
  DStack_10c.dwWidth = g_ScreenWidth;
  DStack_10c.dwHeight = g_ScreenHeight;
  DStack_10c.dwSize = 0x2c;
  DStack_10c.dvClipX = -1.0;
  DStack_10c.dvClipWidth = 2.0;
  DStack_10c.dvMaxZ = 1.0;
  DStack_10c.dvClipHeight = ((float)g_ScreenHeight / (float)g_ScreenWidth) * 2.0;
  DStack_10c.dvMinZ = 0.0;
  DStack_10c.dvClipY = DStack_10c.dvClipHeight * 0.5;
  HVar1 = (*DAT_100141e4->vtable->SetViewport2)(DAT_100141e4,&DStack_10c);
  if (HVar1 != 0) {
    return 0;
  }
  (*g_Device->vtable->SetCurrentViewport)(g_Device,DAT_100141e4);
  if (g_UseHoldBuffer != 0) {
    pDVar5 = &DStack_e0;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      pDVar5->dwSize = 0;
      pDVar5 = (DDSURFACEDESC2 *)((int)pDVar5 + ((uint)bVar8 * -2 + 1) * 4);
    }
    pDVar3 = &g_TexturePixelFormat;
    pDVar6 = &DStack_e0.ddpfPixelFormat;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      pDVar6->dwSize = pDVar3->dwSize;
      pDVar3 = (DDPIXELFORMAT *)((int)pDVar3 + ((uint)bVar8 * -2 + 1) * 4);
      pDVar6 = (DDPIXELFORMAT *)((int)pDVar6 + ((uint)bVar8 * -2 + 1) * 4);
    }
    DStack_e0.dwSize = 0x7c;
    DStack_e0.dwFlags = 0x1007;
    DStack_e0.dwWidth = 0x280;
    DStack_e0.dwHeight = 0x1e0;
    DStack_e0.ddsCaps.dwCaps = 0x40;
    HVar1 = (*g_DirectDraw4->vtable->CreateSurface)
                      (g_DirectDraw4,&DStack_e0,(IDirectDrawSurface **)&DAT_100141b8,(IUnknown *)0x0
                      );
    if (HVar1 != 0) {
      dll_dx7_cpp_FUN_10002340("Can't create hold surface");
    }
    puVar7 = auStack_64;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    auStack_64[0] = 100;
    (**(code **)(*DAT_100141b8 + 0x14))(DAT_100141b8,0,0,0,0x1000400,auStack_64);
  }
  iVar2 = dll_dx7_cpp_FUN_10003400();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = dll_dx7_cpp_FUN_100035b0();
  return (uint)(iVar2 != 0);
}
