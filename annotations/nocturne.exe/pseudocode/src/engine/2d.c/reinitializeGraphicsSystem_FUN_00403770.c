// Name: engine_2d.c_reinitializeGraphicsSystem_FUN_00403770
// Address: 00403770
// Address Range: [[00403770, 00403774]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00403770(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00403770(void)

{
  int iVar1;
  
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
  iVar1 = DirectDrawCreate(0,&g_DirectDrawObject,0);
  if (iVar1 == 0) {
    (*g_DirectDrawObject->vtable->SetCooperativeLevel)(g_DirectDrawObject,_DAT_02de2098,0x11);
  }
  wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
  return;
}
