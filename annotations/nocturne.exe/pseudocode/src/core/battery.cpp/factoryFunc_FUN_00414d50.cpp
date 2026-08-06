// Name: core_battery.cpp_factoryFunc_FUN_00414d50
// Address: 00414d50
// Address Range: [[00414d50, 00414d6b]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_factoryFunc_FUN_00414d50(void)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_factoryFunc_FUN_00414d50(void)

{
  CBattery *pCVar1;
  
  pCVar1 = operator_new(0x2d8);
  if (pCVar1 == (CBattery *)0x0) {
    return (CBattery *)0x0;
  }
  pCVar1 = core_battery_cpp_CBattery_ctor_FUN_00414d80(pCVar1);
  return pCVar1;
}
