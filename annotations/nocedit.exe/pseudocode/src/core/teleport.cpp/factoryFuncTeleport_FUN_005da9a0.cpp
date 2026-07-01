// Name: core_teleport.cpp_factoryFuncTeleport_FUN_005da9a0
// Address: 005da9a0
// Address Range: [[005da9a0, 005da9c5]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_factoryFuncTeleport_FUN_005da9a0(void)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_factoryFuncTeleport_FUN_005da9a0(void)

{
  CTeleport *pCVar1;
  
  pCVar1 = (CTeleport *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x168,"..\\core\\teleport.cpp",139)
  ;
  if (pCVar1 == (CTeleport *)0x0) {
    return (CTeleport *)0x0;
  }
  pCVar1 = core_teleport_cpp_CTeleport_ctor_FUN_005da9e0(pCVar1);
  return pCVar1;
}
