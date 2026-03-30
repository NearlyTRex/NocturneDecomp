// Name: core_teleport.cpp_factoryFuncTeleportDest_FUN_005da730
// Address: 005da730
// Address Range: [[005da730, 005da752]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_factoryFuncTeleportDest_FUN_005da730(void)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_factoryFuncTeleportDest_FUN_005da730(void)

{
  CTeleportDest *pCVar1;
  
  pCVar1 = (CTeleportDest *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x158,"..\\core\\teleport.cpp",0x2a)
  ;
  if (pCVar1 == (CTeleportDest *)0x0) {
    return (CTeleportDest *)0x0;
  }
  pCVar1 = core_teleport_cpp_CTeleportDest_ctor_FUN_005da770(pCVar1);
  return pCVar1;
}
