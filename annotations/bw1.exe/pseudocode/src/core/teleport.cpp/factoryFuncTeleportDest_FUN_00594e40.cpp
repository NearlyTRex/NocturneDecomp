// Name: core_teleport.cpp_factoryFuncTeleportDest_FUN_00594e40
// Address: 00594e40
// Address Range: [[00594e40, 00594e5b]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_factoryFuncTeleportDest_FUN_00594e40(void)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_factoryFuncTeleportDest_FUN_00594e40(void)

{
  CTeleportDest *pCVar1;
  
  pCVar1 = (CTeleportDest *)operator_new(0x158);
  if (pCVar1 == (CTeleportDest *)0x0) {
    return (CTeleportDest *)0x0;
  }
  pCVar1 = core_teleport_cpp_CTeleportDest_ctor_FUN_00594e70(pCVar1);
  return pCVar1;
}
