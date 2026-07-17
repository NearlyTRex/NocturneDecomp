// Name: dll_dx7.cpp_APIDLLReleaseDisplayContext_FUN_10004da0
// Address: 10004da0
// Address Range: [[10004da0, 10004e04]]
// Convention: unknown
// Signature: void dll_dx7_cpp_APIDLLReleaseDisplayContext_FUN_10004da0(HDC param_1)

#include "nocturne.h"

void dll_dx7_cpp_APIDLLReleaseDisplayContext_FUN_10004da0(HDC param_1)

{
  int iVar1;
  DDSURFACEDESC2 *pDVar2;
  byte bVar3;
  
                    /* 0x4da0  3  APIDLLReleaseDisplayContext */
  bVar3 = 0;
  if (g_BackBufferSurface != (IDirectDrawSurface *)0x0) {
    (*g_BackBufferSurface->vtable->ReleaseDC)(g_BackBufferSurface,param_1);
    if (INT_10014230 != 0) {
      pDVar2 = &g_PrimarySurfaceDesc;
      for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
        pDVar2->dwSize = 0;
        pDVar2 = (DDSURFACEDESC2 *)((int)pDVar2 + ((uint)bVar3 * -2 + 1) * 4);
      }
      g_PrimarySurfaceDesc.dwSize = 0x7c;
      (*g_BackBufferSurface->vtable->Lock)
                (g_BackBufferSurface,(RECT *)0x0,&g_PrimarySurfaceDesc,1,(void *)0x0);
      g_BackBufferLocked = 1;
      INT_10014230 = 0;
    }
  }
  return;
}
