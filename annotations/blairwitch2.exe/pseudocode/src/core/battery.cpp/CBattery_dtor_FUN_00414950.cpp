// Name: core_battery.cpp_CBattery_dtor_FUN_00414950
// Address: 00414950
// Address Range: [[00414950, 0041499d]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00414950(CBattery *this_ptr,uint flags)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00414950(CBattery *this_ptr,uint flags)

{
  CBattery *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBatteryTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CBattery *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
