// Name: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_00588530
// Address: 00588530
// Address Range: [[00588530, 005885db]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_00588530(void)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_00588530(void)

{
  HRESULT HVar1;
  
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
  if (g_IDirectDraw_PTR_02661ae0 != (IDirectDraw *)0x0) {
    (*g_IDirectDraw_PTR_02661ae0->vtable->RestoreDisplayMode)(g_IDirectDraw_PTR_02661ae0);
    (*g_IDirectDraw_PTR_02661ae0->vtable->Release)((IUnknown *)g_IDirectDraw_PTR_02661ae0);
    g_IDirectDraw_PTR_02661ae0 = (IDirectDraw *)0x0;
  }
  HVar1 = DirectDrawCreate((GUID *)0x0,&g_IDirectDraw_PTR_02661ae0,(IUnknown *)0x0);
  if (HVar1 == 0) {
    HVar1 = (*g_IDirectDraw_PTR_02661ae0->vtable->SetCooperativeLevel)
                      (g_IDirectDraw_PTR_02661ae0,g_HWND_02664628,0x11);
    if (HVar1 == 0) {
      return 1;
    }
  }
  return 0;
}
