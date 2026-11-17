// Name: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_00588ff0
// Address: 00588ff0
// Address Range: [[00588ff0, 005890bd]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_00588ff0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_00588ff0(void)

{
  HRESULT HVar1;
  
  g_INT_02661af8 = 0;
  if (g_INT_0264bba0 == 0) {
    return;
  }
  engine_special_cpp_restoreVideoMode_FUN_0055f8c0();
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
    (*g_IDirectDraw_PTR_02661ae0->vtable->SetCooperativeLevel)
              (g_IDirectDraw_PTR_02661ae0,g_HWND_02664628,0x11);
  }
  wincore_wddvmem_cpp_setScreenResolution_FUN_00588a50(g_INT_006141b8,g_INT_006141bc,g_INT_006141c0)
  ;
  return;
}
