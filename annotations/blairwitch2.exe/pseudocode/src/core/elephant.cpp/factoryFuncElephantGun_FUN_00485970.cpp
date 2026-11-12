// Name: core_elephant.cpp_factoryFuncElephantGun_FUN_00485970
// Address: 00485970
// Address Range: [[00485970, 0048598b]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_factoryFuncElephantGun_FUN_00485970(void)

#include "nocturne.h"

CElephantGun * __cdecl core_elephant_cpp_factoryFuncElephantGun_FUN_00485970(void)

{
  CElephantGun *pCVar1;
  
  pCVar1 = (CElephantGun *)operator_new(0x6e0);
  if (pCVar1 == (CElephantGun *)0x0) {
    return (CElephantGun *)0x0;
  }
  pCVar1 = core_elephant_cpp_CElephantGun_ctor_FUN_004859a0(pCVar1);
  return pCVar1;
}
