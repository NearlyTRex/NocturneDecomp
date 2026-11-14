// Name: core_drone.cpp_factoryFuncDrone_FUN_00485c20
// Address: 00485c20
// Address Range: [[00485c20, 00485c3b]]
// Convention: __cdecl
// Signature: CDrone * __cdecl core_drone_cpp_factoryFuncDrone_FUN_00485c20(void)

#include "nocturne.h"

CDrone * __cdecl core_drone_cpp_factoryFuncDrone_FUN_00485c20(void)

{
  CDrone *pCVar1;
  
  pCVar1 = (CDrone *)operator_new(0xc280);
  if (pCVar1 == (CDrone *)0x0) {
    return (CDrone *)0x0;
  }
  pCVar1 = core_drone_cpp_CDrone_ctor_FUN_00485c50(pCVar1);
  return pCVar1;
}
