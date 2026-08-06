// Name: core_vehicle.cpp_factoryFunc_FUN_0054e570
// Address: 0054e570
// Address Range: [[0054e570, 0054e58b]]
// Convention: __cdecl
// Signature: CVehicle * __cdecl core_vehicle_cpp_factoryFunc_FUN_0054e570(void)

#include "nocturne.h"

CVehicle * __cdecl core_vehicle_cpp_factoryFunc_FUN_0054e570(void)

{
  CVehicle *pCVar1;
  
  pCVar1 = operator_new(0x1070);
  if (pCVar1 == (CVehicle *)0x0) {
    return (CVehicle *)0x0;
  }
  pCVar1 = core_vehicle_cpp_CVehicle_ctor_FUN_0054e5a0(pCVar1);
  return pCVar1;
}
