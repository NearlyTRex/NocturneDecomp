// Name: core_teleport.cpp_factoryFuncTeleport_FUN_005722c0
// Address: 005722c0
// Address Range: [[005722c0, 005722db]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_factoryFuncTeleport_FUN_005722c0(void)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_factoryFuncTeleport_FUN_005722c0(void)

{
  CTeleport *pCVar1;
  
  pCVar1 = (CTeleport *)operator_new(0x2c4);
  if (pCVar1 == (CTeleport *)0x0) {
    return (CTeleport *)0x0;
  }
  pCVar1 = core_teleport_cpp_CTeleport_ctor_FUN_005722f0(pCVar1);
  return pCVar1;
}
