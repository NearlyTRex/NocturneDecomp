// Name: core_drone.cpp_factoryFuncDrone_FUN_00462910
// Address: 00462910
// Address Range: [[00462910, 0046292b]]
// Convention: __cdecl
// Signature: CDrone * __cdecl core_drone_cpp_factoryFuncDrone_FUN_00462910(void)

#include "nocturne.h"

CDrone * __cdecl core_drone_cpp_factoryFuncDrone_FUN_00462910(void)

{
  CDrone *pCVar1;
  
  pCVar1 = operator_new(0xbd3c);
  if (pCVar1 == (CDrone *)0x0) {
    return (CDrone *)0x0;
  }
  pCVar1 = core_drone_cpp_CDrone_ctor_FUN_00462940(pCVar1);
  return pCVar1;
}
