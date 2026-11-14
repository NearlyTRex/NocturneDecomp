// Name: core_vehicle.cpp_factoryFuncVehicle_FUN_005a75f0
// Address: 005a75f0
// Address Range: [[005a75f0, 005a760b]]
// Convention: __cdecl
// Signature: CVehicle * __cdecl core_vehicle_cpp_factoryFuncVehicle_FUN_005a75f0(void)

#include "nocturne.h"

CVehicle * __cdecl core_vehicle_cpp_factoryFuncVehicle_FUN_005a75f0(void)

{
  CVehicle *pCVar1;
  
  pCVar1 = (CVehicle *)operator_new(0x1078);
  if (pCVar1 == (CVehicle *)0x0) {
    return (CVehicle *)0x0;
  }
  pCVar1 = core_vehicle_cpp_CVehicle_ctor_FUN_005a7620(pCVar1);
  return pCVar1;
}
