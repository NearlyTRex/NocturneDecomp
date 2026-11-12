// Name: core_battery.cpp_CBattery_dtor_FUN_0040f6d0
// Address: 0040f6d0
// Address Range: [[0040f6d0, 0040f71d]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_0040f6d0(CBattery *this_ptr,uint flags)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_0040f6d0(CBattery *this_ptr,uint flags)

{
  CBattery *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBatteryTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CBattery *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
