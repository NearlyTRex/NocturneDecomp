// Name: core_turret.cpp_factoryFuncTurret_FUN_005a2010
// Address: 005a2010
// Address Range: [[005a2010, 005a202b]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_factoryFuncTurret_FUN_005a2010(void)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_factoryFuncTurret_FUN_005a2010(void)

{
  CTurret *pCVar1;
  
  pCVar1 = (CTurret *)operator_new(0x8bc);
  if (pCVar1 == (CTurret *)0x0) {
    return (CTurret *)0x0;
  }
  pCVar1 = core_turret_cpp_CTurret_ctor_FUN_005a2040(pCVar1);
  return pCVar1;
}
