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
    g_PTR_0070c62c = (byte *)0x0;
  }
  engine_special_cpp_kill_FUN_0055f4d0();
  if (g_IUnknown_PTR_02661aec != (IUnknown *)0x0) {
    (*g_IUnknown_PTR_02661aec->vtable->Release)(g_IUnknown_PTR_02661aec);
    g_IUnknown_PTR_02661aec = (IUnknown *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02661ae8 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02661ae8->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02661ae8);
    g_IDirectDrawSurface_PTR_02661ae8 = (IDirectDrawSurface *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02661ae4 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02661ae4->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02661ae4);
    g_IDirectDrawSurface_PTR_02661ae4 = (IDirectDrawSurface *)0x0;
  }
  if (g_IDirectDraw_PTR_02661ae0 == (IDirectDraw *)0x0) {
    return;
  }
  (*g_IDirectDraw_PTR_02661ae0->vtable->RestoreDisplayMode)(g_IDirectDraw_PTR_02661ae0);
  (*g_IDirectDraw_PTR_02661ae0->vtable->Release)((IUnknown *)g_IDirectDraw_PTR_02661ae0);
  g_IDirectDraw_PTR_02661ae0 = (IDirectDraw *)0x0;
  return;
}
