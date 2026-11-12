// Name: core_battery.cpp_factoryFuncBattery_FUN_0040f470
// Address: 0040f470
// Address Range: [[0040f470, 0040f48b]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_factoryFuncBattery_FUN_0040f470(void)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_factoryFuncBattery_FUN_0040f470(void)

{
  CBattery *pCVar1;
  
  pCVar1 = (CBattery *)operator_new(0x2e0);
  if (pCVar1 == (CBattery *)0x0) {
    return (CBattery *)0x0;
  }
  pCVar1 = core_battery_cpp_CBattery_ctor_FUN_0040f4a0(pCVar1);
  return pCVar1;
}
