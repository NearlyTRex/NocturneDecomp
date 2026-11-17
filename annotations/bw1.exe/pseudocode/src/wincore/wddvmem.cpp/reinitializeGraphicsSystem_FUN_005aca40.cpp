// Name: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005aca40
// Address: 005aca40
// Address Range: [[005aca40, 005acb0d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005aca40(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005aca40(void)

{
  HRESULT HVar1;
  
  g_INT_02c99318 = 0;
  if (g_INT_02c83370 == 0) {
    return;
  }
  engine_special_cpp_restoreVideoMode_FUN_00582310();
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
    (*g_IDirectDraw_PTR_02c99300->vtable->SetCooperativeLevel)
              (g_IDirectDraw_PTR_02c99300,g_HWND_02c9be68,0x11);
  }
  wincore_wddvmem_cpp_setScreenResolution_FUN_005ac300(g_INT_0061b498,g_INT_0061b49c,g_INT_0061b4a0)
  ;
  return;
}
