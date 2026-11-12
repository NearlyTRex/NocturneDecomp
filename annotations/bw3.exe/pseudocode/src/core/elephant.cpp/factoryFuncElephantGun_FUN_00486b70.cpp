// Name: core_elephant.cpp_factoryFuncElephantGun_FUN_00486b70
// Address: 00486b70
// Address Range: [[00486b70, 00486b8b]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_factoryFuncElephantGun_FUN_00486b70(void)

#include "nocturne.h"

CElephantGun * __cdecl core_elephant_cpp_factoryFuncElephantGun_FUN_00486b70(void)

{
  CElephantGun *pCVar1;
  
  pCVar1 = (CElephantGun *)operator_new(0x5a0);
  if (pCVar1 == (CElephantGun *)0x0) {
    return (CElephantGun *)0x0;
  }
  pCVar1 = core_elephant_cpp_CElephantGun_ctor_FUN_00486ba0(pCVar1);
  return pCVar1;
}
