// Name: core_door.cpp_factoryFuncDoor_FUN_0045ed30
// Address: 0045ed30
// Address Range: [[0045ed30, 0045ed4b]]
// Convention: __cdecl
// Signature: CDoor * __cdecl core_door_cpp_factoryFuncDoor_FUN_0045ed30(void)

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_factoryFuncDoor_FUN_0045ed30(void)

{
  CDoor *pCVar1;
  
  pCVar1 = (CDoor *)operator_new(0xba8);
  if (pCVar1 == (CDoor *)0x0) {
    return (CDoor *)0x0;
  }
  pCVar1 = core_door_cpp_CDoor_ctor_FUN_0045ed60(pCVar1);
  return pCVar1;
}
