// Name: core_teleport.cpp_factoryFuncTeleport_FUN_00568dd0
// Address: 00568dd0
// Address Range: [[00568dd0, 00568deb]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_factoryFuncTeleport_FUN_00568dd0(void)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_factoryFuncTeleport_FUN_00568dd0(void)

{
  CTeleport *pCVar1;
  
  pCVar1 = (CTeleport *)operator_new(0x168);
  if (pCVar1 == (CTeleport *)0x0) {
    return (CTeleport *)0x0;
  }
  pCVar1 = core_teleport_cpp_CTeleport_ctor_FUN_00568e00(pCVar1);
  return pCVar1;
}
