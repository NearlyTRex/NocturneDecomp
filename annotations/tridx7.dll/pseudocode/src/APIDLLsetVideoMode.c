// Name: APIDLLsetVideoMode
// Address: 10002500
// Address Range: [[10002500, 10002b1a]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLsetVideoMode(void **scanline_ptrs)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl APIDLLsetVideoMode(void **scanline_ptrs)

{
  char cVar1;
  _FILE *file;
  HRESULT HVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint **unaff_EBP;
  IDirectDrawSurface **surface;
  DWORD *pDVar8;
  char *pcVar9;
  DDSURFACEDESC *pDVar10;
  DDPIXELFORMAT *pDVar11;
  char *pcVar12;
  uint *puVar13;
  byte bVar14;
  int *piVar15;
  DDSURFACEDESC DStack_1fc;
  uint auStack_188 [13];
  char acStack_154 [340];
  
                    /* 0x2500  31  APIDLLsetVideoMode */
  bVar14 = 0;
  if (g_NonLocalVideoMem == 0) {
    *g_ExternalRendererBridge.agp_texture_mode = 0;
  }
  if (*g_ExternalRendererBridge.agp_texture_mode == 0) {
    _DAT_10226848 = 0x80;
    _DAT_1022684c = 0x40;
    _DAT_10226850 = 0x20;
    _DAT_10226854 = 0x10;
    _DAT_10226858 = 8;
    _DAT_1022685c = 4;
    _DAT_10226860 = 2;
    _DAT_10226864 = 1;
  }
  else {
    _DAT_10226848 = 0x100;
    _DAT_1022684c = 0x80;
    _DAT_10226850 = 0x40;
    _DAT_10226854 = 0x20;
    _DAT_10226858 = 0x10;
    _DAT_1022685c = 8;
    _DAT_10226860 = 4;
    _DAT_10226864 = 2;
  }
  DAT_10226a48 = 0;
  FUN_10002b20();
  DAT_101398c8 = 0;
  if (0x1e0 < (int)DAT_10014178) {
    FUN_10002b20();
  }
  DAT_10014164 = 0;
  FUN_10002b20();
  DAT_100141f0 = 0;
  FUN_10002b20();
  DAT_10014168 = 0;
  FUN_10002b20();
  file = _fopen("system\\fly.ini","rb");
  if (file == (_FILE *)0x0) {
    DAT_1001416c = 0;
  }
  else {
    DAT_1001416c = 1;
    _fclose(file);
  }
  DAT_10138fb4 = scanline_ptrs;
  if (0 < (int)DAT_10014178) {
    puVar13 = &DAT_10225848;
    for (DVar4 = DAT_10014178; DVar4 != 0; DVar4 = DVar4 - 1) {
      *puVar13 = *scanline_ptrs;
      scanline_ptrs = scanline_ptrs + (uint)bVar14 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
    }
  }
  DVar4 = DAT_1001417c;
  FUN_10002370();
  HVar2 = (*g_DirectDraw4->vtable->SetCooperativeLevel)(g_DirectDraw4,(char)g_WindowHandle,0x11);
  FUN_10001d70();
  if (HVar2 != 0) {
    return 0;
  }
  HVar2 = (*g_DirectDraw4->vtable->SetDisplayMode)
                    (g_DirectDraw4,DAT_10014174,DAT_10014178,DVar4,0,0);
  if (HVar2 != 0) {
    return 0;
  }
  puVar13 = &DAT_10226e88;
  for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
  }
  DAT_10226e88 = 0x7c;
  DAT_10226e8c = 0x21;
  _DAT_10226e9c = 2;
  if (*g_ExternalRendererBridge.agp_texture_mode < 2) {
    _DAT_10226e9c = 1;
  }
  _DAT_10226ef0 = 0x6218;
  HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                    (g_DirectDraw4,(DDSURFACEDESC *)&DAT_10226e88,
                     (IDirectDrawSurface **)&DAT_1001418c,(IUnknown *)0x0);
  if (HVar2 != 0) {
    _DAT_10226e9c = 1;
    HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                      (g_DirectDraw4,(DDSURFACEDESC *)&DAT_10226e88,
                       (IDirectDrawSurface **)&DAT_1001418c,(IUnknown *)0x0);
    if (HVar2 != 0) {
      (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
      return 0;
    }
  }
  DStack_1fc.dwWidth = 0x2004;
  piVar15 = DAT_1001418c;
  iVar5 = (**(code **)(*DAT_1001418c + 0x30))();
  if (iVar5 != 0) {
    (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
    return 0;
  }
  iVar5 = FUN_10002f40();
  if (iVar5 == 0) {
    (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
    return 0;
  }
  puVar13 = (uint *)&stack0xfffffde4;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
  }
  uVar3 = (**(code **)(*DAT_100141dc + 0x28))
                    (DAT_100141dc,&DAT_10012178,&LAB_10002b50,&stack0xfffffde4);
  FUN_10001d70(uVar3);
  if (piVar15 != (int *)0x20) {
    HVar2 = (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
    if (HVar2 != 0) {
      return 0;
    }
    FUN_10002340("Your 3D hardware needs to support a Z buffer");
    return 0;
  }
  pDVar10 = &DStack_1fc;
  for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
    pDVar10->dwSize = 0;
    pDVar10 = (DDSURFACEDESC *)((int)pDVar10 + ((uint)bVar14 * -2 + 1) * 4);
  }
  DStack_1fc.dwWidth = DAT_10014174;
  DStack_1fc.dwHeight = DAT_10014178;
  DStack_1fc.dwSize = 0x7c;
  DStack_1fc.dwFlags = 0x1007;
  DStack_1fc.ddsCaps.dwCaps = 0x20000;
  pDVar8 = (DWORD *)&stack0xfffffdd4;
  pDVar11 = &DStack_1fc.ddpfPixelFormat;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    pDVar11->dwSize = *pDVar8;
    pDVar8 = pDVar8 + (uint)bVar14 * -2 + 1;
    pDVar11 = (DDPIXELFORMAT *)((int)pDVar11 + ((uint)bVar14 * -2 + 1) * 4);
  }
  HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                    (g_DirectDraw4,&DStack_1fc,(IDirectDrawSurface **)&DAT_10014190,(IUnknown *)0x0)
  ;
  if (HVar2 == 0) {
    iVar5 = 0;
    DAT_10014170 = unaff_EBP;
    if (0 < DAT_10226a48) {
      surface = (IDirectDrawSurface **)&DAT_10014198;
      do {
        HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                          (g_DirectDraw4,&DStack_1fc,surface,(IUnknown *)0x0);
        if (HVar2 != 0) {
          (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
          uVar6 = 0xffffffff;
          pcVar9 = "FATAL ERROR!  Unable to create a 2nd master Z buffer.   Your Direct3D driver does not support this.  Please restart the game and turn off hardware acceleration.";
          goto code_r0x10002993;
        }
        surface = surface + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_10226a48);
    }
    iVar5 = (**(code **)(*DAT_10014180 + 0xc))(DAT_10014180,DAT_10014190);
    if (iVar5 == 0) {
      puVar13 = auStack_188;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
      }
      auStack_188[0] = 100;
      (**(code **)(*DAT_1001418c + 0x14))(DAT_1001418c,0,0,0,0x1000400,auStack_188);
      (**(code **)(*DAT_10014180 + 0x14))
                (DAT_10014180,0,0,0,0x1000400,&DStack_1fc.ddpfPixelFormat.dwGreenUMask);
      iVar5 = FUN_10003100();
      if (iVar5 == 0) {
        _sprintf(acStack_154,"Unable to initialize Direct3D in %dx%dx%dbpp.   Your video card doesn't support this mode.");
        FUN_10002340(acStack_154);
      }
      SetCursorPos(0x27f,0x1df);
      do {
        iVar5 = ShowCursor(0);
      } while (0 < iVar5);
      iVar5 = 3;
      do {
        APIDLLclear();
        APIDLLtoggle();
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return 1;
    }
    (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
    uVar6 = 0xffffffff;
    pcVar9 = "FATAL ERROR!  Unable to attach Z buffer to back buffer.   Please restart the game and turn off hardware acceleration.";
    do {
      pcVar12 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar9 + (uint)bVar14 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar9 = pcVar12 + -uVar6;
    pcVar12 = (char *)&DAT_101386f0;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(uint *)pcVar12 = *(uint *)pcVar9;
      pcVar9 = pcVar9 + ((uint)bVar14 * -2 + 1) * 4;
      pcVar12 = pcVar12 + ((uint)bVar14 * -2 + 1) * 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
      pcVar12 = pcVar12 + (uint)bVar14 * -2 + 1;
    }
    MessageBoxA((HWND)0x0,(LPCSTR)&DAT_101386f0,"3D Adapter Error",0x10);
                    /* WARNING: Subroutine does not return */
    ExitProcess(0x29a);
  }
  (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
  uVar6 = 0xffffffff;
  pcVar9 = "FATAL ERROR!  Unable to create a Z buffer.   Your 3D adapter does not support a 16-bit Z buffer.  Please restart the game and turn off hardware acceleration.";
  do {
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + (uint)bVar14 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = (char *)&DAT_101386f0;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(uint *)pcVar12 = *(uint *)pcVar9;
    pcVar9 = pcVar9 + ((uint)bVar14 * -2 + 1) * 4;
    pcVar12 = pcVar12 + ((uint)bVar14 * -2 + 1) * 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
    pcVar12 = pcVar12 + (uint)bVar14 * -2 + 1;
  }
  MessageBoxA((HWND)0x0,(LPCSTR)&DAT_101386f0,"3D Adapter Error",0x10);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0x29a);
  while( true ) {
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + (uint)bVar14 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
    if (cVar1 == '\0') break;
code_r0x10002993:
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
  }
  uVar6 = ~uVar6;
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = (char *)&DAT_101386f0;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(uint *)pcVar12 = *(uint *)pcVar9;
    pcVar9 = pcVar9 + ((uint)bVar14 * -2 + 1) * 4;
    pcVar12 = pcVar12 + ((uint)bVar14 * -2 + 1) * 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
    pcVar12 = pcVar12 + (uint)bVar14 * -2 + 1;
  }
  MessageBoxA((HWND)0x0,(LPCSTR)&DAT_101386f0,"3D Adapter Error",0x10);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0x29a);
}
