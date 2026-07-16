// Name: dll_dx7.cpp_FUN_10003a80
// Address: 10003a80
// Address Range: [[10003a80, 10003c93]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10003a80(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void dll_dx7_cpp_FUN_10003a80(void)

{
  IDirectDrawSurface *pIVar1;
  HRESULT HVar2;
  uint uVar3;
  int iVar4;
  int *unaff_EBX;
  DWORD DVar5;
  DDSURFACEDESC2 *pDVar6;
  byte bVar7;
  IDirectDrawSurface *local_94;
  IDirectDrawSurface *local_90;
  RECT local_8c;
  DDSURFACEDESC2 local_7c;
  
  bVar7 = 0;
  switch(*g_ExternalRendererBridge.texture_dimension) {
  case 0x20:
    DVar5 = 3;
    break;
  default:
    dll_dx7_cpp_FUN_10002340("Unknown texture size");
    DVar5 = local_7c.dwSize;
    break;
  case 0x40:
    DVar5 = 2;
    break;
  case 0x80:
    DVar5 = 1;
    break;
  case 0x100:
    DVar5 = 0;
  }
  dll_dx7_cpp_FUN_10003830();
  if (g_DirectTextureFlag == 0) {
    local_94 = (IDirectDrawSurface *)(&DAT_10139048)[DVar5 + DAT_100141e8 * 8];
    local_90 = g_TextureSurfaces[g_CurrentTextureIndex].surface;
  }
  else {
    local_90 = (IDirectDrawSurface *)0x0;
    local_94 = g_TextureSurfaces[g_CurrentTextureIndex].surface;
  }
  while( true ) {
    if (g_DirectTextureFlag == 0) {
      local_94 = (IDirectDrawSurface *)(&DAT_10139048)[DVar5 + DAT_100141e8 * 8];
    }
    pDVar6 = &local_7c;
    for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
      pDVar6->dwSize = 0;
      pDVar6 = (DDSURFACEDESC2 *)((int)pDVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
    local_7c.dwSize = 0x7c;
    iVar4 = dll_dx7_cpp_FUN_10002e20((int *)local_94,&local_7c.dwSize);
    if (iVar4 == 0) {
      dll_dx7_cpp_FUN_10002340("Texture load failed: Could not lock texture buffer");
    }
    if (g_TexturePixelFormat.dwBitCount.dwRGBBitCount == 0x20) {
      dll_dx7_cpp_FUN_10003e40();
    }
    else {
      dll_dx7_cpp_FUN_10003d90
                (local_7c.lpSurface,local_7c.dwPitchOrLinearSize.lPitch,local_7c.dwWidth);
    }
    iVar4 = dll_dx7_cpp_FUN_10002cb0(local_94);
    if (iVar4 == 0) {
      dll_dx7_cpp_FUN_10002340("Texture load failed: Texture buffer unlock failed");
    }
    if (g_DirectTextureFlag == 0) {
      local_8c.top = 0;
      local_8c.left = 0;
      local_8c.right = local_7c.dwWidth;
      local_8c.bottom = local_7c.dwWidth;
      HVar2 = (*local_90->vtable->Blt)(local_90,&local_8c,local_94,&local_8c,0,(void *)0x0);
      dll_dx7_cpp_FUN_10001d70(HVar2);
    }
    if ((g_MipMapFlag == 0) || (3 < (int)DVar5)) break;
    if (g_DirectTextureFlag == 0) {
      (*local_90->vtable->GetSurfaceDesc)(local_90,&local_7c);
      uVar3 = (**(code **)(*unaff_EBX + 0x30))
                        (unaff_EBX,&local_7c.ddpfPixelFormat.dwBlueVMask,&stack0xffffff68);
      dll_dx7_cpp_FUN_10001d70(uVar3);
      pIVar1 = local_90;
    }
    else {
      HVar2 = (*local_94->vtable->GetAttachedSurface)
                        (local_94,(DDSCAPS *)&local_7c.ddsCaps,&local_94);
      dll_dx7_cpp_FUN_10001d70(HVar2);
      pIVar1 = local_94;
    }
    if (pIVar1 == (IDirectDrawSurface *)0x0) break;
    DVar5 = DVar5 + 1;
  }
  DAT_100141e8 = DAT_100141e8 + 1;
  if (3 < DAT_100141e8) {
    DAT_100141e8 = 0;
  }
  return;
}
