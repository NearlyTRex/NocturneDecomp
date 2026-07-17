// Name: dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500
// Address: 10002500
// Address Range: [[10002500, 10002882] [10002893, 10002ad7] [10002adb, 10002b1a]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLsetVideoMode_FUN_10002500(void **scanline_ptrs)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLsetVideoMode_FUN_10002500(void **scanline_ptrs)

{
  char cVar1;
  _FILE *file;
  HRESULT HVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  IDirectDrawSurface **surface;
  DWORD *pDVar6;
  char *pcVar7;
  void **ppvVar8;
  DDSURFACEDESC2 *pDVar9;
  DDPIXELFORMAT *pDVar10;
  char *pcVar11;
  uint *puVar12;
  byte bVar13;
  DWORD aDStack_210 [3];
  int iStack_204;
  DDSCAPS aDStack_1f0 [4];
  DDSURFACEDESC2 DStack_1e0;
  uint auStack_164 [25];
  char acStack_100 [256];
  
                    /* 0x2500  31  APIDLLsetVideoMode */
  bVar13 = 0;
  if (g_NonLocalVideoMem == 0) {
    *g_ExternalRendererBridge.agp_texture_mode = 0;
  }
  if (*g_ExternalRendererBridge.agp_texture_mode == 0) {
    g_TextureSizeTable[0] = 0x80;
    g_TextureSizeTable[1] = 0x40;
    g_TextureSizeTable[2] = 0x20;
    g_TextureSizeTable[3] = 0x10;
    g_TextureSizeTable[4] = 8;
    g_TextureSizeTable[5] = 4;
    g_TextureSizeTable[6] = 2;
    g_TextureSizeTable[7] = 1;
  }
  else {
    g_TextureSizeTable[0] = 0x100;
    g_TextureSizeTable[1] = 0x80;
    g_TextureSizeTable[2] = 0x40;
    g_TextureSizeTable[3] = 0x20;
    g_TextureSizeTable[4] = 0x10;
    g_TextureSizeTable[5] = 8;
    g_TextureSizeTable[6] = 4;
    g_TextureSizeTable[7] = 2;
  }
  g_MasterZBufferCount = 0;
  dll_dx7_cpp_readIniInt_FUN_10002b20
            ("Graphics","masterZBufferCount",(uint *)&g_MasterZBufferCount);
  g_UseHoldBuffer = 0;
  if (0x1e0 < g_ScreenHeight) {
    dll_dx7_cpp_readIniInt_FUN_10002b20
              ("Graphics","useHoldBuffer",(uint *)&g_UseHoldBuffer);
  }
  g_PremultiplyColorAndAlpha = 0;
  dll_dx7_cpp_readIniInt_FUN_10002b20
            ("Graphics","premultiplyColorAndAlpha",
             (uint *)&g_PremultiplyColorAndAlpha);
  g_DirectTextureFlag = 0;
  dll_dx7_cpp_readIniInt_FUN_10002b20
            ("Graphics","directTextureFlag",(uint *)&g_DirectTextureFlag);
  g_AllowAutoMipMapping = 0;
  dll_dx7_cpp_readIniInt_FUN_10002b20
            ("Graphics","allowAutoMipMapping",(uint *)&g_AllowAutoMipMapping);
  file = _fopen("system\\fly.ini","rb");
  if (file == (_FILE *)0x0) {
    g_FlyIniPresent = 0;
  }
  else {
    g_FlyIniPresent = 1;
    _fclose(file);
  }
  g_ScanlinePtrBase = scanline_ptrs;
  if (0 < g_ScreenHeight) {
    ppvVar8 = g_ScanlinePointers;
    for (iVar3 = g_ScreenHeight; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppvVar8 = *scanline_ptrs;
      scanline_ptrs = scanline_ptrs + (uint)bVar13 * -2 + 1;
      ppvVar8 = ppvVar8 + (uint)bVar13 * -2 + 1;
    }
  }
  iVar3 = g_ScreenBitDepth;
  dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
  HVar2 = (*g_DirectDraw4->vtable->SetCooperativeLevel)(g_DirectDraw4,(char)g_WindowHandle,0x11);
  dll_dx7_cpp_checkD3DResult_FUN_10001d70(HVar2);
  if (HVar2 != 0) {
    return 0;
  }
  HVar2 = (*g_DirectDraw4->vtable->SetDisplayMode)
                    (g_DirectDraw4,g_ScreenWidth,g_ScreenHeight,iVar3,0,0);
  if (HVar2 != 0) {
    return 0;
  }
  pDVar9 = &g_PrimarySurfaceDesc;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    pDVar9->dwSize = 0;
    pDVar9 = (DDSURFACEDESC2 *)((int)pDVar9 + ((uint)bVar13 * -2 + 1) * 4);
  }
  g_PrimarySurfaceDesc.dwSize = 0x7c;
  g_PrimarySurfaceDesc.dwFlags = 0x21;
  g_PrimarySurfaceDesc.dwBackBufferCount = 2;
  if (*g_ExternalRendererBridge.agp_texture_mode < 2) {
    g_PrimarySurfaceDesc.dwBackBufferCount = 1;
  }
  g_PrimarySurfaceDesc.ddsCaps.dwCaps = 0x6218;
  HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                    (g_DirectDraw4,&g_PrimarySurfaceDesc,&g_PrimarySurface,(IUnknown *)0x0);
  if (HVar2 != 0) {
    g_PrimarySurfaceDesc.dwBackBufferCount = 1;
    HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                      (g_DirectDraw4,&g_PrimarySurfaceDesc,&g_PrimarySurface,(IUnknown *)0x0);
    if (HVar2 != 0) {
      (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
      return 0;
    }
  }
  aDStack_1f0[0].dwCaps = 0x2004;
  HVar2 = (*g_PrimarySurface->vtable->GetAttachedSurface)
                    (g_PrimarySurface,aDStack_1f0,&g_BackBufferSurface);
  if (HVar2 != 0) {
    (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
    return 0;
  }
  iVar3 = dll_dx7_cpp_FUN_10002f40();
  if (iVar3 == 0) {
    (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
    return 0;
  }
  pDVar6 = aDStack_210;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pDVar6 = 0;
    pDVar6 = pDVar6 + (uint)bVar13 * -2 + 1;
  }
  HVar2 = (*g_Direct3D3->vtable->EnumZBufferFormats)
                    (g_Direct3D3,(GUID *)&g_Direct3DDeviceGUID,
                     dll_dx7_cpp_enumZBufferFormatCallback_FUN_10002b50,aDStack_210);
  dll_dx7_cpp_checkD3DResult_FUN_10001d70(HVar2);
  if (aDStack_210[0] != 0x20) {
    HVar2 = (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
    if (HVar2 != 0) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    dll_dx7_cpp_fatalError_FUN_10002340("Your 3D hardware needs to support a Z buffer");
  }
  pDVar9 = &DStack_1e0;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    pDVar9->dwSize = 0;
    pDVar9 = (DDSURFACEDESC2 *)((int)pDVar9 + ((uint)bVar13 * -2 + 1) * 4);
  }
  DStack_1e0.dwWidth = g_ScreenWidth;
  DStack_1e0.dwHeight = g_ScreenHeight;
  DStack_1e0.dwSize = 0x7c;
  DStack_1e0.dwFlags = 0x1007;
  DStack_1e0.ddsCaps.dwCaps = 0x20000;
  pDVar6 = aDStack_210;
  pDVar10 = &DStack_1e0.ddpfPixelFormat;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pDVar10->dwSize = *pDVar6;
    pDVar6 = pDVar6 + (uint)bVar13 * -2 + 1;
    pDVar10 = (DDPIXELFORMAT *)((int)pDVar10 + ((uint)bVar13 * -2 + 1) * 4);
  }
  HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                    (g_DirectDraw4,&DStack_1e0,&g_ZBufferSurface,(IUnknown *)0x0);
  if (HVar2 == 0) {
    iVar3 = 0;
    g_ZBufferBitDepth = iStack_204;
    if (0 < g_MasterZBufferCount) {
      surface = g_MasterZBufferSurfaces;
      do {
        HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                          (g_DirectDraw4,&DStack_1e0,surface,(IUnknown *)0x0);
        if (HVar2 != 0) {
          (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
          uVar4 = 0xffffffff;
          pcVar7 = "FATAL ERROR!  Unable to create a 2nd master Z buffer.   Your Direct3D driver does not support this.  Please restart the game and turn off hardware acceleration.";
          goto code_r0x10002993;
        }
        surface = surface + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < g_MasterZBufferCount);
    }
    HVar2 = (*g_BackBufferSurface->vtable->AddAttachedSurface)(g_BackBufferSurface,g_ZBufferSurface)
    ;
    if (HVar2 == 0) {
      puVar12 = auStack_164;
      for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
      }
      auStack_164[0] = 100;
      (*g_PrimarySurface->vtable->Blt)
                (g_PrimarySurface,(RECT *)0x0,(IDirectDrawSurface *)0x0,(RECT *)0x0,0x1000400,
                 auStack_164);
      (*g_BackBufferSurface->vtable->Blt)
                (g_BackBufferSurface,(RECT *)0x0,(IDirectDrawSurface *)0x0,(RECT *)0x0,0x1000400,
                 auStack_164);
      iVar3 = dll_dx7_cpp_FUN_10003100();
      if (iVar3 == 0) {
        _sprintf(acStack_100,"Unable to initialize Direct3D in %dx%dx%dbpp.   Your video card doesn't support this mode.");
                    /* WARNING: Subroutine does not return */
        dll_dx7_cpp_fatalError_FUN_10002340(acStack_100);
      }
      SetCursorPos(0x27f,0x1df);
      do {
        iVar3 = ShowCursor(0);
      } while (0 < iVar3);
      iVar3 = 3;
      do {
        dll_dx7_cpp_APIDLLclear_FUN_10004840();
        dll_dx7_cpp_APIDLLtoggle_FUN_100024b0();
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return 1;
    }
    (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
    uVar4 = 0xffffffff;
    pcVar7 = "FATAL ERROR!  Unable to attach Z buffer to back buffer.   Please restart the game and turn off hardware acceleration.";
    do {
      pcVar11 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar11 = pcVar7 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar11 + -uVar4;
    pcVar11 = (char *)&DAT_101386f0;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(uint *)pcVar11 = *(uint *)pcVar7;
      pcVar7 = pcVar7 + ((uint)bVar13 * -2 + 1) * 4;
      pcVar11 = pcVar11 + ((uint)bVar13 * -2 + 1) * 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar13 * -2 + 1;
      pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
    }
    MessageBoxA((HWND)0x0,(LPCSTR)&DAT_101386f0,"3D Adapter Error",0x10);
                    /* WARNING: Subroutine does not return */
    ExitProcess(0x29a);
  }
  (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
  uVar4 = 0xffffffff;
  pcVar7 = "FATAL ERROR!  Unable to create a Z buffer.   Your 3D adapter does not support a 16-bit Z buffer.  Please restart the game and turn off hardware acceleration.";
  do {
    pcVar11 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar7 + (uint)bVar13 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar11;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar11 + -uVar4;
  pcVar11 = (char *)&DAT_101386f0;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)pcVar11 = *(uint *)pcVar7;
    pcVar7 = pcVar7 + ((uint)bVar13 * -2 + 1) * 4;
    pcVar11 = pcVar11 + ((uint)bVar13 * -2 + 1) * 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar13 * -2 + 1;
    pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
  }
  MessageBoxA((HWND)0x0,(LPCSTR)&DAT_101386f0,"3D Adapter Error",0x10);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0x29a);
  while( true ) {
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar7 + (uint)bVar13 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar11;
    if (cVar1 == '\0') break;
code_r0x10002993:
    pcVar11 = pcVar7;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4;
  pcVar7 = pcVar11 + -uVar4;
  pcVar11 = (char *)&DAT_101386f0;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)pcVar11 = *(uint *)pcVar7;
    pcVar7 = pcVar7 + ((uint)bVar13 * -2 + 1) * 4;
    pcVar11 = pcVar11 + ((uint)bVar13 * -2 + 1) * 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar13 * -2 + 1;
    pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
  }
  MessageBoxA((HWND)0x0,(LPCSTR)&DAT_101386f0,"3D Adapter Error",0x10);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0x29a);
}
