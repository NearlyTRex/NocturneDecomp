// Name: wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_005ac1b0
// Address: 005ac1b0
// Address Range: [[005ac1b0, 005ac26a]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_005ac1b0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_005ac1b0(void)

{
  if (g_PTR_00629010 != (byte *)0x0) {
    debugFree(g_PTR_00629010);
    g_PTR_00629010 = (byte *)0x0;
  }
  if (g_PTR_02c99310 != (byte *)0x0) {
    debugFree(g_PTR_02c99310);
    g_PTR_0071362c = (byte *)0x0;
  }
  engine_special_cpp_kill_FUN_00581f20();
  if (g_IUnknown_PTR_02c9930c != (IUnknown *)0x0) {
    (*g_IUnknown_PTR_02c9930c->vtable->Release)(g_IUnknown_PTR_02c9930c);
    g_IUnknown_PTR_02c9930c = (IUnknown *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02c99308 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02c99308->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02c99308);
    g_IDirectDrawSurface_PTR_02c99308 = (IDirectDrawSurface *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02c99304 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02c99304->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02c99304);
    g_IDirectDrawSurface_PTR_02c99304 = (IDirectDrawSurface *)0x0;
  }
  if (g_IDirectDraw_PTR_02c99300 == (IDirectDraw *)0x0) {
    return;
  }
  (*g_IDirectDraw_PTR_02c99300->vtable->RestoreDisplayMode)(g_IDirectDraw_PTR_02c99300);
  (*g_IDirectDraw_PTR_02c99300->vtable->Release)((IUnknown *)g_IDirectDraw_PTR_02c99300);
  g_IDirectDraw_PTR_02c99300 = (IDirectDraw *)0x0;
  return;
}
