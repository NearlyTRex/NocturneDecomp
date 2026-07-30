// Name: core_teleport.cpp_factoryFunc_FUN_00543810
// Address: 00543810
// Address Range: [[00543810, 0054382b]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_factoryFunc_FUN_00543810(void)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_factoryFunc_FUN_00543810(void)

{
  CTeleportDest *pCVar1;
  
  pCVar1 = (CTeleportDest *)FUN_0056497c(0x150);
  if (pCVar1 == (CTeleportDest *)0x0) {
    return (CTeleportDest *)0x0;
  }
  pCVar1 = core_teleport_cpp_CTeleportDest_ctor_FUN_00543840(pCVar1);
  return pCVar1;
}
