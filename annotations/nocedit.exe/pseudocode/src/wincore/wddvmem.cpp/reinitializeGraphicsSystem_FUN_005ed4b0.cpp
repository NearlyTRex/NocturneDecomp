// Name: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005ed4b0
// Address: 005ed4b0
// Address Range: [[005ed4b0, 005ed57d]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005ed4b0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005ed4b0(void)

{
  HRESULT HVar1;
  uint uStack0000000c;
  
  g_GraphicsResetFlag = 0;
  if (g_FullscreenMode == 0) {
    return;
  }
  wincore_windll_cpp_restoreVideoMode_FUN_005b75b0();
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
  HVar1 = crt_ddraw_c_DirectDrawCreate((GUID *)0x0,&g_DirectDrawObject,(IUnknown *)0x0);
  if (HVar1 == 0) {
    (*g_DirectDrawObject->vtable->SetCooperativeLevel)(g_DirectDrawObject,g_MainWindowHandle,0x11);
  }
  uStack0000000c = 0x5ed576;
  wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
  return;
}
