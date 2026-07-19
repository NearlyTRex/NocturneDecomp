// Name: dll_dx7.cpp_uploadCurrentTexture_FUN_10003a80
// Address: 10003a80
// Address Range: [[10003a80, 10003ab3] [10003abd, 10003b71] [10003b75, 10003bb6] [10003bba, 10003c93]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_uploadCurrentTexture_FUN_10003a80(void)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_uploadCurrentTexture_FUN_10003a80(void)

{
  IDirectDrawSurface *pIVar1;
  HRESULT HVar2;
  int iVar3;
  int *unaff_EBX;
  int iVar4;
  DDSURFACEDESC2 *pDVar5;
  byte bVar6;
  IDirectDrawSurface *local_94;
  IDirectDrawSurface *local_90;
  RECT local_8c;
  DDSURFACEDESC2 local_7c;
  
  bVar6 = 0;
  switch(*g_ExternalRendererBridge.texture_dimension) {
  case 0x20:
    iVar4 = 3;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    dll_dx7_cpp_fatalError_FUN_10002340("Unknown texture size");
  case 0x40:
    iVar4 = 2;
    break;
  case 0x80:
    iVar4 = 1;
    break;
  case 0x100:
    iVar4 = 0;
  }
  dll_dx7_cpp_expandTextureAndBuildMips_FUN_10003830();
  if (g_DirectTextureFlag == 0) {
    local_94 = g_StagingTextures[g_StagingSetIndex][iVar4];
    local_90 = g_TextureSurfaces[g_DX7CurrentTextureIndex].surface;
  }
  else {
    local_90 = (IDirectDrawSurface *)0x0;
    local_94 = g_TextureSurfaces[g_DX7CurrentTextureIndex].surface;
  }
  while( true ) {
    if (g_DirectTextureFlag == 0) {
      local_94 = g_StagingTextures[g_StagingSetIndex][iVar4];
    }
    pDVar5 = &local_7c;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      pDVar5->dwSize = 0;
      pDVar5 = (DDSURFACEDESC2 *)((int)pDVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    local_7c.dwSize = 0x7c;
    iVar3 = dll_dx7_cpp_lockSurface_FUN_10002e20(local_94,&local_7c);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      dll_dx7_cpp_fatalError_FUN_10002340("Texture load failed: Could not lock texture buffer");
    }
    if (g_TexturePixelFormat.dwBitCount.dwRGBBitCount == 0x20) {
      dll_dx7_cpp_copyMipTo32Bit_FUN_10003e40
                (local_7c.lpSurface,local_7c.dwPitchOrLinearSize.dwLinearSize,local_7c.dwWidth);
    }
    else {
      dll_dx7_cpp_convertMipTo16Bit_FUN_10003d90
                (local_7c.lpSurface,local_7c.dwPitchOrLinearSize.dwLinearSize,local_7c.dwWidth);
    }
    iVar3 = dll_dx7_cpp_unlockSurface_FUN_10002cb0(local_94);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      dll_dx7_cpp_fatalError_FUN_10002340("Texture load failed: Texture buffer unlock failed");
    }
    if (g_DirectTextureFlag == 0) {
      local_8c.top = 0;
      local_8c.left = 0;
      local_8c.right = local_7c.dwWidth;
      local_8c.bottom = local_7c.dwWidth;
      HVar2 = (*local_90->vtable->Blt)(local_90,&local_8c,local_94,&local_8c,0,(DDBLTFX *)0x0);
      dll_dx7_cpp_checkD3DResult_FUN_10001d70(HVar2);
    }
    if ((g_MipMapFlag == 0) || (3 < iVar4)) break;
    if (g_DirectTextureFlag == 0) {
      (*local_90->vtable->GetSurfaceDesc)(local_90,&local_7c);
      HVar2 = (**(code **)(*unaff_EBX + 0x30))
                        (unaff_EBX,&local_7c.ddpfPixelFormat.dwBlueVMask,&stack0xffffff68);
      dll_dx7_cpp_checkD3DResult_FUN_10001d70(HVar2);
      pIVar1 = local_90;
    }
    else {
      HVar2 = (*local_94->vtable->GetAttachedSurface)
                        (local_94,(DDSCAPS *)&local_7c.ddsCaps,&local_94);
      dll_dx7_cpp_checkD3DResult_FUN_10001d70(HVar2);
      pIVar1 = local_94;
    }
    if (pIVar1 == (IDirectDrawSurface *)0x0) break;
    iVar4 = iVar4 + 1;
  }
  g_StagingSetIndex = g_StagingSetIndex + 1;
  if (3 < g_StagingSetIndex) {
    g_StagingSetIndex = 0;
  }
  return;
}
