// Name: core_battery.cpp_factoryFuncBattery_FUN_004143e0
// Address: 004143e0
// Address Range: [[004143e0, 004143fb]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_factoryFuncBattery_FUN_004143e0(void)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_factoryFuncBattery_FUN_004143e0(void)

{
  CBattery *pCVar1;
  
  pCVar1 = (CBattery *)operator_new(0x2e0);
  if (pCVar1 == (CBattery *)0x0) {
    return (CBattery *)0x0;
  }
  pCVar1 = core_battery_cpp_CBattery_ctor_FUN_00414410(pCVar1);
  return pCVar1;
}
