// Name: engine_2d.c_reinitializeGraphicsSystem_FUN_00402a80
// Address: 00402a80
// Address Range: [[00402a80, 00402a84]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00402a80(void)

#include "nocturne.h"

void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00402a80(void)

{
  HRESULT HVar1;
  
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
  HVar1 = DirectDrawCreate((GUID *)0x0,&g_DirectDrawObject,(IUnknown *)0x0);
  if (HVar1 == 0) {
    (*g_DirectDrawObject->vtable->SetCooperativeLevel)(g_DirectDrawObject,g_MainWindowHandle,0x11);
  }
  wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
  return;
}
