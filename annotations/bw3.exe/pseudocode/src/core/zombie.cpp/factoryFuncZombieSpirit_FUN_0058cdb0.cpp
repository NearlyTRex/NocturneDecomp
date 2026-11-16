// Name: core_zombie.cpp_factoryFuncZombieSpirit_FUN_0058cdb0
// Address: 0058cdb0
// Address Range: [[0058cdb0, 0058cdcb]]
// Convention: __cdecl
// Signature: CZombieSpirit * __cdecl core_zombie_cpp_factoryFuncZombieSpirit_FUN_0058cdb0(void)

#include "nocturne.h"

CZombieSpirit * __cdecl core_zombie_cpp_factoryFuncZombieSpirit_FUN_0058cdb0(void)

{
  CZombieSpirit *pCVar1;
  
  pCVar1 = (CZombieSpirit *)operator_new(0xd14c);
  if (pCVar1 == (CZombieSpirit *)0x0) {
    return (CZombieSpirit *)0x0;
  }
  pCVar1 = core_zombie_cpp_CZombieSpirit_ctor_FUN_0058cde0(pCVar1);
  return pCVar1;
}
