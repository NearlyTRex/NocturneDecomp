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
    g_PTR_0072ffac = (byte *)0x0;
  }
  engine_special_cpp_kill_FUN_005657f0();
  if (g_IUnknown_PTR_02d0bcec != (IUnknown *)0x0) {
    (*g_IUnknown_PTR_02d0bcec->vtable->Release)(g_IUnknown_PTR_02d0bcec);
    g_IUnknown_PTR_02d0bcec = (IUnknown *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02d0bce8 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02d0bce8->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02d0bce8);
    g_IDirectDrawSurface_PTR_02d0bce8 = (IDirectDrawSurface *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02d0bce4 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02d0bce4->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02d0bce4);
    g_IDirectDrawSurface_PTR_02d0bce4 = (IDirectDrawSurface *)0x0;
  }
  if (g_IDirectDraw_PTR_02d0bce0 == (IDirectDraw *)0x0) {
    return;
  }
  (*g_IDirectDraw_PTR_02d0bce0->vtable->RestoreDisplayMode)(g_IDirectDraw_PTR_02d0bce0);
  (*g_IDirectDraw_PTR_02d0bce0->vtable->Release)((IUnknown *)g_IDirectDraw_PTR_02d0bce0);
  g_IDirectDraw_PTR_02d0bce0 = (IDirectDraw *)0x0;
  return;
}
