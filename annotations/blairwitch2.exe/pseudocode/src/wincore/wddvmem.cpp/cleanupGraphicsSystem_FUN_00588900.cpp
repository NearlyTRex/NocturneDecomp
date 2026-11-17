// Name: wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_00588900
// Address: 00588900
// Address Range: [[00588900, 005889ba]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_00588900(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_00588900(void)

{
  if (g_PTR_00622010 != (byte *)0x0) {
    debugFree(g_PTR_00622010);
    g_PTR_00622010 = (byte *)0x0;
  }
  if (g_PTR_02661af0 != (byte *)0x0) {
    debugFree(g_PTR_02661af0);
    g_SoftwareZBuffer = (byte *)0x0;
  }
  engine_special_cpp_kill_FUN_0055f4d0();
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
