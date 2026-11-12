// Name: core_turret.cpp_factoryFuncTurret_FUN_0057e3c0
// Address: 0057e3c0
// Address Range: [[0057e3c0, 0057e3db]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_factoryFuncTurret_FUN_0057e3c0(void)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_factoryFuncTurret_FUN_0057e3c0(void)

{
  CTurret *pCVar1;
  
  pCVar1 = (CTurret *)operator_new(0xa18);
  if (pCVar1 == (CTurret *)0x0) {
    return (CTurret *)0x0;
  }
  pCVar1 = core_turret_cpp_CTurret_ctor_FUN_0057e3f0(pCVar1);
  return pCVar1;
}
