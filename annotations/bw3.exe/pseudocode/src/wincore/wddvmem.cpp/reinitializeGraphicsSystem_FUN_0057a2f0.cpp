// Name: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_0057a2f0
// Address: 0057a2f0
// Address Range: [[0057a2f0, 0057a3bd]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_0057a2f0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_0057a2f0(void)

{
  HRESULT HVar1;
  
  g_INT_02d0bcf8 = 0;
  if (g_INT_02cf5fcc == 0) {
    return;
  }
  engine_special_cpp_restoreVideoMode_FUN_00565be0();
  if (g_IUnknown_PTR_02d0bcec != (IUnknown *)0x0) {
    (*g_IUnknown_PTR_02d0bcec->vtable->Release)(g_IUnknown_PTR_02d0bcec);
    g_IUnknown_PTR_02d0bcec = (IUnknown *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02d0bce8 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02d0bce8->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02d0bce8);
    g_IDirectDrawSurface_PTR_02d0bce8 = (IDirectDrawSurface *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02d0bce4 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02d0bce4->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02d0bce4);
    g_IDirectDrawSurface_PTR_02d0bce4 = (IDirectDrawSurface *)0x0;
  }
  if (g_IDirectDraw_PTR_02d0bce0 != (IDirectDraw *)0x0) {
    (*g_IDirectDraw_PTR_02d0bce0->vtable->RestoreDisplayMode)(g_IDirectDraw_PTR_02d0bce0);
    (*g_IDirectDraw_PTR_02d0bce0->vtable->Release)((IUnknown *)g_IDirectDraw_PTR_02d0bce0);
    g_IDirectDraw_PTR_02d0bce0 = (IDirectDraw *)0x0;
  }
  HVar1 = DirectDrawCreate((GUID *)0x0,&g_IDirectDraw_PTR_02d0bce0,(IUnknown *)0x0);
  if (HVar1 == 0) {
    (*g_IDirectDraw_PTR_02d0bce0->vtable->SetCooperativeLevel)
              (g_IDirectDraw_PTR_02d0bce0,g_HWND_02d21b78,0x11);
  }
  wincore_wddvmem_cpp_setScreenResolution_FUN_00579bb0(g_INT_005fba18,g_INT_005fba1c,g_INT_005fba20)
  ;
  return;
}
