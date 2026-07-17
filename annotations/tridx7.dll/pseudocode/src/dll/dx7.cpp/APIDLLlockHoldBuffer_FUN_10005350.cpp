// Name: dll_dx7.cpp_APIDLLlockHoldBuffer_FUN_10005350
// Address: 10005350
// Address Range: [[10005350, 10005392]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLlockHoldBuffer_FUN_10005350(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLlockHoldBuffer_FUN_10005350(void)

{
  int iVar1;
  void *pvVar2;
  void **ppvVar3;
  
                    /* 0x5350  22  APIDLLlockHoldBuffer */
  iVar1 = dll_dx7_cpp_lockSurface_FUN_10002e20(g_HoldBufferSurface,&g_PrimarySurfaceDesc);
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
    return 1;
  }
  return 0;
}
