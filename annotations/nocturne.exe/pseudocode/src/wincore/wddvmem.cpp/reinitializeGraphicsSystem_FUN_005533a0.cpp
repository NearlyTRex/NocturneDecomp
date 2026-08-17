// Name: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005533a0
// Address: 005533a0
// Address Range: [[005533a0, 0055346d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005533a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005533a0(void)

{
  HRESULT HVar1;
  
  _DAT_02ddf568 = 0;
  if (g_UseDirect3D == 0) {
    return;
  }
  engine_special_cpp_restoreVideoMode_FUN_005325f0();
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
    (*g_DirectDrawObject->vtable->SetCooperativeLevel)(g_DirectDrawObject,g_HWND_02de2098,0x11);
  }
  wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
  return;
}
