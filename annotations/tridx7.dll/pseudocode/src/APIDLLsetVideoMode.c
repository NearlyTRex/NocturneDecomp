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
  FILE *file;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int **ppiVar8;
  char *pcVar9;
  uint **ppuVar10;
  int *piVar11;
  char *pcVar12;
  byte bVar13;
  int *piStack_260;
  int **ppiStack_25c;
  int **ppiStack_258;
  int *piStack_254;
  uint *puStack_250;
  int **ppiStack_24c;
  uint uStack_248;
  int *piStack_244;
  uint uStack_240;
  int iStack_23c;
  uint uStack_238;
  uint uStack_234;
  int iStack_230;
  int *piStack_22c;
  uint uStack_1e8;
  byte auStack_1e4 [24];
  uint uStack_1cc;
  uint uStack_1c8;
  char acStack_198 [408];
  
                    /* 0x2500  31  APIDLLsetVideoMode */
  bVar13 = 0;
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
  piStack_22c = (int *)"Graphics";
  iStack_230 = 0x100025e6;
  FUN_10002b20();
  DAT_101398c8 = 0;
  if (0x1e0 < DAT_10014178) {
    piStack_22c = (int *)"Graphics";
    iStack_230 = 0x1000260f;
    FUN_10002b20();
  }
  DAT_10014164 = 0;
  piStack_22c = (int *)"Graphics";
  iStack_230 = 0x1000262e;
  FUN_10002b20();
  DAT_100141f0 = 0;
  piStack_22c = (int *)"Graphics";
  iStack_230 = 0x1000264b;
  FUN_10002b20();
  DAT_10014168 = 0;
  piStack_22c = (int *)"Graphics";
  iStack_230 = 0x10002668;
  FUN_10002b20();
  piStack_22c = (int *)0x1000267a;
  file = _fopen("system\\fly.ini","rb");
  if (file == (FILE *)0x0) {
    DAT_1001416c = 0;
  }
  else {
    DAT_1001416c = 1;
    _fclose(file);
  }
  DAT_10138fb4 = scanline_ptrs;
  if (0 < DAT_10014178) {
    puVar7 = &DAT_10225848;
    for (iVar4 = DAT_10014178; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *scanline_ptrs;
      scanline_ptrs = scanline_ptrs + (uint)bVar13 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
    }
  }
  uVar2 = DAT_1001417c;
  FUN_10002370();
  piStack_22c = DAT_10014188;
  iStack_230 = 0x100026dd;
  iVar4 = (**(code **)(*DAT_10014188 + 0x50))();
  uStack_234 = 0x100026e5;
  iStack_230 = iVar4;
  FUN_10001d70();
  if (iVar4 != 0) {
    return 0;
  }
  iStack_230 = 0;
  uStack_234 = 0;
  uStack_238 = uVar2;
  iStack_23c = DAT_10014178;
  uStack_240 = DAT_10014174;
  piStack_244 = DAT_10014188;
  uStack_248 = 0x10002717;
  iVar4 = (**(code **)(*DAT_10014188 + 0x54))();
  if (iVar4 != 0) {
    return 0;
  }
  puVar7 = &DAT_10226e88;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
  }
  DAT_10226e88 = 0x7c;
  DAT_10226e8c = 0x21;
  _DAT_10226e9c = 2;
  if (*g_ExternalRendererBridge.agp_texture_mode < 2) {
    _DAT_10226e9c = 1;
  }
  uStack_248 = 0;
  _DAT_10226ef0 = 0x6218;
  ppiStack_24c = &DAT_1001418c;
  puStack_250 = &DAT_10226e88;
  piStack_254 = DAT_10014188;
  ppiStack_258 = (int **)0x10002789;
  iVar4 = (**(code **)(*DAT_10014188 + 0x18))();
  if (iVar4 != 0) {
    ppiStack_258 = (int **)0x0;
    _DAT_10226e9c = 1;
    ppiStack_25c = &DAT_1001418c;
    piStack_260 = &DAT_10226e88;
    iVar4 = (**(code **)(*DAT_10014188 + 0x18))(DAT_10014188);
    if (iVar4 != 0) {
      ppiStack_258 = (int **)DAT_10014188;
      ppiStack_25c = (int **)0x100027bd;
      (**(code **)(*DAT_10014188 + 0x4c))();
      return 0;
    }
  }
  ppiStack_25c = (int **)&stack0xfffffddc;
  ppiStack_258 = &DAT_10014180;
  piStack_260 = DAT_1001418c;
  iVar4 = (**(code **)(*DAT_1001418c + 0x30))();
  if (iVar4 != 0) {
    (**(code **)(*DAT_10014188 + 0x4c))(DAT_10014188);
    return 0;
  }
  iVar4 = FUN_10002f40();
  if (iVar4 == 0) {
    (**(code **)(*DAT_10014188 + 0x4c))(DAT_10014188);
    return 0;
  }
  ppuVar10 = &puStack_250;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppuVar10 = (uint *)0x0;
    ppuVar10 = ppuVar10 + (uint)bVar13 * -2 + 1;
  }
  ppuVar10 = &puStack_250;
  uVar2 = (**(code **)(*DAT_100141dc + 0x28))(DAT_100141dc,&DAT_10012178,&LAB_10002b50);
  FUN_10001d70(uVar2);
  if (piStack_260 != (int *)0x20) {
    iVar4 = (**(code **)(*DAT_10014188 + 0x4c))(DAT_10014188);
    if (iVar4 != 0) {
      return 0;
    }
    FUN_10002340("Your 3D hardware needs to support a Z buffer");
    return 0;
  }
  piVar11 = &iStack_230;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
  }
  iStack_230 = 0x7c;
  piStack_22c = (int *)0x1007;
  uStack_1c8 = 0x20000;
  ppiVar8 = &piStack_260;
  puVar7 = &uStack_1e8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *ppiVar8;
    ppiVar8 = ppiVar8 + (uint)bVar13 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
  }
  iVar4 = (**(code **)(*DAT_10014188 + 0x18))(DAT_10014188,&iStack_230,&DAT_10014190,0);
  if (iVar4 == 0) {
    iVar4 = 0;
    DAT_10014170 = ppuVar10;
    if (0 < DAT_10226a48) {
      puVar7 = &DAT_10014198;
      do {
        iVar3 = (**(code **)(*DAT_10014188 + 0x18))(DAT_10014188,&uStack_240,puVar7,0);
        if (iVar3 != 0) {
          (**(code **)(*DAT_10014188 + 0x4c))(DAT_10014188);
          uVar5 = 0xffffffff;
          pcVar9 = "FATAL ERROR!  Unable to create a 2nd master Z buffer.   Your Direct3D driver does not support this.  Please restart the game and turn off hardware acceleration.";
          goto code_r0x10002993;
        }
        puVar7 = puVar7 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_10226a48);
    }
    iVar4 = (**(code **)(*DAT_10014180 + 0xc))(DAT_10014180,DAT_10014190);
    if (iVar4 == 0) {
      puVar7 = &uStack_1cc;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
      }
      uStack_1cc = 100;
      (**(code **)(*DAT_1001418c + 0x14))(DAT_1001418c,0,0,0,0x1000400,&uStack_1cc);
      (**(code **)(*DAT_10014180 + 0x14))(DAT_10014180,0,0,0,0x1000400,auStack_1e4);
      iVar4 = FUN_10003100();
      if (iVar4 == 0) {
        _sprintf(acStack_198,"Unable to initialize Direct3D in %dx%dx%dbpp.   Your video card doesn't support this mode.");
        FUN_10002340(acStack_198);
      }
      SetCursorPos(0x27f,0x1df);
      do {
        iVar4 = ShowCursor(0);
      } while (0 < iVar4);
      iVar4 = 3;
      do {
        APIDLLclear();
        APIDLLtoggle();
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return 1;
    }
    (**(code **)(*DAT_10014188 + 0x4c))(DAT_10014188);
    uVar5 = 0xffffffff;
    pcVar9 = "FATAL ERROR!  Unable to attach Z buffer to back buffer.   Please restart the game and turn off hardware acceleration.";
    do {
      pcVar12 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar12 = pcVar9 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar12;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar12 + -uVar5;
    pcVar12 = (char *)&DAT_101386f0;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(uint *)pcVar12 = *(uint *)pcVar9;
      pcVar9 = pcVar9 + ((uint)bVar13 * -2 + 1) * 4;
      pcVar12 = pcVar12 + ((uint)bVar13 * -2 + 1) * 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar12 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar13 * -2 + 1;
      pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
    }
    MessageBoxA((HWND)0x0,(LPCSTR)&DAT_101386f0,"3D Adapter Error",0x10);
                    /* WARNING: Subroutine does not return */
    ExitProcess(0x29a);
  }
  (**(code **)(*DAT_10014188 + 0x4c))(DAT_10014188);
  uVar5 = 0xffffffff;
  pcVar9 = "FATAL ERROR!  Unable to create a Z buffer.   Your 3D adapter does not support a 16-bit Z buffer.  Please restart the game and turn off hardware acceleration.";
  do {
    pcVar12 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar12 = pcVar9 + (uint)bVar13 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar9 = pcVar12 + -uVar5;
  pcVar12 = (char *)&DAT_101386f0;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(uint *)pcVar12 = *(uint *)pcVar9;
    pcVar9 = pcVar9 + ((uint)bVar13 * -2 + 1) * 4;
    pcVar12 = pcVar12 + ((uint)bVar13 * -2 + 1) * 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar13 * -2 + 1;
    pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
  }
  MessageBoxA((HWND)0x0,(LPCSTR)&DAT_101386f0,"3D Adapter Error",0x10);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0x29a);
  while( true ) {
    uVar5 = uVar5 - 1;
    pcVar12 = pcVar9 + (uint)bVar13 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
    if (cVar1 == '\0') break;
code_r0x10002993:
    pcVar12 = pcVar9;
    if (uVar5 == 0) break;
  }
  uVar5 = ~uVar5;
  pcVar9 = pcVar12 + -uVar5;
  pcVar12 = (char *)&DAT_101386f0;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(uint *)pcVar12 = *(uint *)pcVar9;
    pcVar9 = pcVar9 + ((uint)bVar13 * -2 + 1) * 4;
    pcVar12 = pcVar12 + ((uint)bVar13 * -2 + 1) * 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar13 * -2 + 1;
    pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
  }
  MessageBoxA((HWND)0x0,(LPCSTR)&DAT_101386f0,"3D Adapter Error",0x10);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0x29a);
}
