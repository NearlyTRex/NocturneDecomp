// Name: dll_dx7.cpp_FUN_10003100
// Address: 10003100
// Address Range: [[10003100, 10003332]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_FUN_10003100(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_FUN_10003100(void)

{
  int iVar1;
  HRESULT HVar2;
  DWORD *pDVar3;
  int **ppiVar4;
  DDSURFACEDESC *pDVar5;
  DDPIXELFORMAT *pDVar6;
  uint *puVar7;
  byte bVar8;
  int *piStack_12c;
  byte *puStack_128;
  D3DVALUE DStack_124;
  IDirect3DDevice3 **ppIStack_120;
  DWORD DStack_11c;
  DDSURFACEDESC DStack_100;
  uint auStack_84 [33];
  
  bVar8 = 0;
  DStack_11c = 0;
  ppIStack_120 = &g_Device;
  DStack_124 = DAT_10014180;
  puStack_128 = &DAT_10012178;
  piStack_12c = DAT_100141dc;
  iVar1 = (**(code **)(*DAT_100141dc + 0x20))();
  if (iVar1 != 0) {
    return 0;
  }
  DStack_124 = 0.0;
  HVar2 = (*g_Device->vtable->EnumTextureFormats)(g_Device,&LAB_10003340,&DStack_124);
  if (HVar2 != 0) {
    return 0;
  }
  if (DStack_124 == 0.0) {
    return 0;
  }
  iVar1 = (**(code **)(*DAT_100141dc + 0x18))(DAT_100141dc,&DAT_100141e4,0);
  if (iVar1 != 0) {
    return 0;
  }
  HVar2 = (*g_Device->vtable->AddViewport)(g_Device,DAT_100141e4);
  if (HVar2 != 0) {
    return 0;
  }
  ppiVar4 = &piStack_12c;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppiVar4 = (int *)0x0;
    ppiVar4 = ppiVar4 + (uint)bVar8 * -2 + 1;
  }
  puStack_128 = (byte *)0x0;
  DStack_124 = 0.0;
  ppIStack_120 = (IDirect3DDevice3 **)DAT_10014174;
  DStack_11c = DAT_10014178;
  piStack_12c = (int *)0x2c;
  HVar2 = (*DAT_100141e4->vtable->SetViewport2)(DAT_100141e4,(D3DVIEWPORT2 *)&piStack_12c);
  if (HVar2 != 0) {
    return 0;
  }
  (*g_Device->vtable->SetCurrentViewport)(g_Device,DAT_100141e4);
  if (DAT_101398c8 != 0) {
    pDVar5 = &DStack_100;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      pDVar5->dwSize = 0;
      pDVar5 = (DDSURFACEDESC *)((int)pDVar5 + ((uint)bVar8 * -2 + 1) * 4);
    }
    pDVar3 = &DAT_10226a58;
    pDVar6 = &DStack_100.ddpfPixelFormat;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pDVar6->dwSize = *pDVar3;
      pDVar3 = pDVar3 + (uint)bVar8 * -2 + 1;
      pDVar6 = (DDPIXELFORMAT *)((int)pDVar6 + ((uint)bVar8 * -2 + 1) * 4);
    }
    DStack_100.dwSize = 0x7c;
    DStack_100.dwFlags = 0x1007;
    DStack_100.dwWidth = 0x280;
    DStack_100.dwHeight = 0x1e0;
    DStack_100.ddsCaps.dwCaps = 0x40;
    HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                      (g_DirectDraw4,&DStack_100,(IDirectDrawSurface **)&DAT_100141b8,
                       (IUnknown *)0x0);
    if (HVar2 != 0) {
      dll_dx7_cpp_FUN_10002340("Can't create hold surface");
    }
    puVar7 = auStack_84;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    auStack_84[0] = 100;
    (**(code **)(*DAT_100141b8 + 0x14))(DAT_100141b8,0,0,0,0x1000400,auStack_84);
  }
  iVar1 = dll_dx7_cpp_FUN_10003400();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = dll_dx7_cpp_FUN_100035b0();
  return (uint)(iVar1 != 0);
}
