// Name: dll_dx7.cpp_isAdapter3DCapable_FUN_10001900
// Address: 10001900
// MANUAL RECONSTRUCTION
// Address Range: [[10001900, 10001990]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_isAdapter3DCapable_FUN_10001900(GUID *adapter_guid)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_isAdapter3DCapable_FUN_10001900(GUID *adapter_guid)

{
  HRESULT HVar1;
  IDirectDraw *ddraw;
  DDCAPS driver_caps;
  DDCAPS hel_caps;

  HVar1 = DirectDrawCreate(adapter_guid,&ddraw,(IUnknown *)0x0);
  if (HVar1 == 0) {
    memset(&driver_caps,0,sizeof(driver_caps));
    driver_caps.dwSize = sizeof(driver_caps);
    memset(&hel_caps,0,sizeof(hel_caps));
    hel_caps.dwSize = sizeof(hel_caps);
    HVar1 = (*ddraw->vtable->GetCaps)(ddraw,&driver_caps,&hel_caps);
    if ((HVar1 == 0) && (((byte)driver_caps.dwCaps & 1) != 0)) {
      return 1;
    }
  }
  if (ddraw != (IDirectDraw *)0x0) {
    (*ddraw->vtable->Release)((IUnknown *)ddraw);
  }
  return 0;
}
