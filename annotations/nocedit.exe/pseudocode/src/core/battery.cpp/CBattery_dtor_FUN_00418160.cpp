// Name: core_battery.cpp_CBattery_dtor_FUN_00418160
// Address: 00418160
// Address Range: [[00418160, 004181ad]]
// Convention: __cdecl
// Signature: CBattery * core_battery.cpp_CBattery_dtor_FUN_00418160(CBattery * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00418160(CBattery *this_ptr,uint d1,uint d2)

{
  CBattery *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBatteryTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CBattery *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
