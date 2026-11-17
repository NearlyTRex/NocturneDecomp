// Name: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005aca40
// Address: 005aca40
// Address Range: [[005aca40, 005acb0d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005aca40(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005aca40(void)

{
  HRESULT HVar1;
  
  g_GraphicsResetFlag = 0;
  if (g_INT_02c83370 == 0) {
    return;
  }
  engine_special_cpp_restoreVideoMode_FUN_00582310();
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
  if (g_DirectDrawObject != (IDirectDraw *)0x0) {
    (*g_DirectDrawObject->vtable->RestoreDisplayMode)(g_DirectDrawObject);
    (*g_DirectDrawObject->vtable->Release)((IUnknown *)g_DirectDrawObject);
    g_DirectDrawObject = (IDirectDraw *)0x0;
  }
  HVar1 = DirectDrawCreate((GUID *)0x0,&g_DirectDrawObject,(IUnknown *)0x0);
  if (HVar1 == 0) {
    (*g_DirectDrawObject->vtable->SetCooperativeLevel)(g_DirectDrawObject,g_MainWindowHandle,0x11);
  }
  wincore_wddvmem_cpp_setScreenResolution_FUN_005ac300(g_INT_0061b498,g_INT_0061b49c,g_INT_0061b4a0)
  ;
  return;
}
