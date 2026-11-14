// Name: core_teleport.cpp_factoryFuncTeleport_FUN_00594ef0
// Address: 00594ef0
// Address Range: [[00594ef0, 00594f0b]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_factoryFuncTeleport_FUN_00594ef0(void)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_factoryFuncTeleport_FUN_00594ef0(void)

{
  CTeleport *pCVar1;
  
  pCVar1 = (CTeleport *)operator_new(0x168);
  if (pCVar1 == (CTeleport *)0x0) {
    return (CTeleport *)0x0;
  }
  pCVar1 = core_teleport_cpp_CTeleport_ctor_FUN_00594f20(pCVar1);
  return pCVar1;
}
