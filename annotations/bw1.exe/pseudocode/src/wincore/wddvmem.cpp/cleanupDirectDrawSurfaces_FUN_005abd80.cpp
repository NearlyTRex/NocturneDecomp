// Name: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_005abd80
// Address: 005abd80
// Address Range: [[005abd80, 005abdd8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_005abd80(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_005abd80(void)

{
  if (g_IUnknown_PTR_02c9930c != (IUnknown *)0x0) {
    (*g_IUnknown_PTR_02c9930c->vtable->Release)(g_IUnknown_PTR_02c9930c);
    g_IUnknown_PTR_02c9930c = (IUnknown *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02c99308 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02c99308->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02c99308);
    g_IDirectDrawSurface_PTR_02c99308 = (IDirectDrawSurface *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02c99304 == (IDirectDrawSurface *)0x0) {
    return;
  }
  (*g_IDirectDrawSurface_PTR_02c99304->vtable->Release)
            ((IUnknown *)g_IDirectDrawSurface_PTR_02c99304);
  g_IDirectDrawSurface_PTR_02c99304 = (IDirectDrawSurface *)0x0;
  return;
}
