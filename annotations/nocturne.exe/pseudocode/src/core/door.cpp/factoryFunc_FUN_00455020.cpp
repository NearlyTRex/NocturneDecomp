// Name: core_door.cpp_factoryFunc_FUN_00455020
// Address: 00455020
// Address Range: [[00455020, 0045503b]]
// Convention: __cdecl
// Signature: CDoor * __cdecl core_door_cpp_factoryFunc_FUN_00455020(void)

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_factoryFunc_FUN_00455020(void)

{
  CDoor *pCVar1;
  
  pCVar1 = (CDoor *)FUN_0056497c(0x9d8);
  if (pCVar1 == (CDoor *)0x0) {
    return (CDoor *)0x0;
  }
  pCVar1 = core_door_cpp_CDoor_ctor_FUN_00455050(pCVar1);
  return pCVar1;
}
