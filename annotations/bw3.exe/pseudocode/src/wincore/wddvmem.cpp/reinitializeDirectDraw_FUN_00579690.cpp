// Name: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_00579690
// Address: 00579690
// Address Range: [[00579690, 0057973b]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_00579690(void)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_00579690(void)

{
  HRESULT HVar1;
  
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
    HVar1 = (*g_IDirectDraw_PTR_02d0bce0->vtable->SetCooperativeLevel)
                      (g_IDirectDraw_PTR_02d0bce0,g_HWND_02d21b78,0x11);
    if (HVar1 == 0) {
      return 1;
    }
  }
  return 0;
}
