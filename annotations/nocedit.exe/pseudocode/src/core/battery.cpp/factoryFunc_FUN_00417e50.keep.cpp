// Name: core_battery.cpp_factoryFunc_FUN_00417e50
// Address: 00417e50
// MANUAL RECONSTRUCTION
// Address Range: [[00417e50, 00417e72]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_factoryFunc_FUN_00417e50(void)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_factoryFunc_FUN_00417e50(void)

{
  CBattery *pCVar1;
  
  pCVar1 = (CBattery *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CBattery),"..\\core\\battery.cpp",31);
  if (pCVar1 == (CBattery *)0x0) {
    return (CBattery *)0x0;
  }
  pCVar1 = core_battery_cpp_CBattery_ctor_FUN_00417e90(pCVar1);
  return pCVar1;
}
