// Name: dll_dx7.cpp_FUN_10002dc0
// Address: 10002dc0
// Address Range: [[10002dc0, 10002e1b]]
// Convention: unknown
// Signature: undefined4 dll_dx7_cpp_FUN_10002dc0(void)

#include "nocturne.h"

uint dll_dx7_cpp_FUN_10002dc0(void)

{
  int iVar1;
  void *pvVar2;
  void **ppvVar3;
  
  if (DAT_100141f4 != 0) {
    return 1;
  }
  iVar1 = dll_dx7_cpp_FUN_10002e20((int *)g_BackBufferSurface,&g_PrimarySurfaceDesc.dwSize);
  if (iVar1 != 0) {
    iVar1 = g_ScreenHeight;
    pvVar2 = g_PrimarySurfaceDesc.lpSurface;
    ppvVar3 = g_ScanlinePtrBase;
    if (0 < g_ScreenHeight) {
      do {
        *ppvVar3 = pvVar2;
        iVar1 = iVar1 + -1;
        pvVar2 = (void *)((int)pvVar2 + g_PrimarySurfaceDesc.dwPitchOrLinearSize.lPitch);
        ppvVar3 = ppvVar3 + 1;
      } while (iVar1 != 0);
    }
    DAT_100141f4 = 1;
    return 1;
  }
  return 0;
}
