// Name: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_0057a2f0
// Address: 0057a2f0
// Address Range: [[0057a2f0, 0057a3bd]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_0057a2f0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_0057a2f0(void)

{
  HRESULT HVar1;
  
  g_GraphicsResetFlag = 0;
  if (g_INT_02cf5fcc == 0) {
    return;
  }
  engine_special_cpp_restoreVideoMode_FUN_00565be0();
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
  wincore_wddvmem_cpp_setScreenResolution_FUN_00579bb0(g_INT_005fba18,g_INT_005fba1c,g_INT_005fba20)
  ;
  return;
}
