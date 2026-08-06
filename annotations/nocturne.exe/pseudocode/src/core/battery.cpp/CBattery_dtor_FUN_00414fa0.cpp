// Name: core_battery.cpp_CBattery_dtor_FUN_00414fa0
// Address: 00414fa0
// Address Range: [[00414fa0, 00414fed]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00414fa0(CBattery *this_ptr,uint flags)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00414fa0(CBattery *this_ptr,uint flags)

{
  CBattery *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBatteryTypeInfo_0059a3d0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CBattery *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
