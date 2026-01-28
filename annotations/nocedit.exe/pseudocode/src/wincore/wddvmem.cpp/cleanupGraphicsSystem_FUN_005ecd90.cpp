// Name: wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_005ecd90
// Address: 005ecd90
// Address Range: [[005ecd90, 005ece5e]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_005ecd90(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_005ecd90(void)

{
  if (g_BackBuffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_BackBuffer,"..\\wincore\\wddvmem.cpp",0xff);
    g_BackBuffer = (void *)0x0;
  }
  if (g_SoftwareFrameBuffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (g_SoftwareFrameBuffer,"..\\wincore\\wddvmem.cpp",0x107);
    g_SoftwareZBuffer = (void *)0x0;
  }
  wincore_windll_cpp_kill_FUN_005b71e0();
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
