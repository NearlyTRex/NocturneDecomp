// Name: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005528e0
// Address: 005528e0
// Address Range: [[005528e0, 0055298b]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005528e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005528e0(void)

{
  int iVar1;
  HRESULT HVar2;
  
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
    HVar2 = (*g_DirectDrawObject->vtable->SetCooperativeLevel)
                      (g_DirectDrawObject,_DAT_02de2098,0x11);
    if (HVar2 == 0) {
      return 1;
    }
  }
  return 0;
}
