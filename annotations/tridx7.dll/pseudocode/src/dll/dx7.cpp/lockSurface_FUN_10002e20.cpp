// Name: dll_dx7.cpp_lockSurface_FUN_10002e20
// Address: 10002e20
// Address Range: [[10002e20, 10002e58]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_lockSurface_FUN_10002e20(IDirectDrawSurface *surface,DDSURFACEDESC2 *surface_desc)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_lockSurface_FUN_10002e20(IDirectDrawSurface *surface,DDSURFACEDESC2 *surface_desc)

{
  HRESULT HVar1;
  int iVar2;
  DDSURFACEDESC2 *pDVar3;
  
  if (surface == (IDirectDrawSurface *)0x0) {
    return 0;
  }
  pDVar3 = surface_desc;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    pDVar3->dwSize = 0;
    pDVar3 = (DDSURFACEDESC2 *)&pDVar3->dwFlags;
  }
  surface_desc->dwSize = 0x7c;
  HVar1 = (*surface->vtable->Lock)(surface,(RECT *)0x0,surface_desc,1,(void *)0x0);
  return (uint)(HVar1 == 0);
}
