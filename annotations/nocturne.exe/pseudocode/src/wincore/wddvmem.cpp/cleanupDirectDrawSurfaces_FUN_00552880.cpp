// Name: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_00552880
// Address: 00552880
// Address Range: [[00552880, 005528d8]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_00552880(void)

#include "nocturne.h"

void wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_00552880(void)

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
