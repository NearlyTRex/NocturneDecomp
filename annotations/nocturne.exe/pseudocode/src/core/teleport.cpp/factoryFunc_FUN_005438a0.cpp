// Name: core_teleport.cpp_factoryFunc_FUN_005438a0
// Address: 005438a0
// Address Range: [[005438a0, 005438bb]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_factoryFunc_FUN_005438a0(void)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_factoryFunc_FUN_005438a0(void)

{
  CTeleport *pCVar1;
  
  pCVar1 = (CTeleport *)FUN_0056497c(0x160);
  if (pCVar1 == (CTeleport *)0x0) {
    return (CTeleport *)0x0;
  }
  pCVar1 = core_teleport_cpp_CTeleport_ctor_FUN_005438d0(pCVar1);
  return pCVar1;
}
