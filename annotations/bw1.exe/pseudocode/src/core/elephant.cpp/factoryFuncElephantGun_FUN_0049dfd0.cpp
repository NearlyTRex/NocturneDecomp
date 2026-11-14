// Name: core_elephant.cpp_factoryFuncElephantGun_FUN_0049dfd0
// Address: 0049dfd0
// Address Range: [[0049dfd0, 0049dfeb]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_factoryFuncElephantGun_FUN_0049dfd0(void)

#include "nocturne.h"

CElephantGun * __cdecl core_elephant_cpp_factoryFuncElephantGun_FUN_0049dfd0(void)

{
  CElephantGun *pCVar1;
  
  pCVar1 = (CElephantGun *)operator_new(0x584);
  if (pCVar1 == (CElephantGun *)0x0) {
    return (CElephantGun *)0x0;
  }
  pCVar1 = core_elephant_cpp_CElephantGun_ctor_FUN_0049e000(pCVar1);
  return pCVar1;
}
