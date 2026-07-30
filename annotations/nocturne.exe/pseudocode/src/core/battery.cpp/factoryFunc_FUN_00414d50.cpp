// Name: core_battery.cpp_factoryFunc_FUN_00414d50
// Address: 00414d50
// Address Range: [[00414d50, 00414d6b]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_factoryFunc_FUN_00414d50(void)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_factoryFunc_FUN_00414d50(void)

{
  int iVar1;
  CBattery *pCVar2;
  
  iVar1 = FUN_0056497c(0x2d8);
  if (iVar1 == 0) {
    return (CBattery *)0x0;
  }
  pCVar2 = (CBattery *)core_battery_cpp_FUN_00414d80(iVar1);
  return pCVar2;
}
