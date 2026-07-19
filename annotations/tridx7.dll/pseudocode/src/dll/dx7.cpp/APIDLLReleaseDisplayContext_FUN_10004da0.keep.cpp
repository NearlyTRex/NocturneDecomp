// Name: dll_dx7.cpp_APIDLLReleaseDisplayContext_FUN_10004da0
// Address: 10004da0
// MANUAL RECONSTRUCTION
// Address Range: [[10004da0, 10004e04]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_APIDLLReleaseDisplayContext_FUN_10004da0(HDC hdc)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_APIDLLReleaseDisplayContext_FUN_10004da0(HDC hdc)

{
                    /* 0x4da0  3  APIDLLReleaseDisplayContext */
  if (g_BackBufferSurface != (IDirectDrawSurface *)0x0) {
    (*g_BackBufferSurface->vtable->ReleaseDC)(g_BackBufferSurface,hdc);
    if (INT_10014230 != 0) {
      memset(&g_PrimarySurfaceDesc,0,sizeof(g_PrimarySurfaceDesc));
      g_PrimarySurfaceDesc.dwSize = 0x7c;
      (*g_BackBufferSurface->vtable->Lock)
                (g_BackBufferSurface,(RECT *)0x0,&g_PrimarySurfaceDesc,1,(void *)0x0);
      g_BackBufferLocked = 1;
      INT_10014230 = 0;
    }
  }
  return;
}
