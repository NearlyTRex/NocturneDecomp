// Name: core_vehicle.cpp_factoryFuncVehicle_FUN_005839c0
// Address: 005839c0
// Address Range: [[005839c0, 005839db]]
// Convention: __cdecl
// Signature: CVehicle * __cdecl core_vehicle_cpp_factoryFuncVehicle_FUN_005839c0(void)

#include "nocturne.h"

CVehicle * __cdecl core_vehicle_cpp_factoryFuncVehicle_FUN_005839c0(void)

{
  CVehicle *pCVar1;
  
  pCVar1 = (CVehicle *)operator_new(0x11d4);
  if (pCVar1 == (CVehicle *)0x0) {
    return (CVehicle *)0x0;
  }
  pCVar1 = core_vehicle_cpp_CVehicle_ctor_FUN_005839f0(pCVar1);
  return pCVar1;
}
