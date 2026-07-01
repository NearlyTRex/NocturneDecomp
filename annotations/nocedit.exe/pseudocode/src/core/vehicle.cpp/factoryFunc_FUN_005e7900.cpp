// Name: core_vehicle.cpp_factoryFunc_FUN_005e7900
// Address: 005e7900
// Address Range: [[005e7900, 005e7922]]
// Convention: __cdecl
// Signature: CVehicle * __cdecl core_vehicle_cpp_factoryFunc_FUN_005e7900(void)

#include "nocturne.h"

CVehicle * __cdecl core_vehicle_cpp_factoryFunc_FUN_005e7900(void)

{
  CVehicle *pCVar1;
  
  pCVar1 = (CVehicle *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x1078,"..\\core\\vehicle.cpp",64)
  ;
  if (pCVar1 == (CVehicle *)0x0) {
    return (CVehicle *)0x0;
  }
  pCVar1 = core_vehicle_cpp_CVehicle_ctor_FUN_005e7940(pCVar1);
  return pCVar1;
}
