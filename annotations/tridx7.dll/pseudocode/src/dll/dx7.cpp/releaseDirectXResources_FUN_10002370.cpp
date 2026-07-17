// Name: dll_dx7.cpp_releaseDirectXResources_FUN_10002370
// Address: 10002370
// Address Range: [[10002370, 1000245a]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_releaseDirectXResources_FUN_10002370(void)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_releaseDirectXResources_FUN_10002370(void)

{
  IDirectDrawSurface *this_ptr;
  int iVar1;
  IDirectDrawSurface **ppIVar2;
  
  dll_dx7_cpp_FUN_10002ea0();
  if (g_HoldBufferSurface != (IDirectDrawSurface *)0x0) {
    (*g_HoldBufferSurface->vtable->Release)((IUnknown *)g_HoldBufferSurface);
    g_HoldBufferSurface = (IDirectDrawSurface *)0x0;
  }
  if (g_Viewport != (IDirect3DViewport3 *)0x0) {
    (*g_Viewport->vtable->Release)((IUnknown *)g_Viewport);
    g_Viewport = (IDirect3DViewport3 *)0x0;
  }
  if (g_Device != (IDirect3DDevice3 *)0x0) {
    (*g_Device->vtable->Release)((IUnknown *)g_Device);
    g_Device = (IDirect3DDevice3 *)0x0;
  }
  if (g_Direct3D3 != (IDirect3D3 *)0x0) {
    (*g_Direct3D3->vtable->Release)((IUnknown *)g_Direct3D3);
    g_Direct3D3 = (IDirect3D3 *)0x0;
  }
  if (g_ZBufferSurface != (IDirectDrawSurface *)0x0) {
    (*g_ZBufferSurface->vtable->Release)((IUnknown *)g_ZBufferSurface);
    g_ZBufferSurface = (IDirectDrawSurface *)0x0;
  }
  iVar1 = 0;
  if (0 < g_MasterZBufferCount) {
    ppIVar2 = g_MasterZBufferSurfaces;
    do {
      this_ptr = *ppIVar2;
      if (this_ptr != (IDirectDrawSurface *)0x0) {
        (*this_ptr->vtable->Release)((IUnknown *)this_ptr);
        *ppIVar2 = (IDirectDrawSurface *)0x0;
      }
      ppIVar2 = ppIVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < g_MasterZBufferCount);
  }
  if (g_PrimarySurface != (IDirectDrawSurface *)0x0) {
    (*g_PrimarySurface->vtable->Release)((IUnknown *)g_PrimarySurface);
    g_PrimarySurface = (IDirectDrawSurface *)0x0;
  }
  return;
}
