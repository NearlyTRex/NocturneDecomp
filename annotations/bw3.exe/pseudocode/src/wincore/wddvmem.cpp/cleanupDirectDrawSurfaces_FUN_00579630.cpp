// Name: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_00579630
// Address: 00579630
// Address Range: [[00579630, 00579688]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_00579630(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_00579630(void)

{
  if (g_IUnknown_PTR_02d0bcec != (IUnknown *)0x0) {
    (*g_IUnknown_PTR_02d0bcec->vtable->Release)(g_IUnknown_PTR_02d0bcec);
    g_IUnknown_PTR_02d0bcec = (IUnknown *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02d0bce8 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02d0bce8->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02d0bce8);
    g_IDirectDrawSurface_PTR_02d0bce8 = (IDirectDrawSurface *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02d0bce4 == (IDirectDrawSurface *)0x0) {
    return;
  }
  (*g_IDirectDrawSurface_PTR_02d0bce4->vtable->Release)
            ((IUnknown *)g_IDirectDrawSurface_PTR_02d0bce4);
  g_IDirectDrawSurface_PTR_02d0bce4 = (IDirectDrawSurface *)0x0;
  return;
}
