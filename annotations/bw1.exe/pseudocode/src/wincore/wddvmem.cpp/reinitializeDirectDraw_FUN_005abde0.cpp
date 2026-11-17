// Name: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005abde0
// Address: 005abde0
// Address Range: [[005abde0, 005abe8b]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005abde0(void)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005abde0(void)

{
  HRESULT HVar1;
  
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
  if (g_IDirectDraw_PTR_02c99300 != (IDirectDraw *)0x0) {
    (*g_IDirectDraw_PTR_02c99300->vtable->RestoreDisplayMode)(g_IDirectDraw_PTR_02c99300);
    (*g_IDirectDraw_PTR_02c99300->vtable->Release)((IUnknown *)g_IDirectDraw_PTR_02c99300);
    g_IDirectDraw_PTR_02c99300 = (IDirectDraw *)0x0;
  }
  HVar1 = DirectDrawCreate((GUID *)0x0,&g_IDirectDraw_PTR_02c99300,(IUnknown *)0x0);
  if (HVar1 == 0) {
    HVar1 = (*g_IDirectDraw_PTR_02c99300->vtable->SetCooperativeLevel)
                      (g_IDirectDraw_PTR_02c99300,g_HWND_02c9be68,0x11);
    if (HVar1 == 0) {
      return 1;
    }
  }
  return 0;
}
