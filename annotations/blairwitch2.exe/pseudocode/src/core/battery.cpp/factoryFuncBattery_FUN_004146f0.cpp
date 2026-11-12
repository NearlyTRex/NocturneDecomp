// Name: core_battery.cpp_factoryFuncBattery_FUN_004146f0
// Address: 004146f0
// Address Range: [[004146f0, 0041470b]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_factoryFuncBattery_FUN_004146f0(void)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_factoryFuncBattery_FUN_004146f0(void)

{
  CBattery *pCVar1;
  
  pCVar1 = (CBattery *)operator_new(0x43c);
  if (pCVar1 == (CBattery *)0x0) {
    return (CBattery *)0x0;
  }
  pCVar1 = core_battery_cpp_CBattery_ctor_FUN_00414720(pCVar1);
  return pCVar1;
}
