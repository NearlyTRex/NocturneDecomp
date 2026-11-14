// Name: core_drone.cpp_factoryFuncDrone_FUN_0046d720
// Address: 0046d720
// Address Range: [[0046d720, 0046d73b]]
// Convention: __cdecl
// Signature: CDrone * __cdecl core_drone_cpp_factoryFuncDrone_FUN_0046d720(void)

#include "nocturne.h"

CDrone * __cdecl core_drone_cpp_factoryFuncDrone_FUN_0046d720(void)

{
  CDrone *pCVar1;
  
  pCVar1 = (CDrone *)operator_new(0x10b10);
  if (pCVar1 == (CDrone *)0x0) {
    return (CDrone *)0x0;
  }
  pCVar1 = core_drone_cpp_CDrone_ctor_FUN_0046d750(pCVar1);
  return pCVar1;
}
