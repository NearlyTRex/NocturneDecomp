// Name: core_vehicle.cpp_FUN_005e7900
// Address: 005e7900
// Address Range: [[005e7900, 005e7922]]
// Convention: unknown
// Signature: undefined core_vehicle.cpp_FUN_005e7900()

#include "nocturne.h"

void core_vehicle_cpp_FUN_005e7900(void)

{
  CVehicle *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1078,"..\\core\\vehicle.cpp",0x40);
  if (this_ptr == (CVehicle *)0x0) {
    return;
  }
  core_vehicle_cpp_CVehicle_ctor_FUN_005e7940(this_ptr);
  return;
}
