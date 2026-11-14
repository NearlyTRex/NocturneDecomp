// Name: core_door.cpp_factoryFuncDoor_FUN_00463a80
// Address: 00463a80
// Address Range: [[00463a80, 00463a9b]]
// Convention: __cdecl
// Signature: CDoor * __cdecl core_door_cpp_factoryFuncDoor_FUN_00463a80(void)

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_factoryFuncDoor_FUN_00463a80(void)

{
  CDoor *pCVar1;
  
  pCVar1 = (CDoor *)operator_new(0xa4c);
  if (pCVar1 == (CDoor *)0x0) {
    return (CDoor *)0x0;
  }
  pCVar1 = core_door_cpp_CDoor_ctor_FUN_00463ab0(pCVar1);
  return pCVar1;
}
