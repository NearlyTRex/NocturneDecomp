// Name: wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_00579a60
// Address: 00579a60
// Address Range: [[00579a60, 00579b1a]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_00579a60(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_00579a60(void)

{
  if (g_PTR_0060b010 != (byte *)0x0) {
    debugFree(g_PTR_0060b010);
    g_PTR_0060b010 = (byte *)0x0;
  }
  if (g_PTR_02d0bcf0 != (byte *)0x0) {
    debugFree(g_PTR_02d0bcf0);
    g_SoftwareZBuffer = (byte *)0x0;
  }
  engine_special_cpp_kill_FUN_005657f0();
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
  if (g_DirectDrawObject == (IDirectDraw *)0x0) {
    return;
  }
  (*g_DirectDrawObject->vtable->RestoreDisplayMode)(g_DirectDrawObject);
  (*g_DirectDrawObject->vtable->Release)((IUnknown *)g_DirectDrawObject);
  g_DirectDrawObject = (IDirectDraw *)0x0;
  return;
}
