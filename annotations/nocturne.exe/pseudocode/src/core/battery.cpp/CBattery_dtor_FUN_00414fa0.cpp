// Name: core_battery.cpp_CBattery_dtor_FUN_00414fa0
// Address: 00414fa0
// Address Range: [[00414fa0, 00414fed]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00414fa0(CBattery *this_ptr,uint flags)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00414fa0(CBattery *this_ptr,uint flags)

{
  CBattery *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBatteryTypeInfo_0059a3d0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CBattery *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
