// Name: core_battery.cpp_CBattery_dtor_FUN_00414640
// Address: 00414640
// Address Range: [[00414640, 0041468d]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00414640(CBattery *this_ptr,uint flags)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00414640(CBattery *this_ptr,uint flags)

{
  CBattery *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBatteryTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CBattery *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
