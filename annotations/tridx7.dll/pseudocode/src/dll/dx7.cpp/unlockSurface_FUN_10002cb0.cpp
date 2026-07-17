// Name: dll_dx7.cpp_unlockSurface_FUN_10002cb0
// Address: 10002cb0
// Address Range: [[10002cb0, 10002cdc]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_unlockSurface_FUN_10002cb0(IDirectDrawSurface *surface)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_unlockSurface_FUN_10002cb0(IDirectDrawSurface *surface)

{
  HRESULT HVar1;
  
  if (surface == (IDirectDrawSurface *)0x0) {
    return 1;
  }
  HVar1 = (*surface->vtable->Unlock)(surface,(void *)0x0);
  if ((HVar1 != -0x7789fdb8) && (HVar1 != 0)) {
    return 0;
  }
  return 1;
}
