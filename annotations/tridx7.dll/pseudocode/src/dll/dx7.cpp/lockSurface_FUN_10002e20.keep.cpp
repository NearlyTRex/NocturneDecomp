// Name: dll_dx7.cpp_lockSurface_FUN_10002e20
// Address: 10002e20
// MANUAL RECONSTRUCTION
// Address Range: [[10002e20, 10002e58]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_lockSurface_FUN_10002e20(IDirectDrawSurface *surface,DDSURFACEDESC2 *surface_desc)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_lockSurface_FUN_10002e20(IDirectDrawSurface *surface,DDSURFACEDESC2 *surface_desc)

{
  HRESULT HVar1;

  if (surface == (IDirectDrawSurface *)0x0) {
    return 0;
  }
  memset(surface_desc,0,sizeof(*surface_desc));
  surface_desc->dwSize = 0x7c;
  HVar1 = (*surface->vtable->Lock)(surface,(RECT *)0x0,surface_desc,1,(void *)0x0);
  return (uint)(HVar1 == 0);
}
