// Name: dll_dx7.cpp_APIDLLunlockHoldBuffer_FUN_100053a0
// Address: 100053a0
// MANUAL RECONSTRUCTION
// Address Range: [[100053a0, 100053ff]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLunlockHoldBuffer_FUN_100053a0(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLunlockHoldBuffer_FUN_100053a0(void)

{
  int iVar1;

                    /* 0x53a0  36  APIDLLunlockHoldBuffer */
  if (0 < g_ScreenHeight) {
    memcpy(g_ScanlinePtrBase,g_ScanlinePointers,
           g_ScreenHeight * sizeof(g_ScanlinePointers[0]));
  }
  iVar1 = dll_dx7_cpp_unlockSurface_FUN_10002cb0(g_HoldBufferSurface);
  if (iVar1 == 0) {
    return 0;
  }
  if (g_BackBufferSurface == (IDirectDrawSurface *)0x0) {
    return 0;
  }
  (*g_BackBufferSurface->vtable->Blt)
            (g_BackBufferSurface,(RECT *)0x0,g_HoldBufferSurface,(RECT *)0x0,0,(DDBLTFX *)0x0);
  return 1;
}
