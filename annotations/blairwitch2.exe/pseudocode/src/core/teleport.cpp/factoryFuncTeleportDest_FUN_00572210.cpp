// Name: core_teleport.cpp_factoryFuncTeleportDest_FUN_00572210
// Address: 00572210
// Address Range: [[00572210, 0057222b]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_factoryFuncTeleportDest_FUN_00572210(void)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_factoryFuncTeleportDest_FUN_00572210(void)

{
  CTeleportDest *pCVar1;
  
  pCVar1 = (CTeleportDest *)operator_new(0x2b4);
  if (pCVar1 == (CTeleportDest *)0x0) {
    return (CTeleportDest *)0x0;
  }
  pCVar1 = core_teleport_cpp_CTeleportDest_ctor_FUN_00572240(pCVar1);
  return pCVar1;
}
