// Name: core_turret.cpp_factoryFunc_FUN_00549470
// Address: 00549470
// Address Range: [[00549470, 0054948b]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_factoryFunc_FUN_00549470(void)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_factoryFunc_FUN_00549470(void)

{
  CTurret *pCVar1;
  
  pCVar1 = operator_new(0x8b4);
  if (pCVar1 == (CTurret *)0x0) {
    return (CTurret *)0x0;
  }
  pCVar1 = core_turret_cpp_CTurret_ctor_FUN_005494a0(pCVar1);
  return pCVar1;
}
