// Name: core_door.cpp_factoryFunc_FUN_0047fa90
// Address: 0047fa90
// Address Range: [[0047fa90, 0047fab2]]
// Convention: __cdecl
// Signature: CDoor * __cdecl core_door_cpp_factoryFunc_FUN_0047fa90(void)

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_factoryFunc_FUN_0047fa90(void)

{
  CDoor *pCVar1;
  
  pCVar1 = (CDoor *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x9e0,"..\\core\\door.cpp",0x33);
  if (pCVar1 == (CDoor *)0x0) {
    return (CDoor *)0x0;
  }
  pCVar1 = core_door_cpp_CDoor_ctor_FUN_0047fad0(pCVar1);
  return pCVar1;
}
