// Name: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_005ec920
// Address: 005ec920
// Address Range: [[005ec920, 005ec978]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_005ec920(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_005ec920(void)

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
