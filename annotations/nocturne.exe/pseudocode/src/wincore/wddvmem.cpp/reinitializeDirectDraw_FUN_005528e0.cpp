// Name: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005528e0
// Address: 005528e0
// Address Range: [[005528e0, 0055298b]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005528e0(void)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005528e0(void)

{
  HRESULT HVar1;
  
  if (g_DirectDrawUnknown != (IUnknown *)0x0) {
    (*g_DirectDrawUnknown->vtable->Release)(g_DirectDrawUnknown);
    g_DirectDrawUnknown = (IUnknown *)0x0;
  }
  if (g_SoftwareRenderSurface != (IDirectDrawSurface *)0x0) {
    (*g_SoftwareRenderSurface->vtable->Release)((IUnknown *)g_SoftwareRenderSurface);
    g_SoftwareRenderSurface = (IDirectDrawSurface *)0x0;
  }
  if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
    (*g_DirectDrawSurface->vtable->Release)((IUnknown *)g_DirectDrawSurface);
    g_DirectDrawSurface = (IDirectDrawSurface *)0x0;
  }
  if (g_DirectDrawObject != (IDirectDraw *)0x0) {
    (*g_DirectDrawObject->vtable->RestoreDisplayMode)(g_DirectDrawObject);
    (*g_DirectDrawObject->vtable->Release)((IUnknown *)g_DirectDrawObject);
    g_DirectDrawObject = (IDirectDraw *)0x0;
  }
  HVar1 = DirectDrawCreate((GUID *)0x0,&g_DirectDrawObject,(IUnknown *)0x0);
  if (HVar1 == 0) {
    HVar1 = (*g_DirectDrawObject->vtable->SetCooperativeLevel)
                      (g_DirectDrawObject,g_HWND_02de2098,0x11);
    if (HVar1 == 0) {
      return 1;
    }
  }
  return 0;
}
