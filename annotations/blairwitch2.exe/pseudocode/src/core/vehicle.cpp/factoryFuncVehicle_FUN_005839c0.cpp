// Name: core_vehicle.cpp_factoryFuncVehicle_FUN_005839c0
// Address: 005839c0
// Address Range: [[005839c0, 005839db]]
// Convention: unknown
// Signature: void core_vehicle_cpp_factoryFuncVehicle_FUN_005839c0(void)

#include "nocturne.h"

void core_vehicle_cpp_factoryFuncVehicle_FUN_005839c0(void)

{
  CVehicle *this_ptr;
  
  this_ptr = (CVehicle *)debugAllocTracked1(0x11d4);
  if (this_ptr == (CVehicle *)0x0) {
    return;
  }
  core_vehicle_cpp_CVehicle_ctor_FUN_005839f0(this_ptr);
  return;
}
