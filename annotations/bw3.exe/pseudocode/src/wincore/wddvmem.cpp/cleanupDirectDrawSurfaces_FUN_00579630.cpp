// Name: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_00579630
// Address: 00579630
// Address Range: [[00579630, 00579688]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_00579630(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_00579630(void)

{
  if (g_DirectDrawUnknown != (IUnknown *)0x0) {
    (*g_DirectDrawUnknown->vtable->Release)(g_DirectDrawUnknown);
    g_DirectDrawUnknown = (IUnknown *)0x0;
  }
  if (g_SoftwareRenderSurface != (IDirectDrawSurface *)0x0) {
    (*g_SoftwareRenderSurface->vtable->Release)((IUnknown *)g_SoftwareRenderSurface);
    g_SoftwareRenderSurface = (IDirectDrawSurface *)0x0;
  }
  if (g_DirectDrawSurface == (IDirectDrawSurface *)0x0) {
    return;
  }
  (*g_DirectDrawSurface->vtable->Release)((IUnknown *)g_DirectDrawSurface);
  g_DirectDrawSurface = (IDirectDrawSurface *)0x0;
  return;
}
