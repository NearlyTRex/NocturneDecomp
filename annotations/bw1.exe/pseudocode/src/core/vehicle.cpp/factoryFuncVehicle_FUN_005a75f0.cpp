// Name: core_vehicle.cpp_factoryFuncVehicle_FUN_005a75f0
// Address: 005a75f0
// Address Range: [[005a75f0, 005a760b]]
// Convention: unknown
// Signature: void core_vehicle_cpp_factoryFuncVehicle_FUN_005a75f0(void)

#include "nocturne.h"

void core_vehicle_cpp_factoryFuncVehicle_FUN_005a75f0(void)

{
  CVehicle *this_ptr;
  
  this_ptr = (CVehicle *)operator_new(0x1078);
  if (this_ptr == (CVehicle *)0x0) {
    return;
  }
  core_vehicle_cpp_CVehicle_ctor_FUN_005a7620(this_ptr);
  return;
}
