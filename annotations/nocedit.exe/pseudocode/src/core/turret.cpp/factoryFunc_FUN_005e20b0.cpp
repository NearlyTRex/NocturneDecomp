// Name: core_turret.cpp_factoryFunc_FUN_005e20b0
// Address: 005e20b0
// Address Range: [[005e20b0, 005e20d5]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_factoryFunc_FUN_005e20b0(void)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_factoryFunc_FUN_005e20b0(void)

{
  CTurret *pCVar1;
  
  pCVar1 = (CTurret *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x8bc,"..\\core\\turret.cpp",162);
  if (pCVar1 == (CTurret *)0x0) {
    return (CTurret *)0x0;
  }
  pCVar1 = core_turret_cpp_CTurret_ctor_FUN_005e20f0(pCVar1);
  return pCVar1;
}
