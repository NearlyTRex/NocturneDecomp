// Name: dll_dx7.cpp_lockBackBuffer_FUN_10002dc0
// Address: 10002dc0
// MANUAL RECONSTRUCTION
// Address Range: [[10002dc0, 10002e1b]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_lockBackBuffer_FUN_10002dc0(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_lockBackBuffer_FUN_10002dc0(void)

{
  int iVar1;
  char *scanline;
  void **ppvVar3;
  
  if (g_BackBufferLocked != 0) {
    return 1;
  }
  iVar1 = dll_dx7_cpp_lockSurface_FUN_10002e20(g_BackBufferSurface,&g_PrimarySurfaceDesc);
  if (iVar1 != 0) {
    iVar1 = g_ScreenHeight;
    scanline = (char *)g_PrimarySurfaceDesc.lpSurface;
    ppvVar3 = g_ScanlinePtrBase;
    if (0 < g_ScreenHeight) {
      do {
        *ppvVar3 = scanline;
        iVar1 = iVar1 + -1;
        scanline = scanline + g_PrimarySurfaceDesc.dwPitchOrLinearSize.lPitch;
        ppvVar3 = ppvVar3 + 1;
      } while (iVar1 != 0);
    }
    g_BackBufferLocked = 1;
    return 1;
  }
  return 0;
}
