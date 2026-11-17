// Name: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_005abd80
// Address: 005abd80
// Address Range: [[005abd80, 005abdd8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_005abd80(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_005abd80(void)

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
